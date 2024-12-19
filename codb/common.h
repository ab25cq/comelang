#ifndef __COMMON_H__
#define __COMMON_H__
#include <comelang.h>
map<string, void*>*% get_function_addr_from_elf_file(const char *filename);
void run_target(char* target_program);
void run_debugger(pid_t child_pid, void *func_addr);
int main(int argc, char **argv);


#endif
