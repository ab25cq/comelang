
(cd tcc; make clean)
(cd lcc; make clean)
(cd 9cc; make clean)
(cd cinatora; comelang clean)

if [ -e Makefile ]
then
    make clean
fi

if [ -e vin/Makefile ]
then
    (cd vin; make clean)
fi

(cd codb; comelang clean)

if [ -e webweb/Makefile ]
then
    (cd webweb; sh clean_build.sh)
fi

(cd pico; rm -rf build)
(cd minux; rm -rf build)
(cd minux2; rm -rf build)
(cd sd; rm -rf build)
(cd pcre; rm -rf build)
(cd minux3; make clean)

if [ -e viw/Makefile ]
then
    (cd viw; comelang clean)
fi

if [ -e trueby/Makefile ]
then
    (cd trueby; make clean)
fi

if [ -e zed/Makefile ]
then
    (cd zed; make clean)
fi

if [ -e mf/Makefile ]
then
    (cd mf; comelang clean)
fi

if [ -e shsh/Makefile ]
then
    (cd shsh; make clean)
fi

if [ -e dbdb/Makefile ]
then
    (cd dbdb; make clean)
fi

if [ -e dbdb/client/Makefile ]
then
    (cd dbdb/client; make clean)
fi


