#include <comelang.h>
#include <comelang-pthread.h>


int main(int argc, char** argv)
{
    puts("UHO!");
    int@ a = __channel__;
    
    var thread_id = come {
        for(int i=0; i<1000; i++) {
            a <- i;
        }
    }
    
    while(true) {
        come_poll  {
            a {
                int b = <-a;
                printf("get %d\n", b);
            }
            else {
                break;
            }
        }
    }
    
    come_join(thread_id);
    
    return 0;
}

