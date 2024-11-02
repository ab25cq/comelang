#include <comelang.h>

struct sData
{
    long a;
    long b;
};

int main(int argc, char** argv)
{
    var data = sData{a:1, b:2};
    var data2 = sData{a:1, b:2};
    
    data.case {
        (Value === sData {a:wildcard, b:2}) {
            puts("MATCH");
        }
        else {
            puts("NO MATCH");
        }
    }
    
    return 0;
}


