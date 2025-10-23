#ifndef COMMON_H
#define COMMON_H

#include <stdarg.h>
#include <stdint.h>
#include <stddef.h>
#include "minux.h"
#include "elf.h"

#define nullptr ((void*)0)
#define NULL ((void*)0)

typedef unsigned long size_t;
typedef int32_t ssize_t;
typedef long ptrdiff_t;
typedef int pid_t;

#define MAX_OPEN_FILES 32

typedef uint64_t pte_t;
typedef uint64_t pde_t;
typedef pte_t* pagetable_t; // 512

extern pagetable_t kernel_pagetable;

struct context_t {
    uint64_t ra;
    uint64_t sp;
    uint64_t gp;
    uint64_t tp;
    uint64_t t0;
    uint64_t t1;
    uint64_t t2;
    uint64_t t3;
    uint64_t t4;
    uint64_t t5;
    uint64_t t6;
    uint64_t a0;
    uint64_t a1;
    uint64_t a2;
    uint64_t a3;
    uint64_t a4;
    uint64_t a5;
    uint64_t a6;
    uint64_t a7;
    uint64_t s0;
    uint64_t s1;
    uint64_t s2;
    uint64_t s3;
    uint64_t s4;
    uint64_t s5;
    uint64_t s6;
    uint64_t s7;
    uint64_t s8;
    uint64_t s9;
    uint64_t s10;
    uint64_t s11;
    uint64_t mepc;
};

struct file;

#define NUM_PROC_VA_MAX 512

struct process_pages
{
    char** process_kalloc_address;
    int num_process_kalloc_address;
};

struct proc {
    struct context_t trapframe;
    
    struct context_t context;      // swtch() here to run process
    struct proc *parent;         // Parent process
    int parent_pid;         // Parent process
//    char* stack;
    char* stack_top;
    uint64_t vaddr;
    uint64_t memsz;
    uint64_t sz; // Size of process memory (program break)
    
    int zombie; 
    
    pagetable_t pagetable;
    
    char* program;
    int program_size;
    int xstatus;                // exit
    
    struct file* file_table[MAX_OPEN_FILES];
    
    struct process_pages** process_pages;
    int num_process_pages;
    
    int deleted;

    struct proc* next;

    // current working directory (absolute path)
    char cwd[128];
    unsigned short umask; // creation mask (e.g., 0022)

    // credentials
    uint16_t uid;
    uint16_t gid;
    uint16_t pgrp;
    uint16_t supp_gids[8];
    int nsupp;
    char username[32];
};

// ── パイプ本体 ─────────────────────────────────────────────────────────
#define PIPE_SIZE 512

#define PIPE_LINKED_MAX 32

struct file;

struct spipe {
    char data[PIPE_SIZE];      // リングバッファ
    uint32_t nread;            // 読み出し済バイト数
    uint32_t nwrite;           // 書き込み済バイト数
    int read_open;             // 読み側 open フラグ
    int write_open;            // 書き側 open フラグ
    int nreader;
    int nwriter;
    int used;
    
    struct file* linked_file[PIPE_LINKED_MAX];
    int num_linked_file;
    
    struct spipe* free_next;
};

// ファイルテーブルエントリ
struct proc;

#define PROC_MAX 128

struct file {
    enum { FK_STDIN, FK_STDOUT, FK_STDERR, FK_FILE, FK_PIPE, FK_TTY } kind;
    uint32_t inum;        // inode 番号
    struct dinode din;     // on-disk inode 情報
    uint32_t off;         // 現在の読み込みオフセット
    int used;             // 使用フラグ
    struct spipe* pipe;
    int pipe_used;
    int read_pipe;
    int write_pipe;
    
    // open() flags (subset) for this file; used for behavior like O_TRUNC
    int oflags;
    
    struct file* free_next;
    
    struct proc* owner_processes[PROC_MAX];
    int num_owner_process;
};

int fs_open(const char *path);
// New open with flags/mode
int fs_open2(const char *path, int flags, int mode);
ssize_t fs_read(int fd, void *buf, size_t count);
ssize_t fs_write(int fd, const void *buf, size_t count);
int fs_close(long fd, int massive);
int fs_mkdir(const char *path, int mode);
int fs_rmdir(const char *path);
int fs_unlink(const char *path);
int fs_link(const char *oldpath, const char *newpath);
int fs_symlink(const char *target, const char *linkpath);
int fs_stat(const char *path, struct stat *st);
int fs_readlink(const char *path, char *buf, int bufsz);
int fs_lstat(const char *path, struct stat *st);
int fs_chmod(const char *path, uint32_t mode);
int fs_chown(const char *path, uint16_t uid, uint16_t gid);
int fs_realpath(const char *path, char *out, int outsz);
int fs_rename(const char *oldpath, const char *newpath);
int fs_utimes(const char *path, uint32_t atime, uint32_t mtime);


int is_pipe(int fd);
int is_stdin(int fd);
int is_stdout(int fd);
int is_tty(int fd);

void pipe_open(int* fd1, int* fd2);
int piperead(int fd, char *addr, int n);
int pipewrite(int fd, char *addr, int n);
void fs_dup2(int oldfd, int newfd);

void fs_init(struct file** file_table);
struct file** get_current_file_table();
void fs_dup_table(struct proc* owner, struct file** result, struct file** orig);
ssize_t fs_size(int fd);
void fs_exit(struct file** file_table);
void free_fs_table(struct file** file_table);

void file_system_init();

extern struct proc* gProc[PROC_MAX];

extern int gActiveProc;

#ifndef O_RDONLY
#define O_RDONLY 0
#endif
#ifndef O_WRONLY
#define O_WRONLY 1
#endif
#ifndef O_RDWR
#define O_RDWR 2
#endif
#ifndef O_CREAT
#define O_CREAT  (1<<9)
#endif
#ifndef O_TRUNC
#define O_TRUNC  (1<<10)
#endif
#ifndef O_APPEND
#define O_APPEND (1<<11)
#endif

void *malloc(size_t size);
void free(void *ptr);
void* memset(void *dst, int c, unsigned int n);
void *calloc(size_t nmemb, size_t size);
int strlen(const char *s);
void* memcpy(void *dst, const void *src, unsigned int n);
char* strdup(const char* s);
int strcmp(const char* s1, const char* s2);
char* strstr(const char* haystack, const char* needle);
void* memset(void *dst, int c, unsigned int n);
int memcmp(const void *v1, const void *v2, unsigned int n);
void* memmove(void *dst, const void *src, unsigned int n);
void* memcpy(void *dst, const void *src, unsigned int n);
int strncmp(const char *p, const char *q, unsigned int n);
char* strncpy(char *s, const char *t, int n);
int strlen(const char *s);
void puts(const char *s);
char* strncat(char* dest, const char* src, size_t n);
char* strchr(const char* s, int c);
char *strtok(char *s, const char *delim);
void exit(int n);
char* itoa(char* buf, unsigned long val_, int base, int is_signed);
int vasprintf(char** out, const char* fmt, va_list ap);
int snprintf(char* out, unsigned long out_size, const char* fmt, ...);
void printint(int val_, int base, int sign);
void printlong(unsigned long val_, int base, int sign);
void printlonglong(unsigned long long val_, int base, int sign);
int printf(const char* fmt, ...);
void* sbrk(ptrdiff_t incr);
int Sys_execve();
int Sys_getpid();
int Sys_tcsetpgrp();
int Sys_fstat();
int Sys_lseek();
int Sys_execv();
int Sys_fork();
int Sys_closedir();
int Sys_readdir();
int Sys_realpath();
int Sys_setgid();
int Sys_setuid();
int Sys_getuid();
int Sys_getgid();
int Sys_gettimeofday();
int Sys_umask();
int Sys_utimes();
int Sys_settimeofday();
int Sys_chmod();
int Sys_lstat();
int Sys_readlink();
int Sys_write();
int Sys_exit();
int Sys_wait();
int Sys_isatty();
int Sys_open();
int Sys_opendir();
int Sys_getcwd();
int Sys_chdir();
int Sys_mkdir();
int Sys_rmdir();
int Sys_unlink();
int Sys_rename();
int Sys_link();
int Sys_symlink();
int Sys_stat();
int Sys_chown();
int Sys_pipe(void);
int Sys_read();
int Sys_dup2(void);
int Sys_pipe(void);
int Sys_brk();
int Sys_sleep();

int uvm_alloc(struct proc *p, pagetable_t pagetable, uint64_t old_sz, uint64_t new_sz);
void uvm_dealloc(pagetable_t pagetable, uint64_t old_sz, uint64_t new_sz);

extern char TRAPFRAME[];
extern char TRAPFRAME2[];
extern char TRAMPOLINE[];
extern char COMMON[];

void panic(char* str);

extern uint64_t kernel_sp __attribute__((section(".common")));
extern uint64_t user_sp __attribute__((section(".common")));

extern uint64_t kernel_satp __attribute__((section(".common")));    // trap.S から参照する
extern uint64_t user_satp __attribute__((section(".common")));

int copyin(pagetable_t pagetable, char *dst, uint64_t srcva, uint64_t len);
int copyinstr(pagetable_t pagetable, char *dst, uint64_t srcva, uint64_t max);
int copyout(pagetable_t pagetable, uint64_t dstva, void *src, uint64_t len);
void putchar(char c);

static inline uint64_t r_time()
{
    uint64_t x;
    asm volatile("csrr %0, time" : "=r" (x) );
    return x;
}

static inline void w_stimecmp(uint64_t x)
{
  asm volatile("csrw 0x14d, %0" : : "r" (x));
}

extern int gNumProc;

void alloc_prog(char* elf_buf, int elf_buf_size, int fork_flag, int exec_flag, int* child_proc_index);
void free_proc(struct proc *p);
void remove_kernel_state(int active_proc);

void yield();

extern uint32_t g_time_offset;

#endif
