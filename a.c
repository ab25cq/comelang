#include <comelang.h>

struct sData
{
    int a;
    int b;
};

int main(int argc, char** argv)
{
    sData { a:123, b:234 }.case
    {
        (Value === sData { a:wildcard, b:234 }) {
            puts("MATCH");
        }
        else {
            puts("NO MATCH");
        }
    }
    
    return 0;
}
