#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct sData {
    int a;
    int b;
};

int main()
{
    struct sData a = (struct sData) { .a = 111 };
    struct sData b = { .a = 111, .b = 222 };
    
    int c[] = { 1, 2, 3};
    
    printf("%d %d\n", a.a, a.b);
    printf("%d %d\n", b.a, b.b);
    printf("%d %d %d\n", c[0], c[1], c[2]);
    
    return 0;
}
