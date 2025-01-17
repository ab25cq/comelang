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

int __attribute__((aligned(16))) gBuf[256];

int main(int argc, char** argv)
{
    "AAABBBAAADDD".sub_plain("AAA", "XXX").puts();
    
    char a[128];
    
    printf("%d\n", sizeof a);
    
    
    return 0;
}
