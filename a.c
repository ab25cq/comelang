#include <comelang.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char** argv)
{
    int fd = open("XXX"@file_name, O_WRONLY|O_CREAT@open_flag, 0644@permission).less {
        perror("open");
        exit(2);
        -1
    }
    write(fd, "ABC\n", 4@size).less {
        perror("write");
        exit(2);
    }

    close(fd).less {
        perror("close");
        exit(2);
    }

    return 0;
}
