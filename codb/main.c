#include <comelang.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/user.h>
#include <unistd.h>
#include <errno.h>
#include <libdwarf/libdwarf.h>
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
#include <errno.h>

map<string, void*>*% get_function_addr_from_elf_file(const char *filename) 
{
    map<string, void*>*% result = new map<string, void*>();
    int fd = open(filename, O_RDONLY);
    if (fd < 0) {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }

    Elf *elf;
    if (elf_version(EV_CURRENT) == EV_NONE) {
        fprintf(stderr, "ELF library initialization failed\n");
        exit(EXIT_FAILURE);
    }

    elf = elf_begin(fd, ELF_C_READ, NULL);
    if (!elf) {
        fprintf(stderr, "elf_begin() failed\n");
        exit(EXIT_FAILURE);
    }

    Dwarf_Debug dbg;
    Dwarf_Error err;
    if (dwarf_elf_init(elf, DW_DLC_READ, NULL, NULL, &dbg, &err) != DW_DLV_OK) {
        fprintf(stderr, "dwarf_elf_init() failed: %s\n", dwarf_errmsg(err));
        exit(EXIT_FAILURE);
    }

    Dwarf_Unsigned cu_header_length, abbrev_offset, next_cu_header;
    Dwarf_Half version_stamp, address_size;
    Dwarf_Error error;
    while (dwarf_next_cu_header(dbg, &cu_header_length, &version_stamp,
                                &abbrev_offset, &address_size, &next_cu_header, &error) == DW_DLV_OK) {
        Dwarf_Die no_die = 0, cu_die;
        if (dwarf_siblingof(dbg, no_die, &cu_die, &error) == DW_DLV_OK) {
            Dwarf_Die child_die;
            if (dwarf_child(cu_die, &child_die, &error) == DW_DLV_OK) {
                Dwarf_Die current_die = child_die;
                do {
                    char *die_name;
                    Dwarf_Addr low_pc;
                    if (dwarf_diename(current_die, &die_name, &error) == DW_DLV_OK) {
                        if (dwarf_lowpc(current_die, &low_pc, &error) == DW_DLV_OK) {
                            result.insert(string(die_name), low_pc);
                        }
                    }
                } while (dwarf_siblingof(dbg, current_die, &current_die, &error) == DW_DLV_OK);
            }
        }
    }

    dwarf_finish(dbg, &err);
    elf_end(elf);
    close(fd);

    return result;
}

void run_target(char* target_program) 
{
    if (ptrace(PTRACE_TRACEME, 0, NULL, NULL) == -1) {
        perror("ptrace");
        exit(1);
    }
    execl(target_program, s"./\{target_program}", NULL);
}

void run_debugger(pid_t child_pid, void *func_addr) {
    int wait_status;
    struct user_regs_struct regs;


    waitpid(child_pid, &wait_status, 0);


    printf("Setting breakpoint at address %p\n", func_addr);
    long original_data = ptrace(PTRACE_PEEKTEXT, child_pid, func_addr, NULL);
    if (errno != 0) {
        perror("ptrace PEEKTEXT");
        exit(1);
    }


    ptrace(PTRACE_POKETEXT, child_pid, func_addr, (original_data & ~0xFF) | 0xCC);


    ptrace(PTRACE_CONT, child_pid, NULL, NULL);


    waitpid(child_pid, &wait_status, 0);
    if (WIFSTOPPED(wait_status) && WSTOPSIG(wait_status) == SIGTRAP) {
        printf("Hit breakpoint at address %p\n", func_addr);


        ptrace(PTRACE_GETREGS, child_pid, NULL, &regs);
        printf("RIP = 0x%llx\n", regs.rip);


        ptrace(PTRACE_POKETEXT, child_pid, func_addr, original_data);


        regs.rip -= 1;
        ptrace(PTRACE_SETREGS, child_pid, NULL, &regs);


        ptrace(PTRACE_SINGLESTEP, child_pid, NULL, NULL);
        waitpid(child_pid, &wait_status, 0);
    }


    ptrace(PTRACE_CONT, child_pid, NULL, NULL);
    waitpid(child_pid, &wait_status, 0);
    printf("Target program finished.\n");
}

int main(int argc, char **argv) {
    if(argc == 3) {
        string program_name = string(argv[1]);
        var addrs = get_function_addr_from_elf_file(program_name);

        string func_name = string(argv[2]);
    
        pid_t child_pid;
        void (*func_ptr)() = addrs[func_name]??;


        child_pid = fork();
        if (child_pid == 0) {
            run_target(rogrm
        } else if (child_pid > 0) {
            run_debugger(child_pid, func_addr);
        } else {
            perror("fork");
            return 1;
        }
    }

    return 0;
}

