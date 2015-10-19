#!/bin/bash

rm libC.a cfront munch LOG.* 2> /dev/null
make -C src clean 2> /dev/null
rm lib/mk/*.o 2> /dev/null

rm test/hello.i test/hello..c test/hello.o test/hello..o 2> /dev/null
rm test/hello.tmp 2> /dev/null
rm test/hello.cdts..c test/hello.cdts.o test/a.out 2> /dev/null
rm test/hello 2> /dev/null

rm test/c++_c_output..c test/c++_c_output_C test/c++_c_output_c 2> /dev/null

rm scratch/*..o 2> /dev/null
