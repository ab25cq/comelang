#include <comelang.h>

struct sData
{
    int a;
    int b;
    
    list<object:sData*>*% li;
    sData*% data;
};

int main(int argc, char** argv)
{
    var data = new sData;
    
    data.a = 111;
    data.b = 222;
    data.li = new list<object:sData>();
    
    data.li.add(new sData { a:111, b:222});
    
    puts(data.li[0].a.to_string());
    
    list<object:tup(int, sData*%)>*% li = new list<object:tup(int, sData*%)>();
    
    li.add((1,new sData { a:11, b: 22}));
    li.add((2,new sData { a:33, b: 33}));
    li.add((3,new sData { a:55, b: 55}));
    
    foreach(it, li) {
        var a,b = it;
        
        printf("%d %d %d\n", a, b.a, b.b);
    }
    
    list<object:sData*%>*% li2 = new list<object:sData*%>();
    
    li2.add(new sData { a:111, b: 1});
    li2.add(new sData { a:222, b: 2});
    li2.add(new sData { a:333, b: 3});
    
    foreach(it, li2) {
        printf("%d %d\n", it.a, it.b);
    }
    
    return 0;
}
