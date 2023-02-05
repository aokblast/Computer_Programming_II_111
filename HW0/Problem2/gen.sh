#!/bin/bash

exe="./main"
for t in $(ls testcases/*.in);
do
    t=$(basename $t .in)
    echo "=== gen $t ==="
    ./main testcases/$t.in > testcases/$t.out
done
