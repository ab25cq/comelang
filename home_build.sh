
bash install_pkg.sh


./configure --prefix=$HOME && make clean && make && make uninstall && make install && make test
