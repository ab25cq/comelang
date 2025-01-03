comelang -S -pico main.c
#rm -rf build
mkdir build
(cd build; cmake .. && make)

#cp build/minux.uf2 /Volumes/RPI-RP2
