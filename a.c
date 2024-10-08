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
    
    3.test() {
        puts(s"HELLO \{buf}");
    }
    
    return 0;
}
