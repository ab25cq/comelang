bash install_pkg.sh

if uname -a | grep raspberry
then
    bash fast_build.sh && (cd vin && bash fast_build.sh) && (cd zed && bash fast_build.sh) && (cd shsh && bash fast_build.sh) && (cd mf && bash fast_build.sh ) && (cd gogo && bash fast_build.sh) && (cd c && make)
else
    bash fast_build.sh && if uname -a | grep Linux; then (cd 9cc && make clean && make && make test); fi; (cd vin && bash fast_build.sh) && (cd zed && bash fast_build.sh) && (cd shsh && bash fast_build.sh) && (cd mf && bash fast_build.sh ) && (cd gogo && bash fast_build.sh) && (cd c && make)

fi
