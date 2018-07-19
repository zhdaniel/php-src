#!/bin/sh
#
# dependencies:
# bison >= 2.4
#

ROOT=$(cd "$(dirname $0)"; pwd)
if [ ! -d $ROOT/local ]; then
    mkdir $ROOT/local
fi

PHPSRC=`dirname "$ROOT"`

cd "$PHPSRC" && \
./buildconf --force && \
./configure --prefix=$ROOT/local --disable-all --enable-maintainer-zts --enable-debug && \
make && \
make install
