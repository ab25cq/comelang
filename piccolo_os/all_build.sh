comelang -S -pico os.c
comelang -S -pico main.c

(cd build && make clean && cmake .. && make)
