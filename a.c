#include <comelang.h>
#include <comelang-str.h>

exception int fun(int port=8080, void* parent, void (*block)(void* parent))
{
    int a = 1;
    
    block(parent);
    
    return 1;
}

int main(int argc, char** argv)
{
    fun() {
        puts("AAA");
    }
    
    return 0;
}
