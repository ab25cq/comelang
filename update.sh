#!/bin/bash

rm -rf build

if [ -e vin/Makefile ]
then
    (cd vin && make distclean)
fi

if [ -e zed/Makefile ]
then
    (cd zed && make distclean)
fi

if [ -e shsh/Makefile ]
then
    (cd shsh && make distclean)
fi

if [ -e mf/Makefile ]
then
    (cd mf && make distclean)
fi

if [ -e gogo/Makefile ]
then
    (cd gogo && make distclean)
fi

(cd 9cc && make clean)
(cd uARM && make clean)


if [ -e Makefile ]
then
    make distclean
fi

if [ ! -e Makefile ]
then
    git add .
    git commit 
    git remote add origin https://github.com/ab25cq/comelang
    git push -f -u origin master
fi

