#include <comelang.h>

int main(int argc, char** argv)
{
    list<tup: int, int>*% a = new list<tup: int, int>();
    
    a.add((1,2));
    
    puts(a[0].to_string());
    
    return 0;
}
