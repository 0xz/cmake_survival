#!/usr/bin/env bash
set -e
CWD="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" && cd $CWD

time (
  date

  rm -rf build && mkdir build && cd build && cmake .. -DCMAKE_BUILD_TYPE=Debug && make VERBOSE=1
  ctest -V

) 1> >(tee $CWD/.run.sh.out ) 2> >(tee $CWD/.run.sh.err >&2 )
