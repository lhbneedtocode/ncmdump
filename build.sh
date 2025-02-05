#!/bin/bash


cd "$(DIRNAME "$0")"
rm -rf build
cd build ||mkdir -p build && cd build

cmake ..

echo "CMake completed."
