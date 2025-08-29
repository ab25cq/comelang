#include <stdio.h>
#include <stdarg.h>
static long sum(int n, ...){
    va_list ap; va_start(ap,n);
    long s=0; for(int i=0;i<n;i++) s += va_arg(ap,int);
    va_end(ap); return s;
}
int main(void){
    printf("t08:%ld\n", sum(4,1,2,3,4)); // 10
    return 0;
}

