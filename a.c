#include <comelang.h>

struct sData
{
    int a;
    int b;
};

int main(int argc, char** argv)
{
    list<object as sData>*% li = new list<object as sData>();
    
    li.add(new sData { a:111, b:222 } implements object);
    
    var data = li[0];
    
    printf("%d %d\n", data.a, data.b);
    
    puts(li.to_string());
    
    return 0;
}
