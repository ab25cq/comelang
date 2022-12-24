#include <neo-c.h>

void fun(int@ pipe) 
{
    @pipe = 4;
}

void fun2(int@ pipe2)
{
    @pipe2 = 5;
}

int main() 
{
    int@ pipe;
    come fun(pipe);

    int@ pipe2;
    come fun2(pipe2);

    come select {
        pipe {
            printf("pipe %d\n", @pipe);
        }

        pipe2 {
            printf("pipe2 %d\n", @pipe2);
        }
    }

    come join;
    
    puts("finish");
    
    return 0;
}
