#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

union uUnion {
    struct {
        int a;
        int b;
    } a;
    
    struct {
        char a;
        char b;
    } b;
    
    int c;
    
    union {
        int a;
        char b;
    } d;
    
    struct {
        struct {
            int a;
            int b;
        } a;
    } e;
};

union uUnion gA = (union uUnion) { .b = { .a = 'c', .b = 'd' } };
union uUnion gB = (union uUnion) { .a = { .a = 111, .b = 222 }};
union uUnion gC = (union uUnion) { .c = 123 };
union uUnion gD = (union uUnion) { .d = { .a = 777 } };
union uUnion gE = (union uUnion) { .e = { .a = { .a = 111, .b = 222} } };

int main()
{
    printf("%c %c\n", gA.b.a, gA.b.b);
    printf("%d %d\n", gB.a.a, gB.a.b);
    printf("%d\n", gC.c);
    printf("%d\n", gD.d.a);
    printf("%d %d\n", gE.e.a.a, gE.e.a.b);
    
    return 0;
}
