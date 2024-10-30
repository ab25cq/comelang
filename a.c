#include <comelang.h>

exception char* fun(char* a)
{
    return none(s"err");
}

int main(int argc, char** argv)
{
    puts(fun("AAA").rescue {
        return 1;
    });
    
    return 0;
}
