#include <comelang.h>

struct sData
{
    int a;
    int b;
};

int main(int argc, char** argv)
{
    list<sData~>*% li = new list<sData~>();
    
    li.add(new sData { a:111, b:222 }~);
    li.add(new sData { a:333, b:444 }~);
    
    foreach(it, li) {
        it.to_string().puts();
    }
    
    var item = li.item(0,null);
    
    item.to_string().puts();
    
    puts(li.to_string());
    
    return 0;
}
