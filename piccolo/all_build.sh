comelang -v -S -pico os.c
comelang -v -S -pico main.c

(cd build && make clean && cmake .. && make)
