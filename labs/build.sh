#!/bin/sh
#
# dependencies:
# bison >= 2.4
#

ROOT=$(cd "$(dirname $0)"; pwd)
if [ -d $ROOT/local ]; then
    rm -rf $ROOT/local
fi
mkdir $ROOT/local

PHPSRC=`dirname "$ROOT"`
TS=${TS:=0}

OPTS="--prefix=$ROOT/local --disable-all --enable-hello --enable-debug"
if [ 1 -eq $TS ]; then
    OPTS="$OPTS --enable-maintainer-zts"
fi

cd "$PHPSRC"

[ -f Makefile ] && make clean
./buildconf --force
./configure $OPTS && make && make install
