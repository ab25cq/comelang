#include <comelang.h>

struct sData
{
    int a;
    int b;
    string c;
};

int main(int argc, char** argv)
{
    list<list<sData~>~>*% li3 = new list<list<sData~>~>();
    
    list<sData~>*% li = new list<sData*%~>();
    li.add(new sData*%~ { c:s"WIN" });
    li.add(new sData*%~ { c:s"WIN" });
    
    li3.add(li);
    li3.add(clone li);
    
    puts((li3[0])[0].c);
    
    return 0;
}
