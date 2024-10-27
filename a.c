#include <comelang.h>
#include <comelang-str.h>

exception int fun()
{
    string a = s"AAA";
    
    bool result = a.match(/(((((((((/);
    
    if(result) {
        puts("OK");
    }
    
    return 0;
}

int main(int argc, char** argv)
{
    fun();
    
    return 0;
}
