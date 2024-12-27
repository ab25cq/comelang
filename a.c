#include <comelang.h>
#include <comelang-str.h>

extern struct _aaa* _global_impure_ptr;

struct _aaa
{
};

int main(int argc, char** argv)
{
    string a = s"AAA".scan(/./)[0];
    
    puts(a);
    
    return 0;
}

