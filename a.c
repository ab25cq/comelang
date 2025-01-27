#include <comelang.h>

struct sData
{
    int a;
    int b;
    
    list<object:sData>*% li;
};

int main(int argc, char** argv)
{
    var data = new sData;
    
    data.a = 111;
    data.b = 222;
    data.li = new list<object:sData>();
    
    data.li.add((new sData)~);
    
    list<object:tup(int, int)>*% li = new list<object:tup(int, int)>();
    
    li.add((1,2)~);
    
    var a,b = li[0]~~;
    
    printf("%d %d\n", a, b);
    
    return 0;
}
