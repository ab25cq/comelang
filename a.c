#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

char* xsprintf(char* msg, ...)
{
    va_list args;
    va_start(args, msg);
    char* result;
    int len = vasprintf(&result, msg, args);
    va_end(args);

    if(len < 0) {
        fprintf(stderr, "can't get heap memory.\n");

        exit(2);
    }

    return result;
}

int main()
{
    
    return 0;
}
