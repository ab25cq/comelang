#include <comelang.h>

exception string fun(int a, int b)
{
    return none(s"AAA");
}

exception string fun2(int a)
{
    return fun(0, 2).throw;
}

int fun3(string a)
{
    printf("fun3 a %s\n", a);
    
    return 1;
}

int main(int argc, char** argv)
{
    int a = fun3(fun2(1).rescue { puts("RECUE"); return 1});
    
    printf("a %d\n", a);
    
    return 0;
}
