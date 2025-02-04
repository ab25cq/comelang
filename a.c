#include <comelang.h>

struct sData
{
    int a;
    int b;
    string c;
};

struct sData2
{
    string a;
};

sData^ fun()
{
    var result = new sData^;
    
    result.c = s"AAA";
    
    return result;
}

int main(int argc, char** argv)
{
    list<sData^>*% li = new list<sData^>();
    
    li.add(new sData^ { c:s"BBB" });
    li.add(fun());
    
    puts(li[0].c);
    puts(li[1].c);
    
    list<sData2^>*% li2 = new list<sData2^>();
    li2.add(new sData2^ { a:s"AAA"});
    puts(li2[0].a);
    
    return 0;
}
