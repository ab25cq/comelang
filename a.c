#include <comelang.h>
#include <comelang-str.h>

int main(int argc, char** argv)
{
    wstring a = wstring("AAA");
    
    int key = a.get_hash_key();
    
    
    return 0;
}
