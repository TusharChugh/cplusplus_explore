#!/bin/bash

echo "Environment: `uname -a`"
echo "Compiler: `$CXX --version`"

cmake . || exit 1
make || exit 1

./travisci_example
