#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

struct sData {
    long r;
};

int main()
{
    struct sData sym;
    
    (*(int**)&(sym.r)) = 111;
    
    return 0;
}
