#include <stdio.h>
typedef struct { int x,y; } P;
static P make(int x,int y){ return (P){ .x=x, .y=y }; }
static void addx(P* p,int dx){ p->x += dx; }
int main(void){
    P p = make(3,4);
    addx(&p,5);
    printf("t03:%d,%d\n", p.x, p.y); // 8,4
    return 0;
}

