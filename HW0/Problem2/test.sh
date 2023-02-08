#!/bin/bash

tempfile=`mktemp`
./main testcases/t1.in > $tempfile
diff testcases/t1.out $tempfile
./main testcases/t2.in > $tempfile
diff testcases/t2.out $tempfile
