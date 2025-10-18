#include <comelang.h>
#include <comelang-str.h>

int main(int argc, char** argv)
{
    "ABC123ABC123DEF123GHI".sub(/ABC[0-9]+/, "X").puts();
    
    return 0;
}
