#define EOF (-1)

#define SYS_write 64
#define SYS_read 65
#define SYS_open 66
#define SYS_close 67
#define SYS_fork 68
#define SYS_execv 69
#define SYS_exit 70
#define SYS_wait 71
#define SYS_dup2 72
#define SYS_pipe 73
#define SYS_brk 74
#define SYS_clear 75
#define SYS_opendir 76
#define SYS_readdir 77
#define SYS_closedir 78
#define SYS_getcwd 79
#define SYS_chdir 80
#define SYS_mkdir 81
#define SYS_rmdir 82
#define SYS_unlink 83
#define SYS_rename 84
#define SYS_link   85
#define SYS_symlink 86
#define SYS_stat    87
#define SYS_readlink 88
#define SYS_lstat   89
#define SYS_chmod   90
#define SYS_chown   91

void write(int fd, char* buf, long len)
{
    int arg_fd = fd;
    char* arg_buf = buf;
    long arg_len = len;
    
    asm ("li a7, 64\nmv a0, %0\nmv a1, %1\nmv a2, %2\necall\n"
         
         , arg_fd, arg_buf, arg_len);
}

void exit(int status)
{
    int arg_status = status;
    asm ("li a7, 70\nmv a0, %0\necall\n"
         , arg_status);
}

