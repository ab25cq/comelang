#include <comelang.h>
#include <comelang-str.h>

int main(int argc, char** argv)
{
    string a = s"AAA";
    
    if(a.match(/./)) {
        puts("OK");
    }
    
    return 0;
}
