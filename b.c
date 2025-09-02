#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    for (int i=0; ({ puts("AAA"); i < 3}); i++) {
        puts("BBB");
    }
    
    if(({ int a = 123; printf("%d\n", a); 0})) {
        puts("X");
    }
    
    return 0;
}
