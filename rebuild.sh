if test `uname -o` = Android
then
    make && make uninstall && make install
else
    make && sudo make uninstall && sudo make install
fi

