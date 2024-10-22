#include <comelang.h>
#include <comelang-str.h>

exception int char*::test(char* self, come_regex* regex) 
{
    return none(s"AAA");
}

exception int char*::test(char* self, come_regex* regex) 
{
    return none(s"AAA");
}

int main(int argc, char** argv)
{
    int a = s"ABC".test(/./).exception_value;
    
    printf("a %d\n", a);
    
    return 0;
}
