#include <comelang.h>
#include <comelang-pthread.h>

int main(int argc, char** argv)
{
    int@ a = __channel__;
    int@ b = __channel__;
    
    var thread = come {
        a <- 111;
        a <- 222;
    }
    var thread2 = come {
        b <- 333;
        b <- 444;
    }
    
    while(1) {
        come_poll {
            a {
                printf("a %d\n", <-a);
            }
            b {
                printf("b %d\n", <-b);
            }
            else {
                break;
            }
        }
    }
    
    come_join(thread);
    come_join(thread2);
    
    return 0;
}
