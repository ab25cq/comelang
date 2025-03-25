#include <comelang.h>
#include <comelang-pthread.h>

int main(int argc,char** argv)
{
    fopen("AAA", "w").fprintf("AAA\n").fprintf("BBB\n");
    
    return 0;
}
