sh remove_all_build.sh
echo aaa
(echo vin && cd vin && sh fast_build.sh)

if uname -a | grep Android
then
    (echo zed && cd zed && comelang compile && comelang install $HOME)
else
    (echo zed && cd zed && comelang compile && sudo comelang install)
fi

if uname -a | grep Android
then
    (echo shsh && cd shsh && comelang compile && comelang install $HOME)
else
    (echo shsh && cd shsh && comelang compile && sudo comelang install)
fi

if uname -a | grep Android
then
    (echo mf && cd mf && comelang compile && comelang install $HOME)
else
    (echo mf && cd mf && comelang compile && sudo comelang install)
fi

