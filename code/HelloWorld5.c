#include <comelang.h>

void fun(int@ pipe) 
{
    @pipe = 4;
}

void fun2(int@ pipe2)
{
    sleep(1);
    @pipe2 = 5;
}

int main() 
{
    int@ pipe;
    come fun(pipe);

    int@ pipe2;
    come fun2(pipe2);

    fd_set readfds;

    int max_fd;
    if(pipe[0] > pipe2[0]) {
        max_fd = pipe[0] + 1;
    }
    else {
        max_fd = pipe2[0] + 1;
    }

    FD_ZERO(&readfds);

    FD_SET(pipe[0], &readfds);
    FD_SET(pipe2[0], &readfds);

    int result = select(max_fd, &readfds, NULL, NULL, NULL);

    if(FD_ISSET(pipe[0], &readfds)) {
        printf("pipe %d\n", @pipe);
    }
    else if(FD_ISSET(pipe2[0], &readfds)) {
        printf("pipe2 %d\n", @pipe2);
    }

    come join;
    
    puts("finish");
    
    return 0;
}
