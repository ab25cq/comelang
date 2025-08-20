#include <stdint.h>
#include <stdarg.h>
#include "minux.h"
#include "minux.h"
#include <stdint.h>

void putchar(char c)
{
    char buf[2];
    buf[0] = c;
    buf[1] = '\0';
    write(1, buf, 1);
}

int main(int argc, char** argv)
{
    int pid = fork();
    
    if(pid == 0) {
        write(1, "ABC\r\n", 5);
        exit(1);
    }
    
    int status;
    wait(&status);
    
    exit(1);
}
