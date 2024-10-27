#include <stdio.h>

int main(int argc, char** argv)
{
    int a = 1;
    a && { goto X; }
    
X:
    return 0;
    
    printf("a %d\n", a);
    
    return 0;
}


