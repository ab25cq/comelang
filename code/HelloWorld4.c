#include <comelang.h>

void fun(int n) 
{
    printf("n %d\n", n);
}

void fun2(int m, int x)
{
    printf("m %d x %d\n", m, x);
}

int main() 
{
    come fun(2);
    come fun2(1, 2);

    come join;
    
    puts("finish");
    
    return 0;
}
