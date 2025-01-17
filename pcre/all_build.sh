./configure --disable-shared --disable-jit --disable-stack-for-recursion --disable-pcregrep-libz --disable-pcregrep-libbz2 --disable-pcretest-libreadline
#mkdir -p build
(cd build; cmake .. && make)
