#!/usr/bin/env bash
set -e
CWD="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" && cd $CWD

rm -rf build
cmake -B build
cd build
cmake --build .
ctest -V
