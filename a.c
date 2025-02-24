#include <comelang.h>

exception int fun(int a)
{
    printf("in fun %d\n", a);
    
    return none(s"Err");
}

exception int fun2(int a)
{
    printf("in fun2 a %d\n", a);
    
    fun(a).exception_throw;
    
    return 1;
}

int main(int argc, char** argv)
{
    int b = fun2(a:111);
    
    printf("b %d\n", b);
    
    return 0;
}
