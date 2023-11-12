#!/usr/bin/env bash
set -e
CWD="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" && cd $CWD

rm -rf build && mkdir build && cd build
cmake -G Ninja -DCMAKE_C_COMPILER_LAUNCHER=ccache \
               -DCMAKE_CXX_COMPILER_LAUNCHER=ccache \
               ..
ninja -v
ctest -V
