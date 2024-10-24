#include <comelang.h>

struct sData
{
    int a;
    int b;
};

int main(int argc, char** argv)
{
    var data = new sData;
    
    data.a = 123;
    data.b = 234;
    
    data.to_string().puts();
    
    return 0;
}
