#!/bin/bash

cd "$(dirname "$0")"

cd build

make
pwd
./ncmdump -hv file/to/fuckyou

echo "Program executed."
