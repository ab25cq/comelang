#include "minux.h"

int fun() {
    return 3;
}
            
// hello.c
int main() {
    *(volatile char*)0x10000000L = 'O';
    //*(volatile char*)0x10000000L = 'W';
    while (1) {
        write(1, "O", 1);
    }
    return 0;
}

