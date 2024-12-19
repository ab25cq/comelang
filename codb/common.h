#ifndef __COMMON_H__
#define __COMMON_H__
#include <comelang.h>
map<string, void*>*% get_function_addr_from_elf_file(const char *filename);
void set_breakpoint(pid_t child_pid, void *addr, uint32_t *original_data);
void remove_breakpoint(pid_t child_pid, void *addr, uint32_t original_data);
void get_registers(pid_t child_pid, struct iovec *iov);
void set_registers(pid_t child_pid, struct iovec *iov);
void run_debugger(pid_t child_pid, void *func_addr);
void run_target(char* target_program);
int main(int argc, char *argv[]);
void run_target(char* target_program);
void run_debugger(pid_t child_pid, void *func_addr);
int main(int argc, char **argv);


#endif
