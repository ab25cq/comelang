#include <comelang.h>

struct sData
{
    int a;
    int b;
    string c;
};

int main(int argc, char** argv)
{
    sData^ item = new sData^;
    
    item.c = s"AAA";
    
    puts(item.c);
    
/*
    list<sData^>*% li = new list<sData^>();
    
    li.add(item);
*/
    
    return 0;
}
