
bash install_pkg.sh


./configure --prefix=$HOME --with-debug && make clean && make && make uninstall && make install && make test
