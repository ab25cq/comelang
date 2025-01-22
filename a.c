#include <comelang.h>

struct sData
{
    int a;
    int b;
};

struct sInfo
{
    list<sData~>*% li;
};


int main(int argc, char** argv)
{
    sInfo info;
    
    info.li = new list<sData~>();
    
    info.li.add(new sData { a:1, b:2 });
    
    sData* data = info.li[0];
    
    data.to_string().puts();
    
    return 0;
}
