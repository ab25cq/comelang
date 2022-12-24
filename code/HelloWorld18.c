#include <neo-c.h>

tuple2<int, char*>*% fun(int n, char* m) 
{
    return ((n, m));
}

exception int fun2()
{
    return 1;
}

int main(int argc, char** argv)
{
    int a = 2 + fun2().catch {};
    
    xassert("exception test", a == 3);
    
    xassert("list sort test", ['b', 'a', 'c'].sort() === ['a', 'b', 'c']);
    
    auto n, m = fun(1, "AAA");
    
    xassert("multiple assigned", n == 1 && m === "AAA");
    
    return 0;
}
