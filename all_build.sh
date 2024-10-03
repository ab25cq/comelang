sh remove_all_build.sh

(echo vin && cd vin && sh fast_build.sh)

if uname -a | grep Android
then
    (echo zed && cd zed && comelang2 compile && comelang2 install $HOME)
else
    (echo zed && cd zed && comelang2 compile && sudo comelang2 install)
fi

if uname -a | grep Android
then
    (echo shsh && cd shsh && comelang2 compile && comelang2 install $HOME)
else
    (echo shsh && cd shsh && comelang2 compile && sudo comelang2 install)
fi

if uname -a | grep Android
then
    (echo mf && cd mf && comelang2 compile && comelang2 install $HOME)
else
    (echo mf && cd mf && comelang2 compile && sudo comelang2 install)
fi

