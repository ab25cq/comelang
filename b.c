#include <comelang.h>

int main(int argc, char** argv)
{
    var li = new list<char>();
    
    puts(dynamic_typeof(li));
    
    return 0;
}
