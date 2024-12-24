#include <comelang.h>
#include <comelang-str.h>

int main(int argc, char** argv)
{
    string a = s"AAA".scan(/./)[0];
    
    puts(a);
    
    return 0;
}

