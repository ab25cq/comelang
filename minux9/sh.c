#include <stdint.h>
#include <stdarg.h>
#include "minux.h"

static const char* s_strchr(const char* s, int ch) {
    while (*s) { if (*s == (char)ch) return s; s++; }
    return NULL;
}

#define BUF_SIZE 64

static char g_cmdline[BUF_SIZE];

int xisalpha(char c)
{
    int result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

int xisblank(char c)
{
    return c == ' ' || c == '\t';
}

int xisdigit(char c)
{
    return (c >= '0' && c <= '9');
}

int xisalnum(char c)
{
    return xisalpha(c) || xisdigit(c);
}

// minimal helper: check if a path is an existing directory
static int isdir(const char* path) {
    int fd = opendir(path);
    if (fd >= 0) { closedir(fd); return 1; }
    return 0;
}



#define MAX_ARGV 32
#define MAX_ARG 32
#define MAX_COMMAND 16

#define PATH_MAX 32

struct sCommand
{
    char argv[MAX_ARGV][MAX_ARG];
    int num_arg;
    char redirect_file[PATH_MAX];
    int redirect_append;
};

int shell_pgrp;

int run_command(int n, struct sCommand* commands, int num_commands)
{
    int pipes[2] = { 0, 0 };
    
    struct sCommand* command = commands + n;
    
    if(n == num_commands-1) {
        tcsetpgrp(0, shell_pgrp);
        char* argv[MAX_ARGV];
        int j;
        for(j=0; j<command->num_arg; j++) {
           argv[j] = command->argv[j];
        }
        argv[j] = (void*)0;

        char envbuf[BUF_SIZE + 16];
        int ei = 0;
        const char* prefix = "MINUX_CMDLINE=";
        for (int k=0; prefix[k]; k++) envbuf[ei++] = prefix[k];
        for (int k=0; g_cmdline[k] && ei < (int)sizeof(envbuf)-1; k++) envbuf[ei++] = g_cmdline[k];
        envbuf[ei] = '\0';
        char* envp[2]; envp[0] = envbuf; envp[1] = 0;
        
        if(command->redirect_file[0] != '\0') {
            int fd;
            if(command->redirect_append) {
                fd = open(command->redirect_file, O_APPEND|O_WRONLY|O_CREAT, 0644);
            }
            else {
                fd = open(command->redirect_file, O_WRONLY|O_CREAT|O_TRUNC, 0644);
            }
            
            if(fd < 0) {
                puts("REDIRECT WRITE FILE CAN'T BE OPENED");
                exit(1);
            }
            
            dup2(fd, 1);
            close(fd);
        }
        
        // Try exec as given; if no slash and fails, try "/cmd"
        execve(argv[0], argv, envp);
        if (argv[0] && argv[0][0] && !s_strchr(argv[0], '/')) {
            char abuf[64];
            abuf[0] = '/';
            int i=0; while (argv[0][i] && i < (int)sizeof(abuf)-2) { abuf[i+1] = argv[0][i]; i++; }
            abuf[i+1] = '\0';
            argv[0] = abuf; // safe: we exit on failure anyway
            execve(argv[0], argv, envp);
        }
        exit(126);
    }
    else {
        pipe(pipes);

        int pid = fork();

        if(pid == 0) {
            close(pipes[1]);
            dup2(pipes[0], 0);
            close(pipes[0]);
            run_command(n+1, commands, num_commands);
        }
        else {
            tcsetpgrp(0, shell_pgrp);
            close(pipes[0]);
            dup2(pipes[1], 1);
            close(pipes[1]);
            
            char* argv[MAX_ARGV];
            int j;
            for(j=0; j<command->num_arg; j++) {
               argv[j] = command->argv[j];
            }
            argv[j] = (void*)0;
            
            char envbuf[BUF_SIZE + 16];
            int ei = 0;
            const char* prefix = "MINUX_CMDLINE=";
            for (int k=0; prefix[k]; k++) envbuf[ei++] = prefix[k];
            for (int k=0; g_cmdline[k] && ei < (int)sizeof(envbuf)-1; k++) envbuf[ei++] = g_cmdline[k];
            envbuf[ei] = '\0';
            char* envp[2]; envp[0] = envbuf; envp[1] = 0;

            execve(argv[0], argv, envp);
            if (argv[0] && argv[0][0] && !s_strchr(argv[0], '/')) {
                char abuf[64];
                abuf[0] = '/';
                int i=0; while (argv[0][i] && i < (int)sizeof(abuf)-2) { abuf[i+1] = argv[0][i]; i++; }
                abuf[i+1] = '\0';
                argv[0] = abuf;
                execve(argv[0], argv, envp);
            }
            exit(126);
        }
    }
    
    return 1;
}

int main(int argc, char** argv) {
    char buf[BUF_SIZE];
    
    long n;
    char buf2[2];
    pid_t pid;
    int status;
    
    struct sCommand commands[MAX_COMMAND];
    int num_commands;
    int num_arg;
    char* p;
    int m = 0;
    int i;
    
    buf[0] = '\0';
    
    int run_once = 0;
    for(i=1; i<argc; i++) {
        if(strcmp(argv[i], "-c") == 0) {
            run_once = 1;
        }
        else if(run_once) {
            strncat(buf, argv[i], BUF_SIZE);
            strncat(buf, " ", BUF_SIZE);
        }
    }
    
    for (;;) {
        char* cmdline = NULL;
        if(run_once == 0) {
            cmdline = readline("$ ");
            
            strncpy(buf, cmdline, BUF_SIZE);
        }
        
        // save whole command line into global for MINUX_CMDLINE
        int gi = 0; while (buf[gi] && gi < BUF_SIZE-1) { g_cmdline[gi] = buf[gi]; gi++; } g_cmdline[gi] = '\0';
        
        if(buf[0] == '\0') {
            continue;
        }
        
        num_commands = 0;
        num_arg = 0;
        p = buf;
        n = 0;
        
        commands[num_commands].redirect_file[0] = '\0'; 
        
        while(1) {
            if(*p == '|') {
                // finalize pending token before pipe
                if(n > 0) {
                    commands[num_commands].argv[num_arg][n] = '\0';
                    num_arg++;
                    if(num_arg >= MAX_ARGV) {
                        puts("ARG NUM ERROR");
                        break;
                    }
                }
                p++;
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
                commands[num_commands].num_arg = num_arg;
            
                num_commands++;
                n = 0;
                num_arg = 0;
                // reset redirect target for the next command
                commands[num_commands].redirect_file[0] = '\0';
                
                if(num_commands >= MAX_COMMAND) {
                    puts("ERR MAX COMMAND");
                    break;
                }
            }
            else if(*p == '>' && *(p+1) != '>') {
                // finalize pending token before redirection
                if(n > 0) {
                    commands[num_commands].argv[num_arg][n] = '\0';
                    num_arg++;
                    if(num_arg >= MAX_ARGV) {
                        puts("ARG NUM ERROR");
                        break;
                    }
                    n = 0;
                }
                p++;
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
                
                int i = 0;
                // allow common filename characters
                while(xisalnum(*p) || *p == '.' || *p == '_' || *p == '-' || *p == '/') {
                    commands[num_commands].redirect_file[i++] = *p++;
                    
                    if(i-1 >= PATH_MAX) {
                        puts("FILE NAME IS TOO LONG");
                        exit(2);
                    }
                }
                commands[num_commands].redirect_file[i] = '\0';
                commands[num_commands].redirect_append = 0;
                
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
            }
            else if(*p == '>' && *(p+1) == '>') {
                // finalize pending token before redirection
                if(n > 0) {
                    commands[num_commands].argv[num_arg][n] = '\0';
                    num_arg++;
                    if(num_arg >= MAX_ARGV) {
                        puts("ARG NUM ERROR");
                        break;
                    }
                    n = 0;
                }
                // consume both '>' characters for append redirection
                p += 2;
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
                
                int i = 0;
                // allow common filename characters
                while(xisalnum(*p) || *p == '.' || *p == '_' || *p == '-' || *p == '/') {
                    commands[num_commands].redirect_file[i++] = *p++;
                    
                    if(i-1 >= PATH_MAX) {
                        puts("FILE NAME IS TOO LONG");
                        exit(2);
                    }
                }
                commands[num_commands].redirect_file[i] = '\0';
                commands[num_commands].redirect_append = 1;
                
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
            }
            else if(*p == ' ' || *p == '\t') {
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
                if(n > 0) {
                    commands[num_commands].argv[num_arg][n] = '\0';
                    num_arg++;
                    n = 0;
                    if(num_arg >= MAX_ARGV) {
                        puts("ARG NUM ERROR");
                        break;
                    }
                }
                
            }
            else if(*p == '\0') {
                // Finalize the last token only if there is one
                if (n > 0) {
                    commands[num_commands].argv[num_arg][n] = '\0';
                    num_arg++;
                    n = 0;
                }

                commands[num_commands].num_arg = num_arg;
                num_commands++;
                break;
            }
            else {
                commands[num_commands].argv[num_arg][n] = *p;
                p++;
                n++;
                
                if(n >= MAX_ARG) {
                    puts("ERR ARG NUM");
                    break;
                }
            }
        }
    
        // built-in: cd [DIR]
        if (num_commands == 1 && commands[0].num_arg >= 1 && strcmp(commands[0].argv[0], "cd") == 0) {
            const char* target = "/";
            if (commands[0].num_arg >= 2 && commands[0].argv[1][0]) {
                target = commands[0].argv[1];
            }
            int rc = chdir(target);
            if (rc < 0) {
                puts("cd: failed\n");
            }
            continue;
        }
        
        shell_pgrp = getpid();
        tcsetpgrp(0, shell_pgrp);

        pid = fork();
        
        if(pid == 0) {
            tcsetpgrp(0, shell_pgrp);
            run_command(0, commands, num_commands);
        }
        else {
            for(int k=0; k<num_commands; k++) {
                int status;
                wait(&status);
                printf("=> %d\r\n", status);
            }
        }
        
        if(cmdline) {
            free(cmdline);
        }
        
        if(run_once) {
            exit(0);
        }
    }
    
    exit(0);
}
