#!/usr/bin/env bash
set -e
CWD="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" && cd $CWD/.. && CWD=$PWD # move to project root

DIRS=(build CMakeFiles)
for D in ${DIRS[@]}; do find tut* -type d -name $D | xargs rm -rf; done

FILES=(CMakeCache.txt)
for F in ${FILES[@]}; do find tut* -type f -name $F | xargs rm -rf; done
