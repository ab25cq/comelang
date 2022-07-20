#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

struct sXXX {
    int a;
    int b;
};

struct sXXX xxx[3] = {
    { .a = 111, .b = 222 }, { .a = 333, .b = 444 }, { .a = 555, .b = 666 }
};

int main()
{
    printf("%d %d %d %d %d %d\n", xxx[0].a, xxx[0].b, xxx[1].a, xxx[1].b, xxx[2].a, xxx[2].b);
    if(xxx[0].a == 111) {
        puts("GUUUUU");
    }
    
    return 0;
}
