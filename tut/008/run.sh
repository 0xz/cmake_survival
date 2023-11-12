#!/usr/bin/env bash
set -e
CWD="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" && cd $CWD

# configure default debug build
rm -rf build && mkdir build
(
  cd build
  cmake -G Ninja ..
  ninja
  ctest -V
)

# configure release build with options flag
rm -rf build && mkdir build
(
  cd build
  cmake -G Ninja .. -DBUILD_RELEASE=ON
  ninja -v
  ctest -V
)
