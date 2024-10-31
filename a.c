#include <comelang.h>

int main(int argc, char** argv)
{
    string a = s"AAAA".case {
        (it === s"AAAA") { s"AAA" }
        (it === s"BBBB") { s"BBB" }
    }
    
    printf("%s\n", a);
    
    return 0;
}
