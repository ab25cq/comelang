#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>

struct sDataXYZ {
    long r;
};

int main()
{
    struct sDataXYZ sym;
    
    long a;
    
    (*(int**)&(sym.r)) = 111;
    
    printf("%d\n", (*(int**)&(sym.r)));
    
    return 0;
}
