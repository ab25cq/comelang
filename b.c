#include <comelang.h>

struct X
{
    int a;
    int b;
};

struct sData
{
    int a;
    int b;
    X*% x;
};

int main(int argc, char** argv)
{
    sData data;
    
    data.x = new X;
    
    data.x.x = 1111;
    
    return 0;
}
