#!/bin/bash

cd "$(dirname "$0")"

cd build

make
pwd
./ncmdump I/love/you file/to/fuckyou

echo "Program executed."
