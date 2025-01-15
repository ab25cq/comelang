#include <comelang.h>

__attribute__((constructor)) static void fun()
{
    puts("CONSTRUCTOR");
}

__attribute__((constructor)) static void fun2()
{
    puts("CONSTRUCTOR2");
}

struct __attribute__((packed)) sData
{
    int a;
    int b;
};

int main(int argc, char** argv)
{
    "AAABBBAAADDD".sub_plain("AAA", "XXX").puts();
    
    return 0;
}
