comelang -S -pico piccolo.c
comelang -S -pico main.c

rm -rf build
mkdir build
(cd build && cmake .. && make)
