
(cd tcc; make clean)
(cd lcc; make clean)
(cd 9cc; make clean)

if [ -e Makefile ]
then
    make clean
fi

if [ -e vin/Makefile ]
then
    (cd vin; make clean)
fi

if [ -e webweb/Makefile ]
then
    (cd webweb; comelang clean)
fi

if [ -e webweb2/Makefile ]
then
    (cd webweb2; comelang clean)
    (cd webweb2/cgi-bin; make clean)
fi

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

if [ -e dbdb-client/Makefile ]
then
    (cd dbdb-client; make clean)
fi
