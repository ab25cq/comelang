sh install_pkg.sh

export RM="rm -rf"

if uname -a | grep Android
then
    make CC=gcc DESTDIR=$HOME CFLAGS_OPT="-O2 -D__ANDROID__" -j$(($(nproc) /2)) && make DESTDIR=$HOME install
elif uname -a | grep Darwin
then
    make CC=clang CFLAGS_OPT="-O2 -D__MAC__" -j$(sysctl -n hw.logicalcpu) && sudo make install
else
    make CC=clang CFLAGS_OPT="-O2 -D__LINUX__" -j$(($(nproc) / 2)) && sudo make install
fi
