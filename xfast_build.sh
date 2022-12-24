bash install_pkg.sh

if uname -a | grep raspberry
then
    bash fast_build.sh && (echo vin && cd vin && bash fast_build.sh) && (echo zed && cd zed && bash fast_build.sh) && (echo shsh && cd shsh && bash fast_build.sh) && (echo mf && cd mf && bash fast_build.sh ) && (echo gogo && cd gogo && bash fast_build.sh) && (echo c && cd c && make clean && make && bash test.sh) && (echo tcc && cd tcc && make clean && make CC=neo-c) && (echo 9cc && cd 9cc && bash fast_build.sh)
else
    bash fast_build.sh && if uname -a | grep Linux; then (echo 9cc && cd 9cc && make clean && make && make test); fi; (echo vin && cd vin && bash fast_build.sh) && (echo zed && cd zed && bash fast_build.sh) && (echo shsh && cd shsh && bash fast_build.sh) && (echo mf && cd mf && bash fast_build.sh ) && (echo gogo && cd gogo && bash fast_build.sh) && (echo c && cd c && make clean && make && bash test.sh) && (echo tcc && cd tcc && make clean && make CC=neo-c)# && (cd uARM && bash fast_build.sh)

fi
