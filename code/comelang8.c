#include <stdio.h>
typedef int (*op)(int,int);
static int add(int a,int b){ return a+b; }
static int apply(op f,int a,int b){ return f(a,b); }
int main(void){
    printf("t06:%d\n", apply(add,7,8)); // 15
    return 0;
}

