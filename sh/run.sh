#!/usr/bin/env bash
set -e
CWD="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" && cd $CWD/.. && CWD=$PWD # move to project root

for F in $(find tut -type f -name "run.sh"); do
    chmod +x $F
    echo $F;
    $F
done

./sh/clean.sh
