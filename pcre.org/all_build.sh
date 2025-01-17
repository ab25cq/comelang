./configure --disable-shared --disable-jit --disable-stack-for-recursion --disable-pcregrep-libz --disable-pcregrep-libbz2 --disable-pcretest-libreadline --disable-pcre16 --disable-pcre32 --disable-pcrecpp
#mkdir -p build
(cd build; cmake .. && make)
