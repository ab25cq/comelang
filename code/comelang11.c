#include <stdio.h>
#include <string.h>
int main(void){
    const char* s = "foo" "bar";            // 連結
    const char* t = "line1\nline2\t\\";
    printf("t09:%zu,%d\n", strlen(s), (int)(strchr(t,'\\')-t)); // 6,12
    return 0;
}

