#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

extern int * __error(void);

int main()
{
    (*__error()) = 123;
    
    printf("%d\n", errno);
    
    return 0;
}
