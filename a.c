#include <comelang.h>
#include <comelang-str.h>

exception int fun()
{
    come_regex*% reg = /./.rescue { };
    
    if(reg) {
        if(s"AAA".match(reg)) {
            puts("OK");
        }
    }
    
    return 0;
}

int main(int argc, char** argv)
{
    fun();
    
    return 0;
}
