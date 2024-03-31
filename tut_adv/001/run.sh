#!/usr/bin/env bash
set -e
CWD="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" && cd $CWD

rm -rf build
mkdir build
cd build
cmake .. # --preset dev-werror
make VERBOSE=1
gdb -batch -ex run -ex bt --args ./tracer || true # non-zero exit code expected
