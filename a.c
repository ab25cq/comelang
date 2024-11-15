#include <comelang.h>
#include <comelang-pthread.h>

int fun(int a, int b)
{
    printf("%d %d\n", a, b);
    
    return 3;
}

struct sData
{
    int@ a;
};

int main(int argc, char** argv)
{
    sData data;
    int@ a = __channel__;
    
    var thread = come {
        fun(1, 2);
        a <- 111;
        a <- 222;
    }
    
    
    printf("%d %d\n", <-a, <-a);
    
    come_join(thread);
    
    return 0;
}
