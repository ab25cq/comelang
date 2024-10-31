#include <comelang.h>

int fun(int x, int y)
{
    return x + y;
}

int main(int argc, char** argv)
{
    int (*l)(int,int) = fun;
    
    printf("%d\n", l(1,2));
    
    return 0;
}
