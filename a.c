#include <comelang.h>

exception int fun()
{
    return 1;
}

exception int fun2()
{
    int y = fun();
    
    printf("y %d\n", y);
    
    return none(s"ERR");;
}

int main(int argc, char** argv)
{
    int x = fun2();
    
    puts("OK");
    printf("x %d\n", x);
    
    return 0;
}
