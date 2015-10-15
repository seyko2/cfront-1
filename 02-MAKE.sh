#!/bin/bash

# scratchCC=tcc
scratchCC=gcc

make scratchCC=${scratchCC} scratch  2>&1 | tee LOG.01
rm munch
make 2>&1 | tee LOG.02

# compile a test program
cd test
../CC hello.C -o hello +i 
./hello
cd ..
