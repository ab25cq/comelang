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
    
    return 0;
}
