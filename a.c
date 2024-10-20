#include <comelang.h>
#include <comelang-str.h>

exception int char*::test(char* self, come_regex* regex) 
{
    return 0;
}

exception int string::test(char* self, come_regex* regex) 
{
    return 0;
}

int main(int argc, char** argv)
{
    int a = s"ABC".test(/./).exception_value;
    
    printf("a %d\n", a);
    
    return 0;
}
