#include <comelang.h>

template<R> R fun(R x, R y)
{
    return x + y;
}

int main(int argc, char** argv)
{
    fun<int>(1,2).printf("%d\n");
    
    return 0;
}

