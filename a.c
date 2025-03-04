#include <comelang.h>

struct sData2
{
    string a;
};

struct sData
{
    sData2*% data;
};

string fun()
{
    var data = new sData { data:new sData2 { a: s"ABC" } };
    
    return data.data.a;
}

int main(int argc, char** argv)
{
    puts(fun());
    
    string a = "AAA";
    
    return 0;
}


