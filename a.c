#include <comelang.h>

struct sData<T>
{
    T a;
    T b;
};

int fun(int c)
{
    printf("%d\n", c);
}

int main(int argc, char** argv)
{
    var data = sData<integer*%> { a:123, b:234 };
    
    data.case {
        (Value === sData<integer*%> { a:wildcard, b:234 }) {
            puts("MATCH");
        }
        else {
            puts("NO MATCH");
        }
    }
    
    return 0;
}
