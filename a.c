#include <comelang.h>
#include <comelang-pthread.h>

int fun(int a, int b)
{
    printf("%d %d\n", a, b);
    
    return 3;
}

int main(int argc, char** argv)
{
    int a = 0;
    var thread = come a = fun(3, 4);
    
    come_join(thread);
    
    printf("a %d\n", a);
    
    return 0;
}
