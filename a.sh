cp ../comelang/comelang.h .
(cd ../comelang && sh fast_build.sh) && sh clean-self-host.sh
cp comelang-dev.h comelang.h
sh clean-self-host.sh
