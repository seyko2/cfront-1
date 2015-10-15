#!/bin/bash

[ ! -x cfront ] && {
    echo "Error: run 02-MAKE.sh first"
    exit 1
}

# make copy of the original directory
if [ ! -d scratch.orig ]; then
    cp -r scratch scratch.orig
fi
make fillscratch 2>&1 | tee LOG.03
