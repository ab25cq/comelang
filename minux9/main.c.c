/// previous struct definition ///
/// struct definition ///
typedef void* any;

typedef char* string;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long  long uint64_t;

typedef char int_least8_t;

typedef short int_least16_t;

typedef int int_least32_t;

typedef long long int_least64_t;

typedef unsigned char uint_least8_t;

typedef unsigned short int uint_least16_t;

typedef unsigned int uint_least32_t;

typedef unsigned long  long uint_least64_t;

typedef char int_fast8_t;

typedef short int_fast16_t;

typedef int int_fast32_t;

typedef long long int_fast64_t;

typedef unsigned char uint_fast8_t;

typedef unsigned short int uint_fast16_t;

typedef unsigned int uint_fast32_t;

typedef unsigned long  long uint_fast64_t;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long long __int64_t;

typedef unsigned long  long __uint64_t;

typedef long __darwin_intptr_t;

typedef unsigned int __darwin_natural_t;

typedef int __darwin_ct_rune_t;

union anonymous_typeZ1
{
char __mbstate8[128];
long long _mbstateL;
};

typedef union anonymous_typeZ1 __mbstate_t;

typedef union anonymous_typeZ1 __darwin_mbstate_t;

typedef long  int __darwin_ptrdiff_t;

typedef unsigned long  int __darwin_size_t;

typedef __builtin_va_list __darwin_va_list;

typedef int __darwin_wchar_t;

typedef int __darwin_rune_t;

typedef int __darwin_wint_t;

typedef unsigned long  int __darwin_clock_t;

typedef unsigned int __darwin_socklen_t;

typedef long __darwin_ssize_t;

typedef long __darwin_time_t;

typedef long long __darwin_blkcnt_t;

typedef int __darwin_blksize_t;

typedef int __darwin_dev_t;

typedef unsigned int __darwin_fsblkcnt_t;

typedef unsigned int __darwin_fsfilcnt_t;

typedef unsigned int __darwin_gid_t;

typedef unsigned int __darwin_id_t;

typedef unsigned long  long __darwin_ino64_t;

typedef unsigned long  long __darwin_ino_t;

typedef unsigned int __darwin_mach_port_name_t;

typedef unsigned int __darwin_mach_port_t;

typedef unsigned short int __darwin_mode_t;

typedef long long __darwin_off_t;

typedef int __darwin_pid_t;

typedef unsigned int __darwin_sigset_t;

typedef int __darwin_suseconds_t;

typedef unsigned int __darwin_uid_t;

typedef unsigned int __darwin_useconds_t;

typedef unsigned char __darwin_uuid_t[16];

typedef char __darwin_uuid_string_t[37];

struct __darwin_pthread_handler_rec
{
    void (*__routine)(void*);
    void* __arg;
    struct __darwin_pthread_handler_rec* __next;
};

struct _opaque_pthread_attr_t
{
    long __sig;
    char __opaque[56];
};

struct _opaque_pthread_cond_t
{
    long __sig;
    char __opaque[40];
};

struct _opaque_pthread_condattr_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_mutex_t
{
    long __sig;
    char __opaque[56];
};

struct _opaque_pthread_mutexattr_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_once_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_rwlock_t
{
    long __sig;
    char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t
{
    long __sig;
    char __opaque[16];
};

struct _opaque_pthread_t
{
    long __sig;
    struct __darwin_pthread_handler_rec* __cleanup_stack;
    char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;

typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;

typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;

typedef unsigned long  int __darwin_pthread_key_t;

typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;

typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;

typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;

typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;

typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;

typedef struct _opaque_pthread_t* __darwin_pthread_t;

typedef long intptr_t;

typedef unsigned long  int uintptr_t;

typedef long  int intmax_t;

typedef unsigned long  int uintmax_t;

typedef __builtin_va_list __gnuc_va_list;

typedef __builtin_va_list va_list;

extern char _end[];
static char* heap_end=0;
static char* heap_limit=(char*)-2013265920;
struct mem_block
{
    unsigned long  int size;
    struct mem_block* next;
};

typedef struct mem_block mem_block_t;

struct mem_block* free_list=((void*)0);
struct buffer
{
    char* buf;
    int len;
    int size;
};

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

struct sMemHeaderTiny
{
    unsigned long  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
    char* sname;
    int sline;
};

struct sMemHeader
{
    unsigned long  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* sname[16];
    int sline[16];
    int id[16];
    char* class_name;
};

extern struct sMemHeader* gAllocMem;

extern void* gComeResultObject;

extern _Bool gComeMallocLib;

extern _Bool gComeDebugLib;

extern _Bool gComeGCLib;

extern int gNumAlloc;

extern int gNumFree;

struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    struct sMemHeaderTiny* mFreeMem[4096];
};

extern struct sHeapPage gHeapPages;

struct list_item$1char$
{
    char item;
    struct list_item$1char$* prev;
    struct list_item$1char$* next;
};

struct list$1char$
{
    struct list_item$1char$* head;
    struct list_item$1char$* tail;
    int len;
    struct list_item$1char$* it;
};

struct list_item$1char$p
{
    char* item;
    struct list_item$1char$p* prev;
    struct list_item$1char$p* next;
};

struct list$1char$p
{
    struct list_item$1char$p* head;
    struct list_item$1char$p* tail;
    int len;
    struct list_item$1char$p* it;
};

struct list_item$1short$
{
    short item;
    struct list_item$1short$* prev;
    struct list_item$1short$* next;
};

struct list$1short$
{
    struct list_item$1short$* head;
    struct list_item$1short$* tail;
    int len;
    struct list_item$1short$* it;
};

struct list_item$1int$
{
    int item;
    struct list_item$1int$* prev;
    struct list_item$1int$* next;
};

struct list$1int$
{
    struct list_item$1int$* head;
    struct list_item$1int$* tail;
    int len;
    struct list_item$1int$* it;
};

struct list_item$1long$
{
    long item;
    struct list_item$1long$* prev;
    struct list_item$1long$* next;
};

struct list$1long$
{
    struct list_item$1long$* head;
    struct list_item$1long$* tail;
    int len;
    struct list_item$1long$* it;
};

struct list_item$1float$
{
    float item;
    struct list_item$1float$* prev;
    struct list_item$1float$* next;
};

struct list$1float$
{
    struct list_item$1float$* head;
    struct list_item$1float$* tail;
    int len;
    struct list_item$1float$* it;
};

struct list_item$1double$
{
    double item;
    struct list_item$1double$* prev;
    struct list_item$1double$* next;
};

struct list$1double$
{
    struct list_item$1double$* head;
    struct list_item$1double$* tail;
    int len;
    struct list_item$1double$* it;
};

struct list_item$1char$ph
{
    char* item;
    struct list_item$1char$ph* prev;
    struct list_item$1char$ph* next;
};

struct list$1char$ph
{
    struct list_item$1char$ph* head;
    struct list_item$1char$ph* tail;
    int len;
    struct list_item$1char$ph* it;
};

typedef long  int ptrdiff_t;

typedef unsigned long  int size_t;

typedef unsigned long  int rsize_t;

typedef int wchar_t;

typedef long  double max_align_t;

struct elfhdr
{
    unsigned int magic;
    unsigned char elf[12];
    unsigned short int type;
    unsigned short int machine;
    unsigned int version;
    unsigned long  long entry;
    unsigned long  long phoff;
    unsigned long  long shoff;
    unsigned int flags;
    unsigned short int ehsize;
    unsigned short int phentsize;
    unsigned short int phnum;
    unsigned short int shentsize;
    unsigned short int shnum;
    unsigned short int shstrndx;
};

struct proghdr
{
    unsigned int type;
    unsigned int flags;
    unsigned long  long off;
    unsigned long  long vaddr;
    unsigned long  long paddr;
    unsigned long  long filesz;
    unsigned long  long memsz;
    unsigned long  long align;
};

struct superblock
{
    unsigned int size;
    unsigned int nblocks;
    unsigned int ninodes;
    unsigned int nlog;
    unsigned int logstart;
    unsigned int inodestart;
    unsigned int bmapstart;
};

struct dinode
{
    unsigned short int type;
    unsigned short int major;
    unsigned short int minor;
    unsigned short int nlink;
    unsigned int size;
    unsigned int addrs[12+2];
};

struct dirent
{
    unsigned short int inum;
    char name[14];
};

unsigned char hello_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x36, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x7b, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x62, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18,
  0x23, 0x34, 0xa4, 0xfe, 0x23, 0x30, 0xb4, 0xfe, 0x23, 0x3c, 0xc4, 0xfc,
  0x83, 0x37, 0x84, 0xfe, 0x03, 0x37, 0x04, 0xfe, 0x83, 0x36, 0x84, 0xfd,
  0x3e, 0x85, 0xba, 0x85, 0x36, 0x86, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x3e, 0x85, 0xa2, 0x70, 0x02, 0x74, 0x45, 0x61,
  0x82, 0x80, 0x41, 0x11, 0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08, 0x8d, 0x47,
  0x3e, 0x85, 0xa2, 0x60, 0x02, 0x64, 0x41, 0x01, 0x82, 0x80, 0x41, 0x11,
  0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08, 0xb7, 0x07, 0x00, 0x10, 0x13, 0x07,
  0xf0, 0x04, 0x23, 0x80, 0xe7, 0x00, 0x05, 0x46, 0x97, 0x05, 0x00, 0x00,
  0x93, 0x85, 0x45, 0x01, 0x05, 0x45, 0xef, 0xf0, 0x3f, 0xf9, 0xc5, 0xbf,
  0x00, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x47, 0x43, 0x43, 0x3a, 0x20, 0x28,
  0x67, 0x30, 0x34, 0x36, 0x39, 0x36, 0x64, 0x66, 0x30, 0x39, 0x29, 0x20,
  0x31, 0x34, 0x2e, 0x32, 0x2e, 0x30, 0x00, 0x41, 0x59, 0x00, 0x00, 0x00,
  0x72, 0x69, 0x73, 0x63, 0x76, 0x00, 0x01, 0x4f, 0x00, 0x00, 0x00, 0x04,
  0x10, 0x05, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d,
  0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70,
  0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f,
  0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d,
  0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31,
  0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00,
  0x60, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0xf1, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff,
  0x62, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x6a, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x62, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x22, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x68, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x62, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x36, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x62, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x62, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb1, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x68, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x2e, 0x63,
  0x00, 0x77, 0x72, 0x69, 0x74, 0x65, 0x00, 0x24, 0x78, 0x72, 0x76, 0x36,
  0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61,
  0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70,
  0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72,
  0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30,
  0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61,
  0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x5f, 0x5f, 0x67, 0x6c,
  0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74, 0x65, 0x72,
  0x24, 0x00, 0x5f, 0x5f, 0x53, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45,
  0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x66, 0x75, 0x6e, 0x00, 0x5f, 0x5f,
  0x42, 0x53, 0x53, 0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f, 0x00, 0x5f, 0x5f,
  0x62, 0x73, 0x73, 0x5f, 0x73, 0x74, 0x61, 0x72, 0x74, 0x00, 0x6d, 0x61,
  0x69, 0x6e, 0x00, 0x5f, 0x5f, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45,
  0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x5f, 0x65, 0x64, 0x61, 0x74, 0x61,
  0x00, 0x5f, 0x65, 0x6e, 0x64, 0x00, 0x00, 0x2e, 0x73, 0x79, 0x6d, 0x74,
  0x61, 0x62, 0x00, 0x2e, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e,
  0x73, 0x68, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x74, 0x65,
  0x78, 0x74, 0x00, 0x2e, 0x72, 0x6f, 0x64, 0x61, 0x74, 0x61, 0x00, 0x2e,
  0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x2e, 0x72, 0x69, 0x73,
  0x63, 0x76, 0x2e, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65,
  0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7b, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xd8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x98, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x26, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};
unsigned int hello_elf_len=1648;
unsigned char hello2_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x22, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x60, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x6b, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x52, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18,
  0x23, 0x34, 0xa4, 0xfe, 0x23, 0x30, 0xb4, 0xfe, 0x23, 0x3c, 0xc4, 0xfc,
  0x83, 0x37, 0x84, 0xfe, 0x03, 0x37, 0x04, 0xfe, 0x83, 0x36, 0x84, 0xfd,
  0x3e, 0x85, 0xba, 0x85, 0x36, 0x86, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x3e, 0x85, 0xa2, 0x70, 0x02, 0x74, 0x45, 0x61,
  0x82, 0x80, 0x41, 0x11, 0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08, 0x05, 0x46,
  0x97, 0x05, 0x00, 0x00, 0x93, 0x85, 0x45, 0x02, 0x05, 0x45, 0xef, 0xf0,
  0x3f, 0xfb, 0xc5, 0xbf, 0x41, 0x11, 0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08,
  0x95, 0x47, 0x3e, 0x85, 0xa2, 0x60, 0x02, 0x64, 0x41, 0x01, 0x82, 0x80,
  0x48, 0x00, 0x47, 0x43, 0x43, 0x3a, 0x20, 0x28, 0x67, 0x30, 0x34, 0x36,
  0x39, 0x36, 0x64, 0x66, 0x30, 0x39, 0x29, 0x20, 0x31, 0x34, 0x2e, 0x32,
  0x2e, 0x30, 0x00, 0x41, 0x59, 0x00, 0x00, 0x00, 0x72, 0x69, 0x73, 0x63,
  0x76, 0x00, 0x01, 0x4f, 0x00, 0x00, 0x00, 0x04, 0x10, 0x05, 0x72, 0x76,
  0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f,
  0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32,
  0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73,
  0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70,
  0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a,
  0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00, 0x50, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x59, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff, 0x52, 0x19, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x6b, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x52, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7b, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0x3c, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7f, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x58, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x8b, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x52, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x97, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0x22, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x9c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x52, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xab, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x52, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xb2, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x58, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x32, 0x2e, 0x63, 0x00, 0x77, 0x72,
  0x69, 0x74, 0x65, 0x00, 0x24, 0x78, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32,
  0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31,
  0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63,
  0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30,
  0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61,
  0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73,
  0x63, 0x31, 0x70, 0x30, 0x00, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61,
  0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x24, 0x00, 0x5f,
  0x5f, 0x53, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e,
  0x5f, 0x5f, 0x00, 0x66, 0x75, 0x6e, 0x00, 0x5f, 0x5f, 0x42, 0x53, 0x53,
  0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f, 0x00, 0x5f, 0x5f, 0x62, 0x73, 0x73,
  0x5f, 0x73, 0x74, 0x61, 0x72, 0x74, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00,
  0x5f, 0x5f, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e,
  0x5f, 0x5f, 0x00, 0x5f, 0x65, 0x64, 0x61, 0x74, 0x61, 0x00, 0x5f, 0x65,
  0x6e, 0x64, 0x00, 0x00, 0x2e, 0x73, 0x79, 0x6d, 0x74, 0x61, 0x62, 0x00,
  0x2e, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x68, 0x73,
  0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x74, 0x65, 0x78, 0x74, 0x00,
  0x2e, 0x72, 0x6f, 0x64, 0x61, 0x74, 0x61, 0x00, 0x2e, 0x63, 0x6f, 0x6d,
  0x6d, 0x65, 0x6e, 0x74, 0x00, 0x2e, 0x72, 0x69, 0x73, 0x63, 0x76, 0x2e,
  0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x73, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x50, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x50, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x52, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xc8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x60, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xb7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x04, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
unsigned int hello2_elf_len=1632;
typedef unsigned long  int anonymous_var_nameX33;

typedef long  int anonymous_var_nameX34;

extern char _end2[];
extern char _end3[];
struct context
{
    unsigned long  long ra;
    unsigned long  long sp;
    unsigned long  long gp;
    unsigned long  long tp;
    unsigned long  long t0;
    unsigned long  long t1;
    unsigned long  long t2;
    unsigned long  long t3;
    unsigned long  long t4;
    unsigned long  long t5;
    unsigned long  long t6;
    unsigned long  long a0;
    unsigned long  long a1;
    unsigned long  long a2;
    unsigned long  long a3;
    unsigned long  long a4;
    unsigned long  long a5;
    unsigned long  long a6;
    unsigned long  long a7;
    unsigned long  long s0;
    unsigned long  long s1;
    unsigned long  long s2;
    unsigned long  long s3;
    unsigned long  long s4;
    unsigned long  long s5;
    unsigned long  long s6;
    unsigned long  long s7;
    unsigned long  long s8;
    unsigned long  long s9;
    unsigned long  long s10;
    unsigned long  long s11;
    unsigned long  long mepc;
};

struct cpu
{
    struct proc* proc;
    struct context context;
    int noff;
    int intena;
};

struct cpu gCPU;
typedef unsigned long  long pte_t;

typedef unsigned long  long pde_t;

typedef unsigned long  long* pagetable_t;

unsigned long  long* kernel_pagetable;
struct proc
{
    struct context context;
    struct proc* parent;
    char* stack;
    char* program;
    unsigned long  long* pagetable;
};

struct proc* gProc[128];
int gActiveProc=0;
int gNumProc=0;
struct run
{
    struct run* next;
};

struct spinlock
{
    unsigned int locked;
    char* name;
    struct cpu* cpu;
};

struct anonymous_typeX2
{
    struct spinlock lock;
    struct run* freelist;
};

struct anonymous_typeX3
{
    struct spinlock lock;
    struct run* freelist;
};

struct anonymous_typeX4
{
    struct spinlock lock;
    struct run* freelist;
};

struct anonymous_typeX5
{
    struct spinlock lock;
    struct run* freelist;
};

struct anonymous_typeX6
{
    struct spinlock lock;
    struct run* freelist;
};

struct anonymous_typeX6 kmem;
extern char TRAPFRAME[];
extern char TRAPFRAME2[];
extern char TRAMPOLINE[];
extern char COMMON[];
unsigned long  long kernel_sp __attribute__((section(".common")));
unsigned long  long user_sp __attribute__((section(".common")));
unsigned long  long kernel_satp __attribute__((section(".common")));
unsigned long  long user_satp __attribute__((section(".common")));
char last_key=0;
static struct spinlock console_lock;
// source head

// header function
long strtol(char* arg1, char** arg2, int arg3, ...);
unsigned long strtoul(char* arg1, char** arg2, int arg3, ...);
unsigned long  long strtoull(char* arg1, char** arg2, int arg3, ...);
long  long strtoll(char* arg1, char** arg2, int arg3, ...);
void* sbrk(long incr);
void read_block(unsigned int blockno, void* buf);
void read_superblock();
void read_inode(unsigned int inum, struct dinode* dest);
void read_data(struct dinode* inode, unsigned int offset, unsigned char* buf, unsigned int size);
unsigned int path_lookup(const char* path);
unsigned int dir_lookup(struct dinode* parent, const char* name);
void dump_inode(unsigned int inum);
void virtio_blk_init();
static void* kalloc_page(unsigned long  long bump);
void* kalloc_pages(unsigned long  int npages);
void perror(char* str);
void panic(char* str);
struct cpu* mycpu();
unsigned long  long make_satp(unsigned long  long* pagetable);
void initlock(struct spinlock* lk, char* name);
void acquire(struct spinlock* lk);
void release(struct spinlock* lk);
int holding(struct spinlock* lk);
void push_off();
void pop_off();
void kinit();
void freerange(void* pa_start, void* pa_end);
void kfree(void* pa);
void* kalloc();
unsigned long  long* walk(unsigned long  long* pagetable, unsigned long  long va, int alloc);
int mappages(unsigned long  long* pagetable, unsigned long  long va, unsigned long  long size, unsigned long  long pa, int perm);
void dump_physical_memory(unsigned long  long pa, int count);
void vmprint_rec(unsigned long  long* pagetable, unsigned long  long va, int level);
void vmprint(unsigned long  long* pagetable);
void enable_mmu(unsigned long  long* kernel_pagetable);
void uart_rx_handler();
void uart_init();
void putc(char c);
void putchar(char c);
void putc_direct(char c);
void mmu_init();
void* walkaddr(unsigned long  long* pagetable, unsigned long  long va);
int copyout(unsigned long  long* pagetable, unsigned long  long dstva, void* src, unsigned long  long len);
void setting_user_pagetable(unsigned long  long* pagetable);
void alloc_prog();
void alloc_prog2();
void reset_watchdog();
void plic_init();
void trap_init();
void uart_rx_init();
void puts_direct(const char* s);
void plic_enable(int irq);
void trapvec();
void my_intr_off();
void my_intr_on();
void enable_timer_interrupts();
void disable_timer_interrupts();
void swtch(struct context* old, struct context* new);
void timer_reset();
void timer_handler();
void console_init();
void puts(const char* s);
unsigned long  int syscall_handler(unsigned long  int a0, unsigned long  int a1, unsigned long  int a2, unsigned long  int a3, unsigned long  int a4, unsigned long  int a5, unsigned long  int a6, unsigned long  int syscall_no);
void enter_user(unsigned long  int anonymous_var_nameX274, unsigned long  int anonymous_var_nameX275, unsigned long  int anonymous_var_nameX276, unsigned long  long anonymous_var_nameX277);
void timerinit();
int main();
void* malloc(unsigned long  int size);
void* calloc(unsigned long  int nmemb, unsigned long  int size);
void free(void* ptr);
char* strdup(const char* s);
int strcmp(const char* s1, const char* s2);
char* strstr(const char* haystack, const char* needle);
void* memset(void* dst, int c, unsigned int n);
int memcmp(const void* v1, const void* v2, unsigned int n);
void* memmove(void* dst, const void* src, unsigned int n);
void* memcpy(void* dst, const void* src, unsigned int n);
int strncmp(const char* p, const char* q, unsigned int n);
char* strncpy(char* s, const char* t, int n);
int strlen(const char* s);
char* strncat(char* dest, const char* src, unsigned long  int n);
char* strtok(char* s, const char* delim);
void exit(int n);
char* itoa(char* buf, unsigned long  int val_, int base, int is_signed);
int vasprintf(char** out, const char* fmt, va_list ap);
int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
void printint(int val_, int base, int sign);
void printlong(unsigned long  int val_, int base, int sign);
void printlonglong(unsigned long  long val_, int base, int sign);
int printf(const char* fmt, ...);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
void xassert(char* msg, _Bool test);
_Bool die(char* msg);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
char* come_dynamic_typeof(void* mem);
void come_print_heap_info(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
char* __builtin_string(char* str);
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
_Bool buffer_equals(struct buffer* left, struct buffer* right);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* mem);
struct buffer* buffer_append_format(struct buffer* self, char* msg, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
unsigned char* buffer_head_pointer(struct buffer* self);
struct buffer* charpa_to_buffer(char* self, unsigned long  int len);
struct buffer* charppa_to_buffer(char** self, unsigned long  int len);
struct buffer* shortpa_to_buffer(short* self, unsigned long  int len);
struct buffer* intpa_to_buffer(int* self, unsigned long  int len);
struct buffer* longpa_to_buffer(long* self, unsigned long  int len);
struct buffer* floatpa_to_buffer(float* self, unsigned long  int len);
struct buffer* doublepa_to_buffer(double* self, unsigned long  int len);
char* buffer_printable(struct buffer* self);
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
_Bool bool_equals(_Bool self, _Bool right);
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool boolp_equals(_Bool* self, _Bool* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(char* self, char* right);
_Bool voidp_operator_not_equals(char* self, char* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned long  int charpa_length(char* self, unsigned long  int len);
_Bool charppa_contained(char** self, unsigned long  int len, char* str);
unsigned long  int shortpa_length(short* self, unsigned long  int len);
unsigned long  int intpa_length(int* self, unsigned long  int len);
unsigned long  int longpa_length(long* self, unsigned long  int len);
unsigned long  int floatpa_length(float* self, unsigned long  int len);
unsigned long  int doublepa_length(double* self, unsigned long  int len);
unsigned int bool_get_hash_key(_Bool value);
unsigned int _Bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
_Bool bool_clone(_Bool self);
_Bool _Bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
double double_clone(double self);
float float_clone(float self);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
struct list$1char$ph* charp_split_char(char* self, char c);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
char* charp_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* bool_to_string(_Bool self);
char* _Bool_to_string(_Bool self);
char* char_to_string(char self);
char* short_to_string(short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long  int self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int bool_compare(_Bool left, _Bool right);
int _Bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  int left, unsigned long  int right);
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
// uniq global variable
char* gComeStackFrameSName[128];

int gComeStackFrameSLine[128];

int gComeStackFrameID[128];

int gNumComeStackFrame=0;

char* gComeStackFrameBuffer=((void*)0);

struct sMemHeader* gAllocMem;

void* gComeResultObject=((void*)0);

_Bool gComeMallocLib=(_Bool)0;

_Bool gComeDebugLib=(_Bool)0;

_Bool gComeGCLib=(_Bool)0;

int gNumAlloc=0;

int gNumFree=0;

struct sHeapPage gHeapPages;

// inline function
static inline int write(long fd, const char* s, long size){
    __asm volatile("mv a0, %0\n"
        "mv a1, %1\n"
        "mv a2, %2\n"
        "li a7, %3\n"
        "ecall\n"
        :
        : "r"(fd), "r"(s), "r"(size), "i"(64): "a0", "a7", "memory"
    );
}
static inline int read(long fd, const char* s, long size){
    __asm volatile("mv a0, %0\n"
        "mv a1, %1\n"
        "mv a2, %2\n"
        "li a7, %3\n"
        "ecall\n"
        :
        : "r"(fd), "r"(s), "r"(size), "i"(65): "a0", "a7", "memory"
    );
}
static inline unsigned long  long r_time(){
unsigned long  long x_1;
memset(&x_1, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, time" : "=r" (x_1));
    return x_1;
}
static inline void w_stimecmp(unsigned long  long x){
    __asm volatile("csrw 0x14d, %0" : : "r" (x));
}
static inline unsigned long  long r_mstatus(){
unsigned long  long x_7;
memset(&x_7, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mstatus" : "=r" (x_7));
    return x_7;
}
static inline unsigned long  long r_sstatus(){
unsigned long  long x_8;
memset(&x_8, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sstatus" : "=r" (x_8));
    return x_8;
}
static inline void w_sstatus(unsigned long  long x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}
static inline void intr_on(){
unsigned long  int x_9;
    x_9=r_sstatus();
    x_9|=(1L<<1);
    w_sstatus(x_9);
}
static inline void intr_off(){
    w_sstatus(r_sstatus()&~(1L<<1));
}
static inline void intr_off_direct(){
    __asm volatile("csrc sstatus, %0" : : "r"((1L<<1)));
}
static inline void intr_on_direct(){
    __asm volatile("csrs sstatus, %0" : : "r"((1L<<1)));
}
static inline int intr_get(){
unsigned long  long x_10;
    x_10=r_sstatus();
    return (x_10&(1L<<1))!=0;
}
static inline void w_mstatus(unsigned long  long x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  long r_sie(){
unsigned long  long x_60;
memset(&x_60, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sie" : "=r"(x_60));
    return x_60;
}
static inline void w_sie(unsigned long  long x){
    __asm volatile("csrw sie, %0" : : "r"(x));
}
static inline void w_stvec(unsigned long  long x){
    __asm volatile("csrw stvec, %0" : : "r"(x));
}
static inline unsigned long  long read_mtime(){
    return *(unsigned long  long*)33603576UL;
}
static inline void write_mtimecmp(unsigned long  long v){
    *(unsigned long  long*)33570816UL=v;
}
static inline unsigned long  long r_sip(){
unsigned long  long x_80;
memset(&x_80, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_80));
    return x_80;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_81;
memset(&sp_val_81, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val_81): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_81;
}
static inline void sfence_vma(){
    __asm volatile("sfence.vma zero, zero");
}
static inline void w_satp(unsigned long  long x){
    __asm volatile("csrw satp, %0" : : "r" (x));
}
static inline void w_sepc(unsigned long  long x){
    __asm volatile("csrw sepc, %0" : : "r" (x));
}

// body function
void* sbrk(long incr){
void* __result_obj__1;
void* prev_0;
void* __result_obj__2;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__1 = (void*)-1;
        return __result_obj__1;
    }
    prev_0=heap_end;
    heap_end+=incr;
    __result_obj__2 = prev_0;
    return __result_obj__2;
}

static void* kalloc_page(unsigned long  long bump){
void* p_2;
void* __result_obj__3;
    p_2=(void*)bump;
    bump=(bump+4095)&~4095UL;
    bump+=4096;
    __result_obj__3 = p_2;
    return __result_obj__3;
}

void* kalloc_pages(unsigned long  int npages){
unsigned long  long bump_3;
void* base_4;
unsigned long  int i_5;
void* pg_6;
void* __result_obj__4;
    bump_3=(unsigned long  long)_end2;
    base_4=((void*)0);
    for(    i_5=0    ;    i_5<npages    ;    i_5++    ){
        pg_6=kalloc_page(bump_3);
        if(        i_5==0        ) {
            base_4=pg_6;
        }
    }
    __result_obj__4 = base_4;
    return __result_obj__4;
}

void perror(char* str){
    puts(str);
}

void panic(char* str){
    puts("panic!");
}

struct cpu* mycpu(){
struct cpu* __result_obj__5;
    __result_obj__5 = &gCPU;
    return __result_obj__5;
}

void initlock(struct spinlock* lk, char* name){
    lk->name=name;
    lk->locked=0;
    lk->cpu=0;
}

void acquire(struct spinlock* lk){
    push_off();
    if(    holding(lk)    ) {
        panic("acquire");
    }
    while(    __sync_lock_test_and_set(&lk->locked,1)!=0    ) {
        ;
    }
    __sync_synchronize();
    lk->cpu=mycpu();
}

void release(struct spinlock* lk){
    if(    !holding(lk)    ) {
        panic("release");
    }
    lk->cpu=0;
    __sync_synchronize();
    __sync_lock_release(&lk->locked);
    pop_off();
}

int holding(struct spinlock* lk){
int r_11;
memset(&r_11, 0, sizeof(int));
    r_11=(lk->locked&&lk->cpu==mycpu());
    return r_11;
}

void push_off(){
int old_12;
    old_12=intr_get();
    intr_off();
    if(    mycpu()->noff==0    ) {
        mycpu()->intena=old_12;
    }
    mycpu()->noff+=1;
}

void pop_off(){
struct cpu* c_13;
    c_13=mycpu();
    if(    intr_get()    ) {
        panic("pop_off - interruptible");
    }
    if(    c_13->noff<1    ) {
        panic("pop_off");
    }
    c_13->noff-=1;
    if(    c_13->noff==0&&c_13->intena    ) {
        intr_on();
    }
}

void kinit(){
    initlock(&kmem.lock,"kmem");
    freerange(_end3,(void*)2164260864UL);
}

void freerange(void* pa_start, void* pa_end){
char* p_14;
p_14 = (void*)0;
    p_14=(char*)((((unsigned long  long)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_14+4096<=(char*)pa_end    ;    p_14+=4096    ){
        kfree(p_14);
    }
}

void kfree(void* pa){
struct run* r_15;
r_15 = (void*)0;
    if(    ((unsigned long  long)pa%4096)!=0||(char*)pa<_end3||(unsigned long  long)pa>=2164260864UL    ) {
        while(        1        ) {
            puts("kfree panic");
        }
    }
    memset(pa,1,4096);
    r_15=(struct run*)pa;
    acquire(&kmem.lock);
    r_15->next=kmem.freelist;
    kmem.freelist=r_15;
    release(&kmem.lock);
}

void* kalloc(){
struct run* r_16;
void* __result_obj__6;
r_16 = (void*)0;
    acquire(&kmem.lock);
    r_16=kmem.freelist;
    if(    r_16    ) {
        kmem.freelist=r_16->next;
    }
    release(&kmem.lock);
    if(    r_16    ) {
        memset((char*)r_16,5,4096);
    }
    __result_obj__6 = (void*)r_16;
    return __result_obj__6;
}

unsigned long  long* walk(unsigned long  long* pagetable, unsigned long  long va, int alloc){
int level_17;
unsigned long  long* pte_18;
unsigned long  long* __result_obj__7;
unsigned long  long* __result_obj__8;
    if(    va>=(1UL<<(9+9+9+12-1))    ) {
        puts("walk");
    }
    for(    level_17=2    ;    level_17>0    ;    level_17--    ){
        pte_18=&pagetable[((((unsigned long  long)(va))>>(12+(9*(level_17))))&511)];
        if(        *pte_18&(1L<<0)        ) {
            pagetable=(unsigned long  long*)(((*pte_18)>>10)<<12);
        }
        else {
            if(            !alloc||(pagetable=(unsigned long  long*)kalloc())==0            ) {
                __result_obj__7 = (void*)0;
                return __result_obj__7;
            }
            memset(pagetable,0,4096);
            *pte_18=((((unsigned long  long)pagetable)>>12)<<10)|(1L<<0);
        }
    }
    __result_obj__8 = &pagetable[((((unsigned long  long)(va))>>(12+(9*(0))))&511)];
    return __result_obj__8;
}

int mappages(unsigned long  long* pagetable, unsigned long  long va, unsigned long  long size, unsigned long  long pa, int perm){
unsigned long  long a_19;
unsigned long  long last_20;
unsigned long  long* pte_21;
memset(&a_19, 0, sizeof(unsigned long  long));
memset(&last_20, 0, sizeof(unsigned long  long));
pte_21 = (void*)0;
    if(    (va%4096)!=0    ) {
        puts("mappages: va not aligned");
    }
    if(    (size%4096)!=0    ) {
        puts("mappages: size not aligned");
    }
    if(    size==0    ) {
        puts("mappages: size");
    }
    a_19=va;
    last_20=va+size-4096;
    for(    ;    ;    ){
        if(        (pte_21=walk(pagetable,a_19,1))==0        ) {
            return -1;
        }
        if(        *pte_21&(1L<<0)        ) {
            printf("mappages: remap detected at va %p, existing pte flags 0x%lx, new perm 0x%x\n",va,*pte_21&1023,perm);
        }
        *pte_21=((((unsigned long  long)pa)>>12)<<10)|perm|(1L<<0);
        if(        a_19==last_20        ) {
            break;
        }
        a_19+=4096;
        pa+=4096;
    }
    return 0;
}

void dump_physical_memory(unsigned long  long pa, int count){
unsigned int* ptr_22;
int i_23;
    ptr_22=(unsigned int*)pa;
    for(    i_23=0    ;    i_23<count    ;    i_23++    ){
        if(        i_23%4==0        ) {
            printf("%p: ",(unsigned long  long)(ptr_22+i_23));
        }
        printf("%p ",ptr_22[i_23]);
        if(        i_23%4==3        ) {
            puts("");
        }
    }
    if(    count%4!=0    ) {
        puts("");
    }
}

void vmprint_rec(unsigned long  long* pagetable, unsigned long  long va, int level){
int i_24;
unsigned long  long pte_25;
unsigned long  long pa_26;
unsigned long  long child_va_27;
int j_28;
    for(    i_24=0    ;    i_24<512    ;    i_24++    ){
        pte_25=pagetable[i_24];
        if(        pte_25&(1L<<0)        ) {
            pa_26=(((pte_25)>>10)<<12);
            child_va_27=va|((unsigned long  long)i_24<<(12+9*(2-level)));
            for(            j_28=0            ;            j_28<level            ;            j_28++            ){
                puts("\n.. ");
            }
            printf("VA %p -> PA %p  (pte[%d]) (level %d)\n",child_va_27,pa_26,i_24,level);
            if(            (pte_25&((1L<<1)|(1L<<2)|(1L<<3)))!=0            ) {
                printf(" [leaf]");
            }
            printf(" flags: ");
            if(            pte_25&(1L<<1)            ) {
                printf(" R");
            }
            if(            pte_25&(1L<<2)            ) {
                printf(" W");
            }
            if(            pte_25&(1L<<3)            ) {
                printf(" X");
            }
            if(            pte_25&(1L<<4)            ) {
                printf(" U");
            }
            if(            pte_25&(1L<<0)            ) {
                printf(" V");
            }
            puts("");
            if(            (pte_25&((1L<<1)|(1L<<2)|(1L<<3)))==0            ) {
                vmprint_rec((unsigned long  long*)pa_26,child_va_27,level+1);
            }
        }
    }
}

void vmprint(unsigned long  long* pagetable){
    puts("page table:\n");
    vmprint_rec(pagetable,0,0);
}

void enable_mmu(unsigned long  long* kernel_pagetable){
unsigned long  long satp_29;
    satp_29=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    __asm volatile("csrw satp, %0" :: "r"(satp_29));
    __asm volatile("sfence.vma zero, zero");
}

void uart_rx_handler(){
    last_key=*(((unsigned int*)(268435456UL+0)));
}

void uart_init(){
    *((unsigned char*)(268435456UL+1))|=1;
    plic_enable(10);
    __asm volatile("csrs sie, %0" :: "r"((1UL<<9)));
    __asm volatile("csrs sstatus, %0" :: "r"((1UL<<1)));
}

void putc(char c){
    while(    !(*((unsigned char*)(268435456UL+5))&32)    ) {
        ;
    }
    *((unsigned char*)(268435456UL+0))=c;
}

void putchar(char c){
    putc(c);
}

void putc_direct(char c){
    *(char*)268435456UL=c;
}

void mmu_init(){
unsigned long  long addr_30;
int i_31;
unsigned long  long va_32;
unsigned long  long pa_33;
    kernel_pagetable=(unsigned long  long*)kalloc();
    memset(kernel_pagetable,0,4096);
    for(    addr_30=2147483648UL    ;    addr_30<2164260864UL    ;    addr_30+=4096    ){
        mappages(kernel_pagetable,addr_30,4096,addr_30,(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
    }
    mappages(kernel_pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33554432,131072,33554432,(1L<<0)|(1L<<1)|(1L<<2));
    mappages(kernel_pagetable,201326592,4194304,201326592,(1L<<0)|(1L<<1)|(1L<<2));
    for(    i_31=0    ;    i_31<8    ;    i_31++    ){
        va_32=268439552UL+i_31*4096UL;
        pa_33=va_32;
        mappages(kernel_pagetable,va_32,4096UL,pa_33,(1L<<0)|(1L<<1)|(1L<<2));
    }
    mappages(kernel_pagetable,33603576UL,4096,33603576UL,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33570816UL,4096,33570816UL,(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    kernel_satp=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    enable_mmu(kernel_pagetable);
}

void* walkaddr(unsigned long  long* pagetable, unsigned long  long va){
unsigned long  long* pte_34;
void* __result_obj__9;
void* __result_obj__10;
void* __result_obj__11;
unsigned long  long pa_35;
void* __result_obj__12;
    pte_34=walk(pagetable,va,0);
    if(    pte_34==0    ) {
        __result_obj__9 = (void*)0;
        return __result_obj__9;
    }
    if(    (*pte_34&(1L<<0))==0    ) {
        __result_obj__10 = (void*)0;
        return __result_obj__10;
    }
    if(    (*pte_34&(1L<<4))==0    ) {
        __result_obj__11 = (void*)0;
        return __result_obj__11;
    }
    pa_35=(((*pte_34)>>10)<<12);
    __result_obj__12 = (void*)(pa_35+(va&(4096-1)));
    return __result_obj__12;
}

int copyout(unsigned long  long* pagetable, unsigned long  long dstva, void* src, unsigned long  long len){
unsigned long  long va0_36;
unsigned long  long off_37;
char* pa_38;
unsigned long  long n_39;
pa_38 = (void*)0;
    va0_36=(((dstva))&~(4096-1));
    off_37=dstva-va0_36;
    while(    len>0    ) {
        if(        (pa_38=walkaddr(pagetable,va0_36))==0        ) {
            return -1;
        }
        n_39=4096-off_37;
        if(        n_39>len        ) {
            n_39=len;
        }
        memcpy(pa_38+off_37,src,n_39);
        len-=n_39;
        src+=n_39;
        va0_36+=4096;
        off_37=0;
    }
    return 0;
}

void setting_user_pagetable(unsigned long  long* pagetable){
    mappages(pagetable,(unsigned long  long)TRAMPOLINE,4096,(unsigned long  long)TRAMPOLINE,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3));
    mappages(pagetable,(unsigned long  long)TRAPFRAME,4096,(unsigned long  long)TRAPFRAME,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4)|(1L<<3));
    mappages(pagetable,(unsigned long  long)TRAPFRAME2,4096,(unsigned long  long)TRAPFRAME2,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4)|(1L<<3));
    mappages(pagetable,(unsigned long  long)COMMON,4096,(unsigned long  long)COMMON,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3)|(1L<<4));
    mappages(pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4));
    mappages(pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4));
    __asm volatile("sfence.vma zero, zero");
}

void alloc_prog(){
struct proc* result_40;
unsigned long  long* pagetable_41;
struct elfhdr* eh_42;
struct proghdr* ph_43;
unsigned long  long size_44;
unsigned long  long va_45;
int i_46;
void* pa_47;
char* pa_48;
unsigned long  long satp_val_49;
    result_40=calloc(1,sizeof(struct proc));
    pagetable_41=(unsigned long  long*)kalloc();
    memset(pagetable_41,0,4096);
    setting_user_pagetable(pagetable_41);
    result_40->pagetable=pagetable_41;
    eh_42=(struct elfhdr*)hello_elf;
    if(    eh_42->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_43=(struct proghdr*)(hello_elf+eh_42->phoff);
    size_44=ph_43->filesz;
    va_45=0;
    for(    i_46=0    ;    i_46<eh_42->phnum    ;    i_46++,ph_43++    ){
        if(        ph_43->type!=1        ) {
            continue;
        }
        for(        va_45=(((ph_43->vaddr))&~(4096-1))        ;        va_45<ph_43->vaddr+ph_43->memsz        ;        va_45+=4096        ){
            pa_47=kalloc();
            if(            !pa_47            ) {
                panic("kalloc");
            }
            memset(pa_47,0,4096);
            mappages(result_40->pagetable,va_45,4096,(unsigned long  long)pa_47,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_40->pagetable,ph_43->vaddr,hello_elf+ph_43->off,ph_43->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    pa_48=kalloc();
    if(    !pa_48    ) {
        panic("kalloc");
    }
    memset(pa_48,0,4096);
    mappages(result_40->pagetable,va_45,4096,(unsigned long  long)pa_48,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    result_40->stack=(char*)va_45+4096;
    result_40->context.sp=va_45+4096;
    result_40->context.mepc=eh_42->entry;
    satp_val_49=((8L<<60)|(((unsigned long  long)result_40->pagetable)>>12));
    gProc[gNumProc++]=result_40;
}

void alloc_prog2(){
struct proc* result_50;
unsigned long  long* pagetable_51;
struct elfhdr* eh_52;
struct proghdr* ph_53;
unsigned long  long size_54;
unsigned long  long va_55;
int i_56;
void* pa_57;
char* pa_58;
unsigned long  long satp_val_59;
memset(&va_55, 0, sizeof(unsigned long  long));
    result_50=calloc(1,sizeof(struct proc));
    pagetable_51=(unsigned long  long*)kalloc();
    memset(pagetable_51,0,4096);
    setting_user_pagetable(pagetable_51);
    result_50->pagetable=pagetable_51;
    eh_52=(struct elfhdr*)hello2_elf;
    if(    eh_52->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_53=(struct proghdr*)(hello2_elf+eh_52->phoff);
    size_54=ph_53->filesz;
    for(    i_56=0    ;    i_56<eh_52->phnum    ;    i_56++,ph_53++    ){
        if(        ph_53->type!=1        ) {
            continue;
        }
        for(        va_55=(((ph_53->vaddr))&~(4096-1))        ;        va_55<ph_53->vaddr+ph_53->memsz        ;        va_55+=4096        ){
            pa_57=kalloc();
            if(            !pa_57            ) {
                panic("kalloc");
            }
            memset(pa_57,0,4096);
            mappages(result_50->pagetable,va_55,4096,(unsigned long  long)pa_57,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_50->pagetable,ph_53->vaddr,hello2_elf+ph_53->off,ph_53->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    __asm volatile("sfence.vma zero, zero");
    pa_58=kalloc();
    if(    !pa_58    ) {
        panic("kalloc");
    }
    memset(pa_58,0,4096);
    mappages(result_50->pagetable,va_55,4096,(unsigned long  long)pa_58,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    result_50->stack=(char*)va_55+4096;
    result_50->context.sp=va_55+4096;
    result_50->context.mepc=eh_52->entry;
    satp_val_59=((8L<<60)|(((unsigned long  long)result_50->pagetable)>>12));
    gProc[gNumProc++]=result_50;
}

void my_intr_off(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void my_intr_on(){
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

void enable_timer_interrupts(){
unsigned long  int x_61;
memset(&x_61, 0, sizeof(unsigned long  int));
    x_61=r_sie();
    x_61|=(1UL<<5);
    w_sie(x_61);
    x_61=r_sstatus();
    x_61|=(1UL<<1);
    w_sstatus(x_61);
}

void disable_timer_interrupts(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void timer_reset(){
unsigned long  long next_62;
    next_62=r_time()+10000UL;
    w_stimecmp(next_62);
}

void timer_handler(){
struct proc* p_63;
struct context* tf_64;
struct proc* old_65;
struct proc* new__66;
    disable_timer_interrupts();
    p_63=gProc[gActiveProc];
    tf_64=(struct context*)TRAPFRAME;
    p_63->context=*tf_64;
    timer_reset();
    old_65=gProc[gActiveProc];
    gActiveProc++;
    if(    gActiveProc>=gNumProc    ) {
        gActiveProc=0;
    }
    new__66=gProc[gActiveProc];
    if(    new__66!=old_65    ) {
        user_sp=new__66->context.sp;
        user_satp=((8L<<60)|(((unsigned long  long)new__66->pagetable)>>12));
        swtch(&old_65->context,&new__66->context);
    }
}

void console_init(){
    initlock(&console_lock,"console");
}

void puts(const char* s){
    acquire(&console_lock);
    while(    *s    ) {
        putchar(*s++);
    }
    release(&console_lock);
}

unsigned long  int syscall_handler(unsigned long  int a0, unsigned long  int a1, unsigned long  int a2, unsigned long  int a3, unsigned long  int a4, unsigned long  int a5, unsigned long  int a6, unsigned long  int syscall_no){
unsigned long  int arg0_67;
unsigned long  int arg1_68;
unsigned long  int arg2_69;
unsigned long  int arg3_70;
unsigned long  int arg4_71;
unsigned long  int arg5_72;
unsigned long  int arg6_73;
unsigned long  int arg_syscall_no_74;
unsigned long  long user_va_76;
struct proc* p_77;
int i_78;
char* user_char_pa_79;
    arg0_67=a0;
    arg1_68=a1;
    arg2_69=a2;
    arg3_70=a3;
    arg4_71=a4;
    arg5_72=a5;
    arg6_73=a6;
    arg_syscall_no_74=syscall_no;
    disable_timer_interrupts();
    switch (    syscall_no) {
        case 64:
        {
            char kernel_buf_75[256];
            memset(&kernel_buf_75, 0, sizeof(char)            *(256)            );
            user_va_76=arg1_68;
            p_77=gProc[gActiveProc];
            i_78=0;
            for(            i_78=0            ;            i_78<sizeof(kernel_buf_75)-1            ;            ++i_78            ){
                user_char_pa_79=walkaddr(p_77->pagetable,user_va_76+i_78);
                if(                user_char_pa_79==0                ) {
                    panic("walkaddr");
                }
                kernel_buf_75[i_78]=*user_char_pa_79;
                if(                kernel_buf_75[i_78]==0                ) {
                    break;
                }
            }
            kernel_buf_75[i_78]=0;
            if(            arg0_67==1            ) {
                puts((char*)kernel_buf_75);
            }
            return 0;
        }
        default:
        panic("invalid syscall");
    }
}

void timerinit(){
    w_stvec((unsigned long  long)trapvec&~3);
    w_stimecmp(r_time()+10000000);
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

int main(){
struct proc* p_82;
unsigned long  int usersp_83;
unsigned long  long usersatp_84;
unsigned long  int entry_85;
    come_heap_init(0, 0, 0);
    timerinit();
    trap_init();
    plic_init();
    plic_enable(10);
    w_stimecmp(r_time()+10000000);
    uart_init();
    kinit();
    console_init();
    mmu_init();
    virtio_blk_init();
    read_superblock();
    w_stimecmp(r_time()+10000000);
    alloc_prog();
    alloc_prog2();
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_82=gProc[gActiveProc];
    usersp_83=(unsigned long  long)(p_82->stack);
    usersatp_84=((8L<<60)|(((unsigned long  long)p_82->pagetable)>>12));
    entry_85=p_82->context.mepc;
    w_stimecmp(r_time()+100000);
    kernel_sp=read_s_sp();
    enter_user(entry_85,usersp_83,usersatp_84,10000UL);
    while(    1    ) {
        ;
    }
come_heap_final();
}

void* malloc(unsigned long  int size){
void* __result_obj__13;
struct mem_block* current_86;
struct mem_block* prev_87;
void* __result_obj__14;
struct mem_block* new_mem_88;
void* __result_obj__15;
void* __result_obj__16;
    if(    size==0    ) {
        __result_obj__13 = ((void*)0);
        return __result_obj__13;
    }
    if(    size%8!=0    ) {
        size+=8-(size%8);
    }
    size+=sizeof(struct mem_block);
    current_86=free_list;
    prev_87=((void*)0);
    while(    current_86!=((void*)0)    ) {
        if(        current_86->size>=size        ) {
            if(            prev_87==((void*)0)            ) {
                free_list=current_86->next;
            }
            else {
                prev_87->next=current_86->next;
            }
            __result_obj__14 = (void*)(current_86+1);
            return __result_obj__14;
        }
        prev_87=current_86;
        current_86=current_86->next;
    }
    new_mem_88=(struct mem_block*)sbrk(size);
    if(    new_mem_88==(void*)-1    ) {
        __result_obj__15 = ((void*)0);
        return __result_obj__15;
    }
    new_mem_88->size=size;
    new_mem_88->next=((void*)0);
    __result_obj__16 = (void*)(new_mem_88+1);
    return __result_obj__16;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_89;
void* __result_obj__17;
void* ptr_90;
void* __result_obj__18;
    total_size_89=nmemb*size;
    if(    total_size_89==0    ) {
        __result_obj__17 = ((void*)0);
        return __result_obj__17;
    }
    ptr_90=malloc(total_size_89);
    if(    ptr_90!=((void*)0)    ) {
        memset(ptr_90,0,total_size_89);
    }
    __result_obj__18 = ptr_90;
    return __result_obj__18;
}

void free(void* ptr){
struct mem_block* block_91;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_91=(struct mem_block*)ptr-1;
    block_91->next=free_list;
    free_list=block_91;
}

char* strdup(const char* s){
char* s2_92;
unsigned long  int len_93;
char* p_94;
char* __result_obj__19;
    s2_92=s;
    len_93=strlen(s2_92)+1;
    p_94=malloc(len_93);
    if(    p_94    ) {
        memcpy(p_94,s2_92,len_93);
    }
    __result_obj__19 = p_94;
    return __result_obj__19;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__20;
char* __result_obj__21;
char* __result_obj__22;
    if(    !*needle    ) {
        __result_obj__20 = (char*)haystack;
        return __result_obj__20;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_95=haystack;
        const char* n_96=needle;
        while(        *h_95&&*n_96&&(*h_95==*n_96)        ) {
            h_95++;
            n_96++;
        }
        if(        !*n_96        ) {
            __result_obj__21 = (char*)haystack;
            return __result_obj__21;
        }
    }
    __result_obj__22 = ((void*)0);
    return __result_obj__22;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_97;
int i_98;
void* __result_obj__23;
    cdst_97=(char*)dst;
    for(    i_98=0    ;    i_98<n    ;    i_98++    ){
        cdst_97[i_98]=c;
    }
    __result_obj__23 = dst;
    return __result_obj__23;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_99;
const unsigned char* s2_100;
memset(&s1_99, 0, sizeof(const unsigned char*));
memset(&s2_100, 0, sizeof(const unsigned char*));
    s1_99=v1;
    s2_100=v2;
    while(    n-->0    ) {
        if(        *s1_99!=*s2_100        ) {
            return *s1_99-*s2_100;
        }
        s1_99++,s2_100++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_101;
char* d_102;
void* __result_obj__24;
void* __result_obj__25;
s_101 = (void*)0;
d_102 = (void*)0;
    if(    n==0    ) {
        __result_obj__24 = dst;
        return __result_obj__24;
    }
    s_101=src;
    d_102=dst;
    if(    s_101<d_102&&s_101+n>d_102    ) {
        s_101+=n;
        d_102+=n;
        while(        n-->0        ) {
            *--d_102=*--s_101;
        }
    }
    else {
        while(        n-->0        ) {
            *d_102++=*s_101++;
        }
    }
    __result_obj__25 = dst;
    return __result_obj__25;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__26;
    __result_obj__26 = memmove(dst,src,n);
    return __result_obj__26;
}

int strncmp(const char* p, const char* q, unsigned int n){
    while(    n>0&&*p&&*p==*q    ) {
        n--,p++,q++;
    }
    if(    n==0    ) {
        return 0;
    }
    return (unsigned char)*p-(unsigned char)*q;
}

char* strncpy(char* s, const char* t, int n){
char* os_103;
char* __result_obj__27;
os_103 = (void*)0;
    os_103=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__27 = os_103;
    return __result_obj__27;
}

int strlen(const char* s){
int n_104;
memset(&n_104, 0, sizeof(int));
    for(    n_104=0    ;    s[n_104]    ;    n_104++    ){
        ;
    }
    return n_104;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_105;
char* __result_obj__28;
    d_105=dest;
    while(    *d_105    ) {
        d_105++;
    }
    while(    n--&&*src    ) {
        *d_105++=*src++;
    }
    *d_105=0;
    __result_obj__28 = dest;
    return __result_obj__28;
}

char* strtok(char* s, const char* delim){
static char* next_106;
char* start_107;
char* p_108;
char* __result_obj__29;
int is_delim_110;
char* __result_obj__30;
int is_delim_112;
char* __result_obj__31;
next_106 = (void*)0;
start_107 = (void*)0;
p_108 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_106=s;
    }
    if(    next_106==((void*)0)    ) {
        __result_obj__29 = ((void*)0);
        return __result_obj__29;
    }
    start_107=next_106;
    while(    *start_107!=0    ) {
        const char* d_109=delim;
        is_delim_110=0;
        while(        *d_109!=0        ) {
            if(            *start_107==*d_109            ) {
                is_delim_110=1;
                break;
            }
            d_109++;
        }
        if(        !is_delim_110        ) {
            break;
        }
        start_107++;
    }
    if(    *start_107==0    ) {
        next_106=((void*)0);
        __result_obj__30 = ((void*)0);
        return __result_obj__30;
    }
    p_108=start_107;
    while(    *p_108!=0    ) {
        const char* d_111=delim;
        is_delim_112=0;
        while(        *d_111!=0        ) {
            if(            *p_108==*d_111            ) {
                is_delim_112=1;
                break;
            }
            d_111++;
        }
        if(        is_delim_112        ) {
            break;
        }
        p_108++;
    }
    if(    *p_108==0    ) {
        next_106=((void*)0);
    }
    else {
        *p_108=0;
        next_106=p_108+1;
    }
    __result_obj__31 = start_107;
    return __result_obj__31;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_113;
int i_115;
int negative_116;
char* __result_obj__32;
int digit_117;
char* __result_obj__33;
    p_113=buf;
    char tmp_114[32];
    memset(&tmp_114, 0, sizeof(char)    *(32)    );
    i_115=0;
    negative_116=0;
    if(    base<2||base>16    ) {
        *p_113=0;
        __result_obj__32 = p_113;
        return __result_obj__32;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_116=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_117=val_%base;
        tmp_114[i_115++]=(((digit_117<10))?(48+digit_117):(97+digit_117-10));
        val_/=base;
    } while(    val_    );
    if(    negative_116    ) {
        *p_113++=45;
    }
    while(    i_115--    ) {
        *p_113++=tmp_114[i_115];
    }
    *p_113=0;
    __result_obj__33 = buf;
    return __result_obj__33;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_119;
const char* s_120;
unsigned long  int remaining_122;
s_120 = (void*)0;
    char out2_118[512];
    memset(&out2_118, 0, sizeof(char)    *(512)    );
    p_119=out2_118;
    char buf_121[32];
    memset(&buf_121, 0, sizeof(char)    *(32)    );
    remaining_122=sizeof(out2_118);
    for(    ;    *fmt&&remaining_122>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_119++=*fmt;
            remaining_122--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_121,__builtin_va_arg(ap,int),10,1);
            s_120=buf_121;
            break;
            case 117:
            itoa(buf_121,__builtin_va_arg(ap,unsigned int),10,0);
            s_120=buf_121;
            break;
            case 120:
            itoa(buf_121,__builtin_va_arg(ap,unsigned int),16,0);
            s_120=buf_121;
            break;
            case 115:
            s_120=__builtin_va_arg(ap,const char*);
            if(            !s_120            ) {
                s_120="(null)";
            }
            break;
            case 99:
            buf_121[0]=(char)__builtin_va_arg(ap,int);
            buf_121[1]=0;
            s_120=buf_121;
            break;
            case 112:
            strncpy(buf_121,"0x",32);
            itoa(buf_121+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_120=buf_121;
            break;
            case 37:
            buf_121[0]=37;
            buf_121[1]=0;
            s_120=buf_121;
            break;
            default:
            buf_121[0]=37;
            buf_121[1]=*fmt;
            buf_121[2]=0;
            s_120=buf_121;
            break;
        }
        while(        *s_120&&remaining_122>1        ) {
            *p_119++=*s_120++;
            remaining_122--;
        }
    }
    *p_119=0;
    *out=strdup(out2_118);
    return p_119-out2_118;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_123;
char* p_124;
const char* s_125;
unsigned long  int remaining_127;
memset(&ap_123, 0, sizeof(va_list));
s_125 = (void*)0;
    __builtin_va_start(ap_123,fmt);
    p_124=out;
    char buf_126[32];
    memset(&buf_126, 0, sizeof(char)    *(32)    );
    remaining_127=out_size;
    if(    remaining_127==0    ) {
        __builtin_va_end(ap_123);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_127>1            ) {
                *p_124++=*fmt;
                remaining_127--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_125=__builtin_va_arg(ap_123,const char*);
            while(            *s_125&&remaining_127>1            ) {
                *p_124++=*s_125++;
                remaining_127--;
            }
            break;
            case 100:
            itoa(buf_126,__builtin_va_arg(ap_123,int),10,0);
            s_125=buf_126;
            while(            *s_125&&remaining_127>1            ) {
                *p_124++=*s_125++;
                remaining_127--;
            }
            break;
            case 120:
            itoa(buf_126,(unsigned int)__builtin_va_arg(ap_123,int),16,1);
            s_125=buf_126;
            while(            *s_125&&remaining_127>1            ) {
                *p_124++=*s_125++;
                remaining_127--;
            }
            break;
            case 99:
            if(            remaining_127>1            ) {
                *p_124++=(char)__builtin_va_arg(ap_123,int);
                remaining_127--;
            }
            break;
            case 112:
            s_125="0x";
            while(            *s_125&&remaining_127>1            ) {
                *p_124++=*s_125++;
                remaining_127--;
            }
            itoa(buf_126,(long)__builtin_va_arg(ap_123,void*),16,1);
            s_125=buf_126;
            while(            *s_125&&remaining_127>1            ) {
                *p_124++=*s_125++;
                remaining_127--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_126,__builtin_va_arg(ap_123,long),10,1);
                s_125=buf_126;
                while(                *s_125&&remaining_127>1                ) {
                    *p_124++=*s_125++;
                    remaining_127--;
                }
            }
            break;
            default:
            if(            remaining_127>1            ) {
                *p_124++=37;
                remaining_127--;
                if(                remaining_127>1                ) {
                    *p_124++=*fmt;
                    remaining_127--;
                }
            }
            break;
        }
    }
    *p_124=0;
    __builtin_va_end(ap_123);
    return p_124-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_128;
char* p_129;
const char* s_130;
unsigned long  int remaining_132;
memset(&ap_128, 0, sizeof(va_list));
s_130 = (void*)0;
    __builtin_va_start(ap_128,fmt);
    p_129=out;
    char buf_131[32];
    memset(&buf_131, 0, sizeof(char)    *(32)    );
    remaining_132=out_size;
    if(    remaining_132==0    ) {
        __builtin_va_end(ap_128);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_132>1            ) {
                *p_129++=*fmt;
                remaining_132--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_130=__builtin_va_arg(ap_128,const char*);
            while(            *s_130&&remaining_132>1            ) {
                *p_129++=*s_130++;
                remaining_132--;
            }
            break;
            case 100:
            itoa(buf_131,__builtin_va_arg(ap_128,int),10,0);
            s_130=buf_131;
            while(            *s_130&&remaining_132>1            ) {
                *p_129++=*s_130++;
                remaining_132--;
            }
            break;
            case 120:
            itoa(buf_131,(unsigned int)__builtin_va_arg(ap_128,int),16,1);
            s_130=buf_131;
            while(            *s_130&&remaining_132>1            ) {
                *p_129++=*s_130++;
                remaining_132--;
            }
            break;
            case 99:
            if(            remaining_132>1            ) {
                *p_129++=(char)__builtin_va_arg(ap_128,int);
                remaining_132--;
            }
            break;
            case 112:
            s_130="0x";
            while(            *s_130&&remaining_132>1            ) {
                *p_129++=*s_130++;
                remaining_132--;
            }
            itoa(buf_131,(long)__builtin_va_arg(ap_128,void*),16,1);
            s_130=buf_131;
            while(            *s_130&&remaining_132>1            ) {
                *p_129++=*s_130++;
                remaining_132--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_131,__builtin_va_arg(ap_128,long),10,1);
                s_130=buf_131;
                while(                *s_130&&remaining_132>1                ) {
                    *p_129++=*s_130++;
                    remaining_132--;
                }
            }
            break;
            default:
            if(            remaining_132>1            ) {
                *p_129++=37;
                remaining_132--;
                if(                remaining_132>1                ) {
                    *p_129++=*fmt;
                    remaining_132--;
                }
            }
            break;
        }
    }
    *p_129=0;
    __builtin_va_end(ap_128);
    return p_129-out;
}

void printint(int val_, int base, int sign){
int i_134;
int negative_135;
unsigned int uval_136;
int digit_137;
memset(&uval_136, 0, sizeof(unsigned int));
    char buf_133[33];
    memset(&buf_133, 0, sizeof(char)    *(33)    );
    i_134=0;
    negative_135=0;
    if(    sign&&val_<0    ) {
        negative_135=1;
        uval_136=-val_;
    }
    else {
        uval_136=(unsigned int)val_;
    }
    if(    uval_136==0    ) {
        putchar(48);
        return;
    }
    while(    uval_136>0    ) {
        digit_137=uval_136%base;
        buf_133[i_134++]=((digit_137<10)?(48+digit_137):(97+(digit_137-10)));
        uval_136/=base;
    }
    if(    negative_135    ) {
        putchar(45);
    }
    while(    --i_134>=0    ) {
        putchar(buf_133[i_134]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_139;
int negative_140;
int digit_141;
    char buf_138[65];
    memset(&buf_138, 0, sizeof(char)    *(65)    );
    i_139=0;
    negative_140=0;
    if(    sign&&(long)val_<0    ) {
        negative_140=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_141=val_%base;
        buf_138[i_139++]=((digit_141<10)?(48+digit_141):(97+(digit_141-10)));
        val_/=base;
    }
    if(    negative_140    ) {
        putchar(45);
    }
    while(    --i_139>=0    ) {
        putchar(buf_138[i_139]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_143;
int negative_144;
int digit_145;
    char buf_142[65];
    memset(&buf_142, 0, sizeof(char)    *(65)    );
    i_143=0;
    negative_144=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_144=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_145=val_%base;
        buf_142[i_143++]=((digit_145<10)?(48+digit_145):(97+(digit_145-10)));
        val_/=base;
    }
    if(    negative_144    ) {
        putchar(45);
    }
    while(    --i_143>=0    ) {
        putchar(buf_142[i_143]);
    }
}

int printf(const char* fmt, ...){
va_list ap_146;
const char* p_147;
int lcount_148;
unsigned long  int val__149;
unsigned long  long val__150;
long val__151;
long long val__152;
int i_153;
int val__154;
unsigned int val__155;
unsigned long  int val__156;
char c_158;
memset(&ap_146, 0, sizeof(va_list));
p_147 = (void*)0;
    __builtin_va_start(ap_146,fmt);
    for(    p_147=fmt    ;    *p_147    ;    p_147++    ){
        if(        *p_147!=37        ) {
            putchar(*p_147);
            continue;
        }
        p_147++;
        if(        *p_147==108        ) {
            lcount_148=1;
            if(            *(p_147+1)==108            ) {
                lcount_148=2;
                p_147++;
            }
            p_147++;
            switch (            *p_147) {
                case 120:
                {
                    if(                    lcount_148==1                    ) {
                        val__149=__builtin_va_arg(ap_146,unsigned long  int);
                        printlong(val__149,16,0);
                    }
                    else {
                        val__150=__builtin_va_arg(ap_146,unsigned long  long);
                        printlonglong(val__150,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_148==1                    ) {
                        val__151=__builtin_va_arg(ap_146,long);
                        printlong(val__151,10,1);
                    }
                    else {
                        val__152=__builtin_va_arg(ap_146,long  long);
                        printlonglong(val__152,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_153=0                    ;                    i_153<lcount_148                    ;                    i_153++                    ){
                        putchar(108);
                    }
                    putchar(*p_147);
                    break;
                }
            }
        }
        else {
            switch (            *p_147) {
                case 100:
                {
                    val__154=__builtin_va_arg(ap_146,int);
                    printint(val__154,10,1);
                    break;
                }
                case 120:
                {
                    val__155=__builtin_va_arg(ap_146,unsigned int);
                    printint(val__155,16,0);
                    break;
                }
                case 112:
                {
                    val__156=(unsigned long  int)__builtin_va_arg(ap_146,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__156,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_157=__builtin_va_arg(ap_146,const char*);
                    if(                    !s_157                    ) {
                        s_157="(null)";
                    }
                    while(                    *s_157                    ) {
                        putchar(*s_157++);
                    }
                    break;
                }
                case 99:
                {
                    c_158=(char)__builtin_va_arg(ap_146,int);
                    putchar(c_158);
                    break;
                }
                case 37:
                {
                    putchar(37);
                    break;
                }
                default:
                {
                    putchar(37);
                    putchar(*p_147);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_146);
    return 0;
}

void come_push_stackframe(char* sname, int sline, int id){
    if(    gNumComeStackFrame<128    ) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
    if(    gNumComeStackFrame>0    ) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_159;
int i_160;
void* __right_value2 = (void*)0;
    buf_159=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 147, "struct buffer*"))));
    buffer_append_format(buf_159,"%s %d\n",sname,sline);
    for(    i_160=gNumComeStackFrame-2    ;    i_160>=0    ;    i_160--    ){
        buffer_append_format(buf_159,"%s %d #%d\n",gComeStackFrameSName[i_160],gComeStackFrameSLine[i_160],gComeStackFrameID[i_160]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value2=buffer_to_string(buf_159))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_161;
    for(    i_161=gNumComeStackFrame-1    ;    i_161>=0    ;    i_161--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_161],gComeStackFrameSLine[i_161],gComeStackFrameID[i_161]);
    }
}

char* come_get_stackframe(){
void* __right_value3 = (void*)0;
char* __result_obj__34;
    __result_obj__34 = (char*)come_increment_ref_count(((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__34 = come_decrement_ref_count(__result_obj__34, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__34;
}

void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(    !test    ) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

_Bool die(char* msg){
    perror(msg);
    stackframe_v2();
    exit(4);
    return (_Bool)0;
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
int i_162;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_162=0    ;    i_162<gHeapPages.mSizePages    ;    i_162++    ){
        gHeapPages.mPages[i_162]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_163;
int n_164;
_Bool flag_165;
int i_166;
struct sMemHeaderTiny* it_167;
int n_168;
int i_169;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_163=gAllocMem;
        n_164=0;
        while(        it_163        ) {
            n_164++;
            flag_165=(_Bool)0;
            printf("#%d ",n_164);
            if(            it_163->class_name            ) {
                printf("%p (%s): ",(char*)it_163+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_163->class_name);
            }
            for(            i_166=0            ;            i_166<16            ;            i_166++            ){
                if(                it_163->sname[i_166]                ) {
                    printf("%s %d #%d, ",it_163->sname[i_166],it_163->sline[i_166],it_163->id[i_166]);
                    flag_165=(_Bool)1;
                }
            }
            if(            flag_165            ) {
                puts("");
            }
            it_163=it_163->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_164,gNumAlloc,gNumFree);
    }
    else {
        it_167=(struct sMemHeaderTiny*)gAllocMem;
        n_168=0;
        while(        it_167        ) {
            n_168++;
            if(            it_167->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_168,(char*)it_167+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_167->class_name,it_167->sname,it_167->sline);
            }
            it_167=it_167->next;
        }
        if(        n_168>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_168,gNumAlloc,gNumFree);
        }
    }
    for(    i_169=0    ;    i_169<gHeapPages.mSizePages    ;    i_169++    ){
        free(gHeapPages.mPages[i_169]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_170;
void* __result_obj__35;
    result_170=((void*)0);
    size=(size+7&~7);
    result_170=calloc(1,size);
    __result_obj__35 = result_170;
    return __result_obj__35;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_171;
struct sMemHeader* prev_it_172;
struct sMemHeader* next_it_173;
unsigned long  int size_174;
struct sMemHeaderTiny* it_175;
struct sMemHeaderTiny* prev_it_176;
struct sMemHeaderTiny* next_it_177;
unsigned long  int size_178;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_171=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_171->allocated!=177783            ) {
                return;
            }
            it_171->allocated=0;
            prev_it_172=it_171->prev;
            next_it_173=it_171->next;
            if(            gAllocMem==it_171            ) {
                gAllocMem=next_it_173;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_172                ) {
                    prev_it_172->next=next_it_173;
                }
                if(                next_it_173                ) {
                    next_it_173->prev=prev_it_172;
                }
            }
            size_174=it_171->size;
            free(it_171);
            gNumFree++;
        }
        else {
            it_175=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_175->allocated!=177783            ) {
                return;
            }
            it_175->allocated=0;
            prev_it_176=it_175->prev;
            next_it_177=it_175->next;
            if(            gAllocMem==it_175            ) {
                gAllocMem=(struct sMemHeader*)next_it_177;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_176                ) {
                    prev_it_176->next=next_it_177;
                }
                if(                next_it_177                ) {
                    next_it_177->prev=prev_it_176;
                }
            }
            size_178=it_175->size;
            free(it_175);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_179;
struct sMemHeader* it_180;
int i_181;
int i_182;
void* __result_obj__36;
void* result_183;
struct sMemHeaderTiny* it_184;
void* __result_obj__37;
memset(&i_181, 0, sizeof(int));
memset(&i_182, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_179=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_180=result_179;
        it_180->allocated=177783;
        it_180->size=size+sizeof(struct sMemHeader);
        it_180->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_181=0            ;            i_181<gNumComeStackFrame            ;            i_181++            ){
                it_180->sname[i_181]=gComeStackFrameSName[i_181];
                it_180->sline[i_181]=gComeStackFrameSLine[i_181];
                it_180->id[i_181]=gComeStackFrameID[i_181];
            }
        }
        else {
            for(            i_182=0            ;            i_182<16            ;            i_182++            ){
                it_180->sname[i_182]=gComeStackFrameSName[gNumComeStackFrame-1-i_182];
                it_180->sline[i_182]=gComeStackFrameSLine[gNumComeStackFrame-1-i_182];
                it_180->id[i_182]=gComeStackFrameID[gNumComeStackFrame-1-i_182];
            }
        }
        come_pop_stackframe_v2();
        it_180->next=gAllocMem;
        it_180->prev=((void*)0);
        it_180->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_180;
        }
        gAllocMem=it_180;
        gNumAlloc++;
        __result_obj__36 = (char*)result_179+sizeof(struct sMemHeader);
        return __result_obj__36;
    }
    else {
        result_183=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_184=result_183;
        it_184->allocated=177783;
        it_184->class_name=class_name;
        it_184->sname=sname;
        it_184->sline=sline;
        it_184->size=size+sizeof(struct sMemHeaderTiny);
        it_184->free_next=((void*)0);
        it_184->next=(struct sMemHeaderTiny*)gAllocMem;
        it_184->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_184;
        }
        gAllocMem=(struct sMemHeader*)it_184;
        gNumAlloc++;
        __result_obj__37 = (char*)result_183+sizeof(struct sMemHeaderTiny);
        return __result_obj__37;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_185;
char* __result_obj__38;
struct sMemHeaderTiny* it_186;
char* __result_obj__39;
    if(    gComeDebugLib    ) {
        it_185=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_185->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_185);
            exit(2);
        }
        __result_obj__38 = it_185->class_name;
        return __result_obj__38;
    }
    else {
        it_186=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_186->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_186);
            exit(2);
        }
        __result_obj__39 = it_186->class_name;
        return __result_obj__39;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_187;
int i_188;
struct sMemHeaderTiny* it_189;
    if(    gComeDebugLib    ) {
        it_187=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_187->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_187->class_name        ) {
            printf("(%s): ",it_187->class_name);
        }
        for(        i_188=0        ;        i_188<16        ;        i_188++        ){
            if(            it_187->sname[i_188]            ) {
                printf("%s %d #%d, ",it_187->sname[i_188],it_187->sline[i_188],it_187->id[i_188]);
            }
        }
        puts("");
    }
    else {
        it_189=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_189->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_189->class_name,it_189->sname,it_189->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_190;
unsigned long  int* ref_count_191;
unsigned long  int* size2_192;
void* __result_obj__40;
    mem_190=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_191=(unsigned long  int*)mem_190;
    *ref_count_191=0;
    size2_192=(unsigned long  int*)(mem_190+sizeof(unsigned long  int));
    *size2_192=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__40 = mem_190+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__40;
}

void come_free(void* mem){
unsigned long  int* ref_count_193;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_193=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_193);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__41;
char* mem_194;
unsigned long  int* size_p_195;
unsigned long  int size_196;
void* result_197;
void* __result_obj__42;
    if(    !block    ) {
        __result_obj__41 = ((void*)0);
        return __result_obj__41;
    }
    mem_194=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_195=(unsigned long  int*)(mem_194+sizeof(unsigned long  int));
    size_196=*size_p_195-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_197=come_calloc_v2(1,size_196,sname,sline,class_name);
    memcpy(result_197,block,size_196);
    __result_obj__42 = result_197;
    return __result_obj__42;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__43;
unsigned long  int* ref_count_198;
void* __result_obj__44;
    if(    mem==((void*)0)    ) {
        __result_obj__43 = mem;
        return __result_obj__43;
    }
    ref_count_198=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_198)++;
    __result_obj__44 = mem;
    return __result_obj__44;
}

void* come_print_ref_count(void* mem){
void* __result_obj__45;
unsigned long  int* ref_count_199;
void* __result_obj__46;
    if(    mem==((void*)0)    ) {
        __result_obj__45 = mem;
        return __result_obj__45;
    }
    ref_count_199=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_199);
    __result_obj__46 = mem;
    return __result_obj__46;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_200;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_200=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_200;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__47;
void* __result_obj__48;
unsigned long  int* ref_count_201;
unsigned long  int count_202;
void (*finalizer_203)(void*);
void* __result_obj__49;
void* __result_obj__50;
memset(&finalizer_203, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__47 = mem;
            return __result_obj__47;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__48 = ((void*)0);
        return __result_obj__48;
    }
    ref_count_201=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_201)--;
    }
    count_202=*ref_count_201;
    if(    !no_free&&count_202<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_203=protocol_fun;
            finalizer_203(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__49 = ((void*)0);
        return __result_obj__49;
    }
    __result_obj__50 = mem;
    return __result_obj__50;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_204)(void*);
void (*finalizer_205)(void*);
void (*finalizer_206)(void*);
unsigned long  int* ref_count_207;
unsigned long  int count_208;
void (*finalizer_209)(void*);
void (*finalizer_210)(void*);
void (*finalizer_211)(void*);
memset(&finalizer_204, 0, sizeof(void (*)(void*)));
memset(&finalizer_205, 0, sizeof(void (*)(void*)));
memset(&finalizer_206, 0, sizeof(void (*)(void*)));
memset(&finalizer_209, 0, sizeof(void (*)(void*)));
memset(&finalizer_210, 0, sizeof(void (*)(void*)));
memset(&finalizer_211, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            return;
        }
    }
    if(    mem==((void*)0)    ) {
        return;
    }
    if(    call_finalizer_only    ) {
        if(        fun        ) {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_204=protocol_fun;
                finalizer_204(protocol_obj);
            }
            finalizer_205=fun;
            finalizer_205(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_206=protocol_fun;
                finalizer_206(protocol_obj);
            }
        }
    }
    else {
        ref_count_207=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_207)--;
        }
        count_208=*ref_count_207;
        if(        !no_free&&count_208<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_209=protocol_fun;
                        finalizer_209(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_210=fun;
                        finalizer_210(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_211=protocol_fun;
                        finalizer_211(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__51;
int len_212;
void* __right_value4 = (void*)0;
char* result_213;
char* __result_obj__52;
    if(    str==((void*)0)    ) {
        __result_obj__51 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__51 = come_decrement_ref_count(__result_obj__51, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__51;
    }
    len_212=strlen(str)+1;
    result_213=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_212)), "/usr/local/include/comelang.h", 911, "char*"));
    strncpy(result_213,str,len_212);
    __result_obj__52 = (char*)come_increment_ref_count(result_213);
    (result_213 = come_decrement_ref_count(result_213, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__52;
}

void come_push_stackframe_v2(char* sname, int sline, int id){
    come_push_stackframe(sname,sline,id);
}

void come_pop_stackframe_v2(){
    come_pop_stackframe();
}

void come_save_stackframe_v2(char* sname, int sline){
    come_save_stackframe(sname,sline);
}

void stackframe_v2(){
    stackframe();
}

char* come_get_stackframe_v2(){
void* __right_value5 = (void*)0;
char* __result_obj__53;
    __result_obj__53 = (char*)come_increment_ref_count(((char*)(__right_value5=come_get_stackframe())));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__53 = come_decrement_ref_count(__result_obj__53, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__53;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__54;
    __result_obj__54 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__54;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value6 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__55;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2868, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__55 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__55;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value7 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__56;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2878, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__56 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__56, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__56;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__57;
void* __right_value8 = (void*)0;
struct buffer* result_214;
void* __right_value9 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__58;
    if(    self==((void*)0)    ) {
        __result_obj__57 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__57;
    }
    result_214=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2898, "struct buffer*"));
    result_214->size=self->size;
    __dec_obj3=result_214->buf,
    result_214->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2901, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_214->len=self->len;
    memcpy(result_214->buf,self->buf,self->len);
    __result_obj__58 = (struct buffer*)come_increment_ref_count(result_214);
    come_call_finalizer(buffer_finalize, result_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__58;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
_Bool __result_obj__59;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__59 = string_equals(((char*)(__right_value10=buffer_to_string(left))),((char*)(__right_value11=buffer_to_string(right))));
    (__right_value10 = come_decrement_ref_count(__right_value10, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__59;
}

int buffer_length(struct buffer* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self){
    if(    self==((void*)0)    ) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
    if(    self==((void*)0)    ) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size){
struct buffer* __result_obj__60;
void* __right_value12 = (void*)0;
char* old_buf_215;
int old_len_216;
int new_size_217;
void* __right_value13 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__61;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__60 = self;
        return __result_obj__60;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_215=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2949, "char*"));
        memcpy(old_buf_215,self->buf,self->size);
        old_len_216=self->len;
        new_size_217=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_217)), "/usr/local/include/comelang.h", 2953, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_215,old_len_216);
        self->buf[old_len_216]=0;
        self->size=new_size_217;
        (old_buf_215 = come_decrement_ref_count(old_buf_215, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__61 = self;
    return __result_obj__61;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__62;
void* __right_value14 = (void*)0;
char* old_buf_218;
int old_len_219;
int new_size_220;
void* __right_value15 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__63;
    if(    self==((void*)0)    ) {
        __result_obj__62 = ((void*)0);
        return __result_obj__62;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_218=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2972, "char*"));
        old_len_219=self->len;
        new_size_220=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_220)), "/usr/local/include/comelang.h", 2976, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_218,old_len_219);
        self->buf[old_len_219]=0;
        self->size=new_size_220;
        (old_buf_218 = come_decrement_ref_count(old_buf_218, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__63 = self;
    return __result_obj__63;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__64;
int size_221;
void* __right_value16 = (void*)0;
char* old_buf_222;
int old_len_223;
int new_size_224;
void* __right_value17 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__65;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__64 = self;
        return __result_obj__64;
    }
    size_221=strlen(mem);
    if(    self->len+size_221+1+1>=self->size    ) {
        old_buf_222=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2998, "char*"));
        memcpy(old_buf_222,self->buf,self->size);
        old_len_223=self->len;
        new_size_224=(self->size+size_221+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_224)), "/usr/local/include/comelang.h", 3002, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_222,old_len_223);
        self->buf[old_len_223]=0;
        self->size=new_size_224;
        (old_buf_222 = come_decrement_ref_count(old_buf_222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_221);
    self->len+=size_221;
    self->buf[self->len]=0;
    __result_obj__65 = self;
    return __result_obj__65;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__66;
va_list args_225;
char* result_226;
int len_227;
struct buffer* __result_obj__67;
void* __right_value18 = (void*)0;
char* mem_228;
int size_229;
void* __right_value19 = (void*)0;
char* old_buf_230;
int old_len_231;
int new_size_232;
void* __right_value20 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__68;
result_226 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__66 = self;
        return __result_obj__66;
    }
    __builtin_va_start(args_225,msg);
    len_227=vasprintf(&result_226,msg,args_225);
    __builtin_va_end(args_225);
    if(    len_227<0    ) {
        __result_obj__67 = self;
        return __result_obj__67;
    }
    mem_228=(char*)come_increment_ref_count(__builtin_string(result_226));
    size_229=strlen(mem_228);
    if(    self->len+size_229+1+1>=self->size    ) {
        old_buf_230=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3046, "char*"));
        memcpy(old_buf_230,self->buf,self->size);
        old_len_231=self->len;
        new_size_232=(self->size+size_229+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_232)), "/usr/local/include/comelang.h", 3050, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_230,old_len_231);
        self->buf[old_len_231]=0;
        self->size=new_size_232;
        (old_buf_230 = come_decrement_ref_count(old_buf_230, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_228,size_229);
    self->len+=size_229;
    self->buf[self->len]=0;
    free(result_226);
    __result_obj__68 = self;
    (mem_228 = come_decrement_ref_count(mem_228, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__68;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__69;
int size_233;
void* __right_value21 = (void*)0;
char* old_buf_234;
int old_len_235;
int new_size_236;
void* __right_value22 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__70;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__69 = self;
        return __result_obj__69;
    }
    size_233=strlen(mem)+1;
    if(    self->len+size_233+1+1+1>=self->size    ) {
        old_buf_234=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3072, "char*"));
        memcpy(old_buf_234,self->buf,self->size);
        old_len_235=self->len;
        new_size_236=(self->size+size_233+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_236)), "/usr/local/include/comelang.h", 3076, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_234,old_len_235);
        self->buf[old_len_235]=0;
        self->size=new_size_236;
        (old_buf_234 = come_decrement_ref_count(old_buf_234, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_233);
    self->len+=size_233;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__70 = self;
    return __result_obj__70;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__71;
int* mem_237;
int size_238;
void* __right_value23 = (void*)0;
char* old_buf_239;
int old_len_240;
int new_size_241;
void* __right_value24 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__72;
    if(    self==((void*)0)    ) {
        __result_obj__71 = ((void*)0);
        return __result_obj__71;
    }
    mem_237=&value;
    size_238=sizeof(int);
    if(    self->len+size_238+1+1>=self->size    ) {
        old_buf_239=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3099, "char*"));
        memcpy(old_buf_239,self->buf,self->size);
        old_len_240=self->len;
        new_size_241=(self->size+size_238+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_241)), "/usr/local/include/comelang.h", 3103, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_239,old_len_240);
        self->buf[old_len_240]=0;
        self->size=new_size_241;
        (old_buf_239 = come_decrement_ref_count(old_buf_239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_237,size_238);
    self->len+=size_238;
    self->buf[self->len]=0;
    __result_obj__72 = self;
    return __result_obj__72;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_242;
int size_243;
void* __right_value25 = (void*)0;
char* old_buf_244;
int old_len_245;
int new_size_246;
void* __right_value26 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__73;
    mem_242=&value;
    size_243=sizeof(long);
    if(    self->len+size_243+1+1>=self->size    ) {
        old_buf_244=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3122, "char*"));
        memcpy(old_buf_244,self->buf,self->size);
        old_len_245=self->len;
        new_size_246=(self->size+size_243+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_246)), "/usr/local/include/comelang.h", 3126, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_244,old_len_245);
        self->buf[old_len_245]=0;
        self->size=new_size_246;
        (old_buf_244 = come_decrement_ref_count(old_buf_244, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_242,size_243);
    self->len+=size_243;
    self->buf[self->len]=0;
    __result_obj__73 = self;
    return __result_obj__73;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__74;
short* mem_247;
int size_248;
void* __right_value27 = (void*)0;
char* old_buf_249;
int old_len_250;
int new_size_251;
void* __right_value28 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__75;
    if(    self==((void*)0)    ) {
        __result_obj__74 = ((void*)0);
        return __result_obj__74;
    }
    mem_247=&value;
    size_248=sizeof(short);
    if(    self->len+size_248+1+1>=self->size    ) {
        old_buf_249=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3149, "char*"));
        memcpy(old_buf_249,self->buf,self->size);
        old_len_250=self->len;
        new_size_251=(self->size+size_248+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_251)), "/usr/local/include/comelang.h", 3153, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_249,old_len_250);
        self->buf[old_len_250]=0;
        self->size=new_size_251;
        (old_buf_249 = come_decrement_ref_count(old_buf_249, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_247,size_248);
    self->len+=size_248;
    self->buf[self->len]=0;
    __result_obj__75 = self;
    return __result_obj__75;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__76;
int len_252;
int new_size_253;
void* __right_value29 = (void*)0;
char* __dec_obj12;
int i_254;
struct buffer* __result_obj__77;
    if(    self==((void*)0)    ) {
        __result_obj__76 = ((void*)0);
        return __result_obj__76;
    }
    len_252=self->len;
    len_252=(len_252+3)&~3;
    if(    len_252>=self->size    ) {
        new_size_253=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_253)), "/usr/local/include/comelang.h", 3177, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_253;
    }
    for(    i_254=self->len    ;    i_254<len_252    ;    i_254++    ){
        self->buf[i_254]=0;
    }
    self->len=len_252;
    __result_obj__77 = self;
    return __result_obj__77;
}

int buffer_compare(struct buffer* left, struct buffer* right){
    if(    left==((void*)0)&&right==((void*)0)    ) {
        return 0;
    }
    else if(    left==((void*)0)    ) {
        return -1;
    }
    else if(    right==((void*)0)    ) {
        return 1;
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* charp_to_buffer(char* self){
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct buffer* result_255;
struct buffer* __result_obj__78;
struct buffer* __result_obj__79;
    result_255=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3207, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__78 = (struct buffer*)come_increment_ref_count(result_255);
        come_call_finalizer(buffer_finalize, result_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__78;
    }
    buffer_append_str(result_255,self);
    __result_obj__79 = (struct buffer*)come_increment_ref_count(result_255);
    come_call_finalizer(buffer_finalize, result_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

char* buffer_to_string(struct buffer* self){
void* __right_value32 = (void*)0;
char* __result_obj__80;
void* __right_value33 = (void*)0;
char* __result_obj__81;
    if(    self==((void*)0)    ) {
        __result_obj__80 = (char*)come_increment_ref_count(((char*)(__right_value32=__builtin_string(""))));
        (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__80 = come_decrement_ref_count(__result_obj__80, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__80;
    }
    __result_obj__81 = (char*)come_increment_ref_count(((char*)(__right_value33=__builtin_string(self->buf))));
    (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__81 = come_decrement_ref_count(__result_obj__81, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__81;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__82;
    __result_obj__82 = self->buf;
    return __result_obj__82;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct buffer* result_256;
struct buffer* __result_obj__83;
    result_256=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3234, "struct buffer*"))));
    buffer_append(result_256,self,sizeof(char)*len);
    __result_obj__83 = (struct buffer*)come_increment_ref_count(result_256);
    come_call_finalizer(buffer_finalize, result_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct buffer* result_257;
int i_258;
struct buffer* __result_obj__84;
    result_257=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3241, "struct buffer*"))));
    for(    i_258=0    ;    i_258<len    ;    i_258++    ){
        buffer_append(result_257,self[i_258],strlen(self[i_258]));
    }
    __result_obj__84 = (struct buffer*)come_increment_ref_count(result_257);
    come_call_finalizer(buffer_finalize, result_257, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct buffer* result_259;
struct buffer* __result_obj__85;
    result_259=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3250, "struct buffer*"))));
    buffer_append(result_259,(char*)self,sizeof(short)*len);
    __result_obj__85 = (struct buffer*)come_increment_ref_count(result_259);
    come_call_finalizer(buffer_finalize, result_259, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct buffer* result_260;
struct buffer* __result_obj__86;
    result_260=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3257, "struct buffer*"))));
    buffer_append(result_260,(char*)self,sizeof(int)*len);
    __result_obj__86 = (struct buffer*)come_increment_ref_count(result_260);
    come_call_finalizer(buffer_finalize, result_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct buffer* result_261;
struct buffer* __result_obj__87;
    result_261=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3264, "struct buffer*"))));
    buffer_append(result_261,(char*)self,sizeof(long)*len);
    __result_obj__87 = (struct buffer*)come_increment_ref_count(result_261);
    come_call_finalizer(buffer_finalize, result_261, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
struct buffer* result_262;
struct buffer* __result_obj__88;
    result_262=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3271, "struct buffer*"))));
    buffer_append(result_262,(char*)self,sizeof(float)*len);
    __result_obj__88 = (struct buffer*)come_increment_ref_count(result_262);
    come_call_finalizer(buffer_finalize, result_262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
struct buffer* result_263;
struct buffer* __result_obj__89;
    result_263=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3278, "struct buffer*"))));
    buffer_append(result_263,(char*)self,sizeof(double)*len);
    __result_obj__89 = (struct buffer*)come_increment_ref_count(result_263);
    come_call_finalizer(buffer_finalize, result_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

char* buffer_printable(struct buffer* self){
int len_264;
void* __right_value48 = (void*)0;
char* result_265;
int n_266;
int i_267;
unsigned char c_268;
char* __result_obj__90;
    len_264=self->len;
    result_265=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_264*2+1)), "/usr/local/include/comelang.h", 3286, "char*"));
    n_266=0;
    for(    i_267=0    ;    i_267<len_264    ;    i_267++    ){
        c_268=self->buf[i_267];
        if(        (c_268>=0&&c_268<32)||c_268==127        ) {
            result_265[n_266++]=94;
            result_265[n_266++]=c_268+65-1;
        }
        else if(        c_268>127        ) {
            result_265[n_266++]=63;
        }
        else {
            result_265[n_266++]=c_268;
        }
    }
    result_265[n_266]=0;
    __result_obj__90 = (char*)come_increment_ref_count(result_265);
    (result_265 = come_decrement_ref_count(result_265, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__90 = come_decrement_ref_count(__result_obj__90, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__90;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_269;
struct list$1char$* __result_obj__92;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_269=0    ;    i_269<num_value    ;    i_269++    ){
        list$1char$_push_back(self,values[i_269]);
    }
    __result_obj__92 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_270;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_271;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_272;
struct list$1char$* __result_obj__91;
    if(    self->len==0    ) {
        litem_270=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$*"))));
        litem_270->prev=((void*)0);
        litem_270->next=((void*)0);
        litem_270->item=item;
        self->tail=litem_270;
        self->head=litem_270;
    }
    else if(    self->len==1    ) {
        litem_271=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$*"))));
        litem_271->prev=self->head;
        litem_271->next=((void*)0);
        litem_271->item=item;
        self->tail=litem_271;
        self->head->next=litem_271;
    }
    else {
        litem_272=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$*"))));
        litem_272->prev=self->tail;
        litem_272->next=((void*)0);
        litem_272->item=item;
        self->tail->next=litem_272;
        self->tail=litem_272;
    }
    self->len++;
    __result_obj__91 = self;
    return __result_obj__91;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_273;
struct list_item$1char$* prev_it_274;
    it_273=self->head;
    while(    it_273!=((void*)0)    ) {
        prev_it_274=it_273;
        it_273=it_273->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_274, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value49 = (void*)0;
void* __right_value53 = (void*)0;
struct list$1char$* __result_obj__93;
    __result_obj__93 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value53=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3327, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value53, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_275;
struct list$1char$p* __result_obj__95;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_275=0    ;    i_275<num_value    ;    i_275++    ){
        list$1char$p_push_back(self,values[i_275]);
    }
    __result_obj__95 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_276;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_277;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_278;
struct list$1char$p* __result_obj__94;
    if(    self->len==0    ) {
        litem_276=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$p*"))));
        litem_276->prev=((void*)0);
        litem_276->next=((void*)0);
        litem_276->item=item;
        self->tail=litem_276;
        self->head=litem_276;
    }
    else if(    self->len==1    ) {
        litem_277=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$p*"))));
        litem_277->prev=self->head;
        litem_277->next=((void*)0);
        litem_277->item=item;
        self->tail=litem_277;
        self->head->next=litem_277;
    }
    else {
        litem_278=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$p*"))));
        litem_278->prev=self->tail;
        litem_278->next=((void*)0);
        litem_278->item=item;
        self->tail->next=litem_278;
        self->tail=litem_278;
    }
    self->len++;
    __result_obj__94 = self;
    return __result_obj__94;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_279;
struct list_item$1char$p* prev_it_280;
    it_279=self->head;
    while(    it_279!=((void*)0)    ) {
        prev_it_280=it_279;
        it_279=it_279->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value54 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1char$p* __result_obj__96;
    __result_obj__96 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value58=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3332, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_281;
struct list$1short$* __result_obj__98;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_281=0    ;    i_281<num_value    ;    i_281++    ){
        list$1short$_push_back(self,values[i_281]);
    }
    __result_obj__98 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_282;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_283;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_284;
struct list$1short$* __result_obj__97;
    if(    self->len==0    ) {
        litem_282=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1short$*"))));
        litem_282->prev=((void*)0);
        litem_282->next=((void*)0);
        litem_282->item=item;
        self->tail=litem_282;
        self->head=litem_282;
    }
    else if(    self->len==1    ) {
        litem_283=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1short$*"))));
        litem_283->prev=self->head;
        litem_283->next=((void*)0);
        litem_283->item=item;
        self->tail=litem_283;
        self->head->next=litem_283;
    }
    else {
        litem_284=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1short$*"))));
        litem_284->prev=self->tail;
        litem_284->next=((void*)0);
        litem_284->item=item;
        self->tail->next=litem_284;
        self->tail=litem_284;
    }
    self->len++;
    __result_obj__97 = self;
    return __result_obj__97;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_285;
struct list_item$1short$* prev_it_286;
    it_285=self->head;
    while(    it_285!=((void*)0)    ) {
        prev_it_286=it_285;
        it_285=it_285->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_286, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value59 = (void*)0;
void* __right_value63 = (void*)0;
struct list$1short$* __result_obj__99;
    __result_obj__99 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value63=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3337, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value63, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_287;
struct list$1int$* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_287=0    ;    i_287<num_value    ;    i_287++    ){
        list$1int$_push_back(self,values[i_287]);
    }
    __result_obj__101 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_288;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_289;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_290;
struct list$1int$* __result_obj__100;
    if(    self->len==0    ) {
        litem_288=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1int$*"))));
        litem_288->prev=((void*)0);
        litem_288->next=((void*)0);
        litem_288->item=item;
        self->tail=litem_288;
        self->head=litem_288;
    }
    else if(    self->len==1    ) {
        litem_289=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1int$*"))));
        litem_289->prev=self->head;
        litem_289->next=((void*)0);
        litem_289->item=item;
        self->tail=litem_289;
        self->head->next=litem_289;
    }
    else {
        litem_290=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1int$*"))));
        litem_290->prev=self->tail;
        litem_290->next=((void*)0);
        litem_290->item=item;
        self->tail->next=litem_290;
        self->tail=litem_290;
    }
    self->len++;
    __result_obj__100 = self;
    return __result_obj__100;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_291;
struct list_item$1int$* prev_it_292;
    it_291=self->head;
    while(    it_291!=((void*)0)    ) {
        prev_it_292=it_291;
        it_291=it_291->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_292, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value64 = (void*)0;
void* __right_value68 = (void*)0;
struct list$1int$* __result_obj__102;
    __result_obj__102 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value68=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3342, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value68, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_293;
struct list$1long$* __result_obj__104;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_293=0    ;    i_293<num_value    ;    i_293++    ){
        list$1long$_push_back(self,values[i_293]);
    }
    __result_obj__104 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_294;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_295;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_296;
struct list$1long$* __result_obj__103;
    if(    self->len==0    ) {
        litem_294=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1long$*"))));
        litem_294->prev=((void*)0);
        litem_294->next=((void*)0);
        litem_294->item=item;
        self->tail=litem_294;
        self->head=litem_294;
    }
    else if(    self->len==1    ) {
        litem_295=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1long$*"))));
        litem_295->prev=self->head;
        litem_295->next=((void*)0);
        litem_295->item=item;
        self->tail=litem_295;
        self->head->next=litem_295;
    }
    else {
        litem_296=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1long$*"))));
        litem_296->prev=self->tail;
        litem_296->next=((void*)0);
        litem_296->item=item;
        self->tail->next=litem_296;
        self->tail=litem_296;
    }
    self->len++;
    __result_obj__103 = self;
    return __result_obj__103;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_297;
struct list_item$1long$* prev_it_298;
    it_297=self->head;
    while(    it_297!=((void*)0)    ) {
        prev_it_298=it_297;
        it_297=it_297->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_298, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value69 = (void*)0;
void* __right_value73 = (void*)0;
struct list$1long$* __result_obj__105;
    __result_obj__105 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value73=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3347, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value73, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_299;
struct list$1float$* __result_obj__107;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_299=0    ;    i_299<num_value    ;    i_299++    ){
        list$1float$_push_back(self,values[i_299]);
    }
    __result_obj__107 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__107;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_300;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_301;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_302;
struct list$1float$* __result_obj__106;
    if(    self->len==0    ) {
        litem_300=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1float$*"))));
        litem_300->prev=((void*)0);
        litem_300->next=((void*)0);
        litem_300->item=item;
        self->tail=litem_300;
        self->head=litem_300;
    }
    else if(    self->len==1    ) {
        litem_301=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1float$*"))));
        litem_301->prev=self->head;
        litem_301->next=((void*)0);
        litem_301->item=item;
        self->tail=litem_301;
        self->head->next=litem_301;
    }
    else {
        litem_302=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1float$*"))));
        litem_302->prev=self->tail;
        litem_302->next=((void*)0);
        litem_302->item=item;
        self->tail->next=litem_302;
        self->tail=litem_302;
    }
    self->len++;
    __result_obj__106 = self;
    return __result_obj__106;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_303;
struct list_item$1float$* prev_it_304;
    it_303=self->head;
    while(    it_303!=((void*)0)    ) {
        prev_it_304=it_303;
        it_303=it_303->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_304, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value74 = (void*)0;
void* __right_value78 = (void*)0;
struct list$1float$* __result_obj__108;
    __result_obj__108 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value78=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3352, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_305;
struct list$1double$* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_305=0    ;    i_305<num_value    ;    i_305++    ){
        list$1double$_push_back(self,values[i_305]);
    }
    __result_obj__110 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_306;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_307;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_308;
struct list$1double$* __result_obj__109;
    if(    self->len==0    ) {
        litem_306=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1double$*"))));
        litem_306->prev=((void*)0);
        litem_306->next=((void*)0);
        litem_306->item=item;
        self->tail=litem_306;
        self->head=litem_306;
    }
    else if(    self->len==1    ) {
        litem_307=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1double$*"))));
        litem_307->prev=self->head;
        litem_307->next=((void*)0);
        litem_307->item=item;
        self->tail=litem_307;
        self->head->next=litem_307;
    }
    else {
        litem_308=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1double$*"))));
        litem_308->prev=self->tail;
        litem_308->next=((void*)0);
        litem_308->item=item;
        self->tail->next=litem_308;
        self->tail=litem_308;
    }
    self->len++;
    __result_obj__109 = self;
    return __result_obj__109;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_309;
struct list_item$1double$* prev_it_310;
    it_309=self->head;
    while(    it_309!=((void*)0)    ) {
        prev_it_310=it_309;
        it_309=it_309->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_310, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value79 = (void*)0;
void* __right_value83 = (void*)0;
struct list$1double$* __result_obj__111;
    __result_obj__111 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value83=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3357, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value83, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__111;
}

_Bool bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool _Bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_equals(char self, char right){
    return self==right;
}

_Bool short_equals(short self, short right){
    return self==right;
}

_Bool int_equals(int self, int right){
    return self==right;
}

_Bool long_equals(long self, long right){
    return self==right;
}

_Bool size_t_equals(unsigned long  int self, unsigned long  int right){
    return self==right;
}

_Bool float_equals(float self, float right){
    return self==right;
}

_Bool double_equals(double self, double right){
    return self==right;
}

_Bool bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_operator_equals(char self, char right){
    return self==right;
}

_Bool short_operator_equals(short self, short right){
    return self==right;
}

_Bool int_operator_equals(int self, int right){
    return self==right;
}

_Bool long_operator_equals(long self, long right){
    return self==right;
}

_Bool bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool char_operator_not_equals(char self, char right){
    return !(self==right);
}

_Bool short_operator_not_equals(short self, short right){
    return !(self==right);
}

_Bool int_operator_not_equals(int self, int right){
    return !(self==right);
}

_Bool long_operator_not_equals(long self, long right){
    return !(self==right);
}

_Bool charp_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool string_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_equals(void* self, void* right){
    return self==right;
}

_Bool boolp_equals(_Bool* self, _Bool* right){
    return *self==*right;
}

_Bool string_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_operator_equals(char* self, char* right){
    return self==right;
}

_Bool voidp_operator_not_equals(char* self, char* right){
    return !charp_operator_equals(self,right);
}

_Bool string_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __right_value84 = (void*)0;
char* __result_obj__112;
int len_311;
void* __right_value85 = (void*)0;
char* result_312;
char* __result_obj__113;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__112 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string(""))));
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__112;
    }
    len_311=strlen(self)+strlen(right);
    result_312=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_311+1)), "/usr/local/include/comelang.h", 3586, "char*"));
    strncpy(result_312,self,len_311+1);
    strncat(result_312,right,len_311+1);
    __result_obj__113 = (char*)come_increment_ref_count(result_312);
    (result_312 = come_decrement_ref_count(result_312, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__113;
}

char* string_operator_add(char* self, char* right){
void* __right_value86 = (void*)0;
char* __result_obj__114;
int len_313;
void* __right_value87 = (void*)0;
char* result_314;
char* __result_obj__115;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__114 = (char*)come_increment_ref_count(((char*)(__right_value86=__builtin_string(""))));
        (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__114;
    }
    len_313=strlen(self)+strlen(right);
    result_314=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_313+1)), "/usr/local/include/comelang.h", 3601, "char*"));
    strncpy(result_314,self,len_313+1);
    strncat(result_314,right,len_313+1);
    __result_obj__115 = (char*)come_increment_ref_count(result_314);
    (result_314 = come_decrement_ref_count(result_314, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__115;
}

char* charp_operator_mult(char* self, int right){
void* __right_value88 = (void*)0;
char* __result_obj__116;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct buffer* buf_315;
int i_316;
void* __right_value91 = (void*)0;
char* __result_obj__117;
    if(    self==((void*)0)    ) {
        __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value88=__builtin_string(""))));
        (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__116;
    }
    buf_315=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3614, "struct buffer*"))));
    for(    i_316=0    ;    i_316<right    ;    i_316++    ){
        buffer_append_str(buf_315,self);
    }
    __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value91=buffer_to_string(buf_315))));
    come_call_finalizer(buffer_finalize, buf_315, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__117;
}

char* string_operator_mult(char* self, int right){
void* __right_value92 = (void*)0;
char* __result_obj__118;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct buffer* buf_317;
int i_318;
void* __right_value95 = (void*)0;
char* __result_obj__119;
    if(    self==((void*)0)    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value92=__builtin_string(""))));
        (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    buf_317=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3628, "struct buffer*"))));
    for(    i_318=0    ;    i_318<right    ;    i_318++    ){
        buffer_append_str(buf_317,self);
    }
    __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value95=buffer_to_string(buf_317))));
    come_call_finalizer(buffer_finalize, buf_317, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__119;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_319;
int i_320;
    result_319=(_Bool)0;
    for(    i_320=0    ;    i_320<len    ;    i_320++    ){
        if(        strncmp(self[i_320],str,strlen(self[i_320]))==0        ) {
            result_319=(_Bool)1;
            break;
        }
    }
    return result_319;
}

unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}

unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}

unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}

unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}

unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}

unsigned int bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int _Bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int char_get_hash_key(char value){
    return value;
}

unsigned int short_get_hash_key(short int value){
    return value;
}

unsigned int int_get_hash_key(int value){
    return value;
}

unsigned int long_get_hash_key(long value){
    return value;
}

unsigned int size_t_get_hash_key(unsigned long  int value){
    return value;
}

unsigned int float_get_hash_key(float value){
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value){
    return (unsigned int)value;
}

unsigned int charp_get_hash_key(char* value){
int result_321;
char* p_322;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_321=0;
    p_322=value;
    while(    *p_322    ) {
        result_321+=(*p_322);
        p_322++;
    }
    return result_321;
}

unsigned int string_get_hash_key(char* value){
int result_323;
char* p_324;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_323=0;
    p_324=value;
    while(    *p_324    ) {
        result_323+=(*p_324);
        p_324++;
    }
    return result_323;
}

unsigned int voidp_get_hash_key(void* value){
    return (int_get_hash_key(((int)value)));
}

_Bool bool_clone(_Bool self){
    return self;
}

_Bool _Bool_clone(_Bool self){
    return self;
}

char char_clone(char self){
    return self;
}

short int short_clone(short self){
    return self;
}

int int_clone(int self){
    return self;
}

long  int long_clone(long self){
    return self;
}

unsigned long  int size_t_clone(unsigned long  int self){
    return self;
}

double double_clone(double self){
    return self;
}

float float_clone(float self){
    return self;
}

_Bool xisalpha(char c){
_Bool result_325;
    result_325=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_325;
}

_Bool xisblank(char c){
    return c==32||c==9;
}

_Bool xisdigit(char c){
    return (c>=48&&c<=57);
}

_Bool xisalnum(char c){
    return xisalpha(c)||xisdigit(c);
}

_Bool xisascii(char c){
_Bool result_326;
    result_326=(c>=32&&c<=126);
    return result_326;
}

_Bool xispunct(char c){
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
}

int string_length(char* str){
    if(    str==((void*)0)    ) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str){
    if(    str==((void*)0)    ) {
        return 0;
    }
    return strlen(str);
}

char* charp_reverse(char* str){
void* __right_value96 = (void*)0;
char* __result_obj__120;
int len_327;
void* __right_value97 = (void*)0;
char* result_328;
int i_329;
char* __result_obj__121;
    if(    str==((void*)0)    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value96=__builtin_string(""))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    len_327=strlen(str);
    result_328=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_327+1)), "/usr/local/include/comelang.h", 3896, "char*"));
    for(    i_329=0    ;    i_329<len_327    ;    i_329++    ){
        result_328[i_329]=str[len_327-i_329-1];
    }
    result_328[len_327]=0;
    __result_obj__121 = (char*)come_increment_ref_count(result_328);
    (result_328 = come_decrement_ref_count(result_328, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__121;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value98 = (void*)0;
char* __result_obj__122;
int len_330;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
char* __result_obj__123;
void* __right_value101 = (void*)0;
char* __result_obj__124;
void* __right_value102 = (void*)0;
char* __result_obj__125;
void* __right_value103 = (void*)0;
char* result_331;
char* __result_obj__126;
    if(    str==((void*)0)    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value98=__builtin_string(""))));
        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    len_330=strlen(str);
    if(    head<0    ) {
        head+=len_330;
    }
    if(    tail<0    ) {
        tail+=len_330+1;
    }
    if(    head>tail    ) {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value100=charp_reverse(((char*)(__right_value99=charp_substring(str,tail,head)))))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__123;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_330    ) {
        tail=len_330;
    }
    if(    head==tail    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    if(    tail-head+1<1    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    result_331=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3942, "char*"));
    memcpy(result_331,str+head,tail-head);
    result_331[tail-head]=0;
    __result_obj__126 = (char*)come_increment_ref_count(result_331);
    (result_331 = come_decrement_ref_count(result_331, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__126;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value104 = (void*)0;
char* __result_obj__127;
int len_332;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
char* __result_obj__128;
void* __right_value107 = (void*)0;
char* __result_obj__129;
void* __right_value108 = (void*)0;
char* __result_obj__130;
void* __right_value109 = (void*)0;
char* result_333;
char* __result_obj__131;
    if(    str==((void*)0)    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string(""))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    len_332=strlen(str);
    if(    head<0    ) {
        head+=len_332;
    }
    if(    tail<0    ) {
        tail+=len_332+1;
    }
    if(    head>tail    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value106=charp_reverse(((char*)(__right_value105=charp_substring(str,tail,head)))))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_332    ) {
        tail=len_332;
    }
    if(    head==tail    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    if(    tail-head+1<1    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    result_333=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3985, "char*"));
    memcpy(result_333,str+head,tail-head);
    result_333[tail-head]=0;
    __result_obj__131 = (char*)come_increment_ref_count(result_333);
    (result_333 = come_decrement_ref_count(result_333, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__131;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value110 = (void*)0;
char* __result_obj__132;
int len_334;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
char* __result_obj__133;
void* __right_value113 = (void*)0;
char* __result_obj__134;
void* __right_value114 = (void*)0;
char* __result_obj__135;
void* __right_value115 = (void*)0;
char* result_335;
char* __result_obj__136;
    if(    str==((void*)0)    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    len_334=strlen(str);
    if(    head<0    ) {
        head+=len_334;
    }
    if(    tail<0    ) {
        tail+=len_334+1;
    }
    if(    head>tail    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value112=charp_reverse(((char*)(__right_value111=charp_substring(str,tail,head)))))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_334    ) {
        tail=len_334;
    }
    if(    head==tail    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    if(    tail-head+1<1    ) {
        __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__135;
    }
    result_335=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4028, "char*"));
    memcpy(result_335,str+head,tail-head);
    result_335[tail-head]=0;
    __result_obj__136 = (char*)come_increment_ref_count(result_335);
    (result_335 = come_decrement_ref_count(result_335, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__136;
}

char* xsprintf(char* msg, ...){
void* __right_value116 = (void*)0;
char* __result_obj__137;
va_list args_336;
char* result_337;
int len_338;
void* __right_value117 = (void*)0;
char* __result_obj__138;
void* __right_value118 = (void*)0;
char* result2_339;
char* __result_obj__139;
result_337 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__137;
    }
    __builtin_va_start(args_336,msg);
    len_338=vasprintf(&result_337,msg,args_336);
    __builtin_va_end(args_336);
    if(    len_338<0    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    result2_339=(char*)come_increment_ref_count(__builtin_string(result_337));
    free(result_337);
    __result_obj__139 = (char*)come_increment_ref_count(result2_339);
    (result2_339 = come_decrement_ref_count(result2_339, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__139;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value119 = (void*)0;
char* __result_obj__140;
int len_340;
void* __right_value120 = (void*)0;
char* __result_obj__141;
void* __right_value121 = (void*)0;
char* __result_obj__142;
void* __right_value122 = (void*)0;
char* result_341;
char* __result_obj__143;
    if(    str==((void*)0)    ) {
        __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__140;
    }
    len_340=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(str))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    if(    head<0    ) {
        head+=len_340;
    }
    if(    tail<0    ) {
        tail+=len_340+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    if(    tail>=len_340    ) {
        tail=len_340;
    }
    result_341=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_340-(tail-head)+1)), "/usr/local/include/comelang.h", 4090, "char*"));
    memcpy(result_341,str,head);
    memcpy(result_341+head,str+tail,len_340-tail);
    result_341[len_340-(tail-head)]=0;
    __result_obj__143 = (char*)come_increment_ref_count(result_341);
    (result_341 = come_decrement_ref_count(result_341, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__143;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__144;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__144 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__144;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_342;
struct list_item$1char$ph* prev_it_343;
    it_342=self->head;
    while(    it_342!=((void*)0)    ) {
        prev_it_343=it_342;
        it_342=it_342->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_343, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_347;
char* __dec_obj13;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_348;
char* __dec_obj14;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_349;
char* __dec_obj15;
struct list$1char$ph* __result_obj__146;
    if(    self->len==0    ) {
        litem_347=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_347->prev=((void*)0);
        litem_347->next=((void*)0);
        __dec_obj13=litem_347->item,
        litem_347->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_347;
        self->head=litem_347;
    }
    else if(    self->len==1    ) {
        litem_348=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_348->prev=self->head;
        litem_348->next=((void*)0);
        __dec_obj14=litem_348->item,
        litem_348->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_348;
        self->head->next=litem_348;
    }
    else {
        litem_349=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_349->prev=self->tail;
        litem_349->next=((void*)0);
        __dec_obj15=litem_349->item,
        litem_349->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_349;
        self->tail=litem_349;
    }
    self->len++;
    __result_obj__146 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__146;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct list$1char$ph* __result_obj__145;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
struct list$1char$ph* result_344;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct buffer* str_345;
int i_346;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct list$1char$ph* __result_obj__147;
    if(    self==((void*)0)    ) {
        __result_obj__145 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value124=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4103, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value124, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__145;
    }
    result_344=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4106, "struct list$1char$ph*"))));
    str_345=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4108, "struct buffer*"))));
    for(    i_346=0    ;    i_346<charp_length(self)    ;    i_346++    ){
        if(        self[i_346]==c        ) {
            list$1char$ph_push_back(result_344,(char*)come_increment_ref_count(__builtin_string(str_345->buf)));
            buffer_reset(str_345);
        }
        else {
            buffer_append_char(str_345,self[i_346]);
        }
    }
    if(    buffer_length(str_345)!=0    ) {
        list$1char$ph_push_back(result_344,(char*)come_increment_ref_count(__builtin_string(str_345->buf)));
    }
    __result_obj__147 = (struct list$1char$ph*)come_increment_ref_count(result_344);
    come_call_finalizer(list$1char$ph$p_finalize, result_344, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_345, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__147;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value134 = (void*)0;
char* __result_obj__148;
    __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value134=xsprintf(msg,self))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__148;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value135 = (void*)0;
char* __result_obj__149;
    __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value135=xsprintf(msg,self))));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__149;
}

char* charp_printable(char* str){
int len_350;
void* __right_value136 = (void*)0;
char* result_351;
int n_352;
int i_353;
char c_354;
char* __result_obj__150;
    len_350=charp_length(str);
    result_351=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_350*2+1)), "/usr/local/include/comelang.h", 4140, "char*"));
    n_352=0;
    for(    i_353=0    ;    i_353<len_350    ;    i_353++    ){
        c_354=str[i_353];
        if(        (c_354>=0&&c_354<32)||c_354==127        ) {
            result_351[n_352++]=94;
            result_351[n_352++]=c_354+65-1;
        }
        else {
            result_351[n_352++]=c_354;
        }
    }
    result_351[n_352]=0;
    __result_obj__150 = (char*)come_increment_ref_count(result_351);
    (result_351 = come_decrement_ref_count(result_351, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__150;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value137 = (void*)0;
char* __result_obj__151;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct buffer* result_355;
char* p_356;
char* p2_357;
void* __right_value140 = (void*)0;
char* __result_obj__152;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string(self))));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__151;
    }
    result_355=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4168, "struct buffer*"))));
    p_356=self;
    while(    (_Bool)1    ) {
        p2_357=strstr(p_356,str);
        if(        p2_357==((void*)0)        ) {
            p2_357=p_356;
            while(            *p2_357            ) {
                p2_357++;
            }
            buffer_append(result_355,p_356,p2_357-p_356);
            break;
        }
        buffer_append(result_355,p_356,p2_357-p_356);
        buffer_append_str(result_355,replace);
        p_356=p2_357+strlen(str);
    }
    __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value140=buffer_to_string(result_355))));
    come_call_finalizer(buffer_finalize, result_355, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__152;
}

char* xbasename(char* path){
void* __right_value141 = (void*)0;
char* __result_obj__153;
char* p_358;
void* __right_value142 = (void*)0;
char* __result_obj__154;
void* __right_value143 = (void*)0;
char* __result_obj__155;
void* __right_value144 = (void*)0;
char* __result_obj__156;
    if(    path==((void*)0)    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    p_358=path+strlen(path);
    while(    p_358>=path    ) {
        if(        *p_358==47        ) {
            break;
        }
        else {
            p_358--;
        }
    }
    if(    p_358<path    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(path))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    else {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(p_358+1))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__156;
}

char* xnoextname(char* path){
void* __right_value145 = (void*)0;
char* __result_obj__157;
void* __right_value146 = (void*)0;
char* path2_359;
char* p_360;
void* __right_value147 = (void*)0;
char* __result_obj__158;
void* __right_value148 = (void*)0;
char* __result_obj__159;
void* __right_value149 = (void*)0;
char* __result_obj__160;
    if(    path==((void*)0)    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    path2_359=(char*)come_increment_ref_count(xbasename(path));
    p_360=path2_359+strlen(path2_359);
    while(    p_360>=path2_359    ) {
        if(        *p_360==46        ) {
            break;
        }
        else {
            p_360--;
        }
    }
    if(    p_360<path2_359    ) {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(path2_359))));
        (path2_359 = come_decrement_ref_count(path2_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    else {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value148=charp_substring(path2_359,0,p_360-path2_359))));
        (path2_359 = come_decrement_ref_count(path2_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
    (path2_359 = come_decrement_ref_count(path2_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__160;
}

char* xextname(char* path){
void* __right_value150 = (void*)0;
char* __result_obj__161;
char* p_361;
void* __right_value151 = (void*)0;
char* __result_obj__162;
void* __right_value152 = (void*)0;
char* __result_obj__163;
void* __right_value153 = (void*)0;
char* __result_obj__164;
    if(    path==((void*)0)    ) {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    p_361=path+strlen(path);
    while(    p_361>=path    ) {
        if(        *p_361==46        ) {
            break;
        }
        else {
            p_361--;
        }
    }
    if(    p_361<path    ) {
        __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(path))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__162;
    }
    else {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(p_361+1))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__163;
    }
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__164;
}

char* bool_to_string(_Bool self){
void* __right_value154 = (void*)0;
char* __result_obj__165;
void* __right_value155 = (void*)0;
char* __result_obj__166;
    if(    self    ) {
        __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string("true"))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__165;
    }
    else {
        __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("false"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__166;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value156 = (void*)0;
char* __result_obj__167;
void* __right_value157 = (void*)0;
char* __result_obj__168;
    if(    self    ) {
        __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("true"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__167;
    }
    else {
        __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("false"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__168;
    }
}

char* char_to_string(char self){
void* __right_value158 = (void*)0;
char* __result_obj__169;
    __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf("%c",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__169;
}

char* short_to_string(short self){
void* __right_value159 = (void*)0;
char* __result_obj__170;
    __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%d",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__170;
}

char* int_to_string(int self){
void* __right_value160 = (void*)0;
char* __result_obj__171;
    __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%d",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__171;
}

char* long_to_string(long self){
void* __right_value161 = (void*)0;
char* __result_obj__172;
    __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%ld",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value162 = (void*)0;
char* __result_obj__173;
    __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%ld",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__173;
}

char* float_to_string(float self){
void* __right_value163 = (void*)0;
char* __result_obj__174;
    __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%f",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__174;
}

char* double_to_string(double self){
void* __right_value164 = (void*)0;
char* __result_obj__175;
    __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%lf",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__175;
}

char* string_to_string(char* self){
void* __right_value165 = (void*)0;
char* __result_obj__176;
void* __right_value166 = (void*)0;
char* __result_obj__177;
    if(    self==((void*)0)    ) {
        __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(""))));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__176;
    }
    __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__177;
}

char* charp_to_string(char* self){
void* __right_value167 = (void*)0;
char* __result_obj__178;
void* __right_value168 = (void*)0;
char* __result_obj__179;
    if(    self==((void*)0)    ) {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(""))));
        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
    __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(self))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__179;
}

int bool_compare(_Bool left, _Bool right){
    if(    !left&&right    ) {
        return -1;
    }
    else if(    left&&right    ) {
        return 0;
    }
    else if(    !left&&!right    ) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int _Bool_compare(_Bool left, _Bool right){
    if(    !left&&right    ) {
        return -1;
    }
    else if(    left&&right    ) {
        return 0;
    }
    else if(    !left&&!right    ) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int char_compare(char left, char right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int short_compare(short left, short right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int int_compare(int left, int right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int long_compare(long left, long right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int size_t_compare(unsigned long  int left, unsigned long  int right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int float_compare(float left, float right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int double_compare(double left, double right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int string_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)    ) {
        return 0;
    }
    else if(    left==((void*)0)    ) {
        return -1;
    }
    else if(    right==((void*)0)    ) {
        return 1;
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)    ) {
        return 0;
    }
    else if(    left==((void*)0)    ) {
        return -1;
    }
    else if(    right==((void*)0)    ) {
        return 1;
    }
    return strcmp(left,right);
}

char* charp_puts(char* self){
void* __right_value169 = (void*)0;
char* __result_obj__180;
void* __right_value170 = (void*)0;
char* __result_obj__181;
    if(    self==((void*)0)    ) {
        __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(""))));
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__180;
    }
    puts(self);
    __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(self))));
    (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__181;
}

char* charp_print(char* self){
void* __right_value171 = (void*)0;
char* __result_obj__182;
void* __right_value172 = (void*)0;
char* __result_obj__183;
    if(    self==((void*)0)    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(""))));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    printf("%s",self);
    __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(self))));
    (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__183;
}

char* charp_printf(char* self, ...){
void* __right_value173 = (void*)0;
char* __result_obj__184;
char* msg2_362;
va_list args_363;
void* __right_value174 = (void*)0;
char* __result_obj__185;
msg2_362 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(""))));
        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__184;
    }
    __builtin_va_start(args_363,self);
    vasprintf(&msg2_362,self,args_363);
    __builtin_va_end(args_363);
    printf("%s",msg2_362);
    free(msg2_362);
    __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(self))));
    (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__185;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_364;
    for(    i_364=0    ;    i_364<self    ;    i_364++    ){
        block(parent,i_364);
    }
}

