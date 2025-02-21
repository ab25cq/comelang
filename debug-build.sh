make distclean
sh install_pkg.sh

if uname -a | grep Android
then
    make DESTDIR=$HOME CFLAGS_OPT="-cg" comelang && make install
else
    make comelang CFLAGS_OPT="-cg" && sudo make install
fi

