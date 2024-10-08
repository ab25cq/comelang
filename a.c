#include <comelang.h>

void int::test(int self, void* parent, void (*block)(void* parent))
{
    block(parent);
}

int main(int argc, char** argv)
{
    char buf[1024] = { 'A', 'B', '\0' };
    
    string str = s"buf \{buf}";
    
    puts(str);
    
    list<string>*% li = new list<string>();
    string buf2 = string("AAA");
    3.test() {
        puts(s"HELLO \{buf} \{buf2}");
        buf2 = s"ABC";
        puts(buf2);
        
        li = [s"ABC", s"DEF"];
    }
    
    puts(buf2);
    
    li.join("+").puts();
    
    return 0;
}
