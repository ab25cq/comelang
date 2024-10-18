#include <comelang.h>

exception int fun()
{
    return 1;
}

exception int fun2()
{
    return fun().throw;
}

int main(int argc, char** argv)
{
    int a = 1;
    int x = fun2().rescue {
        printf("a %d\n", a);
        puts("AAA");
        return 2;
    }
    
    puts("OK");
    printf("x %d\n", x);
    
    return 0;
}

