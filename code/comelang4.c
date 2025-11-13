#include <stdio.h>
int main(void){
    int a[4]={1,2,3,4};
    int *p=a;
    *(p+2)=30;
    printf("t02:%d %d\n", a[2], *(a+3)); // 30 4
    return 0;
}

