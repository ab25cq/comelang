#include <stdio.h>

int main(int argc, char** argv)
{
    int c = 1;
output {
    long x;
    asm volatile("csrr %0, time" : "=r" (x) );
    guho
}
    
//    int** b = a[2] + 1;
    
//    printf("%d\n", *b);
    
    return 0;
}
