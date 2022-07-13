#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sData {
    int a;
    int b;
};

struct sData gData = (struct sData){ .a = 1, .b = 2 };

struct sData* gData2 = &(struct sData) { .a = 3, .b = 4 };

int main()
{
    printf("%d %d\n", gData.a, gData.b);
    printf("%d %d\n", gData2->a, gData2->b);
    
    return 0;
}
