#include <comelang.h>
#include <comelang-str.h>

int main(int argc, char** argv)
{
    if(s"AAA".match(/(((((((((((/) && s"BBB".match(/E/)) {
        puts("1");
    }
    else if(s"CCC".match(/G/) && "DDD".match(/G/)) {
        puts("2");
    }
    else {
        puts("3");
    }
    
    return 0;
}
