#!/bin/bash

cd "$(dirname "$0")"

cd build

make
pwd
./ncmdump -hv

echo "Program executed."
