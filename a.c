#include <comelang.h>

struct sData
{
    int a;
    int b;
    
    list<sData~>*% li;
};

int main(int argc, char** argv)
{
    var data = new sData;
    
    data.a = 111;
    data.b = 222;
    data.li = new list<sData~>();
    
    data.li.add((new sData)~);
    
    return 0;
}
