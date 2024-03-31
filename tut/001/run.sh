#!/usr/bin/env bash
set -e
CWD="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" && cd $CWD

# export CXX=ccg

rm -rf build
mkdir build
cd build
cmake .. # -DCMAKE_CXX_COMPILER=ccg
make
ctest -V
