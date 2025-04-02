#include <comelang.h>

exception int fun()
{
    return (0, false);
}

int main(int argc,char** argv)
{
    int a = fun().rescue {
        1
    };
    
    printf("a %d\n");
    
    return 0;
}
