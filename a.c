#include <comelang.h>

exception int fun()
{
    return none(s"Err");
}

exception int fun2()
{
    return fun().exception_throw;
}

int main(int argc, char** argv)
{
    int a = fun2()!!;
    
    printf("a %d\n", a);
    
    puts("HEHE");
    
    return 0;
}
