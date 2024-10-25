#include <stdio.h>

int main(int argc, char** argv)
{
    var a = 1 ? 2:(void*)0;
    
    printf("a %d\n", a);
    
    return 0;
}


