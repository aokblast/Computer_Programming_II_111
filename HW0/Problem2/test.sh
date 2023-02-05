#!/bin/bash

tempfile=`mktemp`
for t in $(ls testcases/*.in);
do
    t=$(basename $t .in)
    ./main testcases/$t.in > $tempfile
    echo "=== diff $t ==="
    diff \
        --ignore-trailing-space \
        --side-by-side \
        testcases/$t.out $tempfile
done
