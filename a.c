#include <comelang.h>

int main(int argc, char** argv)
{
    puts(strcmp("AAA", "AAA").case {
        (it == 0) { string a = s"AAA"; s"Equal" }
        (it > 0) { string b = s"BBB"; s"Greater" }
        (it < 0) { string c = s"CCC"; s"Lesser" }
    });
    
    return 0;
}
