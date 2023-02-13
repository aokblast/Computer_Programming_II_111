#!/bin/bash

tempfile=`mktemp`
ans=1
for t in $(ls testcases/*.in);
do
    t=$(basename $t .in)
    ./main testcases/$t.in > $tempfile
    echo "=== diff $t ==="
    diff \
        --ignore-trailing-space \
        --side-by-side \
        testcases/$t.out $tempfile

    if [[ $? -ne 0 ]]; then
        ans=0
    fi
done

if [[ $ans -ne 0 ]]; then
    echo "OK"
else
    echo "ERROR"
fi
