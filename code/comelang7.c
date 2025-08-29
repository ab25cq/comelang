#include <stdio.h>
static int counter(void){ static int c=0; return ++c; }
static inline int sq(int x){ return x*x; }
int main(void){
    int x=2; { int x=5; (void)x; }   // シャドーイング
    printf("t05:%d,%d,%d\n", counter(), counter(), sq(3)); // 1,2,9
    return 0;
}

