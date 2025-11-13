make distclean
sh install_pkg.sh

if uname -a | grep Android
then
    make DESTDIR=$HOME CFLAGS_OPT="-cg" neo-c && make install
else
    make neo-c CFLAGS_OPT="-cg" && sudo make install
fi

