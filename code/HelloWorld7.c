#include <comelang.h>

void fun(int@ pipe) 
{
    sleep(3);
    @pipe = 4; `writing_channel
    sleep(3);
    @pipe = 4;
    sleep(3);
    @pipe = 4;
}

void fun2(int@ pipe2)
{
    sleep(1);
    @pipe2 = 5;
    sleep(1);
    @pipe2 = 5;
    sleep(1);
    @pipe2 = 5;
}

int main() 
{
    int@ pipe;
    come fun(pipe`channel);

    int@ pipe2;
    come fun2(pipe2);

    int count = 0;
    while(true) {
        come pselect {
            pipe {
                printf("pipe %d\n", @pipe);
                count++;
            }

            pipe2 {
                printf("pipe2 %d\n", @pipe2);
                count++;
            }

            default {
                if(count == 6) {
                    break;
                }
            }
        }
    }

    come join;
    
    puts("finish");
    
    return 0;
}
