#include <stdio.h>
int main(void){
    int s=0;
    for(int i=0;i<10;i++){
        if(i%2) continue;        // 偶数のみ
        if(i==8) break;          // 0,2,4,6 まで
        s += (i<5 ? i : 2);      // 0 + 2 + 4 + 2 = 8
    }
    printf("t12:%d\n", s);       // 8
    return 0;
}

