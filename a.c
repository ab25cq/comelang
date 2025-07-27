#include <stdio.h>

int main(int argc, char** argv)
{
    int c = 1;
    int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    int* b = a[2] + 1;
    
    printf("%d\n", *b);
    
    return 0;
}
