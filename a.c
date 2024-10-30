#include <comelang.h>

char* fun(char* a)
{
    return a;
}

int main(int argc, char** argv)
{
    char* a = fun(null).if {
        puts("ERR");
        it
    }
    
    printf("a %p\n", a);
    
    return 0;
}
