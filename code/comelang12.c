#include <stdio.h>
struct S{ int a,b; };
int main(void){
    int a[5] = { [1]=2, [3]=4 };          // 他は0初期化
    struct S s = { .b=7, .a=5 };
    printf("t10:%d,%d,%d\n", a[0], a[3], s.a+s.b); // 0,4,12
    return 0;
}

