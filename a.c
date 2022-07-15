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
    
    union {
        int a;
        long b;
        char c;
    } e;
};

union eNode {
    int a;
    long b;
    char c;
};

eNode gNode = (eNode) { .c = 'd' };

struct sData gData = (struct sData){ .a = 1, .b = 2, .c = { .c = 3, .d =4 }, .e = { .c='c' } };

struct sData* gData2 = &(struct sData) { .a = 3, .b = 4, .c = { .c = 4, .d = 5} };

int main()
{
    printf("%d %d %d %d %c\n", gData.a, gData.b, gData.c.c, gData.c.d, gData.e.c);
    printf("%d %d\n", gData2->a, gData2->b);
    printf("gNode %c\n", gNode.c);
    
    return 0;
}
