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
    
    info.li.add(new sData { a:1, b:2 }~);
    
    info.li[0] = new sData { a:3, b:4 }~;
    info.li[1] = new sData { a:4, b:5 }~;
    info.li[2] = new sData { a:5, b:6 }~;
    
    sData* data = info.li[0];
    data.to_string().puts();
    
    data = info.li[1];
    data.to_string().puts();
    
    data = info.li[2];
    data.to_string().puts();
    
    return 0;
}
