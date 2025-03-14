rm -rf build
mkdir build
(cd build; cmake .. && make)
#comelang -S -pico led.c && cp led.c.c led2.c 
#rm -rf build
#mkdir build
#(cd build; cmake .. && make VERBOSE=1)
#cd build

#cp build/led.uf2 /Volumes/RPI-RP2
