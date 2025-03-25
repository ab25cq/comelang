if uname -a | grep Android
then
    make DESTDIR=$HOME && make DESTDIR=$HOME install
elif uname -a | grep Darwin
then
    make -j$(sysctl -n hw.logicalcpu) && sudo make install
else
    make -j$(nproc) && sudo make install
fi

