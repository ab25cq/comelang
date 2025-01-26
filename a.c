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
    
    list<tup(int, int)~>*% li = new list<tup(int, int)~>();
    
    li.add((1,2)~);
    
    printf("%d\n", li[0]~~.v2);
    
    return 0;
}
