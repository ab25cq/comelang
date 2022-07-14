#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sData {
    int a;
    int b;
    
    struct {
        int c;
        int d;
    } c;
    
    struct {
        int c;
        int d;
    } d;
};

struct sData gData = (struct sData){ .a = 1, .b = 2, .c = { .c = 3, .d =4 } };

struct sData* gData2 = &(struct sData) { .a = 3, .b = 4, .c = { .c = 4, .d = 5} };

int main()
{
    printf("%d %d %d %d\n", gData.a, gData.b, gData.c.c, gData.c.d);
    printf("%d %d\n", gData2->a, gData2->b);
    
    return 0;
}
