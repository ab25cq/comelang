#include <neo-c.h>

int main(int argc, char** argv)
{
    [s"aaa", s"bbb", s"ccc"].map { it + s"bbb" }.filter { strstr(it, "bbb") }.each
    {
        puts(it);
    }
    
    return 0;
}
