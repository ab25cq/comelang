#include <comelang.h>

int main(int argc, char** argv)
{
    {
        string x = strcmp("A", "B").case {
            (it < 0) { puts("Lesser"); puts("UHO!"); s"AAA" }
            (it == 0) { puts("Equal"); s"BBB" }
            (it > 0) { puts("Greater"); s"CCC" }
        }
        puts(x);
    }
    {
        string y = strcmp("A", "A").case {
            (it < 0) { puts("Lesser"); puts("UHO!"); s"AAA" }
            (it == 0) { puts("Equal"); s"BBB" }
            (it > 0) { puts("Greater"); s"CCC" }
        }
        
        puts(y);
    }
    
    if(true) {
        puts("UHO!");
    }
    
    return 0;
}
