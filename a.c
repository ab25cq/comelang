#include <comelang.h>

struct sData
{
    int a;
    int b;
};

struct sData2
{
    int a;
    int b;
    int c;
};

int main(int argc, char** argv)
{
    list<sData~>*% li = new list<sData~>();
    list<sData2~>*% li2 = new list<sData2~>();
    
    li.add(new sData { a:111, b:222 });
    li.add(new sData { a:333, b:444 });
    
    foreach(it, li) {
        puts(it.to_string());
    }
    
    li2.add(new sData2 { a:111, b:222, c:333 });
    li2.add(new sData2 { a:333, b:444, c:555 });
    
    foreach(it, li2) {
        puts(it.to_string());
    }
    
    return 0;
}
