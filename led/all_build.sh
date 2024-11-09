rm -rf build
mkdir build
(cd build; cmake .. && make)
comelang -pico led.c && cp led.c.c led2.c 
rm -rf build
mkdir build
(cd build; cmake .. && make)
cd build
