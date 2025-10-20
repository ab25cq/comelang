#ifndef COMELANG_MINUX_H
#define COMELANG_MINUX_H

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

//──────────────────────────────────────────
// ファイルシステム共通定数・構造体（mkfs.c と合わせる）
//──────────────────────────────────────────
#define BSIZE      512                    // ブロックサイズ
#define NDIRECT    12                     // 直接ブロックポインタ数
#define NINDIRECT  (BSIZE / sizeof(uint32_t))  // 間接ブロック内のエントリ数（512/4=128）
#define MAXFILE    (NDIRECT + NINDIRECT + NINDIRECT * NINDIRECT)

#define ROOTINO    1     // ルートディレクトリの i-node 番号
#define T_DIR      1
#define T_FILE     2
#define T_SYMLINK  3

// mode bits (subset)
#ifndef S_ISUID
#define S_ISUID 04000
#endif
#ifndef S_ISGID
#define S_ISGID 02000
#endif
#ifndef S_ISVTX
#define S_ISVTX 01000
#endif

#define DIRSIZ     14    // ディレクトリエントリ名の最大長

// ───────────────────────────────────────────────────────────────────────
// on-disk 構造体
// ────────────────────────────────────────────────────────────────────────

// スーパーブロック (ブロック番号 1 に配置)
struct superblock {
    uint32_t size;       // 全ブロック数
    uint32_t nblocks;    // データブロック数
    uint32_t ninodes;    // イノード数
    uint32_t nlog;       // ログ領域ブロック数（未使用なら 0）
    uint32_t logstart;   // ログ領域開始ブロック番号（未使用なら 0）
    uint32_t inodestart; // イノード領域開始ブロック番号
    uint32_t bmapstart;  // ビットマップ開始ブロック番号
};

// on-disk i-node 構造体
struct dinode {
    uint16_t type;             // 0=空き, 1=ディレクトリ, 2=ファイル, 3=シンボリックリンク
    uint16_t major;            // デバイス番号（未使用時は 0）
    uint16_t minor;            // デバイス番号（未使用時は 0）
    uint16_t nlink;            // ハードリンク数
    uint32_t size;             // ファイルサイズ（バイト）
    uint32_t mode;             // パーミッション/種別ビット（簡易）
    uint16_t uid;              // 所有者
    uint16_t gid;              // グループ
    uint32_t atime;            // 最終アクセス
    uint32_t mtime;            // 最終更新
    uint32_t ctime;            // メタデータ変更
    /* 直接ポインタ[0..NDIRECT-1], 1次インデクス=addrs[NDIRECT], 2次インデクス=addrs[NDIRECT+1] */
    uint32_t addrs[NDIRECT + 2];
};

// ディレクトリエントリ
struct dirent {
    uint16_t inum;           // ファイル/ディレクトリの i-node 番号
    char     name[DIRSIZ];   // ファイル名（固定長14バイト、ヌル終端なし）
};

// 簡易 stat 構造体（ユーザー/カーネル共用）
struct stat {
    uint16_t type;  // T_DIR / T_FILE / T_SYMLINK
    uint16_t nlink; // ハードリンク数
    uint32_t size;  // バイト数
    uint32_t inum;  // i-node number
    uint32_t mode;  // パーミッション
    uint16_t uid;   // 所有者
    uint16_t gid;   // グループ
    uint32_t atime; // アクセス
    uint32_t mtime; // 更新
    uint32_t ctime; // 変更
};

//──────────────────────────────────────────
// ヘルパー関数のプロトタイプ
//──────────────────────────────────────────

// 低レイヤーのブロック読み込み（extern で実装されている想定）
// blockno: ファイルシステム上のブロック番号 (0 から始まる)
// buf:       BSIZE バイト確保されたバッファ
extern void read_block(uint32_t blockno, void *buf);

// superblock を読み込む
void read_superblock(void);

// i ノードを読み込む
// inum: iノード番号（1 から ninodes まで）
// dest: struct dinode のバッファ（呼び出し側が確保しておくこと）
void read_inode(uint32_t inum, struct dinode *dest);

// ファイル（またはディレクトリ）データをバッファに読み込む
// inode: 事前に read_inode により読み込んでおくこと
// offset, size: 読み込みたいオフセットとバイト数
// buf: 読み出し先バッファ（size バイト以上確保しておくこと）
void read_data(struct dinode *inode, uint32_t offset, uint8_t *buf, uint32_t size);

// ルートディレクトリからファイル名 lookup
// path: "/foo/bar.txt" のように絶対パスで与える
// return: 見つかったらその iノード番号、見つからなければ 0
uint32_t path_lookup(const char *path);

// ディレクトリ内でエントリを探す
// parent: 親ディレクトリの dinode 構造体
// name:    探したいファイル名（ヌル終端文字列）
// return:  iノード番号、見つからなければ 0
uint32_t dir_lookup(struct dinode *parent, const char *name);

// i ノードを読み込んで内容を出力する（デバッグ用）
void dump_inode(uint32_t inum);

// virtio ブロックデバイスを初期化
void virtio_blk_init(void);
void bcache_init(void);

typedef int32_t ssize_t;
int fs_fstat_fd(int fd, struct stat* st);
long fs_lseek(int fd, long offset, int whence);

enum { SEEK_SET, SEEK_END, SEEK_CUR };

#define assert

typedef long time_t;
typedef long suseconds_t;
struct timeval { time_t tv_sec; suseconds_t tv_usec; };
struct tm { int tm_sec, tm_min, tm_hour, tm_mday, tm_mon, tm_year, tm_wday, tm_yday, tm_isdst; };

typedef struct __minux_FILE {
  int fd;
  int flags;   // 1=readable, 2=writable, 4=append
  long pos;
  int eof;
  int err;
  int have_push;
  unsigned char push_ch;
  // memory stream support (fd < 0 if memory stream)
  int is_mem;
  char **ms_bufp;
  size_t *ms_sizep;
  char *ms_buf;    // internal buffer
  size_t ms_cap;   // capacity of ms_buf
  size_t ms_len;   // valid length
} FILE;

typedef struct {
  size_t gl_pathc;   // count of paths matched
  char **gl_pathv;   // NULL-terminated vector of strings
} glob_t;

extern FILE* stdin;
extern FILE* stdout;
extern FILE* stderr;

#define EOF (-1)

typedef int pid_t;

#ifndef SYS_execve
#define SYS_execve 100
#endif
#define SYS_settimeofday 92
#define SYS_utimes 93
#define SYS_umask 94
#define SYS_gettimeofday 95
#define SYS_getuid 96
#define SYS_getgid 97
#define SYS_setuid 98
#define SYS_setgid 99
#define SYS_lseek 192
#ifndef SEEK_SET
#define SEEK_SET 0
#endif
#ifndef SEEK_CUR
#define SEEK_CUR 1
#endif
#ifndef SEEK_END
#define SEEK_END 2
#endif
#define SYS_fstat   210
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
// add cwd-related syscalls
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
#define SYS_sleep 102
#define SYS_tcsetpgrp 103
#define SYS_getpid 105
#define SYS_realpath 101
#define SYS_isatty 104

extern int errno;

// open(2) flags (subset)
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

int printf(const char* fmt, ...);
int fflush(FILE* fp);
FILE* open_memstream(char **bufp, size_t *sizep);
int fscanf(FILE* fp, const char* fmt, ...);
int fprintf(FILE* fp, const char* fmt, ...);
int vfprintf(FILE* fp, const char* fmt, va_list ap);
int fputs(const char* s, FILE* fp);
size_t fwrite(const void* ptr, size_t size, size_t nmemb, FILE* fp);
size_t fread(void* ptr, size_t size, size_t nmemb, FILE* fp);
char* fgets(char* s, int size, FILE* fp);
int ungetc(int c, FILE* fp);
int fgetc(FILE* fp);
int fseek(FILE* fp, long offset, int whence);
long ftell(FILE* fp);
unsigned sleep(unsigned seconds);
void rewind(FILE* fp);
int fclose(FILE* fp);
FILE* fopen(const char* path, const char* mode);
FILE* tmpfile(void);
void putchar(char c);
int vsnprintf(char* out, unsigned long out_size, const char* fmt, va_list ap);
int snprintf(char* out, unsigned long out_size, const char* fmt, ...);
int vasprintf(char** out, const char* fmt, va_list ap);
char* strncat(char* dest, const char* src, size_t n);
void puts(const char *s);
char* strerror(int errnum);
int isalnum(int c);
int isdigit(int c);
int isalpha(int c);
int isspace(int c);
int isprint(int c);
void globfree(glob_t* pglob);
int glob(const char* pattern, int flags, void* errfunc, glob_t* pglob);
int mkstemp(char* template);
char* strndup(const char* s, size_t n);
char* strrchr(const char* s, int c);
char* strchr(const char* s, int c);
int strlen(const char *s);
char* strncpy(char *s, const char *t, int n);
int strncmp(const char *p, const char *q, unsigned int n);
void* memcpy(void *dst, const void *src, unsigned int n);
void* memmove(void *dst, const void *src, unsigned int n);
int memcmp(const void *v1, const void *v2, unsigned int n);
void* memset(void *dst, int c, unsigned int n);
char* strstr(const char* haystack, const char* needle);
int strcmp(const char* s1, const char* s2);
char* strdup(const char* s);
void *realloc(void *ptr, size_t size);
void *calloc(size_t nmemb, size_t size);
void free(void *ptr);
void *malloc(size_t size);
int fputc(int c, FILE* fp);
double strtod(const char* nptr, char** endptr);
unsigned long strtoul(const char* nptr, char** endptr, int base);
long strtol(const char* nptr, char** endptr, int base);
long long strtoll(const char* nptr, char** endptr, int base);
long atol(const char* nptr);
int atoi(const char* nptr);
int strncasecmp(const char* a, const char* b, size_t n);
time_t time(time_t* tloc);
struct tm* localtime(const time_t* timep);
char* ctime_r(const time_t* timep, char* buf);
char* strerror(int errnum);
int ispunct(int c);
char *strtok(char *s, const char *delim);
int isxdigit(int c);

extern size_t linenumber;


struct __minux_FILE;
enum arg_kind {                                                                                                          
    ARG_KIND_LIT = 1,                                                                                                    
    ARG_KIND_FILE = 2,                                                                                                   
    ARG_KIND_END = 3,                                                                                                    
};                                                     
struct arg_hdr {                                       
    enum arg_kind kind;                                
    const char *shortopts;                                                                                               
    const char *longopts;                 
    const char *datatype;                                                                                                
    const char *glossary;                              
    int mincount;                                                                                                        
    int maxcount;                                                                                                        
};                                                                                                                       
struct arg_lit {                                                                                                         
    struct arg_hdr hdr;      
    int count;
};                                                                                                                       
struct arg_file {                                                                                                        
    struct arg_hdr hdr;                                                                                                  
    int count;                                                                                                           
    const char **filename;                                                                                               
};                                                     
struct arg_error {                                     
    const char *msg;                                                                                                     
    const char *argval;                                                                                                  
    const struct arg_hdr *hdr;                                                                                           
};               

struct arg_end {                                                                                                         
    struct arg_hdr hdr;                                
    int count;                                         
    int maxerrors;                                    
    struct arg_error *errors;
};                  
struct arg_lit *arg_litn(const char *shortopts, const char *longopts,                                                    
                         int mincount, int maxcount, const char *glossary);                                              
struct arg_file *arg_filen(const char *shortopts, const char *longopts,                                                  
                           const char *datatype, int mincount, int maxcount,                                             
                           const char *glossary);      
struct arg_end *arg_end(int maxerrors);                
int arg_parse(int argc, char **argv, void **argtable); 
void arg_print_syntax(struct __minux_FILE *fp, void **argtable,                                                          
                      const char *suffix);
void arg_print_glossary(struct __minux_FILE *fp, void **argtable,                                                        
                        const char *format);           
void arg_print_errors(struct __minux_FILE *fp, struct arg_end *end,                                                      
                      const char *progname);                                                                             
void arg_freetable(void **argtable, size_t n); 

int sscanf(const char *str, const char *fmt, ...);
char *dirname(const char *path);
int fileno(FILE* fp);
    
int system(const char* command);

#define BUFSIZ 128

void exit(int status);
char *realpath(const char *path, char *resolved_path);

#endif
