#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct sData
{
    int a;
    int b;
    float c;
};

int main(int argc, char** argv)
{
    printf("%d\n", sizeof(struct sData));
    
    return 0;
}

