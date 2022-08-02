#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>
#include <signal.h>

int main()
{
    if(1.1f > 1.2f) {
        puts("OK");
    }
    else {
        puts("NO");
    }
    double tt;
    tt = (double)1.1 / 1000000.0;
    if (tt > 0.001)
        tt = 0.001;
    
    return 0;
}
