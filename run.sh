#!/bin/bash
gcc -Wall add.c -o add

val1=`./add 3 4`
val2=`./add 5 6`
val3=`./add 7 8`

if [ $val1 -eq $[3+4] ] && [ $val2 -eq $[5+6] ]&& [ $val3 -eq $[7+8] ]
then echo "TEST PASS"
else echo "TEST FAILED"
fi
