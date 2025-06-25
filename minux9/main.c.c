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

typedef int ssize_t;

unsigned char hello_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0xc8, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x90, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x40, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x27, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x82, 0x80, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18, 0x23, 0x34,
  0xa4, 0xfe, 0x23, 0x30, 0xb4, 0xfe, 0x23, 0x3c, 0xc4, 0xfc, 0x83, 0x37,
  0x84, 0xfe, 0x03, 0x37, 0x04, 0xfe, 0x83, 0x36, 0x84, 0xfd, 0x3e, 0x85,
  0xba, 0x85, 0x36, 0x86, 0x93, 0x08, 0x10, 0x04, 0x73, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x3e, 0x85, 0xa2, 0x70, 0x02, 0x74, 0x45, 0x61, 0x82, 0x80,
  0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10, 0x23, 0x34, 0xa4, 0xfe,
  0xae, 0x87, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x03, 0x27,
  0x44, 0xfe, 0x3e, 0x85, 0xba, 0x85, 0x93, 0x08, 0x20, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x3e, 0x85, 0xe2, 0x60, 0x42, 0x64, 0x05, 0x61,
  0x82, 0x80, 0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10, 0x23, 0x34,
  0xa4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85, 0x93, 0x08, 0x30, 0x04,
  0x73, 0x00, 0x00, 0x00, 0x01, 0x00, 0x3e, 0x85, 0xe2, 0x60, 0x42, 0x64,
  0x05, 0x61, 0x82, 0x80, 0x41, 0x11, 0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08,
  0x8d, 0x47, 0x3e, 0x85, 0xa2, 0x60, 0x02, 0x64, 0x41, 0x01, 0x82, 0x80,
  0x35, 0x71, 0x06, 0xed, 0x22, 0xe9, 0x00, 0x11, 0xb7, 0x07, 0x00, 0x10,
  0x13, 0x07, 0xf0, 0x04, 0x23, 0x80, 0xe7, 0x00, 0x81, 0x45, 0x17, 0x05,
  0x00, 0x00, 0x13, 0x05, 0x25, 0x04, 0xef, 0xf0, 0x7f, 0xf7, 0xaa, 0x87,
  0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x13, 0x07, 0x84, 0xf6,
  0x2d, 0x46, 0xba, 0x85, 0x3e, 0x85, 0xef, 0xf0, 0x5f, 0xf2, 0xa3, 0x09,
  0x04, 0xf6, 0x93, 0x07, 0x84, 0xf6, 0x05, 0x46, 0xbe, 0x85, 0x05, 0x45,
  0xef, 0xf0, 0x9f, 0xed, 0x83, 0x27, 0xc4, 0xfe, 0x3e, 0x85, 0xef, 0xf0,
  0x5f, 0xf7, 0x7d, 0xbf, 0x2f, 0x61, 0x2e, 0x74, 0x78, 0x74, 0x00, 0x47,
  0x43, 0x43, 0x3a, 0x20, 0x28, 0x67, 0x30, 0x34, 0x36, 0x39, 0x36, 0x64,
  0x66, 0x30, 0x39, 0x29, 0x20, 0x31, 0x34, 0x2e, 0x32, 0x2e, 0x30, 0x00,
  0x41, 0x59, 0x00, 0x00, 0x00, 0x72, 0x69, 0x73, 0x63, 0x76, 0x00, 0x01,
  0x4f, 0x00, 0x00, 0x00, 0x04, 0x10, 0x05, 0x72, 0x76, 0x36, 0x34, 0x69,
  0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70,
  0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f,
  0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70,
  0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a,
  0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72,
  0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00, 0x20, 0x02, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x58, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0x22, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5d, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0x5c, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x62, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0x8e, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x68, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff, 0x27, 0x1a, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7a, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x27, 0x12, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x8a, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0xb4, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x8e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x28, 0x12, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x9a, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x27, 0x12, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xa6, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0xc8, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xab, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x27, 0x12, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xba, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x27, 0x12, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xc1, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x28, 0x12, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x2e, 0x63, 0x00, 0x77, 0x72, 0x69,
  0x74, 0x65, 0x00, 0x24, 0x78, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70,
  0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f,
  0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32,
  0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f,
  0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61,
  0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63,
  0x31, 0x70, 0x30, 0x00, 0x72, 0x65, 0x61, 0x64, 0x00, 0x6f, 0x70, 0x65,
  0x6e, 0x00, 0x63, 0x6c, 0x6f, 0x73, 0x65, 0x00, 0x5f, 0x5f, 0x67, 0x6c,
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
  0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x02, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa0, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x46, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};
unsigned int hello_elf_len=1936;
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
    unsigned long  long fakea0;
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
    unsigned long  long a0;
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
int fs_open(const char* path);
int fs_read(int fd, void* buf, unsigned long  int count);
int fs_close(int fd);
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
static void context_finalize(struct context* self);
void enter_user(unsigned long  int anonymous_var_nameX286, unsigned long  int anonymous_var_nameX287, unsigned long  int anonymous_var_nameX288, unsigned long  long anonymous_var_nameX289);
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
        : "r"(fd), "r"(s), "r"(size), "i"(65): "a0", "a1", "a2", "a7", "memory"
    );
}
static inline int open(char* path, int oflag){
    __asm volatile("mv a0, %0\n"
        "mv a1, %1\n"
        "li a7, %2\n"
        "ecall\n"
        :
        : "r"(path), "r"(oflag), "i"(66): "a0", "a1", "a7", "memory"
    );
}
static inline int close(long fd){
    __asm volatile("mv a0, %0\n"
        "li a7, %1\n"
        "ecall\n"
        :
        : "r"(fd), "i"(67): "a0", "a7", "memory"
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
unsigned long  long x_105;
memset(&x_105, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_105));
    return x_105;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_106;
memset(&sp_val_106, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val_106): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_106;
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
unsigned long  long user_va_81;
struct proc* p_82;
int i_83;
char* user_char_pa_84;
int fd_85;
struct context* context_86;
struct context anonymous_var_nameX276_87;
int fd_88;
long size_89;
int ret_91;
struct context* context_92;
struct context anonymous_var_nameX279_93;
unsigned long  int __result_obj__13;
unsigned long  long user_va_95;
struct proc* p_96;
int i_97;
char* user_char_pa_98;
struct context* context_99;
struct context anonymous_var_nameX282_100;
unsigned long  int __result_obj__14;
int fd_101;
int ret_102;
struct context* context_103;
struct context anonymous_var_nameX285_104;
unsigned long  int __result_obj__15;
memset(&anonymous_var_nameX276_87, 0, sizeof(struct context));
memset(&anonymous_var_nameX279_93, 0, sizeof(struct context));
memset(&anonymous_var_nameX282_100, 0, sizeof(struct context));
memset(&anonymous_var_nameX285_104, 0, sizeof(struct context));
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
        case 66:
        {
            char kernel_buf_80[256];
            memset(&kernel_buf_80, 0, sizeof(char)            *(256)            );
            user_va_81=arg0_67;
            p_82=gProc[gActiveProc];
            i_83=0;
            for(            i_83=0            ;            i_83<sizeof(kernel_buf_80)-1            ;            ++i_83            ){
                user_char_pa_84=walkaddr(p_82->pagetable,user_va_81+i_83);
                if(                user_char_pa_84==0                ) {
                    panic("walkaddr");
                }
                kernel_buf_80[i_83]=*user_char_pa_84;
                if(                kernel_buf_80[i_83]==0                ) {
                    break;
                }
            }
            kernel_buf_80[i_83]=0;
            fd_85=fs_open(kernel_buf_80);
            context_86=(struct context*)TRAPFRAME2;
            anonymous_var_nameX276_87.a0=fd_85;
            come_call_finalizer(context_finalize, (&anonymous_var_nameX276_87), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        return 0;
        case 65:
        {
            fd_88=arg0_67;
            size_89=arg2_69;
            char kernel_buf_90[256];
            memset(&kernel_buf_90, 0, sizeof(char)            *(256)            );
            ret_91=fs_read(fd_88,kernel_buf_90,size_89);
            if(            ret_91<0            ) {
                context_92=(struct context*)TRAPFRAME2;
                anonymous_var_nameX279_93.a0=ret_91;
                __result_obj__13 = 0;
                come_call_finalizer(context_finalize, (&anonymous_var_nameX279_93), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__13;
                come_call_finalizer(context_finalize, (&anonymous_var_nameX279_93), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            char user_buf_94[256];
            memset(&user_buf_94, 0, sizeof(char)            *(256)            );
            user_va_95=arg1_68;
            p_96=gProc[gActiveProc];
            i_97=0;
            for(            i_97=0            ;            i_97<size_89            ;            ++i_97            ){
                user_char_pa_98=walkaddr(p_96->pagetable,user_va_95+i_97);
                if(                user_char_pa_98==0                ) {
                    panic("walkaddr");
                }
                *user_char_pa_98=kernel_buf_90[i_97];
            }
            context_99=(struct context*)TRAPFRAME2;
            anonymous_var_nameX282_100.a0=ret_91;
            __result_obj__14 = 0;
            come_call_finalizer(context_finalize, (&anonymous_var_nameX282_100), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__14;
            come_call_finalizer(context_finalize, (&anonymous_var_nameX282_100), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        case 67:
        {
            fd_101=arg0_67;
            ret_102=fs_close(fd_101);
            context_103=(struct context*)TRAPFRAME2;
            anonymous_var_nameX285_104.a0=ret_102;
            __result_obj__15 = 0;
            come_call_finalizer(context_finalize, (&anonymous_var_nameX285_104), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__15;
            come_call_finalizer(context_finalize, (&anonymous_var_nameX285_104), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        default:
        panic("invalid syscall");
    }
}

static void context_finalize(struct context* self){
}

void timerinit(){
    w_stvec((unsigned long  long)trapvec&~3);
    w_stimecmp(r_time()+10000000);
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

int main(){
struct proc* p_107;
unsigned long  int usersp_108;
unsigned long  long usersatp_109;
unsigned long  int entry_110;
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
    p_107=gProc[gActiveProc];
    usersp_108=(unsigned long  long)(p_107->stack);
    usersatp_109=((8L<<60)|(((unsigned long  long)p_107->pagetable)>>12));
    entry_110=p_107->context.mepc;
    w_stimecmp(r_time()+100000);
    kernel_sp=read_s_sp();
    enter_user(entry_110,usersp_108,usersatp_109,10000UL);
    while(    1    ) {
        ;
    }
come_heap_final();
}

void* malloc(unsigned long  int size){
void* __result_obj__16;
struct mem_block* current_111;
struct mem_block* prev_112;
void* __result_obj__17;
struct mem_block* new_mem_113;
void* __result_obj__18;
void* __result_obj__19;
    if(    size==0    ) {
        __result_obj__16 = ((void*)0);
        return __result_obj__16;
    }
    if(    size%8!=0    ) {
        size+=8-(size%8);
    }
    size+=sizeof(struct mem_block);
    current_111=free_list;
    prev_112=((void*)0);
    while(    current_111!=((void*)0)    ) {
        if(        current_111->size>=size        ) {
            if(            prev_112==((void*)0)            ) {
                free_list=current_111->next;
            }
            else {
                prev_112->next=current_111->next;
            }
            __result_obj__17 = (void*)(current_111+1);
            return __result_obj__17;
        }
        prev_112=current_111;
        current_111=current_111->next;
    }
    new_mem_113=(struct mem_block*)sbrk(size);
    if(    new_mem_113==(void*)-1    ) {
        __result_obj__18 = ((void*)0);
        return __result_obj__18;
    }
    new_mem_113->size=size;
    new_mem_113->next=((void*)0);
    __result_obj__19 = (void*)(new_mem_113+1);
    return __result_obj__19;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_114;
void* __result_obj__20;
void* ptr_115;
void* __result_obj__21;
    total_size_114=nmemb*size;
    if(    total_size_114==0    ) {
        __result_obj__20 = ((void*)0);
        return __result_obj__20;
    }
    ptr_115=malloc(total_size_114);
    if(    ptr_115!=((void*)0)    ) {
        memset(ptr_115,0,total_size_114);
    }
    __result_obj__21 = ptr_115;
    return __result_obj__21;
}

void free(void* ptr){
struct mem_block* block_116;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_116=(struct mem_block*)ptr-1;
    block_116->next=free_list;
    free_list=block_116;
}

char* strdup(const char* s){
char* s2_117;
unsigned long  int len_118;
char* p_119;
char* __result_obj__22;
    s2_117=s;
    len_118=strlen(s2_117)+1;
    p_119=malloc(len_118);
    if(    p_119    ) {
        memcpy(p_119,s2_117,len_118);
    }
    __result_obj__22 = p_119;
    return __result_obj__22;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__23;
char* __result_obj__24;
char* __result_obj__25;
    if(    !*needle    ) {
        __result_obj__23 = (char*)haystack;
        return __result_obj__23;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_120=haystack;
        const char* n_121=needle;
        while(        *h_120&&*n_121&&(*h_120==*n_121)        ) {
            h_120++;
            n_121++;
        }
        if(        !*n_121        ) {
            __result_obj__24 = (char*)haystack;
            return __result_obj__24;
        }
    }
    __result_obj__25 = ((void*)0);
    return __result_obj__25;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_122;
int i_123;
void* __result_obj__26;
    cdst_122=(char*)dst;
    for(    i_123=0    ;    i_123<n    ;    i_123++    ){
        cdst_122[i_123]=c;
    }
    __result_obj__26 = dst;
    return __result_obj__26;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_124;
const unsigned char* s2_125;
memset(&s1_124, 0, sizeof(const unsigned char*));
memset(&s2_125, 0, sizeof(const unsigned char*));
    s1_124=v1;
    s2_125=v2;
    while(    n-->0    ) {
        if(        *s1_124!=*s2_125        ) {
            return *s1_124-*s2_125;
        }
        s1_124++,s2_125++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_126;
char* d_127;
void* __result_obj__27;
void* __result_obj__28;
s_126 = (void*)0;
d_127 = (void*)0;
    if(    n==0    ) {
        __result_obj__27 = dst;
        return __result_obj__27;
    }
    s_126=src;
    d_127=dst;
    if(    s_126<d_127&&s_126+n>d_127    ) {
        s_126+=n;
        d_127+=n;
        while(        n-->0        ) {
            *--d_127=*--s_126;
        }
    }
    else {
        while(        n-->0        ) {
            *d_127++=*s_126++;
        }
    }
    __result_obj__28 = dst;
    return __result_obj__28;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__29;
    __result_obj__29 = memmove(dst,src,n);
    return __result_obj__29;
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
char* os_128;
char* __result_obj__30;
os_128 = (void*)0;
    os_128=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__30 = os_128;
    return __result_obj__30;
}

int strlen(const char* s){
int n_129;
memset(&n_129, 0, sizeof(int));
    for(    n_129=0    ;    s[n_129]    ;    n_129++    ){
        ;
    }
    return n_129;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_130;
char* __result_obj__31;
    d_130=dest;
    while(    *d_130    ) {
        d_130++;
    }
    while(    n--&&*src    ) {
        *d_130++=*src++;
    }
    *d_130=0;
    __result_obj__31 = dest;
    return __result_obj__31;
}

char* strtok(char* s, const char* delim){
static char* next_131;
char* start_132;
char* p_133;
char* __result_obj__32;
int is_delim_135;
char* __result_obj__33;
int is_delim_137;
char* __result_obj__34;
next_131 = (void*)0;
start_132 = (void*)0;
p_133 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_131=s;
    }
    if(    next_131==((void*)0)    ) {
        __result_obj__32 = ((void*)0);
        return __result_obj__32;
    }
    start_132=next_131;
    while(    *start_132!=0    ) {
        const char* d_134=delim;
        is_delim_135=0;
        while(        *d_134!=0        ) {
            if(            *start_132==*d_134            ) {
                is_delim_135=1;
                break;
            }
            d_134++;
        }
        if(        !is_delim_135        ) {
            break;
        }
        start_132++;
    }
    if(    *start_132==0    ) {
        next_131=((void*)0);
        __result_obj__33 = ((void*)0);
        return __result_obj__33;
    }
    p_133=start_132;
    while(    *p_133!=0    ) {
        const char* d_136=delim;
        is_delim_137=0;
        while(        *d_136!=0        ) {
            if(            *p_133==*d_136            ) {
                is_delim_137=1;
                break;
            }
            d_136++;
        }
        if(        is_delim_137        ) {
            break;
        }
        p_133++;
    }
    if(    *p_133==0    ) {
        next_131=((void*)0);
    }
    else {
        *p_133=0;
        next_131=p_133+1;
    }
    __result_obj__34 = start_132;
    return __result_obj__34;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_138;
int i_140;
int negative_141;
char* __result_obj__35;
int digit_142;
char* __result_obj__36;
    p_138=buf;
    char tmp_139[32];
    memset(&tmp_139, 0, sizeof(char)    *(32)    );
    i_140=0;
    negative_141=0;
    if(    base<2||base>16    ) {
        *p_138=0;
        __result_obj__35 = p_138;
        return __result_obj__35;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_141=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_142=val_%base;
        tmp_139[i_140++]=(((digit_142<10))?(48+digit_142):(97+digit_142-10));
        val_/=base;
    } while(    val_    );
    if(    negative_141    ) {
        *p_138++=45;
    }
    while(    i_140--    ) {
        *p_138++=tmp_139[i_140];
    }
    *p_138=0;
    __result_obj__36 = buf;
    return __result_obj__36;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_144;
const char* s_145;
unsigned long  int remaining_147;
s_145 = (void*)0;
    char out2_143[512];
    memset(&out2_143, 0, sizeof(char)    *(512)    );
    p_144=out2_143;
    char buf_146[32];
    memset(&buf_146, 0, sizeof(char)    *(32)    );
    remaining_147=sizeof(out2_143);
    for(    ;    *fmt&&remaining_147>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_144++=*fmt;
            remaining_147--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_146,__builtin_va_arg(ap,int),10,1);
            s_145=buf_146;
            break;
            case 117:
            itoa(buf_146,__builtin_va_arg(ap,unsigned int),10,0);
            s_145=buf_146;
            break;
            case 120:
            itoa(buf_146,__builtin_va_arg(ap,unsigned int),16,0);
            s_145=buf_146;
            break;
            case 115:
            s_145=__builtin_va_arg(ap,const char*);
            if(            !s_145            ) {
                s_145="(null)";
            }
            break;
            case 99:
            buf_146[0]=(char)__builtin_va_arg(ap,int);
            buf_146[1]=0;
            s_145=buf_146;
            break;
            case 112:
            strncpy(buf_146,"0x",32);
            itoa(buf_146+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_145=buf_146;
            break;
            case 37:
            buf_146[0]=37;
            buf_146[1]=0;
            s_145=buf_146;
            break;
            default:
            buf_146[0]=37;
            buf_146[1]=*fmt;
            buf_146[2]=0;
            s_145=buf_146;
            break;
        }
        while(        *s_145&&remaining_147>1        ) {
            *p_144++=*s_145++;
            remaining_147--;
        }
    }
    *p_144=0;
    *out=strdup(out2_143);
    return p_144-out2_143;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_148;
char* p_149;
const char* s_150;
unsigned long  int remaining_152;
memset(&ap_148, 0, sizeof(va_list));
s_150 = (void*)0;
    __builtin_va_start(ap_148,fmt);
    p_149=out;
    char buf_151[32];
    memset(&buf_151, 0, sizeof(char)    *(32)    );
    remaining_152=out_size;
    if(    remaining_152==0    ) {
        __builtin_va_end(ap_148);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_152>1            ) {
                *p_149++=*fmt;
                remaining_152--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_150=__builtin_va_arg(ap_148,const char*);
            while(            *s_150&&remaining_152>1            ) {
                *p_149++=*s_150++;
                remaining_152--;
            }
            break;
            case 100:
            itoa(buf_151,__builtin_va_arg(ap_148,int),10,0);
            s_150=buf_151;
            while(            *s_150&&remaining_152>1            ) {
                *p_149++=*s_150++;
                remaining_152--;
            }
            break;
            case 120:
            itoa(buf_151,(unsigned int)__builtin_va_arg(ap_148,int),16,1);
            s_150=buf_151;
            while(            *s_150&&remaining_152>1            ) {
                *p_149++=*s_150++;
                remaining_152--;
            }
            break;
            case 99:
            if(            remaining_152>1            ) {
                *p_149++=(char)__builtin_va_arg(ap_148,int);
                remaining_152--;
            }
            break;
            case 112:
            s_150="0x";
            while(            *s_150&&remaining_152>1            ) {
                *p_149++=*s_150++;
                remaining_152--;
            }
            itoa(buf_151,(long)__builtin_va_arg(ap_148,void*),16,1);
            s_150=buf_151;
            while(            *s_150&&remaining_152>1            ) {
                *p_149++=*s_150++;
                remaining_152--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_151,__builtin_va_arg(ap_148,long),10,1);
                s_150=buf_151;
                while(                *s_150&&remaining_152>1                ) {
                    *p_149++=*s_150++;
                    remaining_152--;
                }
            }
            break;
            default:
            if(            remaining_152>1            ) {
                *p_149++=37;
                remaining_152--;
                if(                remaining_152>1                ) {
                    *p_149++=*fmt;
                    remaining_152--;
                }
            }
            break;
        }
    }
    *p_149=0;
    __builtin_va_end(ap_148);
    return p_149-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_153;
char* p_154;
const char* s_155;
unsigned long  int remaining_157;
memset(&ap_153, 0, sizeof(va_list));
s_155 = (void*)0;
    __builtin_va_start(ap_153,fmt);
    p_154=out;
    char buf_156[32];
    memset(&buf_156, 0, sizeof(char)    *(32)    );
    remaining_157=out_size;
    if(    remaining_157==0    ) {
        __builtin_va_end(ap_153);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_157>1            ) {
                *p_154++=*fmt;
                remaining_157--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_155=__builtin_va_arg(ap_153,const char*);
            while(            *s_155&&remaining_157>1            ) {
                *p_154++=*s_155++;
                remaining_157--;
            }
            break;
            case 100:
            itoa(buf_156,__builtin_va_arg(ap_153,int),10,0);
            s_155=buf_156;
            while(            *s_155&&remaining_157>1            ) {
                *p_154++=*s_155++;
                remaining_157--;
            }
            break;
            case 120:
            itoa(buf_156,(unsigned int)__builtin_va_arg(ap_153,int),16,1);
            s_155=buf_156;
            while(            *s_155&&remaining_157>1            ) {
                *p_154++=*s_155++;
                remaining_157--;
            }
            break;
            case 99:
            if(            remaining_157>1            ) {
                *p_154++=(char)__builtin_va_arg(ap_153,int);
                remaining_157--;
            }
            break;
            case 112:
            s_155="0x";
            while(            *s_155&&remaining_157>1            ) {
                *p_154++=*s_155++;
                remaining_157--;
            }
            itoa(buf_156,(long)__builtin_va_arg(ap_153,void*),16,1);
            s_155=buf_156;
            while(            *s_155&&remaining_157>1            ) {
                *p_154++=*s_155++;
                remaining_157--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_156,__builtin_va_arg(ap_153,long),10,1);
                s_155=buf_156;
                while(                *s_155&&remaining_157>1                ) {
                    *p_154++=*s_155++;
                    remaining_157--;
                }
            }
            break;
            default:
            if(            remaining_157>1            ) {
                *p_154++=37;
                remaining_157--;
                if(                remaining_157>1                ) {
                    *p_154++=*fmt;
                    remaining_157--;
                }
            }
            break;
        }
    }
    *p_154=0;
    __builtin_va_end(ap_153);
    return p_154-out;
}

void printint(int val_, int base, int sign){
int i_159;
int negative_160;
unsigned int uval_161;
int digit_162;
memset(&uval_161, 0, sizeof(unsigned int));
    char buf_158[33];
    memset(&buf_158, 0, sizeof(char)    *(33)    );
    i_159=0;
    negative_160=0;
    if(    sign&&val_<0    ) {
        negative_160=1;
        uval_161=-val_;
    }
    else {
        uval_161=(unsigned int)val_;
    }
    if(    uval_161==0    ) {
        putchar(48);
        return;
    }
    while(    uval_161>0    ) {
        digit_162=uval_161%base;
        buf_158[i_159++]=((digit_162<10)?(48+digit_162):(97+(digit_162-10)));
        uval_161/=base;
    }
    if(    negative_160    ) {
        putchar(45);
    }
    while(    --i_159>=0    ) {
        putchar(buf_158[i_159]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_164;
int negative_165;
int digit_166;
    char buf_163[65];
    memset(&buf_163, 0, sizeof(char)    *(65)    );
    i_164=0;
    negative_165=0;
    if(    sign&&(long)val_<0    ) {
        negative_165=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_166=val_%base;
        buf_163[i_164++]=((digit_166<10)?(48+digit_166):(97+(digit_166-10)));
        val_/=base;
    }
    if(    negative_165    ) {
        putchar(45);
    }
    while(    --i_164>=0    ) {
        putchar(buf_163[i_164]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_168;
int negative_169;
int digit_170;
    char buf_167[65];
    memset(&buf_167, 0, sizeof(char)    *(65)    );
    i_168=0;
    negative_169=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_169=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_170=val_%base;
        buf_167[i_168++]=((digit_170<10)?(48+digit_170):(97+(digit_170-10)));
        val_/=base;
    }
    if(    negative_169    ) {
        putchar(45);
    }
    while(    --i_168>=0    ) {
        putchar(buf_167[i_168]);
    }
}

int printf(const char* fmt, ...){
va_list ap_171;
const char* p_172;
int lcount_173;
unsigned long  int val__174;
unsigned long  long val__175;
long val__176;
long long val__177;
int i_178;
int val__179;
unsigned int val__180;
unsigned long  int val__181;
char c_183;
memset(&ap_171, 0, sizeof(va_list));
p_172 = (void*)0;
    __builtin_va_start(ap_171,fmt);
    for(    p_172=fmt    ;    *p_172    ;    p_172++    ){
        if(        *p_172!=37        ) {
            putchar(*p_172);
            continue;
        }
        p_172++;
        if(        *p_172==108        ) {
            lcount_173=1;
            if(            *(p_172+1)==108            ) {
                lcount_173=2;
                p_172++;
            }
            p_172++;
            switch (            *p_172) {
                case 120:
                {
                    if(                    lcount_173==1                    ) {
                        val__174=__builtin_va_arg(ap_171,unsigned long  int);
                        printlong(val__174,16,0);
                    }
                    else {
                        val__175=__builtin_va_arg(ap_171,unsigned long  long);
                        printlonglong(val__175,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_173==1                    ) {
                        val__176=__builtin_va_arg(ap_171,long);
                        printlong(val__176,10,1);
                    }
                    else {
                        val__177=__builtin_va_arg(ap_171,long  long);
                        printlonglong(val__177,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_178=0                    ;                    i_178<lcount_173                    ;                    i_178++                    ){
                        putchar(108);
                    }
                    putchar(*p_172);
                    break;
                }
            }
        }
        else {
            switch (            *p_172) {
                case 100:
                {
                    val__179=__builtin_va_arg(ap_171,int);
                    printint(val__179,10,1);
                    break;
                }
                case 120:
                {
                    val__180=__builtin_va_arg(ap_171,unsigned int);
                    printint(val__180,16,0);
                    break;
                }
                case 112:
                {
                    val__181=(unsigned long  int)__builtin_va_arg(ap_171,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__181,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_182=__builtin_va_arg(ap_171,const char*);
                    if(                    !s_182                    ) {
                        s_182="(null)";
                    }
                    while(                    *s_182                    ) {
                        putchar(*s_182++);
                    }
                    break;
                }
                case 99:
                {
                    c_183=(char)__builtin_va_arg(ap_171,int);
                    putchar(c_183);
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
                    putchar(*p_172);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_171);
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
struct buffer* buf_184;
int i_185;
void* __right_value2 = (void*)0;
    buf_184=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 147, "struct buffer*"))));
    buffer_append_format(buf_184,"%s %d\n",sname,sline);
    for(    i_185=gNumComeStackFrame-2    ;    i_185>=0    ;    i_185--    ){
        buffer_append_format(buf_184,"%s %d #%d\n",gComeStackFrameSName[i_185],gComeStackFrameSLine[i_185],gComeStackFrameID[i_185]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value2=buffer_to_string(buf_184))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_184, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_186;
    for(    i_186=gNumComeStackFrame-1    ;    i_186>=0    ;    i_186--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_186],gComeStackFrameSLine[i_186],gComeStackFrameID[i_186]);
    }
}

char* come_get_stackframe(){
void* __right_value3 = (void*)0;
char* __result_obj__37;
    __result_obj__37 = (char*)come_increment_ref_count(((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__37 = come_decrement_ref_count(__result_obj__37, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__37;
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
int i_187;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_187=0    ;    i_187<gHeapPages.mSizePages    ;    i_187++    ){
        gHeapPages.mPages[i_187]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_188;
int n_189;
_Bool flag_190;
int i_191;
struct sMemHeaderTiny* it_192;
int n_193;
int i_194;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_188=gAllocMem;
        n_189=0;
        while(        it_188        ) {
            n_189++;
            flag_190=(_Bool)0;
            printf("#%d ",n_189);
            if(            it_188->class_name            ) {
                printf("%p (%s): ",(char*)it_188+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_188->class_name);
            }
            for(            i_191=0            ;            i_191<16            ;            i_191++            ){
                if(                it_188->sname[i_191]                ) {
                    printf("%s %d #%d, ",it_188->sname[i_191],it_188->sline[i_191],it_188->id[i_191]);
                    flag_190=(_Bool)1;
                }
            }
            if(            flag_190            ) {
                puts("");
            }
            it_188=it_188->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_189,gNumAlloc,gNumFree);
    }
    else {
        it_192=(struct sMemHeaderTiny*)gAllocMem;
        n_193=0;
        while(        it_192        ) {
            n_193++;
            if(            it_192->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_193,(char*)it_192+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_192->class_name,it_192->sname,it_192->sline);
            }
            it_192=it_192->next;
        }
        if(        n_193>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_193,gNumAlloc,gNumFree);
        }
    }
    for(    i_194=0    ;    i_194<gHeapPages.mSizePages    ;    i_194++    ){
        free(gHeapPages.mPages[i_194]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_195;
void* __result_obj__38;
    result_195=((void*)0);
    size=(size+7&~7);
    result_195=calloc(1,size);
    __result_obj__38 = result_195;
    return __result_obj__38;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_196;
struct sMemHeader* prev_it_197;
struct sMemHeader* next_it_198;
unsigned long  int size_199;
struct sMemHeaderTiny* it_200;
struct sMemHeaderTiny* prev_it_201;
struct sMemHeaderTiny* next_it_202;
unsigned long  int size_203;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_196=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_196->allocated!=177783            ) {
                return;
            }
            it_196->allocated=0;
            prev_it_197=it_196->prev;
            next_it_198=it_196->next;
            if(            gAllocMem==it_196            ) {
                gAllocMem=next_it_198;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_197                ) {
                    prev_it_197->next=next_it_198;
                }
                if(                next_it_198                ) {
                    next_it_198->prev=prev_it_197;
                }
            }
            size_199=it_196->size;
            free(it_196);
            gNumFree++;
        }
        else {
            it_200=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_200->allocated!=177783            ) {
                return;
            }
            it_200->allocated=0;
            prev_it_201=it_200->prev;
            next_it_202=it_200->next;
            if(            gAllocMem==it_200            ) {
                gAllocMem=(struct sMemHeader*)next_it_202;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_201                ) {
                    prev_it_201->next=next_it_202;
                }
                if(                next_it_202                ) {
                    next_it_202->prev=prev_it_201;
                }
            }
            size_203=it_200->size;
            free(it_200);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_204;
struct sMemHeader* it_205;
int i_206;
int i_207;
void* __result_obj__39;
void* result_208;
struct sMemHeaderTiny* it_209;
void* __result_obj__40;
memset(&i_206, 0, sizeof(int));
memset(&i_207, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_204=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_205=result_204;
        it_205->allocated=177783;
        it_205->size=size+sizeof(struct sMemHeader);
        it_205->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_206=0            ;            i_206<gNumComeStackFrame            ;            i_206++            ){
                it_205->sname[i_206]=gComeStackFrameSName[i_206];
                it_205->sline[i_206]=gComeStackFrameSLine[i_206];
                it_205->id[i_206]=gComeStackFrameID[i_206];
            }
        }
        else {
            for(            i_207=0            ;            i_207<16            ;            i_207++            ){
                it_205->sname[i_207]=gComeStackFrameSName[gNumComeStackFrame-1-i_207];
                it_205->sline[i_207]=gComeStackFrameSLine[gNumComeStackFrame-1-i_207];
                it_205->id[i_207]=gComeStackFrameID[gNumComeStackFrame-1-i_207];
            }
        }
        come_pop_stackframe_v2();
        it_205->next=gAllocMem;
        it_205->prev=((void*)0);
        it_205->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_205;
        }
        gAllocMem=it_205;
        gNumAlloc++;
        __result_obj__39 = (char*)result_204+sizeof(struct sMemHeader);
        return __result_obj__39;
    }
    else {
        result_208=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_209=result_208;
        it_209->allocated=177783;
        it_209->class_name=class_name;
        it_209->sname=sname;
        it_209->sline=sline;
        it_209->size=size+sizeof(struct sMemHeaderTiny);
        it_209->free_next=((void*)0);
        it_209->next=(struct sMemHeaderTiny*)gAllocMem;
        it_209->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_209;
        }
        gAllocMem=(struct sMemHeader*)it_209;
        gNumAlloc++;
        __result_obj__40 = (char*)result_208+sizeof(struct sMemHeaderTiny);
        return __result_obj__40;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_210;
char* __result_obj__41;
struct sMemHeaderTiny* it_211;
char* __result_obj__42;
    if(    gComeDebugLib    ) {
        it_210=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_210->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_210);
            exit(2);
        }
        __result_obj__41 = it_210->class_name;
        return __result_obj__41;
    }
    else {
        it_211=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_211->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_211);
            exit(2);
        }
        __result_obj__42 = it_211->class_name;
        return __result_obj__42;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_212;
int i_213;
struct sMemHeaderTiny* it_214;
    if(    gComeDebugLib    ) {
        it_212=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_212->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_212->class_name        ) {
            printf("(%s): ",it_212->class_name);
        }
        for(        i_213=0        ;        i_213<16        ;        i_213++        ){
            if(            it_212->sname[i_213]            ) {
                printf("%s %d #%d, ",it_212->sname[i_213],it_212->sline[i_213],it_212->id[i_213]);
            }
        }
        puts("");
    }
    else {
        it_214=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_214->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_214->class_name,it_214->sname,it_214->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_215;
unsigned long  int* ref_count_216;
unsigned long  int* size2_217;
void* __result_obj__43;
    mem_215=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_216=(unsigned long  int*)mem_215;
    *ref_count_216=0;
    size2_217=(unsigned long  int*)(mem_215+sizeof(unsigned long  int));
    *size2_217=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__43 = mem_215+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__43;
}

void come_free(void* mem){
unsigned long  int* ref_count_218;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_218=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_218);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__44;
char* mem_219;
unsigned long  int* size_p_220;
unsigned long  int size_221;
void* result_222;
void* __result_obj__45;
    if(    !block    ) {
        __result_obj__44 = ((void*)0);
        return __result_obj__44;
    }
    mem_219=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_220=(unsigned long  int*)(mem_219+sizeof(unsigned long  int));
    size_221=*size_p_220-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_222=come_calloc_v2(1,size_221,sname,sline,class_name);
    memcpy(result_222,block,size_221);
    __result_obj__45 = result_222;
    return __result_obj__45;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__46;
unsigned long  int* ref_count_223;
void* __result_obj__47;
    if(    mem==((void*)0)    ) {
        __result_obj__46 = mem;
        return __result_obj__46;
    }
    ref_count_223=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_223)++;
    __result_obj__47 = mem;
    return __result_obj__47;
}

void* come_print_ref_count(void* mem){
void* __result_obj__48;
unsigned long  int* ref_count_224;
void* __result_obj__49;
    if(    mem==((void*)0)    ) {
        __result_obj__48 = mem;
        return __result_obj__48;
    }
    ref_count_224=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_224);
    __result_obj__49 = mem;
    return __result_obj__49;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_225;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_225=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_225;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__50;
void* __result_obj__51;
unsigned long  int* ref_count_226;
unsigned long  int count_227;
void (*finalizer_228)(void*);
void* __result_obj__52;
void* __result_obj__53;
memset(&finalizer_228, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__50 = mem;
            return __result_obj__50;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__51 = ((void*)0);
        return __result_obj__51;
    }
    ref_count_226=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_226)--;
    }
    count_227=*ref_count_226;
    if(    !no_free&&count_227<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_228=protocol_fun;
            finalizer_228(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__52 = ((void*)0);
        return __result_obj__52;
    }
    __result_obj__53 = mem;
    return __result_obj__53;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_229)(void*);
void (*finalizer_230)(void*);
void (*finalizer_231)(void*);
unsigned long  int* ref_count_232;
unsigned long  int count_233;
void (*finalizer_234)(void*);
void (*finalizer_235)(void*);
void (*finalizer_236)(void*);
memset(&finalizer_229, 0, sizeof(void (*)(void*)));
memset(&finalizer_230, 0, sizeof(void (*)(void*)));
memset(&finalizer_231, 0, sizeof(void (*)(void*)));
memset(&finalizer_234, 0, sizeof(void (*)(void*)));
memset(&finalizer_235, 0, sizeof(void (*)(void*)));
memset(&finalizer_236, 0, sizeof(void (*)(void*)));
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
                finalizer_229=protocol_fun;
                finalizer_229(protocol_obj);
            }
            finalizer_230=fun;
            finalizer_230(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_231=protocol_fun;
                finalizer_231(protocol_obj);
            }
        }
    }
    else {
        ref_count_232=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_232)--;
        }
        count_233=*ref_count_232;
        if(        !no_free&&count_233<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_234=protocol_fun;
                        finalizer_234(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_235=fun;
                        finalizer_235(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_236=protocol_fun;
                        finalizer_236(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__54;
int len_237;
void* __right_value4 = (void*)0;
char* result_238;
char* __result_obj__55;
    if(    str==((void*)0)    ) {
        __result_obj__54 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__54 = come_decrement_ref_count(__result_obj__54, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__54;
    }
    len_237=strlen(str)+1;
    result_238=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_237)), "/usr/local/include/comelang.h", 911, "char*"));
    strncpy(result_238,str,len_237);
    __result_obj__55 = (char*)come_increment_ref_count(result_238);
    (result_238 = come_decrement_ref_count(result_238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__55;
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
char* __result_obj__56;
    __result_obj__56 = (char*)come_increment_ref_count(((char*)(__right_value5=come_get_stackframe())));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__56 = come_decrement_ref_count(__result_obj__56, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__56;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__57;
    __result_obj__57 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__57;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value6 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__58;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2868, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__58 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__58;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value7 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__59;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2878, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__59 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__59;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__60;
void* __right_value8 = (void*)0;
struct buffer* result_239;
void* __right_value9 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__61;
    if(    self==((void*)0)    ) {
        __result_obj__60 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__60;
    }
    result_239=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2898, "struct buffer*"));
    result_239->size=self->size;
    __dec_obj3=result_239->buf,
    result_239->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2901, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_239->len=self->len;
    memcpy(result_239->buf,self->buf,self->len);
    __result_obj__61 = (struct buffer*)come_increment_ref_count(result_239);
    come_call_finalizer(buffer_finalize, result_239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__61;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
_Bool __result_obj__62;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__62 = string_equals(((char*)(__right_value10=buffer_to_string(left))),((char*)(__right_value11=buffer_to_string(right))));
    (__right_value10 = come_decrement_ref_count(__right_value10, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__62;
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
struct buffer* __result_obj__63;
void* __right_value12 = (void*)0;
char* old_buf_240;
int old_len_241;
int new_size_242;
void* __right_value13 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__64;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__63 = self;
        return __result_obj__63;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_240=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2949, "char*"));
        memcpy(old_buf_240,self->buf,self->size);
        old_len_241=self->len;
        new_size_242=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_242)), "/usr/local/include/comelang.h", 2953, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_240,old_len_241);
        self->buf[old_len_241]=0;
        self->size=new_size_242;
        (old_buf_240 = come_decrement_ref_count(old_buf_240, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__64 = self;
    return __result_obj__64;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__65;
void* __right_value14 = (void*)0;
char* old_buf_243;
int old_len_244;
int new_size_245;
void* __right_value15 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__66;
    if(    self==((void*)0)    ) {
        __result_obj__65 = ((void*)0);
        return __result_obj__65;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_243=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2972, "char*"));
        old_len_244=self->len;
        new_size_245=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_245)), "/usr/local/include/comelang.h", 2976, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_243,old_len_244);
        self->buf[old_len_244]=0;
        self->size=new_size_245;
        (old_buf_243 = come_decrement_ref_count(old_buf_243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__66 = self;
    return __result_obj__66;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__67;
int size_246;
void* __right_value16 = (void*)0;
char* old_buf_247;
int old_len_248;
int new_size_249;
void* __right_value17 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__68;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__67 = self;
        return __result_obj__67;
    }
    size_246=strlen(mem);
    if(    self->len+size_246+1+1>=self->size    ) {
        old_buf_247=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2998, "char*"));
        memcpy(old_buf_247,self->buf,self->size);
        old_len_248=self->len;
        new_size_249=(self->size+size_246+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_249)), "/usr/local/include/comelang.h", 3002, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_247,old_len_248);
        self->buf[old_len_248]=0;
        self->size=new_size_249;
        (old_buf_247 = come_decrement_ref_count(old_buf_247, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_246);
    self->len+=size_246;
    self->buf[self->len]=0;
    __result_obj__68 = self;
    return __result_obj__68;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__69;
va_list args_250;
char* result_251;
int len_252;
struct buffer* __result_obj__70;
void* __right_value18 = (void*)0;
char* mem_253;
int size_254;
void* __right_value19 = (void*)0;
char* old_buf_255;
int old_len_256;
int new_size_257;
void* __right_value20 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__71;
result_251 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__69 = self;
        return __result_obj__69;
    }
    __builtin_va_start(args_250,msg);
    len_252=vasprintf(&result_251,msg,args_250);
    __builtin_va_end(args_250);
    if(    len_252<0    ) {
        __result_obj__70 = self;
        return __result_obj__70;
    }
    mem_253=(char*)come_increment_ref_count(__builtin_string(result_251));
    size_254=strlen(mem_253);
    if(    self->len+size_254+1+1>=self->size    ) {
        old_buf_255=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3046, "char*"));
        memcpy(old_buf_255,self->buf,self->size);
        old_len_256=self->len;
        new_size_257=(self->size+size_254+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_257)), "/usr/local/include/comelang.h", 3050, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_255,old_len_256);
        self->buf[old_len_256]=0;
        self->size=new_size_257;
        (old_buf_255 = come_decrement_ref_count(old_buf_255, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_253,size_254);
    self->len+=size_254;
    self->buf[self->len]=0;
    free(result_251);
    __result_obj__71 = self;
    (mem_253 = come_decrement_ref_count(mem_253, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__71;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__72;
int size_258;
void* __right_value21 = (void*)0;
char* old_buf_259;
int old_len_260;
int new_size_261;
void* __right_value22 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__73;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__72 = self;
        return __result_obj__72;
    }
    size_258=strlen(mem)+1;
    if(    self->len+size_258+1+1+1>=self->size    ) {
        old_buf_259=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3072, "char*"));
        memcpy(old_buf_259,self->buf,self->size);
        old_len_260=self->len;
        new_size_261=(self->size+size_258+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_261)), "/usr/local/include/comelang.h", 3076, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_259,old_len_260);
        self->buf[old_len_260]=0;
        self->size=new_size_261;
        (old_buf_259 = come_decrement_ref_count(old_buf_259, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_258);
    self->len+=size_258;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__73 = self;
    return __result_obj__73;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__74;
int* mem_262;
int size_263;
void* __right_value23 = (void*)0;
char* old_buf_264;
int old_len_265;
int new_size_266;
void* __right_value24 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__75;
    if(    self==((void*)0)    ) {
        __result_obj__74 = ((void*)0);
        return __result_obj__74;
    }
    mem_262=&value;
    size_263=sizeof(int);
    if(    self->len+size_263+1+1>=self->size    ) {
        old_buf_264=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3099, "char*"));
        memcpy(old_buf_264,self->buf,self->size);
        old_len_265=self->len;
        new_size_266=(self->size+size_263+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_266)), "/usr/local/include/comelang.h", 3103, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_264,old_len_265);
        self->buf[old_len_265]=0;
        self->size=new_size_266;
        (old_buf_264 = come_decrement_ref_count(old_buf_264, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_262,size_263);
    self->len+=size_263;
    self->buf[self->len]=0;
    __result_obj__75 = self;
    return __result_obj__75;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_267;
int size_268;
void* __right_value25 = (void*)0;
char* old_buf_269;
int old_len_270;
int new_size_271;
void* __right_value26 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__76;
    mem_267=&value;
    size_268=sizeof(long);
    if(    self->len+size_268+1+1>=self->size    ) {
        old_buf_269=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3122, "char*"));
        memcpy(old_buf_269,self->buf,self->size);
        old_len_270=self->len;
        new_size_271=(self->size+size_268+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_271)), "/usr/local/include/comelang.h", 3126, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_269,old_len_270);
        self->buf[old_len_270]=0;
        self->size=new_size_271;
        (old_buf_269 = come_decrement_ref_count(old_buf_269, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_267,size_268);
    self->len+=size_268;
    self->buf[self->len]=0;
    __result_obj__76 = self;
    return __result_obj__76;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__77;
short* mem_272;
int size_273;
void* __right_value27 = (void*)0;
char* old_buf_274;
int old_len_275;
int new_size_276;
void* __right_value28 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__78;
    if(    self==((void*)0)    ) {
        __result_obj__77 = ((void*)0);
        return __result_obj__77;
    }
    mem_272=&value;
    size_273=sizeof(short);
    if(    self->len+size_273+1+1>=self->size    ) {
        old_buf_274=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3149, "char*"));
        memcpy(old_buf_274,self->buf,self->size);
        old_len_275=self->len;
        new_size_276=(self->size+size_273+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_276)), "/usr/local/include/comelang.h", 3153, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_274,old_len_275);
        self->buf[old_len_275]=0;
        self->size=new_size_276;
        (old_buf_274 = come_decrement_ref_count(old_buf_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_272,size_273);
    self->len+=size_273;
    self->buf[self->len]=0;
    __result_obj__78 = self;
    return __result_obj__78;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__79;
int len_277;
int new_size_278;
void* __right_value29 = (void*)0;
char* __dec_obj12;
int i_279;
struct buffer* __result_obj__80;
    if(    self==((void*)0)    ) {
        __result_obj__79 = ((void*)0);
        return __result_obj__79;
    }
    len_277=self->len;
    len_277=(len_277+3)&~3;
    if(    len_277>=self->size    ) {
        new_size_278=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_278)), "/usr/local/include/comelang.h", 3177, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_278;
    }
    for(    i_279=self->len    ;    i_279<len_277    ;    i_279++    ){
        self->buf[i_279]=0;
    }
    self->len=len_277;
    __result_obj__80 = self;
    return __result_obj__80;
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
struct buffer* result_280;
struct buffer* __result_obj__81;
struct buffer* __result_obj__82;
    result_280=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3207, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__81 = (struct buffer*)come_increment_ref_count(result_280);
        come_call_finalizer(buffer_finalize, result_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__81;
    }
    buffer_append_str(result_280,self);
    __result_obj__82 = (struct buffer*)come_increment_ref_count(result_280);
    come_call_finalizer(buffer_finalize, result_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__82;
}

char* buffer_to_string(struct buffer* self){
void* __right_value32 = (void*)0;
char* __result_obj__83;
void* __right_value33 = (void*)0;
char* __result_obj__84;
    if(    self==((void*)0)    ) {
        __result_obj__83 = (char*)come_increment_ref_count(((char*)(__right_value32=__builtin_string(""))));
        (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__83 = come_decrement_ref_count(__result_obj__83, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__83;
    }
    __result_obj__84 = (char*)come_increment_ref_count(((char*)(__right_value33=__builtin_string(self->buf))));
    (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__84 = come_decrement_ref_count(__result_obj__84, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__84;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__85;
    __result_obj__85 = self->buf;
    return __result_obj__85;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct buffer* result_281;
struct buffer* __result_obj__86;
    result_281=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3234, "struct buffer*"))));
    buffer_append(result_281,self,sizeof(char)*len);
    __result_obj__86 = (struct buffer*)come_increment_ref_count(result_281);
    come_call_finalizer(buffer_finalize, result_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct buffer* result_282;
int i_283;
struct buffer* __result_obj__87;
    result_282=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3241, "struct buffer*"))));
    for(    i_283=0    ;    i_283<len    ;    i_283++    ){
        buffer_append(result_282,self[i_283],strlen(self[i_283]));
    }
    __result_obj__87 = (struct buffer*)come_increment_ref_count(result_282);
    come_call_finalizer(buffer_finalize, result_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct buffer* result_284;
struct buffer* __result_obj__88;
    result_284=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3250, "struct buffer*"))));
    buffer_append(result_284,(char*)self,sizeof(short)*len);
    __result_obj__88 = (struct buffer*)come_increment_ref_count(result_284);
    come_call_finalizer(buffer_finalize, result_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct buffer* result_285;
struct buffer* __result_obj__89;
    result_285=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3257, "struct buffer*"))));
    buffer_append(result_285,(char*)self,sizeof(int)*len);
    __result_obj__89 = (struct buffer*)come_increment_ref_count(result_285);
    come_call_finalizer(buffer_finalize, result_285, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct buffer* result_286;
struct buffer* __result_obj__90;
    result_286=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3264, "struct buffer*"))));
    buffer_append(result_286,(char*)self,sizeof(long)*len);
    __result_obj__90 = (struct buffer*)come_increment_ref_count(result_286);
    come_call_finalizer(buffer_finalize, result_286, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
struct buffer* result_287;
struct buffer* __result_obj__91;
    result_287=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3271, "struct buffer*"))));
    buffer_append(result_287,(char*)self,sizeof(float)*len);
    __result_obj__91 = (struct buffer*)come_increment_ref_count(result_287);
    come_call_finalizer(buffer_finalize, result_287, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
struct buffer* result_288;
struct buffer* __result_obj__92;
    result_288=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3278, "struct buffer*"))));
    buffer_append(result_288,(char*)self,sizeof(double)*len);
    __result_obj__92 = (struct buffer*)come_increment_ref_count(result_288);
    come_call_finalizer(buffer_finalize, result_288, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

char* buffer_printable(struct buffer* self){
int len_289;
void* __right_value48 = (void*)0;
char* result_290;
int n_291;
int i_292;
unsigned char c_293;
char* __result_obj__93;
    len_289=self->len;
    result_290=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_289*2+1)), "/usr/local/include/comelang.h", 3286, "char*"));
    n_291=0;
    for(    i_292=0    ;    i_292<len_289    ;    i_292++    ){
        c_293=self->buf[i_292];
        if(        (c_293>=0&&c_293<32)||c_293==127        ) {
            result_290[n_291++]=94;
            result_290[n_291++]=c_293+65-1;
        }
        else if(        c_293>127        ) {
            result_290[n_291++]=63;
        }
        else {
            result_290[n_291++]=c_293;
        }
    }
    result_290[n_291]=0;
    __result_obj__93 = (char*)come_increment_ref_count(result_290);
    (result_290 = come_decrement_ref_count(result_290, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__93 = come_decrement_ref_count(__result_obj__93, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__93;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_294;
struct list$1char$* __result_obj__95;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_294=0    ;    i_294<num_value    ;    i_294++    ){
        list$1char$_push_back(self,values[i_294]);
    }
    __result_obj__95 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_295;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_296;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_297;
struct list$1char$* __result_obj__94;
    if(    self->len==0    ) {
        litem_295=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$*"))));
        litem_295->prev=((void*)0);
        litem_295->next=((void*)0);
        litem_295->item=item;
        self->tail=litem_295;
        self->head=litem_295;
    }
    else if(    self->len==1    ) {
        litem_296=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$*"))));
        litem_296->prev=self->head;
        litem_296->next=((void*)0);
        litem_296->item=item;
        self->tail=litem_296;
        self->head->next=litem_296;
    }
    else {
        litem_297=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$*"))));
        litem_297->prev=self->tail;
        litem_297->next=((void*)0);
        litem_297->item=item;
        self->tail->next=litem_297;
        self->tail=litem_297;
    }
    self->len++;
    __result_obj__94 = self;
    return __result_obj__94;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_298;
struct list_item$1char$* prev_it_299;
    it_298=self->head;
    while(    it_298!=((void*)0)    ) {
        prev_it_299=it_298;
        it_298=it_298->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_299, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value49 = (void*)0;
void* __right_value53 = (void*)0;
struct list$1char$* __result_obj__96;
    __result_obj__96 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value53=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3327, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value53, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_300;
struct list$1char$p* __result_obj__98;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_300=0    ;    i_300<num_value    ;    i_300++    ){
        list$1char$p_push_back(self,values[i_300]);
    }
    __result_obj__98 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_301;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_302;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_303;
struct list$1char$p* __result_obj__97;
    if(    self->len==0    ) {
        litem_301=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$p*"))));
        litem_301->prev=((void*)0);
        litem_301->next=((void*)0);
        litem_301->item=item;
        self->tail=litem_301;
        self->head=litem_301;
    }
    else if(    self->len==1    ) {
        litem_302=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$p*"))));
        litem_302->prev=self->head;
        litem_302->next=((void*)0);
        litem_302->item=item;
        self->tail=litem_302;
        self->head->next=litem_302;
    }
    else {
        litem_303=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$p*"))));
        litem_303->prev=self->tail;
        litem_303->next=((void*)0);
        litem_303->item=item;
        self->tail->next=litem_303;
        self->tail=litem_303;
    }
    self->len++;
    __result_obj__97 = self;
    return __result_obj__97;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_304;
struct list_item$1char$p* prev_it_305;
    it_304=self->head;
    while(    it_304!=((void*)0)    ) {
        prev_it_305=it_304;
        it_304=it_304->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_305, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value54 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1char$p* __result_obj__99;
    __result_obj__99 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value58=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3332, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_306;
struct list$1short$* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_306=0    ;    i_306<num_value    ;    i_306++    ){
        list$1short$_push_back(self,values[i_306]);
    }
    __result_obj__101 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_307;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_308;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_309;
struct list$1short$* __result_obj__100;
    if(    self->len==0    ) {
        litem_307=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1short$*"))));
        litem_307->prev=((void*)0);
        litem_307->next=((void*)0);
        litem_307->item=item;
        self->tail=litem_307;
        self->head=litem_307;
    }
    else if(    self->len==1    ) {
        litem_308=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1short$*"))));
        litem_308->prev=self->head;
        litem_308->next=((void*)0);
        litem_308->item=item;
        self->tail=litem_308;
        self->head->next=litem_308;
    }
    else {
        litem_309=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1short$*"))));
        litem_309->prev=self->tail;
        litem_309->next=((void*)0);
        litem_309->item=item;
        self->tail->next=litem_309;
        self->tail=litem_309;
    }
    self->len++;
    __result_obj__100 = self;
    return __result_obj__100;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_310;
struct list_item$1short$* prev_it_311;
    it_310=self->head;
    while(    it_310!=((void*)0)    ) {
        prev_it_311=it_310;
        it_310=it_310->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_311, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value59 = (void*)0;
void* __right_value63 = (void*)0;
struct list$1short$* __result_obj__102;
    __result_obj__102 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value63=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3337, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value63, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_312;
struct list$1int$* __result_obj__104;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_312=0    ;    i_312<num_value    ;    i_312++    ){
        list$1int$_push_back(self,values[i_312]);
    }
    __result_obj__104 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_313;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_314;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_315;
struct list$1int$* __result_obj__103;
    if(    self->len==0    ) {
        litem_313=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1int$*"))));
        litem_313->prev=((void*)0);
        litem_313->next=((void*)0);
        litem_313->item=item;
        self->tail=litem_313;
        self->head=litem_313;
    }
    else if(    self->len==1    ) {
        litem_314=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1int$*"))));
        litem_314->prev=self->head;
        litem_314->next=((void*)0);
        litem_314->item=item;
        self->tail=litem_314;
        self->head->next=litem_314;
    }
    else {
        litem_315=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1int$*"))));
        litem_315->prev=self->tail;
        litem_315->next=((void*)0);
        litem_315->item=item;
        self->tail->next=litem_315;
        self->tail=litem_315;
    }
    self->len++;
    __result_obj__103 = self;
    return __result_obj__103;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_316;
struct list_item$1int$* prev_it_317;
    it_316=self->head;
    while(    it_316!=((void*)0)    ) {
        prev_it_317=it_316;
        it_316=it_316->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_317, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value64 = (void*)0;
void* __right_value68 = (void*)0;
struct list$1int$* __result_obj__105;
    __result_obj__105 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value68=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3342, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value68, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_318;
struct list$1long$* __result_obj__107;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_318=0    ;    i_318<num_value    ;    i_318++    ){
        list$1long$_push_back(self,values[i_318]);
    }
    __result_obj__107 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__107;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_319;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_320;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_321;
struct list$1long$* __result_obj__106;
    if(    self->len==0    ) {
        litem_319=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1long$*"))));
        litem_319->prev=((void*)0);
        litem_319->next=((void*)0);
        litem_319->item=item;
        self->tail=litem_319;
        self->head=litem_319;
    }
    else if(    self->len==1    ) {
        litem_320=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1long$*"))));
        litem_320->prev=self->head;
        litem_320->next=((void*)0);
        litem_320->item=item;
        self->tail=litem_320;
        self->head->next=litem_320;
    }
    else {
        litem_321=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1long$*"))));
        litem_321->prev=self->tail;
        litem_321->next=((void*)0);
        litem_321->item=item;
        self->tail->next=litem_321;
        self->tail=litem_321;
    }
    self->len++;
    __result_obj__106 = self;
    return __result_obj__106;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_322;
struct list_item$1long$* prev_it_323;
    it_322=self->head;
    while(    it_322!=((void*)0)    ) {
        prev_it_323=it_322;
        it_322=it_322->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_323, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value69 = (void*)0;
void* __right_value73 = (void*)0;
struct list$1long$* __result_obj__108;
    __result_obj__108 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value73=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3347, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value73, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_324;
struct list$1float$* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_324=0    ;    i_324<num_value    ;    i_324++    ){
        list$1float$_push_back(self,values[i_324]);
    }
    __result_obj__110 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_325;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_326;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_327;
struct list$1float$* __result_obj__109;
    if(    self->len==0    ) {
        litem_325=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1float$*"))));
        litem_325->prev=((void*)0);
        litem_325->next=((void*)0);
        litem_325->item=item;
        self->tail=litem_325;
        self->head=litem_325;
    }
    else if(    self->len==1    ) {
        litem_326=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1float$*"))));
        litem_326->prev=self->head;
        litem_326->next=((void*)0);
        litem_326->item=item;
        self->tail=litem_326;
        self->head->next=litem_326;
    }
    else {
        litem_327=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1float$*"))));
        litem_327->prev=self->tail;
        litem_327->next=((void*)0);
        litem_327->item=item;
        self->tail->next=litem_327;
        self->tail=litem_327;
    }
    self->len++;
    __result_obj__109 = self;
    return __result_obj__109;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_328;
struct list_item$1float$* prev_it_329;
    it_328=self->head;
    while(    it_328!=((void*)0)    ) {
        prev_it_329=it_328;
        it_328=it_328->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_329, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value74 = (void*)0;
void* __right_value78 = (void*)0;
struct list$1float$* __result_obj__111;
    __result_obj__111 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value78=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3352, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__111;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_330;
struct list$1double$* __result_obj__113;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_330=0    ;    i_330<num_value    ;    i_330++    ){
        list$1double$_push_back(self,values[i_330]);
    }
    __result_obj__113 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_331;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_332;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_333;
struct list$1double$* __result_obj__112;
    if(    self->len==0    ) {
        litem_331=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1double$*"))));
        litem_331->prev=((void*)0);
        litem_331->next=((void*)0);
        litem_331->item=item;
        self->tail=litem_331;
        self->head=litem_331;
    }
    else if(    self->len==1    ) {
        litem_332=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1double$*"))));
        litem_332->prev=self->head;
        litem_332->next=((void*)0);
        litem_332->item=item;
        self->tail=litem_332;
        self->head->next=litem_332;
    }
    else {
        litem_333=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1double$*"))));
        litem_333->prev=self->tail;
        litem_333->next=((void*)0);
        litem_333->item=item;
        self->tail->next=litem_333;
        self->tail=litem_333;
    }
    self->len++;
    __result_obj__112 = self;
    return __result_obj__112;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_334;
struct list_item$1double$* prev_it_335;
    it_334=self->head;
    while(    it_334!=((void*)0)    ) {
        prev_it_335=it_334;
        it_334=it_334->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_335, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value79 = (void*)0;
void* __right_value83 = (void*)0;
struct list$1double$* __result_obj__114;
    __result_obj__114 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value83=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3357, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value83, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__114;
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
char* __result_obj__115;
int len_336;
void* __right_value85 = (void*)0;
char* result_337;
char* __result_obj__116;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string(""))));
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    len_336=strlen(self)+strlen(right);
    result_337=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_336+1)), "/usr/local/include/comelang.h", 3586, "char*"));
    strncpy(result_337,self,len_336+1);
    strncat(result_337,right,len_336+1);
    __result_obj__116 = (char*)come_increment_ref_count(result_337);
    (result_337 = come_decrement_ref_count(result_337, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__116;
}

char* string_operator_add(char* self, char* right){
void* __right_value86 = (void*)0;
char* __result_obj__117;
int len_338;
void* __right_value87 = (void*)0;
char* result_339;
char* __result_obj__118;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value86=__builtin_string(""))));
        (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__117;
    }
    len_338=strlen(self)+strlen(right);
    result_339=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_338+1)), "/usr/local/include/comelang.h", 3601, "char*"));
    strncpy(result_339,self,len_338+1);
    strncat(result_339,right,len_338+1);
    __result_obj__118 = (char*)come_increment_ref_count(result_339);
    (result_339 = come_decrement_ref_count(result_339, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__118;
}

char* charp_operator_mult(char* self, int right){
void* __right_value88 = (void*)0;
char* __result_obj__119;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct buffer* buf_340;
int i_341;
void* __right_value91 = (void*)0;
char* __result_obj__120;
    if(    self==((void*)0)    ) {
        __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value88=__builtin_string(""))));
        (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__119;
    }
    buf_340=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3614, "struct buffer*"))));
    for(    i_341=0    ;    i_341<right    ;    i_341++    ){
        buffer_append_str(buf_340,self);
    }
    __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value91=buffer_to_string(buf_340))));
    come_call_finalizer(buffer_finalize, buf_340, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__120;
}

char* string_operator_mult(char* self, int right){
void* __right_value92 = (void*)0;
char* __result_obj__121;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct buffer* buf_342;
int i_343;
void* __right_value95 = (void*)0;
char* __result_obj__122;
    if(    self==((void*)0)    ) {
        __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value92=__builtin_string(""))));
        (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__121;
    }
    buf_342=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3628, "struct buffer*"))));
    for(    i_343=0    ;    i_343<right    ;    i_343++    ){
        buffer_append_str(buf_342,self);
    }
    __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value95=buffer_to_string(buf_342))));
    come_call_finalizer(buffer_finalize, buf_342, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__122;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_344;
int i_345;
    result_344=(_Bool)0;
    for(    i_345=0    ;    i_345<len    ;    i_345++    ){
        if(        strncmp(self[i_345],str,strlen(self[i_345]))==0        ) {
            result_344=(_Bool)1;
            break;
        }
    }
    return result_344;
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
int result_346;
char* p_347;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_346=0;
    p_347=value;
    while(    *p_347    ) {
        result_346+=(*p_347);
        p_347++;
    }
    return result_346;
}

unsigned int string_get_hash_key(char* value){
int result_348;
char* p_349;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_348=0;
    p_349=value;
    while(    *p_349    ) {
        result_348+=(*p_349);
        p_349++;
    }
    return result_348;
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
_Bool result_350;
    result_350=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_350;
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
_Bool result_351;
    result_351=(c>=32&&c<=126);
    return result_351;
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
char* __result_obj__123;
int len_352;
void* __right_value97 = (void*)0;
char* result_353;
int i_354;
char* __result_obj__124;
    if(    str==((void*)0)    ) {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value96=__builtin_string(""))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__123;
    }
    len_352=strlen(str);
    result_353=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_352+1)), "/usr/local/include/comelang.h", 3896, "char*"));
    for(    i_354=0    ;    i_354<len_352    ;    i_354++    ){
        result_353[i_354]=str[len_352-i_354-1];
    }
    result_353[len_352]=0;
    __result_obj__124 = (char*)come_increment_ref_count(result_353);
    (result_353 = come_decrement_ref_count(result_353, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__124;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value98 = (void*)0;
char* __result_obj__125;
int len_355;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
char* __result_obj__126;
void* __right_value101 = (void*)0;
char* __result_obj__127;
void* __right_value102 = (void*)0;
char* __result_obj__128;
void* __right_value103 = (void*)0;
char* result_356;
char* __result_obj__129;
    if(    str==((void*)0)    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value98=__builtin_string(""))));
        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    len_355=strlen(str);
    if(    head<0    ) {
        head+=len_355;
    }
    if(    tail<0    ) {
        tail+=len_355+1;
    }
    if(    head>tail    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value100=charp_reverse(((char*)(__right_value99=charp_substring(str,tail,head)))))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_355    ) {
        tail=len_355;
    }
    if(    head==tail    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    if(    tail-head+1<1    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    result_356=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3942, "char*"));
    memcpy(result_356,str+head,tail-head);
    result_356[tail-head]=0;
    __result_obj__129 = (char*)come_increment_ref_count(result_356);
    (result_356 = come_decrement_ref_count(result_356, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__129;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value104 = (void*)0;
char* __result_obj__130;
int len_357;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
char* __result_obj__131;
void* __right_value107 = (void*)0;
char* __result_obj__132;
void* __right_value108 = (void*)0;
char* __result_obj__133;
void* __right_value109 = (void*)0;
char* result_358;
char* __result_obj__134;
    if(    str==((void*)0)    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string(""))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    len_357=strlen(str);
    if(    head<0    ) {
        head+=len_357;
    }
    if(    tail<0    ) {
        tail+=len_357+1;
    }
    if(    head>tail    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value106=charp_reverse(((char*)(__right_value105=charp_substring(str,tail,head)))))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_357    ) {
        tail=len_357;
    }
    if(    head==tail    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    if(    tail-head+1<1    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    result_358=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3985, "char*"));
    memcpy(result_358,str+head,tail-head);
    result_358[tail-head]=0;
    __result_obj__134 = (char*)come_increment_ref_count(result_358);
    (result_358 = come_decrement_ref_count(result_358, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__134;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value110 = (void*)0;
char* __result_obj__135;
int len_359;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
char* __result_obj__136;
void* __right_value113 = (void*)0;
char* __result_obj__137;
void* __right_value114 = (void*)0;
char* __result_obj__138;
void* __right_value115 = (void*)0;
char* result_360;
char* __result_obj__139;
    if(    str==((void*)0)    ) {
        __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__135;
    }
    len_359=strlen(str);
    if(    head<0    ) {
        head+=len_359;
    }
    if(    tail<0    ) {
        tail+=len_359+1;
    }
    if(    head>tail    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value112=charp_reverse(((char*)(__right_value111=charp_substring(str,tail,head)))))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_359    ) {
        tail=len_359;
    }
    if(    head==tail    ) {
        __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__137;
    }
    if(    tail-head+1<1    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    result_360=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4028, "char*"));
    memcpy(result_360,str+head,tail-head);
    result_360[tail-head]=0;
    __result_obj__139 = (char*)come_increment_ref_count(result_360);
    (result_360 = come_decrement_ref_count(result_360, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__139;
}

char* xsprintf(char* msg, ...){
void* __right_value116 = (void*)0;
char* __result_obj__140;
va_list args_361;
char* result_362;
int len_363;
void* __right_value117 = (void*)0;
char* __result_obj__141;
void* __right_value118 = (void*)0;
char* result2_364;
char* __result_obj__142;
result_362 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__140;
    }
    __builtin_va_start(args_361,msg);
    len_363=vasprintf(&result_362,msg,args_361);
    __builtin_va_end(args_361);
    if(    len_363<0    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    result2_364=(char*)come_increment_ref_count(__builtin_string(result_362));
    free(result_362);
    __result_obj__142 = (char*)come_increment_ref_count(result2_364);
    (result2_364 = come_decrement_ref_count(result2_364, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__142;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value119 = (void*)0;
char* __result_obj__143;
int len_365;
void* __right_value120 = (void*)0;
char* __result_obj__144;
void* __right_value121 = (void*)0;
char* __result_obj__145;
void* __right_value122 = (void*)0;
char* result_366;
char* __result_obj__146;
    if(    str==((void*)0)    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    len_365=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(str))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    if(    head<0    ) {
        head+=len_365;
    }
    if(    tail<0    ) {
        tail+=len_365+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    if(    tail>=len_365    ) {
        tail=len_365;
    }
    result_366=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_365-(tail-head)+1)), "/usr/local/include/comelang.h", 4090, "char*"));
    memcpy(result_366,str,head);
    memcpy(result_366+head,str+tail,len_365-tail);
    result_366[len_365-(tail-head)]=0;
    __result_obj__146 = (char*)come_increment_ref_count(result_366);
    (result_366 = come_decrement_ref_count(result_366, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__146;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__147;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__147 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__147;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_367;
struct list_item$1char$ph* prev_it_368;
    it_367=self->head;
    while(    it_367!=((void*)0)    ) {
        prev_it_368=it_367;
        it_367=it_367->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_368, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_372;
char* __dec_obj13;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_373;
char* __dec_obj14;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_374;
char* __dec_obj15;
struct list$1char$ph* __result_obj__149;
    if(    self->len==0    ) {
        litem_372=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_372->prev=((void*)0);
        litem_372->next=((void*)0);
        __dec_obj13=litem_372->item,
        litem_372->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_372;
        self->head=litem_372;
    }
    else if(    self->len==1    ) {
        litem_373=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_373->prev=self->head;
        litem_373->next=((void*)0);
        __dec_obj14=litem_373->item,
        litem_373->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_373;
        self->head->next=litem_373;
    }
    else {
        litem_374=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_374->prev=self->tail;
        litem_374->next=((void*)0);
        __dec_obj15=litem_374->item,
        litem_374->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_374;
        self->tail=litem_374;
    }
    self->len++;
    __result_obj__149 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__149;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct list$1char$ph* __result_obj__148;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
struct list$1char$ph* result_369;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct buffer* str_370;
int i_371;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct list$1char$ph* __result_obj__150;
    if(    self==((void*)0)    ) {
        __result_obj__148 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value124=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4103, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value124, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__148;
    }
    result_369=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4106, "struct list$1char$ph*"))));
    str_370=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4108, "struct buffer*"))));
    for(    i_371=0    ;    i_371<charp_length(self)    ;    i_371++    ){
        if(        self[i_371]==c        ) {
            list$1char$ph_push_back(result_369,(char*)come_increment_ref_count(__builtin_string(str_370->buf)));
            buffer_reset(str_370);
        }
        else {
            buffer_append_char(str_370,self[i_371]);
        }
    }
    if(    buffer_length(str_370)!=0    ) {
        list$1char$ph_push_back(result_369,(char*)come_increment_ref_count(__builtin_string(str_370->buf)));
    }
    __result_obj__150 = (struct list$1char$ph*)come_increment_ref_count(result_369);
    come_call_finalizer(list$1char$ph$p_finalize, result_369, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_370, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__150;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value134 = (void*)0;
char* __result_obj__151;
    __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value134=xsprintf(msg,self))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value135 = (void*)0;
char* __result_obj__152;
    __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value135=xsprintf(msg,self))));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__152;
}

char* charp_printable(char* str){
int len_375;
void* __right_value136 = (void*)0;
char* result_376;
int n_377;
int i_378;
char c_379;
char* __result_obj__153;
    len_375=charp_length(str);
    result_376=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_375*2+1)), "/usr/local/include/comelang.h", 4140, "char*"));
    n_377=0;
    for(    i_378=0    ;    i_378<len_375    ;    i_378++    ){
        c_379=str[i_378];
        if(        (c_379>=0&&c_379<32)||c_379==127        ) {
            result_376[n_377++]=94;
            result_376[n_377++]=c_379+65-1;
        }
        else {
            result_376[n_377++]=c_379;
        }
    }
    result_376[n_377]=0;
    __result_obj__153 = (char*)come_increment_ref_count(result_376);
    (result_376 = come_decrement_ref_count(result_376, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__153;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value137 = (void*)0;
char* __result_obj__154;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct buffer* result_380;
char* p_381;
char* p2_382;
void* __right_value140 = (void*)0;
char* __result_obj__155;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string(self))));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    result_380=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4168, "struct buffer*"))));
    p_381=self;
    while(    (_Bool)1    ) {
        p2_382=strstr(p_381,str);
        if(        p2_382==((void*)0)        ) {
            p2_382=p_381;
            while(            *p2_382            ) {
                p2_382++;
            }
            buffer_append(result_380,p_381,p2_382-p_381);
            break;
        }
        buffer_append(result_380,p_381,p2_382-p_381);
        buffer_append_str(result_380,replace);
        p_381=p2_382+strlen(str);
    }
    __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value140=buffer_to_string(result_380))));
    come_call_finalizer(buffer_finalize, result_380, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__155;
}

char* xbasename(char* path){
void* __right_value141 = (void*)0;
char* __result_obj__156;
char* p_383;
void* __right_value142 = (void*)0;
char* __result_obj__157;
void* __right_value143 = (void*)0;
char* __result_obj__158;
void* __right_value144 = (void*)0;
char* __result_obj__159;
    if(    path==((void*)0)    ) {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
    p_383=path+strlen(path);
    while(    p_383>=path    ) {
        if(        *p_383==47        ) {
            break;
        }
        else {
            p_383--;
        }
    }
    if(    p_383<path    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(path))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    else {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(p_383+1))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__159;
}

char* xnoextname(char* path){
void* __right_value145 = (void*)0;
char* __result_obj__160;
void* __right_value146 = (void*)0;
char* path2_384;
char* p_385;
void* __right_value147 = (void*)0;
char* __result_obj__161;
void* __right_value148 = (void*)0;
char* __result_obj__162;
void* __right_value149 = (void*)0;
char* __result_obj__163;
    if(    path==((void*)0)    ) {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
    path2_384=(char*)come_increment_ref_count(xbasename(path));
    p_385=path2_384+strlen(path2_384);
    while(    p_385>=path2_384    ) {
        if(        *p_385==46        ) {
            break;
        }
        else {
            p_385--;
        }
    }
    if(    p_385<path2_384    ) {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(path2_384))));
        (path2_384 = come_decrement_ref_count(path2_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    else {
        __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value148=charp_substring(path2_384,0,p_385-path2_384))));
        (path2_384 = come_decrement_ref_count(path2_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__162;
    }
    __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
    (path2_384 = come_decrement_ref_count(path2_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

char* xextname(char* path){
void* __right_value150 = (void*)0;
char* __result_obj__164;
char* p_386;
void* __right_value151 = (void*)0;
char* __result_obj__165;
void* __right_value152 = (void*)0;
char* __result_obj__166;
void* __right_value153 = (void*)0;
char* __result_obj__167;
    if(    path==((void*)0)    ) {
        __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__164;
    }
    p_386=path+strlen(path);
    while(    p_386>=path    ) {
        if(        *p_386==46        ) {
            break;
        }
        else {
            p_386--;
        }
    }
    if(    p_386<path    ) {
        __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(path))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__165;
    }
    else {
        __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(p_386+1))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__166;
    }
    __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__167;
}

char* bool_to_string(_Bool self){
void* __right_value154 = (void*)0;
char* __result_obj__168;
void* __right_value155 = (void*)0;
char* __result_obj__169;
    if(    self    ) {
        __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string("true"))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__168;
    }
    else {
        __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("false"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__169;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value156 = (void*)0;
char* __result_obj__170;
void* __right_value157 = (void*)0;
char* __result_obj__171;
    if(    self    ) {
        __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("true"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__170;
    }
    else {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("false"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
}

char* char_to_string(char self){
void* __right_value158 = (void*)0;
char* __result_obj__172;
    __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf("%c",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* short_to_string(short self){
void* __right_value159 = (void*)0;
char* __result_obj__173;
    __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%d",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__173;
}

char* int_to_string(int self){
void* __right_value160 = (void*)0;
char* __result_obj__174;
    __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%d",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__174;
}

char* long_to_string(long self){
void* __right_value161 = (void*)0;
char* __result_obj__175;
    __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%ld",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__175;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value162 = (void*)0;
char* __result_obj__176;
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%ld",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

char* float_to_string(float self){
void* __right_value163 = (void*)0;
char* __result_obj__177;
    __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%f",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__177;
}

char* double_to_string(double self){
void* __right_value164 = (void*)0;
char* __result_obj__178;
    __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%lf",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__178;
}

char* string_to_string(char* self){
void* __right_value165 = (void*)0;
char* __result_obj__179;
void* __right_value166 = (void*)0;
char* __result_obj__180;
    if(    self==((void*)0)    ) {
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(""))));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__179;
    }
    __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__180;
}

char* charp_to_string(char* self){
void* __right_value167 = (void*)0;
char* __result_obj__181;
void* __right_value168 = (void*)0;
char* __result_obj__182;
    if(    self==((void*)0)    ) {
        __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(""))));
        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__181;
    }
    __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(self))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__182;
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
char* __result_obj__183;
void* __right_value170 = (void*)0;
char* __result_obj__184;
    if(    self==((void*)0)    ) {
        __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(""))));
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__183;
    }
    puts(self);
    __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(self))));
    (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__184;
}

char* charp_print(char* self){
void* __right_value171 = (void*)0;
char* __result_obj__185;
void* __right_value172 = (void*)0;
char* __result_obj__186;
    if(    self==((void*)0)    ) {
        __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(""))));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__185;
    }
    printf("%s",self);
    __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(self))));
    (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__186;
}

char* charp_printf(char* self, ...){
void* __right_value173 = (void*)0;
char* __result_obj__187;
char* msg2_387;
va_list args_388;
void* __right_value174 = (void*)0;
char* __result_obj__188;
msg2_387 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(""))));
        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__187;
    }
    __builtin_va_start(args_388,self);
    vasprintf(&msg2_387,self,args_388);
    __builtin_va_end(args_388);
    printf("%s",msg2_387);
    free(msg2_387);
    __result_obj__188 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(self))));
    (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__188 = come_decrement_ref_count(__result_obj__188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__188;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_389;
    for(    i_389=0    ;    i_389<self    ;    i_389++    ){
        block(parent,i_389);
    }
}

