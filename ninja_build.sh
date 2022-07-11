bash install_pkg.sh

rm -rf build
mkdir build
(cd build && cmake -GNinja .. && ninja && ninja comelang.o && sudo ninja install)
rm -rf build
