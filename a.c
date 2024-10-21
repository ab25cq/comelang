#include <comelang.h>
#include <comelang-str.h>

exception string test(char* self, come_regex* reg) 
{
    printf("self %p\n", self);
    return none(s"ABC");
}

int fun()
{
    var a = test(s"ABC", /./).rescue { printf("%p\n", Err); puts(Err); };
    
    return 0;
}

int main(int argc, char** argv)
{
    fun();
    
    return 0;
}
