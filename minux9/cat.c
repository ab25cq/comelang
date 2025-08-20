#include "minux.h"
#include <stdarg.h>
            
// hello.c
int main(int argc, char** argv) {
    if(argc == 1) {
        char buf[32] = { 0 };
        int n;
        while ((n = read(0, buf, 32)) > 0) {
            write(1, buf, n);
        }
    }
    else {
        int fd = open(argv[1], 0, 0);
        char buf[32];
        int size = read(fd, buf, 32);
        close(fd);
    
        write(1, buf, size);
    
    }
    exit(0);
}

