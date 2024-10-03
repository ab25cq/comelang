sh install_pkg.sh

export RM="rm -rf"

if uname -a | grep Android
then
    make DESTDIR=$HOME CFLAGS_OPT="-O2 -D__ANDROID__" && make DESTDIR=$HOME install
elif uname -a | grep Darwin
then
    make CFLAGS_OPT="-O2 -D__MAC__" && sudo make install
else
    make CFLAGS_OPT="-O2 -D__LINUX__" && sudo make install
fi
