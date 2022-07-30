#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

typedef struct {
    unsigned int  func_call : 8;
    unsigned int func_args : 8;
    unsigned int func_export : 1;
} func_attr_t;

int main()
{
    int func_attr;
    int a;
    a = 1;
    (((func_attr_t*)&(func_attr))->func_call) = 1;
    (((func_attr_t*)&(func_attr))->func_args) = 2;
    
    printf("%d %d %d\n", a, (((func_attr_t*)&(func_attr))->func_call), (((func_attr_t*)&(func_attr))->func_args));
    
    return 0;
}
