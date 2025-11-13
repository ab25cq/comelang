#include <stdio.h>
int main(void){
    int x=10;
    const int* p=&x;  // pointeeがconst（書き換え不可）
    int* q=&x; *q=5;  // 実体は変更可能
    (void)p;
    printf("t11:%d\n", x); // 5
    return 0;
}

