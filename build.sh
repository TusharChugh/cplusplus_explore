#!/bin/bash

echo "Environment: `uname -a`"
echo "Compiler: `$CXX --version`"

cmake libraries/string || exit 1
make || exit 1


