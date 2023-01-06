bash install_pkg.sh

if uname -a | grep raspberry
then
    bash fast_build.sh && (echo vin && cd vin && bash fast_build.sh || exit) && (echo zed && cd zed && bash fast_build.sh || exit) && (echo shsh && cd shsh && bash fast_build.sh || exit) && (echo mf && cd mf && bash fast_build.sh || exit) && (echo gogo && cd gogo && bash fast_build.sh || exit) && (echo c && cd c && make clean && make && bash test.sh || exit) && (echo tcc && cd tcc && make clean && make CC=neo-c || exit) && (echo 9cc && cd 9cc && bash fast_build.sh || exit)
else
    bash fast_build.sh && if uname -a | grep Linux; then (echo 9cc && cd 9cc && make clean && make && make test || exit); fi; (echo vin && cd vin && bash fast_build.sh || exit) && (echo zed && cd zed && bash fast_build.sh || exit) && (echo shsh && cd shsh && bash fast_build.sh || exit) && (echo mf && cd mf && bash fast_build.sh  || exit) && (echo gogo && cd gogo && bash fast_build.sh || exit) && (echo c && cd c && make clean && make && bash test.sh || exit) && (echo tcc && cd tcc && make clean && make CC=neo-c || exit)# && (cd uARM && bash fast_build.sh)

fi
