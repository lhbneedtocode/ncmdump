#!/bin/bash

cd "$(dirname "$0")"

cd build

make
pwd
./ncmdump hi bye

echo "Program executed."
