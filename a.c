#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void strcat_vprintf(char *buf, int buf_size, const char *fmt, va_list ap)
{
    int len;
    len = strlen(buf);
    vsnprintf(buf + len, buf_size - len, fmt, ap);
}


int main()
{
    int e2 = "\10000"[0];
    
    return 0;
}

