#!/bin/bash

# cd tetris
cd "$(dirname "$0")"

# make and cd bulid
mkdir -p build
cd build

# run cmake
cmake ..

# compile
make -j$(nproc)

# success
if [ $? -eq 0 ]; then
    echo "Compilation successful."
    # run
    ./tetris
else
    echo "Compilation failed."
fi
