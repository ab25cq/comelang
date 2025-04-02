#include <comelang.h>

exception int fun()
{
    return (3, false);
}

int main(int argc,char** argv)
{
    int a = fun().expect;
    
    printf("a %d\n", a);
    
    return 0;
}
