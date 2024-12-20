#include <comelang.h>
#include <comelang-str.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/user.h>
#include <unistd.h>
#include <errno.h>
#include <stdint.h>
header {#include <stdint.h>}
#include <libelf.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/signal.h>
#include <sys/fcntl.h>
#include <syscall.h>
#include <sys/syscall.h>
#include <sys/uio.h>  // PTRACE_GETREGSET
//#include <linux/ptrace.h> // NT_PRSTATUS
//#include <sys/user.h>  // user_regs_struct

map<string, void*>*% get_function_addr_from_elf_file(const char *filename) 
{
    map<string, void*>*% result = new map<string, void*>();
    
    auto command_line = s"nm \{filename}";
    
    var output = new buffer();
    
    char buf[BUFSIZ];
    
    FILE *fp = popen(command_line, "r");
    while(fgets(buf, BUFSIZ, fp) != NULL) {
        output.append_str(buf);
    }
    fclose(fp);
    
    output.to_string().split(/\n/).each {
        var colms = it.split(/ /);
        
        if(colms.length() == 3) {
            if(colms[1] === "T") {
                unsigned long long value;
                value = strtoull(colms[0], NULL, 16);
                result.insert(string(colms[2]), (void*)value);
            }
        }
    }

    return result;
}

#include <stdio.h>
#include <stdlib.h>
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/user.h>
#include <unistd.h>
#include <errno.h>

#define BREAKPOINT 0xd4200000  // ARM64 BRK命令

void set_breakpoint(pid_t pid, void *addr, uint32_t *original_data) {
    errno = 0;
    *original_data = ptrace(PTRACE_PEEKTEXT, pid, addr, NULL);
    if (errno != 0) {
        perror("ptrace PEEKTEXT");
        exit(EXIT_FAILURE);
    }

    // ブレークポイント命令（BRK）を設定
    uint32_t brk_instr = BREAKPOINT;
    ptrace(PTRACE_POKETEXT, pid, addr, (void *)(((*original_data & ~0xFFFFFFFF) | brk_instr)));
    if (errno != 0) {
        perror("ptrace POKETEXT");
        exit(EXIT_FAILURE);
    }
}

void remove_breakpoint(pid_t pid, void *addr, uint32_t original_data) {
    ptrace(PTRACE_POKETEXT, pid, addr, (void *)original_data);
    if (errno != 0) {
        perror("ptrace POKETEXT (restore)");
        exit(EXIT_FAILURE);
    }
}

void run_debugger(pid_t child_pid, void *func_addr) {
    int wait_status;

    // 子プロセスの停止を待機
    waitpid(child_pid, &wait_status, 0);
    int status;
    waitpid(child_pid, &status, 0);
    if (WIFSTOPPED(status)) {
        printf("Target process stopped. Proceeding with PEEKTEXT.\n");
    } else {
        fprintf(stderr, "Target process did not stop as expected.\n");
        exit(EXIT_FAILURE);
    }

    uint32_t original_data;
    set_breakpoint(child_pid, func_addr, &original_data);

    // 子プロセスを実行再開
    ptrace(PTRACE_CONT, child_pid, NULL, NULL);
    waitpid(child_pid, &wait_status, 0);

    if (WIFSTOPPED(wait_status) && WSTOPSIG(wait_status) == SIGTRAP) {
        printf("Hit breakpoint at address %p\n", func_addr);
    }

    // ブレークポイントを解除
    remove_breakpoint(child_pid, func_addr, original_data);

    // 子プロセスを終了まで実行
    ptrace(PTRACE_CONT, child_pid, NULL, NULL);
    waitpid(child_pid, &wait_status, 0);

    printf("Target program finished.\n");
}

void run_target(const char *target_program) {
    if (ptrace(PTRACE_TRACEME, 0, NULL, NULL) == -1) {
        perror("ptrace TRACEME");
        exit(EXIT_FAILURE);
    }
    execl(target_program, target_program, NULL);
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        fprintf(stderr, "Usage: %s <program> <function_address_in_hex>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    const char *program = argv[1];
    void *func_addr = (void *)strtoull(argv[2], NULL, 16);

    pid_t child_pid = fork();
    if (child_pid == 0) {
        // 子プロセスをターゲットプログラムとして実行
        run_target(program);
    } else if (child_pid > 0) {
        // 親プロセスでデバッガを実行
        run_debugger(child_pid, func_addr);
    } else {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        fprintf(stderr, "Usage: %s <program> <function_name>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    
    var addrs = get_function_addr_from_elf_file(string(argv[1]));
    
    var output = new buffer();
    {
        var command_line = s"cat /proc/\{xsprintf("%d", getpid())}/maps";
        
        char buf[BUFSIZ];
        
        FILE *fp = popen(command_line, "r");
        while(fgets(buf, BUFSIZ, fp) != NULL) {
            output.append_str(buf);
        }
        fclose(fp);
    }
    
    var colum = output.to_string().split(/ /)[0].scan(/(.+)-(.+)/)[1].puts();
    unsigned long long base_address = strtoull(colum, NULL, 16);
    
printf("proc %lx\n", base_address);
    
    var output = new buffer();
    {
        var command_line = s"readelf -h \{string(argv[1])}";
        
        char buf[BUFSIZ];
        
        FILE *fp = popen(command_line, "r");
        while(fgets(buf, BUFSIZ, fp) != NULL) {
            output.append_str(buf);
        }
        fclose(fp);
    }
    
    unsigned long long entry_point;
    char* colum = output.to_string().scan(/Entry point address:\s*(.*)/)[1].puts();
    entry_point = strtoull(colum, NULL, 16);
printf("elf entry_point %lx\n", entry_point);

    char *program = argv[1];
    void *func_addr = (void*)((unsigned long)(addrs[string(argv[2])]) - (unsigned long)base_address + entry_point);
    
printf("addr %lx\n", addrs[string(argv[2])]);
printf("func_addr %lx\n", func_addr);

    pid_t child_pid = fork();
    if (child_pid == 0) {
        // 子プロセスをターゲットプログラムとして実行
        run_target(program);
    } else if (child_pid > 0) {
        // 親プロセスでデバッガを実行
        run_debugger(child_pid, func_addr);
    } else {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    return 0;
}

