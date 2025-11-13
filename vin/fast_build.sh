if uname -a | grep raspberry
then
    make DESTDIR=$HOME && make DESTDIR=$HOME install
elif uname -a | grep Android
then
    make DESTDIR=$HOME && make DESTDIR=$HOME install
elif uname -a | grep Darwin
then
    make -j$(($(sysctl -n hw.logicalcpu)/2)) && sudo make install
else
    make -j$(($(nproc)/2)) && sudo make install
fi

