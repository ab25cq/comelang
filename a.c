#include <comelang.h>

module MData<T,T2>
{
    int output = T;
    string output2 = T2;
}

int main(int argc, char** argv)
{
    int v = 123;
    string v2 = s"ABC";
    
    include MData<v, v2>;
    output.to_string().puts();
    output2.to_string().puts();
    
    return 0;
}
