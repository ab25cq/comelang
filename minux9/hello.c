#include "minux.h"

int fun() {
    return 3;
}
            
// hello.c
int main() {
    *(volatile char*)0x10000000L = 'O';
    //*(volatile char*)0x10000000L = 'W';
    while (1) {
        char buf[128];
        int fd = open("/a.txt", 0);
        read(fd, buf, 11);
        
        buf[11] = '\0';
        write(1, buf, 1);
        close(fd);
    }
    return 0;
}

