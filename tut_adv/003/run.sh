#!/usr/bin/env bash
set -e
CWD="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" && cd $CWD

show_libs(){
  echo "runtime dependencies for $1"
  [[ "$OSTYPE" == "linux-gnu"* ]] && ldd $1 || otool -L $1
  echo ""
}

time (
  date

  rm -rf build && mkdir build && cd build && cmake .. && make VERBOSE=1

  date
) 1> >(tee $CWD/.run.sh.out ) 2> >(tee $CWD/.run.sh.err >&2 )

show_libs build/linkage
show_libs build/lib2/liblib2.so
