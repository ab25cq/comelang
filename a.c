#include <comelang.h>

int main(int argc, char** argv)
{
/*
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
*/
    
    int a = 123;
    char* b = if(a == 0) {
        s"AAA"
    }
    else if(a == 123) {
        s"BBB"
    }
    
    puts(b);
    
    return 0;
}
