#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sData {
    union {
        int a;
        struct {
            int a;
            int b;
        } b;
    } a;
};

struct sData gData = (struct sData){ .a = { .b = {.a = 111, .b = 222}} };

int main()
{
    printf("%d %d\n", gData.a.b.a, gData.a.b.b);
    
    return 0;
}
