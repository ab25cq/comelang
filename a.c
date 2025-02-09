#include <comelang.h>
struct sData
{
    int a;
    int b;
    string c;
};

struct sData2
{
    int a;
    string b;
};

struct sData3<T>
{
    T a;
    T b;
};

impl sData3<T>
{
    generate void fun(sData3<T>* self, T a) {
        a.to_string().puts();
    }
}

int main(int argc, char** argv)
{
//    list<list<sData~>~>*% li3 = new list<list<sData~>~>();
    
    list<sData~>*% li = new list<sData*%~>();
    li.add(new sData*%~ { c:s"WIN" });
    li.add(new sData*%~ { c:s"WIN" });
    
    list<sData2~>*% li2 = new list<sData2*%~>();
    li2.add(new sData2*%~ { b:s"WIN2" });
    
    puts(li[0].c);
    
    puts(li2[0].b);
    
    sData3<sData~>*% data1 = new sData3<sData~>;
    
    data1.fun(new sData~ { c:s"WIN" });
    
    sData3<sData2~>*% data2 = new sData3<sData2~>;
    
    data2.fun(new sData2~ { b:s"WIN" });
    
    return 0;
}
