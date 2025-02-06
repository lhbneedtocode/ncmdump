#!/bin/bash

cd "$(dirname "$0")"

cd build

make
pwd
./ncmdump ~/ncmdump/test/ file/to/fuckyou

echo "Program executed."
