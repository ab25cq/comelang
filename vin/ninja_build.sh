rm -rf build
mkdir build
(cd build && cmake -GNinja .. && ninja && ninja readme && sudo ninja install)
rm -rf build
