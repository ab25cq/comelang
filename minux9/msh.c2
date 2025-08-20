#include <stdint.h>
#include <stdarg.h>
#include "minux.h"

char* strncpy(char *s, const char *t, int n) {
  char *os;

  os = s;
  while(n-- > 0 && (*s++ = *t++) != 0)
    ;
  while(n-- > 0)
    *s++ = 0;
  return os;
}

void putchar(char c)
{
    char buf[2];
    buf[0] = c;
    buf[1] = '\0';
    write(1, buf, 1);
}

void printint(int val_, int base, int sign) {
    char buf[33];  
    int i = 0;
    int negative = 0;
    unsigned int uval;

    if (sign && val_ < 0) {
        negative = 1;
        uval = -val_;
    } else {
        uval = (unsigned int)val_;
    }

    if (uval == 0) {
        putchar('0');
        return;
    }

    while (uval > 0) {
        int digit = uval % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        uval /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

void printlong(unsigned long val_, int base, int sign)  {
    char buf[65];  
    int i = 0;
    int negative = 0;

    if (sign && (long)val_ < 0) {
        negative = 1;
        val_ = -(long)val_;
    }

    if (val_ == 0) {
        putchar('0');
        return;
    }

    while (val_ > 0) {
        int digit = val_ % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        val_ /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

void printlonglong(unsigned long long val_, int base, int sign)  {
    char buf[65];
    int i = 0;
    int negative = 0;

    if (sign && (long long)val_ < 0) {
        negative = 1;
        val_ = -(long long)val_;
    }

    if (val_ == 0) {
        putchar('0');
        return;
    }

    while (val_ > 0) {
        int digit = val_ % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        val_ /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

int printf(const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);

    const char* p;
    for (p = fmt; *p; p++) {
        if (*p != '%') {
            putchar(*p);
            continue;
        }

        p++; 

        if (*p == 'l') {
            int lcount = 1;
            if (*(p+1) == 'l') {
                lcount = 2;
                p++;
            }
            p++;

            switch (*p) {
                case 'x': {
                    if (lcount == 1) {
                        unsigned long val_ = va_arg(ap, unsigned long);
                        printlong(val_, 16, 0);
                    } else {
                        unsigned long long val_ = va_arg(ap, unsigned long long);
                        printlonglong(val_, 16, 0);
                    }
                    break;
                }
                case 'd': {
                    if (lcount == 1) {
                        long val_ = va_arg(ap, long);
                        printlong(val_, 10, 1);
                    } else {
                        long long val_ = va_arg(ap, long long);
                        printlonglong(val_, 10, 1);
                    }
                    break;
                }
                default: {
                    putchar('%');
                    for (int i=0; i<lcount; i++) putchar('l');
                    putchar(*p);
                    break;
                }
            }
        } else {
            switch (*p) {
                case 'd': {
                    int val_ = va_arg(ap, int);
                    printint(val_, 10, 1);
                    break;
                }
                case 'x': {
                    unsigned int val_ = va_arg(ap, unsigned int);
                    printint(val_, 16, 0);
                    break;
                }
                case 'p': {
                    unsigned long val_ = (unsigned long)va_arg(ap, void*);
                    putchar('0'); putchar('x');
                    printlong(val_, 16, 0);
                    break;
                }
                case 's': {
                    const char* s = va_arg(ap, const char*);
                    if (!s) s = "(null)";
                    while (*s) putchar(*s++);
                    break;
                }
                case 'c': {
                    char c = (char)va_arg(ap, int);
                    putchar(c);
                    break;
                }
                case '%': {
                    putchar('%');
                    break;
                }
                default: {
                    putchar('%');
                    putchar(*p);
                    break;
                }
            }
        }
    }

    va_end(ap);
    return 0;
}

#define BUF_SIZE 64

void puts(const char *s) {
    while (*s) {
        putchar(*s++);
    }
}


/*
int main(void) {
    int fd[2];
    pid_t pid1, pid2;
    char buf[4];
    int status;

    pipe(fd);
    
    pid1 = fork();
    if (pid1 == 0) {
        close(fd[0]);
        dup2(fd[1], 1);
        close(fd[1]);
        
        char* argv[] = { "/hello.elf", "aaa", "bbb", (void*)0 };

        execv("/hello.elf", (void*)argv);
        exit(6);
    }
    

    pid2 = fork();
    if (pid2 == 0) {
        dup2(fd[0], 0);
        close(fd[1]);               // 書き側は不要
        close(fd[0]);
        
        char* argv[] = { "/hello2.elf", "aaa", "bbb", (void*)0 };

        execv("/hello2.elf", (void*)argv);
        exit(6);
    }
    
    status = 0;
    wait(&status);
    status = 0;
    wait(&status);

    // 親プロセスはパイプを閉じて子の終了を待つ
    close(fd[0]);
    close(fd[1]);
    while(1);

    return 0;
}
*/

#define MAX_ARGV 3
#define MAX_ARG 16
#define MAX_COMMAND 5

struct sCommand
{
    char argv[MAX_ARGV][MAX_ARG];
    int num_arg;
};

int run_command(int n, struct sCommand* commands, int num_commands)
{
    int pipes[2] = { 0, 0 };
    
    struct sCommand* command = commands + n;
    
    if(n == num_commands-1) {
        char* argv[MAX_ARGV];
        int j;
        for(j=0; j<command->num_arg; j++) {
           argv[j] = command->argv[j];
        }
        argv[j] = (void*)0;
        
        execvp(argv[0], argv);
        exit(127);
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
            close(pipes[0]);
            dup2(pipes[1], 1);
            close(pipes[1]);
            
            char* argv[MAX_ARGV];
            int j;
            for(j=0; j<command->num_arg; j++) {
               argv[j] = command->argv[j];
            }
            argv[j] = (void*)0;
            
            execvp(argv[0], argv);
            exit(127);
        }
    }
    
    return 1;
}

int main(void) {
    char buf[BUF_SIZE];
    long n;
    char buf2[2];
    pid_t pid;
    int argc;
    int status;
    
    for (;;) {
        //write(1, "\r\n", 2);
        // プロンプト
        write(1, "$ ", 2);
        
        // キーボードから１行読み込み（改行込み）
        
        n = 0;
        while(1) {
            read(0, buf2, 1);
            write(1, buf2, 1);
            
            // バックスペース or DEL?
            if ((buf2[0] == '\b' || buf2[0] == 127) && n > 0) {
                // バッファ末尾をひとつ取り除く
                n--;
                buf[n] = '\0';
                // 画面上の文字を消す: "\b \b"
                write(1, "\b \b", 3);
            }
            else if(buf2[0] == '\r') {
                break;
            }
            else if(buf2[0] == '\n') {
                break;
            }
            else {
                buf[n] = buf2[0];
                n++;
            }
        }
        
        write(1, "\r\n", 2);
        
        if(buf[0] == '\0') {
            continue;
        }
        
        struct sCommand commands[MAX_COMMAND];
        
        int num_commands = 0;
        int num_arg = 0;
        char* p = buf;
        n = 0;
        
        while(1) {
            if(*p == '|') {
                p++;
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
                
                commands[num_commands].argv[num_arg][n] = '\0';
                commands[num_commands].num_arg = num_arg;
            
                num_commands++;
                n = 0;
                num_arg = 0;
                
                if(num_commands >= MAX_COMMAND) {
                    puts("ERR MAX COMMAND");
                    break;
                }
            }
            else if(*p == ' ' || *p == '\t') {
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
                commands[num_commands].argv[num_arg][n] = '\0';
                num_arg++;
                n = 0;
                
                if(num_arg >= MAX_ARGV) {
                    puts("ARG NUM ERROR");
                    break;
                }
            }
            else if(*p == '\0') {
                commands[num_commands].argv[num_arg][n] = '\0';
            
                num_arg++;
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
    
        pid_t pid = fork();
        
        if(pid == 0) {
            run_command(0, commands, num_commands);
        }
        else {
            for(int k=0; k<num_commands; k++) {
                int status;
                wait(&status);
            }
        }
    }
    
    return 0;
}
