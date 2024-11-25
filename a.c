#include <comelang.h>

module MData
{
    bool output = false;
}

int main(int argc, char** argv)
{
    include MData;
    output.to_string().puts();
    
    return 0;
}
