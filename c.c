#include <comelang.h>

struct sData
{
    int a;
    int b;
};

sData*%, int, int fun()
{
    return (new sData { a:111, b:222 }, 1, 2);
}

struct sClass
{
    string mName;
    list<object: tup: sData*%, int, int>*% mFields;
};

struct sType
{
    string mName;
    sClass*% mClass;
};

int main(int argc, char** argv)
{
    list<object: sType*%>*% li = new list<object: sType*%>();
    li.add(new sType { mName: s"AAA", mClass: new sClass { mName: s"AAA", mFields: new list<object: tup: sData*%, int, int>() }});
    
    var data, a, b = fun();
    
    li[0].mClass.mFields.push_back((data, 1, 2));
    li[0].mClass.mFields.push_back((data, 1, 2));
    li[0].mClass.mFields.push_back((data, 1, 2));
    
    foreach(it, li[0].mClass.mFields) {
        var data, a, b = it;
        printf("%d %d %d\n", data.a, a, b);
    }
    
    return 0;
}
