#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int aaa(int a, char** b)
{
    puts("AAA");
    
    return 0;
}

int main()
{
    int ret;
    int (*prog_main)(int, char **);
    
    prog_main = aaa;
    
    char* aaa[12];
    
    ret = (*prog_main)(1, aaa);
    
    return 0;
}
