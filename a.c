#include <comelang.h>

struct sData
{
    int a;
    int b;
    string c;
};

sData*% sData*::initialize(sData*% self)
{
    self.a = 111;
    self.b = 123;
    self.c = string("WIN");
    
    return self;
}

struct sData2
{
    int a;
    string b;
};


void sData::fun(sData* self)
{
    puts("sData::fun()");
}

void sData2*::fun(sData2* self) {
    puts("sData2*::fun()");
}

struct sData3<T>
{
    T a;
    T b;
};

impl sData3<T>
{
    generate void fun(sData3<T>* self, T a) {
        a.fun();
    }
}

struct sInfo
{
    list<sData~>*% mGenericsTypes;
};

int main(int argc, char** argv)
{
//    list<list<sData~>~>*% li3 = new list<list<sData~>~>();
    
/*
    list<sData~>*% li = new list<sData~>();
    li.add(new sData~.initialize());
    
    list<sData2~>*% li2 = new list<sData2*%~>();
    li2.add(new sData2~ { b:s"WIN2" });
    
    puts(li[0].c);
    
    puts(li2[0].b);
*/
    
    map<string~, sData~>*% uho = new map<string~, sData~>();
    
    string~ aaa = new char~[64];
    strcpy(aaa, "AAA");
    
    uho[aaa] = new sData~();
    
    printf("%p\n", uho[aaa]);
    
/*
    sData3<sData~>*% data1 = new sData3<sData~>;
    
    data1.fun(new sData~ { c:s"WIN" });
    
    sData3<sData2~>*% data2 = new sData3<sData2~>;
    
    data2.fun(new sData2~ { b:s"WIN" });
    
    sInfo*% info = new sInfo;
    
    info.mGenericsTypes = new list<sData~>();
    
    info.mGenericsTypes.add(new sData~ { c:s"AAA" });
    info.mGenericsTypes.add(new sData~ { c:s"BBB" });
    
    puts(info.mGenericsTypes[0].c);
    
    foreach(it, info.mGenericsTypes) {
        puts(it.c);
    }
    
    list<tup(string, sData*%)~>*% data = new list<tup(string, sData*%)~>();
    
    data.add((s"AAA", new sData { a:123 }));
    
    puts(data[0].v1);
*/
    
    return 0;
}
