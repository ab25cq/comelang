#include <comelang.h>
#include <comelang-str.h>

int main(int argc, char** argv)
{
    "ABCDEFG".sub_block(/(.+)/) { "?" + it2[0] + "?" }.puts();
    
    return 0;
}
