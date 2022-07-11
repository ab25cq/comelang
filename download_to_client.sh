#!/bin/bash

ssh ab25cq@clover-lang.org bash -c '"rm -f comelang.tgz; cd repo/comelang; make distclean; cd ..; tar cvfz ~/comelang.tgz comelang"'
cd ..; rm -rf comelang
scp ab25cq@clover-lang.org:comelang.tgz .
tar xvfz comelang.tgz
cd .

