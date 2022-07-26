#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int errno;

int main()
{
    errno = 0;
    
    printf("%d\n", errno);
    
    return 0;
}
