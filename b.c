#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** arv)
{
    int a = 1;
    void* b = &a;
    
    *(int*)b++;
    
    printf("%d\n", a);
    
    return 0;
}
