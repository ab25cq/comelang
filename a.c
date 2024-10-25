#include <comelang.h>

int main(int argc, char** argv)
{
    strcmp("A", "B").case {
        (it < 0) puts("Lesser");
        (it == 0) puts("Equal");
        (it > 0) puts("Greater");
    }
    
    return 0;
}
