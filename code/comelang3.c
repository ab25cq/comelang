#include <stdio.h>
int main(void){
    int a=1,b=2,s=0;
    for(int i=0;i<5;i++) s+=i;   // 0+1+2+3+4 = 10
    if(a<b) s+=10; else s-=10;
    printf("t01:%d\n", s);       // 20
    return 0;
}

