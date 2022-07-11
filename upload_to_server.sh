#!/bin/bash

if [ -e Makefile ]
then
    make distclean
fi
if [ -e vin/Makefile ]
then
    (cd vin; make distclean)
fi

if [ ! -e Makefile ]
then
    (cd ..; tar cvfz comelang.tgz comelang)
    (cd ..; scp comelang.tgz ab25cq@clover-lang.org:)
    ssh ab25cq@clover-lang.org bash -c '"cp -f comelang.tgz repo/; cd repo; rm -rf comelang; tar xvfz comelang.tgz"'
fi

