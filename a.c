#include <comelang.h>
#include <comelang-str.h>

int main(int argc, char** argv)
{
    come_regex*% reg = /(((((((((/.rescue {null};
    if(s"AAA".match(/E/) && s"BBB".match(/E/)) {
        puts("1");
    }
    else if(s"CCC".match(/C/) && "DDD".match(reg)) {
        puts("2");
    }
    else {
        puts("3");
    }
    
    return 0;
}
