#include <comelang.h>

exception int fun(int a)
{
    printf("in fun %d\n", a);
    
    return none(s"Err");
}

exception int fun2(int a)
{
    printf("in fun2 %d\n", a);
    
    int b = fun(a).rescue {
        222
    }
    
    printf("b %d\n", b);
    
    return none(s"ERR2");
}

int main(int argc, char** argv)
{
    int c = fun2(a:111).rescue {
        333
    }
    
    printf("c %d\n", c);
    
    return 0;
}
