bash install_pkg.sh

bash fast_build.sh && if uname -a | grep Linux | grep -v aarch64; then echo 9cc && cd 9cc && make clean && make && make test && cd ..;  fi; echo vin && cd vin && bash fast_build.sh && cd .. && echo zed && cd zed && bash fast_build.sh && cd ..&& echo shsh && cd shsh && bash fast_build.sh && cd .. && echo mf && cd mf && bash fast_build.sh && cd .. && if uname -a | grep -v Darwin; then echo gogo && cd gogo && bash fast_build.sh && cd ..; fi && if uname -a | grep Linux | grep -v aarch64; then echo tcc && cd tcc && make clean && make CC=neo-c && cd ..; fi

