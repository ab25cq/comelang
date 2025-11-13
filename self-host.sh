
sh install_pkg.sh

export RM="rm -rf"

if uname -a | grep raspberry
then
    make DESTDIR=$HOME CFLAGS_OPT="-O2 -D__RASPBERRY_PI__" neo-c && make DESTDIR=$HOME install
elif uname -a | grep Android
then
    make DESTDIR=$HOME CFLAGS_OPT="-O2" neo-c $(($(nproc) / 2)) && make DESTDIR=$HOME install
elif uname -a | grep Darwin
then
    make CFLAGS_OPT="-O2 -g" neo-c -j$(($(sysctl -n hw.logicalcpu) / 2)) && sudo make install
else
    make CFLAGS_OPT="-O2 -g" neo-c -j$(($(nproc) / 2)) && sudo make install
fi
