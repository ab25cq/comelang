#include <comelang.h>
#include <comelang-str-libc.h>

int main(int argc, char** argv)
{
    int r = "ABCABCABC".index_regex_count(/ABC/, 3, -1);
    
    printf("r %d\n", r);
    
    return 0;
}
