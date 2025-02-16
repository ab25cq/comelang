#include <comelang.h>

int main(int argc, char** argv)
{
    int n = 0;
    "AAA\nBBB\nCCC\n".split_char('\n').sublist(n, n+10).map { xsprintf("%d %s", ++n, it) }.join("\n").puts();
    
    return 0;
}
