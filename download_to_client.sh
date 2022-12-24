#!/bin/bash

ssh ab25cq@clover-lang.org bash -c '"rm -f neo-c.tgz; cd repo/neo-c; make distclean; cd ..; tar cvfz ~/neo-c.tgz neo-c"'
cd ..; rm -rf neo-c
scp ab25cq@clover-lang.org:neo-c.tgz .
tar xvfz neo-c.tgz
cd .

