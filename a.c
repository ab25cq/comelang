#include <comelang.h>

exception int fun()
{
    return none(1);
}

int main(int argc, char** argv)
{
    int a = 1;
    int x = fun().rescue {
        printf("a %d\n", a);
        puts("AAA");
        return 2;
    }
    
    return 0;
}

