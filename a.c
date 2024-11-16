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
    int@ b = __channel__;
    
    var thread = come {
        fun(1, 2);
        a <- 111;
        a <- 222;
    }
    
    b <- 222;
    
    come_join(thread);
    
    come_poll {
        a {
            printf("a %d\n", <-a);
        }
        
        b {
            printf("b %d\n", <-b);
        }
    }
    
    return 0;
}
