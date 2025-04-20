
sh install_pkg.sh

export RM="rm -rf"

if uname -a | grep Android
then
    make DESTDIR=$HOME CFLAGS_OPT="-O2" comelang $(($(nproc) / 2)) && make DESTDIR=$HOME install
elif uname -a | grep Darwin
then
    make CFLAGS_OPT="-O2 -g" comelang -j$(($(sysctl -n hw.logicalcpu) / 2)) && sudo make install
else
    make CFLAGS_OPT="-g" comelang -j$(($(nproc) / 2)) && sudo make install
fi
