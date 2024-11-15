#include <comelang.h>
#include <comelang-pthread.h>

int fun(int a, int b)
{
    printf("%d %d\n", a, b);
    
    return 3;
}

int main(int argc, char** argv)
{
    int@ a = __channel__;
    
    var thread = come {
        fun(1, 2);
        printf("thread %p\n", "ABC");
        a <- 111;
        a <- 222;
    }
    
    
    printf("%d %d\n", <-a, <-a);
    
    come_join(thread);
    
    return 0;
}
