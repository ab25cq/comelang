#include <comelang.h>

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
