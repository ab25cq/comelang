#include <stdio.h>
#define SQR(x) ((x)*(x))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define CAT(a,b) a##b
#define STR(x) #x
int main(void){
    int CAT(ab,cd)=3;
    printf("t07:%d,%d,%s\n", SQR(4), MAX(2,5), STR(hello)); // 16,5,hello
    printf("t07b:%d\n", abcd);                               // 3
    return 0;
}

