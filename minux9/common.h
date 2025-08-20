#ifndef COMMON_H
#define COMMON_H

#define MAX_OPEN_FILES 16

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

#define NUM_PROC_VA_MAX 64

struct proc {
    struct context_t trapframe;
    
    struct context_t context;      // swtch() here to run process
    struct proc *parent;         // Parent process
//    char* stack;
    char* stack_top;
    uint64_t vaddr;
    uint64_t memsz;
    uint64_t sz; // Size of process memory (program break)
    
    int zombie; 
    
    pagetable_t pagetable;
    
    char* program;
    int xstatus;                // exit
    
    struct file* file_table[MAX_OPEN_FILES];
    
    char* process_kalloc_address[NUM_PROC_VA_MAX];
    int num_process_kalloc_address;
    
    int deleted;
    
    struct proc* next;
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
    enum { FK_STDIN, FK_STDOUT, FK_STDERR, FK_FILE, FK_PIPE } kind;
    uint32_t inum;        // inode 番号
    struct dinode din;     // on-disk inode 情報
    uint32_t off;         // 現在の読み込みオフセット
    int used;             // 使用フラグ
    struct spipe* pipe;
    int pipe_used;
    int read_pipe;
    int write_pipe;
    
    struct file* free_next;
    
    struct proc* owner_processes[PROC_MAX];
    int num_owner_process;
};

int fs_open(const char *path);
ssize_t fs_read(int fd, void *buf, size_t count);
int fs_close(long fd, int massive);


int is_pipe(int fd);
int is_stdin(int fd);
int is_stdout(int fd);

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

#endif
