#include <neo-c.h>

void fun(int@ pipe) 
{
    @pipe = 1;
}

/*
void fun2(int@ pipe2)
{
    @pipe2 = 5;
    @pipe2 = 5;
    @pipe2 = 5;
}
*/

int main() 
{
/*
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
    
    int count = 0;
    max_fd = pipe[0] + 1;

    while(1) {
        FD_ZERO(&readfds);
    
        FD_SET(pipe[0], &readfds);
        FD_SET(pipe2[0], &readfds);
        
        timeval tv;
        tv.tv_sec = 0;
        tv.tv_usec = 0;
        int result = select(max_fd, &readfds, NULL, NULL, &tv);
    
        if(FD_ISSET(pipe[0], &readfds)) {
            printf("pipe %d\n", @pipe);
            count++;
        }
        else if(FD_ISSET(pipe2[0], &readfds)) {
            printf("pipe %d\n", @pipe2);
            count++;
        }
        else {
            if(count == 6) {
                break;
            }
        }
    }

    printf("%d\n", @pipe);
    printf("%d\n", @pipe);
    printf("%d\n", @pipe);

    come join;
    
    puts("finish");
*/
    
    return 0;
}
