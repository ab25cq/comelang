#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
    int n = 0;
    int m = 1;
    
    int** values = (int**)calloc(1, sizeof(int*)*5);
    values[1] = (int*)calloc(1, sizeof(int*)*5);
    values[1][5] = (int)calloc(1, sizeof(int));
    values[1][5] = 5;
    
    printf("%d\n", values[1][5]);
    
    return 0;
}
