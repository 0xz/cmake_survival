#!/usr/bin/env bash
set -e
CWD="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" && cd $CWD

rm -rf build && mkdir build && cd build && cmake .. && make
./hello_world
