#include <comelang.h>
#include <comelang-str.h>

int main(int argc, char** argv)
{
    r".".rescue { null }.if { "aaa".scan(Value).to_string().puts(); }
    
    return 0;
}
