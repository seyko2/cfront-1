#!/bin/bash

# restore original scratch
if [ -d ./scratch.orig ]; then
    rm -r ./scratch
    mv ./scratch.orig ./scratch
fi

./01-CLEAN.sh
