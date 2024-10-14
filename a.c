#include <comelang.h>

int main(int argc, char** argv)
{
    [1,2,3].map2 { it.to_string() }.each { puts(it); }
    
    return 0;
}
