#!/bin/sh

cmake -S . -B bin -DCMAKE_BUILD_TYPE=Debug
cmake --build bin
