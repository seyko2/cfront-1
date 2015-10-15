#!/bin/sh

if [ ! -x ../cfront ]; then
    echo "error: cfront compiler not found"
    exit
fi

../CC c++_c_output.C -o c++_c_output_C +i
cc c++_c_output.c -o c++_c_output_c
