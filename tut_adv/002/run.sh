#!/usr/bin/env bash
set -e
CWD="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" && cd $CWD

time (
  date

  rm -rf build && mkdir build && cd build && cmake .. && make VERBOSE=1
  ./optimize_O0
  ./optimize_O1
  ./optimize_O2
  ./optimize_O3
  ./optimize_O3_native

  date
) 1> >(tee $CWD/.run.sh.out ) 2> >(tee $CWD/.run.sh.err >&2 )

grep  "loop vectorized" .run.sh.*
