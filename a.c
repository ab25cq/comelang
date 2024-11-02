#include <comelang.h>

struct sData
{
    integer*% a;
    integer*% b;
};

int fun(int c)
{
    printf("%d\n", c);
}

int main(int argc, char** argv)
{
    var data = sData { a:123, b:234 };
    
    data.case {
        (Value === sData { a:wildcard, b:234 }) {
            puts("MATCH");
        }
        else {
            puts("NO MATCH");
        }
    }
    
    return 0;
}
