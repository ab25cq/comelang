/// previous struct definition ///
struct __lock;

struct __locale_t;

struct tm;

struct _reent;

struct stat;

struct tms;

struct timeval;

struct timezone;

struct xLIST;

struct tskTaskControlBlock;

/// struct definition ///
typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short int __int16_t;

typedef unsigned int __uint16_t;

typedef long  int __int32_t;

typedef unsigned long  int __uint32_t;

typedef long long int __int64_t;

typedef unsigned long long int __uint64_t;

typedef char __int_least8_t;

typedef unsigned char __uint_least8_t;

typedef short int __int_least16_t;

typedef unsigned int __uint_least16_t;

typedef long  int __int_least32_t;

typedef unsigned long  int __uint_least32_t;

typedef long long int __int_least64_t;

typedef unsigned long long int __uint_least64_t;

typedef long long int __intmax_t;

typedef unsigned long long int __uintmax_t;

typedef int __intptr_t;

typedef unsigned int __uintptr_t;

typedef unsigned int size_t;

typedef int ptrdiff_t;

typedef unsigned int wchar_t;

struct anonymous_typeX1
{
    long  long __max_align_ll;
    long  double __max_align_ld;
};

typedef struct anonymous_typeX1 max_align_t;

typedef __builtin_va_list __gnuc_va_list;

typedef __builtin_va_list va_list;

typedef unsigned int wint_t;

typedef long __blkcnt_t;

typedef long __blksize_t;

typedef unsigned long long int __fsblkcnt_t;

typedef unsigned long  int __fsfilcnt_t;

typedef long _off_t;

typedef int __pid_t;

typedef short __dev_t;

typedef unsigned short int __uid_t;

typedef unsigned short int __gid_t;

typedef unsigned long  int __id_t;

typedef unsigned short int __ino_t;

typedef unsigned long  int __mode_t;

typedef long  long _off64_t;

typedef long __off_t;

typedef long  long __loff_t;

typedef long __key_t;

typedef long _fpos_t;

typedef unsigned int __size_t;

typedef int _ssize_t;

typedef int __ssize_t;

union anonymous_typeZ3
{
unsigned int __wch;
unsigned char __wchb[4];
};

union anonymous_typeZ4
{
unsigned int __wch;
unsigned char __wchb[4];
};

struct anonymous_typeX2
{
    int __count;
    union anonymous_typeZ4 __value;
};

typedef struct anonymous_typeX2 _mbstate_t;

typedef void* _iconv_t;

typedef unsigned long  int __clock_t;

typedef long long int __time_t;

typedef unsigned long  int __clockid_t;

typedef long __daddr_t;

typedef unsigned long  int __timer_t;

typedef unsigned char __sa_family_t;

typedef unsigned long  int __socklen_t;

typedef int __nl_item;

typedef unsigned short int __nlink_t;

typedef long __suseconds_t;

typedef unsigned long  int __useconds_t;

typedef __builtin_va_list __va_list;

typedef unsigned long  int __ULong;

typedef struct __lock* _LOCK_T;

struct __lock
{
    int reserved[21];
};

typedef struct __lock* _lock_t;

typedef struct __lock* _flock_t;

struct _Bigint
{
    struct _Bigint* _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned long  int _x[1];
};

struct __tm
{
    int __tm_sec;
    int __tm_min;
    int __tm_hour;
    int __tm_mday;
    int __tm_mon;
    int __tm_year;
    int __tm_wday;
    int __tm_yday;
    int __tm_isdst;
};

struct _on_exit_args
{
    void* _fnargs[32];
    void* _dso_handle[32];
    unsigned long  int _fntypes;
    unsigned long  int _is_cxa;
};

struct _atexit
{
    struct _atexit* _next;
    int _ind;
    void (*_fns[32])();
    struct _on_exit_args* _on_exit_args_ptr;
};

struct __sbuf
{
    unsigned char* _base;
    int _size;
};

struct __sFILE
{
    unsigned char* _p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf _bf;
    int _lbfsize;
    struct _reent* _data;
    void* _cookie;
    int (*_read)(struct _reent*,void*,char*,int);
    int (*_write)(struct _reent*,void*,const char*,int);
    long (*_seek)(struct _reent*,void*,long,int);
    int (*_close)(struct _reent*,void*);
    struct __sbuf _ub;
    unsigned char* _up;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    long _offset;
    struct __lock* _lock;
    struct anonymous_typeX2 _mbstate;
    int _flags2;
};

typedef struct __sFILE __FILE;

extern struct __sFILE __sf[3];
struct _glue
{
    struct _glue* _next;
    int _niobs;
    struct __sFILE* _iobs;
};

struct _rand48
{
    unsigned short int _seed[3];
    unsigned short int _mult[3];
    unsigned short int _add;
    unsigned long  long _rand_next;
};

struct _mprec
{
    struct _Bigint* _result;
    int _result_k;
    struct _Bigint* _p5s;
    struct _Bigint** _freelist;
};

struct _misc_reent
{
    char* _strtok_last;
    struct anonymous_typeX2 _mblen_state;
    struct anonymous_typeX2 _wctomb_state;
    struct anonymous_typeX2 _mbtowc_state;
    char _l64a_buf[8];
    int _getdate_err;
    struct anonymous_typeX2 _mbrlen_state;
    struct anonymous_typeX2 _mbrtowc_state;
    struct anonymous_typeX2 _mbsrtowcs_state;
    struct anonymous_typeX2 _wcrtomb_state;
    struct anonymous_typeX2 _wcsrtombs_state;
};

struct _reent
{
    int _errno;
    struct __sFILE* _stdin;
    struct __sFILE* _stdout;
    struct __sFILE* _stderr;
    int _inc;
    char* _emergency;
    int _reserved_0;
    int _reserved_1;
    struct __locale_t* _locale;
    struct _mprec* _mp;
    void (*__cleanup)(struct _reent*);
    int _gamma_signgam;
    int _cvtlen;
    char* _cvtbuf;
    struct _rand48* _r48;
    struct __tm* _localtime_buf;
    char* _asctime_buf;
    void (**_sig_func)(int);
    struct _atexit* _reserved_6;
    struct _atexit _reserved_7;
    struct _glue _reserved_8;
    struct __sFILE* __sf;
    struct _misc_reent* _misc;
    char* _signal_buf;
};

struct anonymous_typeX5
{
    int quot;
    int rem;
};

typedef struct anonymous_typeX5 div_t;

struct anonymous_typeX6
{
    long quot;
    long rem;
};

typedef struct anonymous_typeX6 ldiv_t;

struct anonymous_typeX7
{
    long long int quot;
    long long int rem;
};

typedef struct anonymous_typeX7 lldiv_t;

typedef int (*__compar_fn_t)(const void*,const void*);

extern char* suboptarg;
typedef char int8_t;

typedef unsigned char uint8_t;

typedef short int int16_t;

typedef unsigned int uint16_t;

typedef long  int int32_t;

typedef unsigned long  int uint32_t;

typedef long long int int64_t;

typedef unsigned long long int uint64_t;

typedef long long int intmax_t;

typedef unsigned long long int uintmax_t;

typedef int intptr_t;

typedef unsigned int uintptr_t;

typedef char int_least8_t;

typedef unsigned char uint_least8_t;

typedef short int int_least16_t;

typedef unsigned int uint_least16_t;

typedef long  int int_least32_t;

typedef unsigned long  int uint_least32_t;

typedef long long int int_least64_t;

typedef unsigned long long int uint_least64_t;

typedef int int_fast8_t;

typedef unsigned int uint_fast8_t;

typedef int int_fast16_t;

typedef unsigned int uint_fast16_t;

typedef int int_fast32_t;

typedef unsigned int uint_fast32_t;

typedef long long int int_fast64_t;

typedef unsigned long long int uint_fast64_t;

extern struct _reent* _impure_ptr;
extern struct _reent _impure_data;
extern struct _atexit* __atexit;
extern struct _atexit __atexit0;
extern void (*__stdio_exit_handler)();
extern struct _glue __sglue;
extern struct _reent* _global_impure_ptr;
typedef struct __sFILE FILE;

typedef long fpos_t;

typedef long off_t;

typedef int ssize_t;

typedef struct __locale_t* locale_t;

typedef struct anonymous_typeX2 mbstate_t;

extern const unsigned int Xthal_rev_no;
extern void* Xthal_cpregs_save_fn[8];
extern void* Xthal_cpregs_restore_fn[8];
extern void* Xthal_cpregs_save_nw_fn[8];
extern void* Xthal_cpregs_restore_nw_fn[8];
extern const unsigned int Xthal_extra_size;
extern const unsigned int Xthal_extra_align;
extern const unsigned int Xthal_cpregs_size[8];
extern const unsigned int Xthal_cpregs_align[8];
extern const unsigned int Xthal_all_extra_size;
extern const unsigned int Xthal_all_extra_align;
extern const char* Xthal_cp_names[8];
extern const unsigned int Xthal_num_coprocessors;
extern const unsigned char Xthal_cp_num;
extern const unsigned char Xthal_cp_max;
extern const unsigned int Xthal_cp_mask;
extern const unsigned int Xthal_num_aregs;
extern const unsigned char Xthal_num_aregs_log2;
extern const unsigned char Xthal_icache_linewidth;
extern const unsigned char Xthal_dcache_linewidth;
extern const unsigned short int Xthal_icache_linesize;
extern const unsigned short int Xthal_dcache_linesize;
extern const unsigned int Xthal_icache_size;
extern const unsigned int Xthal_dcache_size;
extern const unsigned char Xthal_dcache_is_writeback;
extern const int Xthal_debug_configured;
extern const unsigned int Xthal_release_major;
extern const unsigned int Xthal_release_minor;
extern const char* Xthal_release_name;
extern const char* Xthal_release_internal;
extern const unsigned char Xthal_memory_order;
extern const unsigned char Xthal_have_windowed;
extern const unsigned char Xthal_have_density;
extern const unsigned char Xthal_have_booleans;
extern const unsigned char Xthal_have_loops;
extern const unsigned char Xthal_have_nsa;
extern const unsigned char Xthal_have_minmax;
extern const unsigned char Xthal_have_sext;
extern const unsigned char Xthal_have_clamps;
extern const unsigned char Xthal_have_mac16;
extern const unsigned char Xthal_have_mul16;
extern const unsigned char Xthal_have_fp;
extern const unsigned char Xthal_have_speculation;
extern const unsigned char Xthal_have_threadptr;
extern const unsigned char Xthal_have_pif;
extern const unsigned short int Xthal_num_writebuffer_entries;
extern const unsigned int Xthal_build_unique_id;
extern const unsigned int Xthal_hw_configid0;
extern const unsigned int Xthal_hw_configid1;
extern const unsigned int Xthal_hw_release_major;
extern const unsigned int Xthal_hw_release_minor;
extern const char* Xthal_hw_release_name;
extern const char* Xthal_hw_release_internal;
extern const unsigned char Xthal_num_intlevels;
extern const unsigned char Xthal_num_interrupts;
extern const unsigned char Xthal_excm_level;
extern const unsigned int Xthal_intlevel_mask[16];
extern const unsigned int Xthal_intlevel_andbelow_mask[16];
extern const unsigned char Xthal_intlevel[32];
extern const unsigned char Xthal_inttype[32];
extern const unsigned int Xthal_inttype_mask[11];
extern const int Xthal_timer_interrupt[4];
extern const int Xthal_num_ibreak;
extern const int Xthal_num_dbreak;
extern const unsigned char Xthal_have_ccount;
extern const unsigned char Xthal_num_ccompare;
extern const unsigned char Xthal_have_prid;
extern const unsigned char Xthal_have_exceptions;
extern const unsigned char Xthal_xea_version;
extern const unsigned char Xthal_have_interrupts;
extern const unsigned char Xthal_have_highlevel_interrupts;
extern const unsigned char Xthal_have_nmi;
typedef void (*XtHalVoidFunc)();

extern unsigned int Xthal_tram_pending;
extern unsigned int Xthal_tram_enabled;
extern unsigned int Xthal_tram_sync;
extern const unsigned char Xthal_num_instrom;
extern const unsigned char Xthal_num_instram;
extern const unsigned char Xthal_num_datarom;
extern const unsigned char Xthal_num_dataram;
extern const unsigned char Xthal_num_xlmi;
extern const unsigned int Xthal_instrom_vaddr[];
extern const unsigned int Xthal_instrom_paddr[];
extern const unsigned int Xthal_instrom_size[];
extern const unsigned int Xthal_instram_vaddr[];
extern const unsigned int Xthal_instram_paddr[];
extern const unsigned int Xthal_instram_size[];
extern const unsigned int Xthal_datarom_vaddr[];
extern const unsigned int Xthal_datarom_paddr[];
extern const unsigned int Xthal_datarom_size[];
extern const unsigned int Xthal_dataram_vaddr[];
extern const unsigned int Xthal_dataram_paddr[];
extern const unsigned int Xthal_dataram_size[];
extern const unsigned int Xthal_xlmi_vaddr[];
extern const unsigned int Xthal_xlmi_paddr[];
extern const unsigned int Xthal_xlmi_size[];
extern const unsigned char Xthal_icache_setwidth;
extern const unsigned char Xthal_dcache_setwidth;
extern const unsigned int Xthal_icache_ways;
extern const unsigned int Xthal_dcache_ways;
extern const unsigned char Xthal_icache_line_lockable;
extern const unsigned char Xthal_dcache_line_lockable;
extern const unsigned char Xthal_have_spanning_way;
extern const unsigned char Xthal_have_identity_map;
extern const unsigned char Xthal_have_mimic_cacheattr;
extern const unsigned char Xthal_have_xlt_cacheattr;
extern const unsigned char Xthal_have_cacheattr;
extern const unsigned char Xthal_have_tlbs;
extern const unsigned char Xthal_mmu_asid_bits;
extern const unsigned char Xthal_mmu_asid_kernel;
extern const unsigned char Xthal_mmu_rings;
extern const unsigned char Xthal_mmu_ring_bits;
extern const unsigned char Xthal_mmu_sr_bits;
extern const unsigned char Xthal_mmu_ca_bits;
extern const unsigned int Xthal_mmu_max_pte_page_size;
extern const unsigned int Xthal_mmu_min_pte_page_size;
extern const unsigned char Xthal_itlb_way_bits;
extern const unsigned char Xthal_itlb_ways;
extern const unsigned char Xthal_itlb_arf_ways;
extern const unsigned char Xthal_dtlb_way_bits;
extern const unsigned char Xthal_dtlb_ways;
extern const unsigned char Xthal_dtlb_arf_ways;
struct xthal_MPU_entry
{
    unsigned long  int as;
    unsigned long  int at;
};

typedef struct xthal_MPU_entry xthal_MPU_entry;

extern const struct xthal_MPU_entry Xthal_mpu_bgmap[];
extern const unsigned char Xthal_cp_id_FPU;
extern const unsigned int Xthal_cp_mask_FPU;
extern const unsigned char Xthal_cp_id_XCHAL_CP1_IDENT;
extern const unsigned int Xthal_cp_mask_XCHAL_CP1_IDENT;
extern const unsigned char Xthal_cp_id_XCHAL_CP2_IDENT;
extern const unsigned int Xthal_cp_mask_XCHAL_CP2_IDENT;
extern const unsigned char Xthal_cp_id_XCHAL_CP3_IDENT;
extern const unsigned int Xthal_cp_mask_XCHAL_CP3_IDENT;
extern const unsigned char Xthal_cp_id_XCHAL_CP4_IDENT;
extern const unsigned int Xthal_cp_mask_XCHAL_CP4_IDENT;
extern const unsigned char Xthal_cp_id_XCHAL_CP5_IDENT;
extern const unsigned int Xthal_cp_mask_XCHAL_CP5_IDENT;
extern const unsigned char Xthal_cp_id_XCHAL_CP6_IDENT;
extern const unsigned int Xthal_cp_mask_XCHAL_CP6_IDENT;
extern const unsigned char Xthal_cp_id_XCHAL_CP7_IDENT;
extern const unsigned int Xthal_cp_mask_XCHAL_CP7_IDENT;
struct anonymous_typeX8
{
    long pc;
    long ps;
    long areg[4];
    long sar;
    long lcount;
    long lbeg;
    long lend;
    long acclo;
    long acchi;
    long mr[4];
};

typedef struct anonymous_typeX8 KernelFrame;

struct anonymous_typeX9
{
    long pc;
    long ps;
    long sar;
    long vpri;
    long a2;
    long a3;
    long a4;
    long a5;
    long exccause;
    long lcount;
    long lbeg;
    long lend;
    long acclo;
    long acchi;
    long mr[4];
    long pad[((3+1*1+1*2+0*1)&3)];
};

typedef struct anonymous_typeX9 UserFrame;

struct anonymous_typeX10
{
    long exit;
    long pc;
    long ps;
    long a0;
    long a1;
    long a2;
    long a3;
    long a4;
    long a5;
    long a6;
    long a7;
    long a8;
    long a9;
    long a10;
    long a11;
    long a12;
    long a13;
    long a14;
    long a15;
    long sar;
    long exccause;
    long excvaddr;
    long lbeg;
    long lend;
    long lcount;
    long tmp0;
    long tmp1;
    long tmp2;
};

typedef struct anonymous_typeX10 XtExcFrame;

struct anonymous_typeX11
{
    long exit;
    long pc;
    long ps;
    long threadptr;
    long a0;
    long a1;
    long a2;
    long a3;
};

typedef struct anonymous_typeX11 XtSolFrame;

typedef void (*TaskFunction_t)(void*);

struct anonymous_typeX12
{
    long signature;
    long restore_label;
    long aftersave_label;
    long areg[64];
    long caller_regs[16];
    long caller_regs_saved;
    long windowbase;
    long windowstart;
    long sar;
    long epc1;
    long ps;
    long excsave1;
    long depc;
    long epc[6+1-1];
    long eps[6+1-1];
    long excsave[6+1-1];
    long lcount;
    long lbeg;
    long lend;
    long vecbase;
    long atomctl;
    long memctl;
    long ccount;
    long ccompare[3];
    long intenable;
    long interrupt;
    long icount;
    long icountlevel;
    long debugcause;
    long dbreakc[2];
    long dbreaka[2];
    long ibreaka[2];
    long ibreakenable;
    long misc[4];
    long cpenable;
    long tlbs[8*2];
    char ncp[48];
    char cp0[72];
};

typedef struct anonymous_typeX12 XtosCoreState;

typedef void (*_xtos_handler_func)();

typedef void (*_xtos_handler)();

typedef void (*xt_handler)(void*);

typedef void (*xt_exc_handler)(struct anonymous_typeX10*);

typedef int esp_err_t;

typedef void (*intr_handler_t)(void*);

typedef struct intr_handle_data_t* intr_handle_t;

enum anonymous_typeY13 { ESP_INTR_CPU_AFFINITY_AUTO
,ESP_INTR_CPU_AFFINITY_0
,ESP_INTR_CPU_AFFINITY_1
};

typedef enum anonymous_typeY13 esp_intr_cpu_affinity_t;

typedef unsigned long  int esp_cpu_cycle_count_t;

enum anonymous_typeY14 { ESP_CPU_INTR_TYPE_LEVEL=(0),
ESP_CPU_INTR_TYPE_EDGE
,ESP_CPU_INTR_TYPE_NA
};

typedef enum anonymous_typeY14 esp_cpu_intr_type_t;

struct anonymous_typeX15
{
    int priority;
    enum anonymous_typeY14 type;
    unsigned long  int flags;
};

typedef struct anonymous_typeX15 esp_cpu_intr_desc_t;

typedef void (*esp_cpu_intr_handler_t)(void*);

enum anonymous_typeY16 { ESP_CPU_WATCHPOINT_LOAD
,ESP_CPU_WATCHPOINT_STORE
,ESP_CPU_WATCHPOINT_ACCESS
};

typedef enum anonymous_typeY16 esp_cpu_watchpoint_trigger_t;

struct anonymous_typeX17
{
    unsigned long  int owner;
    unsigned long  int count;
};

typedef struct anonymous_typeX17 spinlock_t;

enum anonymous_typeY18 { ETS_WIFI_MAC_INTR_SOURCE=(0),
ETS_WIFI_MAC_NMI_SOURCE
,ETS_WIFI_BB_INTR_SOURCE
,ETS_BT_MAC_INTR_SOURCE
,ETS_BT_BB_INTR_SOURCE
,ETS_BT_BB_NMI_SOURCE
,ETS_RWBT_INTR_SOURCE
,ETS_RWBLE_INTR_SOURCE
,ETS_RWBT_NMI_SOURCE
,ETS_RWBLE_NMI_SOURCE
,ETS_SLC0_INTR_SOURCE
,ETS_SLC1_INTR_SOURCE
,ETS_UHCI0_INTR_SOURCE
,ETS_UHCI1_INTR_SOURCE
,ETS_TG0_T0_LEVEL_INTR_SOURCE
,ETS_TG0_T1_LEVEL_INTR_SOURCE
,ETS_TG0_WDT_LEVEL_INTR_SOURCE
,ETS_TG0_LACT_LEVEL_INTR_SOURCE
,ETS_TG1_T0_LEVEL_INTR_SOURCE
,ETS_TG1_T1_LEVEL_INTR_SOURCE
,ETS_TG1_WDT_LEVEL_INTR_SOURCE
,ETS_TG1_LACT_LEVEL_INTR_SOURCE
,ETS_GPIO_INTR_SOURCE
,ETS_GPIO_NMI_SOURCE
,ETS_FROM_CPU_INTR0_SOURCE
,ETS_FROM_CPU_INTR1_SOURCE
,ETS_FROM_CPU_INTR2_SOURCE
,ETS_FROM_CPU_INTR3_SOURCE
,ETS_SPI0_INTR_SOURCE
,ETS_SPI1_INTR_SOURCE
,ETS_SPI2_INTR_SOURCE
,ETS_SPI3_INTR_SOURCE
,ETS_I2S0_INTR_SOURCE
,ETS_I2S1_INTR_SOURCE
,ETS_UART0_INTR_SOURCE
,ETS_UART1_INTR_SOURCE
,ETS_UART2_INTR_SOURCE
,ETS_SDIO_HOST_INTR_SOURCE
,ETS_ETH_MAC_INTR_SOURCE
,ETS_PWM0_INTR_SOURCE
,ETS_PWM1_INTR_SOURCE
,ETS_LEDC_INTR_SOURCE=(43),
ETS_EFUSE_INTR_SOURCE
,ETS_TWAI_INTR_SOURCE
,ETS_RTC_CORE_INTR_SOURCE
,ETS_RMT_INTR_SOURCE
,ETS_PCNT_INTR_SOURCE
,ETS_I2C_EXT0_INTR_SOURCE
,ETS_I2C_EXT1_INTR_SOURCE
,ETS_RSA_INTR_SOURCE
,ETS_SPI1_DMA_INTR_SOURCE
,ETS_SPI2_DMA_INTR_SOURCE
,ETS_SPI3_DMA_INTR_SOURCE
,ETS_WDT_INTR_SOURCE
,ETS_TIMER1_INTR_SOURCE
,ETS_TIMER2_INTR_SOURCE
,ETS_TG0_T0_EDGE_INTR_SOURCE
,ETS_TG0_T1_EDGE_INTR_SOURCE
,ETS_TG0_WDT_EDGE_INTR_SOURCE
,ETS_TG0_LACT_EDGE_INTR_SOURCE
,ETS_TG1_T0_EDGE_INTR_SOURCE
,ETS_TG1_T1_EDGE_INTR_SOURCE
,ETS_TG1_WDT_EDGE_INTR_SOURCE
,ETS_TG1_LACT_EDGE_INTR_SOURCE
,ETS_MMU_IA_INTR_SOURCE
,ETS_MPU_IA_INTR_SOURCE
,ETS_CACHE_IA_INTR_SOURCE
,ETS_MAX_INTR_SOURCE
};

typedef enum anonymous_typeY18 periph_interrput_t;

extern const char* esp_isr_names[(43+26)];
typedef struct multi_heap_info* multi_heap_handle_t;

struct anonymous_typeX19
{
    unsigned int total_free_bytes;
    unsigned int total_allocated_bytes;
    unsigned int largest_free_block;
    unsigned int minimum_free_bytes;
    unsigned int allocated_blocks;
    unsigned int free_blocks;
    unsigned int total_blocks;
};

typedef struct anonymous_typeX19 multi_heap_info_t;

typedef _Bool (*multi_heap_walker_cb_t)(void*,unsigned int,int,void*);

typedef void (*esp_alloc_failed_hook_t)(unsigned int,unsigned long  int,const char*);

struct walker_heap_info
{
    int start;
    int end;
};

typedef struct walker_heap_info walker_heap_into_t;

struct walker_block_info
{
    void* ptr;
    unsigned int size;
    _Bool used;
};

typedef struct walker_block_info walker_block_info_t;

typedef _Bool (*heap_caps_walker_cb_t)(struct walker_heap_info,struct walker_block_info,void*);

struct anonymous_typeX20
{
    long long int quot;
    long long int rem;
};

typedef struct anonymous_typeX20 imaxdiv_t;

enum anonymous_typeY21 { RESET_REASON_CHIP_POWER_ON=(1),
RESET_REASON_CORE_SW=(3),
RESET_REASON_CORE_DEEP_SLEEP=(5),
RESET_REASON_CORE_SDIO=(6),
RESET_REASON_CORE_MWDT0=(7),
RESET_REASON_CORE_MWDT1=(8),
RESET_REASON_CORE_RTC_WDT=(9),
RESET_REASON_CPU0_MWDT0=(11),
RESET_REASON_CPU1_MWDT1=(11),
RESET_REASON_CPU0_SW=(12),
RESET_REASON_CPU1_SW=(12),
RESET_REASON_CPU0_RTC_WDT=(13),
RESET_REASON_CPU1_RTC_WDT=(13),
RESET_REASON_CPU1_CPU0=(14),
RESET_REASON_SYS_BROWN_OUT=(15),
RESET_REASON_SYS_RTC_WDT=(16)
};

typedef enum anonymous_typeY21 soc_reset_reason_t;

enum anonymous_typeY22 { ESP_RST_UNKNOWN
,ESP_RST_POWERON
,ESP_RST_EXT
,ESP_RST_SW
,ESP_RST_PANIC
,ESP_RST_INT_WDT
,ESP_RST_TASK_WDT
,ESP_RST_WDT
,ESP_RST_DEEPSLEEP
,ESP_RST_BROWNOUT
,ESP_RST_SDIO
,ESP_RST_USB
,ESP_RST_JTAG
,ESP_RST_EFUSE
,ESP_RST_PWR_GLITCH
,ESP_RST_CPU_LOCKUP
};

typedef enum anonymous_typeY22 esp_reset_reason_t;

typedef void (*shutdown_handler_t)();

typedef unsigned char StackType_t;

typedef int BaseType_t;

typedef unsigned int UBaseType_t;

typedef unsigned long  int TickType_t;

typedef struct anonymous_typeX17 portMUX_TYPE;

struct HeapRegion
{
    unsigned char* pucStartAddress;
    unsigned int xSizeInBytes;
};

typedef struct HeapRegion HeapRegion_t;

struct xHeapStats
{
    unsigned int xAvailableHeapSpaceInBytes;
    unsigned int xSizeOfLargestFreeBlockInBytes;
    unsigned int xSizeOfSmallestFreeBlockInBytes;
    unsigned int xNumberOfFreeBlocks;
    unsigned int xMinimumEverFreeBytesRemaining;
    unsigned int xNumberOfSuccessfulAllocations;
    unsigned int xNumberOfSuccessfulFrees;
};

typedef struct xHeapStats HeapStats_t;

struct xSTATIC_LIST_ITEM
{
    unsigned long  int xDummy2;
    void* pvDummy3[4];
};

typedef struct xSTATIC_LIST_ITEM StaticListItem_t;

struct xSTATIC_MINI_LIST_ITEM
{
    unsigned long  int xDummy2;
    void* pvDummy3[2];
};

typedef struct xSTATIC_MINI_LIST_ITEM StaticMiniListItem_t;

struct xSTATIC_LIST
{
    unsigned int uxDummy2;
    void* pvDummy3;
    struct xSTATIC_MINI_LIST_ITEM xDummy4;
};

typedef struct xSTATIC_LIST StaticList_t;

struct xSTATIC_TCB
{
    void* pxDummy1;
    struct xSTATIC_LIST_ITEM xDummy3[2];
    unsigned int uxDummy5;
    void* pxDummy6;
    unsigned char ucDummy7[16];
    int xDummyCoreID;
    void* pxDummy8;
    unsigned int uxDummy12[2];
    void* pvDummy15[(1*2)];
    struct _reent xDummy17;
    unsigned long  int ulDummy18[1];
    unsigned char ucDummy19[1];
    unsigned char uxDummy20;
    unsigned char ucDummy21;
};

typedef struct xSTATIC_TCB StaticTask_t;

union anonymous_typeZ23
{
void* pvDummy2;
unsigned int uxDummy2;
};

union anonymous_typeZ24
{
void* pvDummy2;
unsigned int uxDummy2;
};

struct xSTATIC_QUEUE
{
    void* pvDummy1[3];
    union anonymous_typeZ24 u;
    struct xSTATIC_LIST xDummy3[2];
    unsigned int uxDummy4[3];
    unsigned char ucDummy5[2];
    unsigned char ucDummy6;
    void* pvDummy7;
    struct anonymous_typeX17 xDummyQueueLock;
};

typedef struct xSTATIC_QUEUE StaticQueue_t;

typedef struct xSTATIC_QUEUE StaticSemaphore_t;

struct xSTATIC_EVENT_GROUP
{
    unsigned long  int xDummy1;
    struct xSTATIC_LIST xDummy2;
    unsigned char ucDummy4;
    struct anonymous_typeX17 xDummyEventGroupLock;
};

typedef struct xSTATIC_EVENT_GROUP StaticEventGroup_t;

struct xSTATIC_TIMER
{
    void* pvDummy1;
    struct xSTATIC_LIST_ITEM xDummy2;
    unsigned long  int xDummy3;
    void* pvDummy5;
    void (*pvDummy6)(void*);
    unsigned char ucDummy8;
};

typedef struct xSTATIC_TIMER StaticTimer_t;

struct xSTATIC_STREAM_BUFFER
{
    unsigned int uxDummy1[4];
    void* pvDummy2[3];
    unsigned char ucDummy3;
    struct anonymous_typeX17 xDummyStreamBufferLock;
};

typedef struct xSTATIC_STREAM_BUFFER StaticStreamBuffer_t;

typedef struct xSTATIC_STREAM_BUFFER StaticMessageBuffer_t;

struct xLIST_ITEM
{
    unsigned long  int xItemValue;
    struct xLIST_ITEM* pxNext;
    struct xLIST_ITEM* pxPrevious;
    void* pvOwner;
    struct xLIST* pxContainer;
};

typedef struct xLIST_ITEM ListItem_t;

struct xMINI_LIST_ITEM
{
    unsigned long  int xItemValue;
    struct xLIST_ITEM* pxNext;
    struct xLIST_ITEM* pxPrevious;
};

typedef struct xMINI_LIST_ITEM MiniListItem_t;

struct xLIST
{
    unsigned int uxNumberOfItems;
    struct xLIST_ITEM* pxIndex;
    struct xMINI_LIST_ITEM xListEnd;
};

typedef struct xLIST List_t;

typedef struct tskTaskControlBlock* TaskHandle_t;

typedef int (*TaskHookFunction_t)(void*);

enum anonymous_typeY25 { eRunning=(0),
eReady
,eBlocked
,eSuspended
,eDeleted
,eInvalid
};

typedef enum anonymous_typeY25 eTaskState;

enum anonymous_typeY26 { eNoAction=(0),
eSetBits
,eIncrement
,eSetValueWithOverwrite
,eSetValueWithoutOverwrite
};

typedef enum anonymous_typeY26 eNotifyAction;

struct xTIME_OUT
{
    int xOverflowCount;
    unsigned long  int xTimeOnEntering;
};

typedef struct xTIME_OUT TimeOut_t;

struct xMEMORY_REGION
{
    void* pvBaseAddress;
    unsigned long  int ulLengthInBytes;
    unsigned long  int ulParameters;
};

typedef struct xMEMORY_REGION MemoryRegion_t;

struct xTASK_PARAMETERS
{
    void (*pvTaskCode)(void*);
    const char* pcName;
    unsigned long  int usStackDepth;
    void* pvParameters;
    unsigned int uxPriority;
    unsigned char* puxStackBuffer;
    struct xMEMORY_REGION xRegions[1];
};

typedef struct xTASK_PARAMETERS TaskParameters_t;

struct xTASK_STATUS
{
    struct tskTaskControlBlock* xHandle;
    const char* pcTaskName;
    unsigned int xTaskNumber;
    enum anonymous_typeY25 eCurrentState;
    unsigned int uxCurrentPriority;
    unsigned int uxBasePriority;
    unsigned long  int ulRunTimeCounter;
    unsigned char* pxStackBase;
    unsigned long  int usStackHighWaterMark;
};

typedef struct xTASK_STATUS TaskStatus_t;

enum anonymous_typeY27 { eAbortSleep=(0),
eStandardSleep
,eNoTasksWaitingTimeout
};

typedef enum anonymous_typeY27 eSleepModeStatus;

enum anonymous_typeY28 { GPIO_NUM_NC=(-1),
GPIO_NUM_0=(0),
GPIO_NUM_1=(1),
GPIO_NUM_2=(2),
GPIO_NUM_3=(3),
GPIO_NUM_4=(4),
GPIO_NUM_5=(5),
GPIO_NUM_6=(6),
GPIO_NUM_7=(7),
GPIO_NUM_8=(8),
GPIO_NUM_9=(9),
GPIO_NUM_10=(10),
GPIO_NUM_11=(11),
GPIO_NUM_12=(12),
GPIO_NUM_13=(13),
GPIO_NUM_14=(14),
GPIO_NUM_15=(15),
GPIO_NUM_16=(16),
GPIO_NUM_17=(17),
GPIO_NUM_18=(18),
GPIO_NUM_19=(19),
GPIO_NUM_20=(20),
GPIO_NUM_21=(21),
GPIO_NUM_22=(22),
GPIO_NUM_23=(23),
GPIO_NUM_25=(25),
GPIO_NUM_26=(26),
GPIO_NUM_27=(27),
GPIO_NUM_28=(28),
GPIO_NUM_29=(29),
GPIO_NUM_30=(30),
GPIO_NUM_31=(31),
GPIO_NUM_32=(32),
GPIO_NUM_33=(33),
GPIO_NUM_34=(34),
GPIO_NUM_35=(35),
GPIO_NUM_36=(36),
GPIO_NUM_37=(37),
GPIO_NUM_38=(38),
GPIO_NUM_39=(39),
GPIO_NUM_MAX
};

typedef enum anonymous_typeY28 gpio_num_t;

enum anonymous_typeY29 { GPIO_PORT_0=(0),
GPIO_PORT_MAX
};

typedef enum anonymous_typeY29 gpio_port_t;

enum anonymous_typeY30 { GPIO_INTR_DISABLE=(0),
GPIO_INTR_POSEDGE=(1),
GPIO_INTR_NEGEDGE=(2),
GPIO_INTR_ANYEDGE=(3),
GPIO_INTR_LOW_LEVEL=(4),
GPIO_INTR_HIGH_LEVEL=(5),
GPIO_INTR_MAX
};

typedef enum anonymous_typeY30 gpio_int_type_t;

enum anonymous_typeY31 { GPIO_MODE_DISABLE=((0)),
GPIO_MODE_INPUT=((1)),
GPIO_MODE_OUTPUT=((2)),
GPIO_MODE_OUTPUT_OD=((((2))|((4)))),
GPIO_MODE_INPUT_OUTPUT_OD=((((1))|((2))|((4)))),
GPIO_MODE_INPUT_OUTPUT=((((1))|((2))))
};

typedef enum anonymous_typeY31 gpio_mode_t;

enum anonymous_typeY32 { GPIO_PULLUP_DISABLE=(0),
GPIO_PULLUP_ENABLE=(1)
};

typedef enum anonymous_typeY32 gpio_pullup_t;

enum anonymous_typeY33 { GPIO_PULLDOWN_DISABLE=(0),
GPIO_PULLDOWN_ENABLE=(1)
};

typedef enum anonymous_typeY33 gpio_pulldown_t;

enum anonymous_typeY34 { GPIO_PULLUP_ONLY
,GPIO_PULLDOWN_ONLY
,GPIO_PULLUP_PULLDOWN
,GPIO_FLOATING
};

typedef enum anonymous_typeY34 gpio_pull_mode_t;

enum anonymous_typeY35 { GPIO_DRIVE_CAP_0=(0),
GPIO_DRIVE_CAP_1=(1),
GPIO_DRIVE_CAP_2=(2),
GPIO_DRIVE_CAP_DEFAULT=(2),
GPIO_DRIVE_CAP_3=(3),
GPIO_DRIVE_CAP_MAX
};

typedef enum anonymous_typeY35 gpio_drive_cap_t;

typedef struct esp_etm_channel_t* esp_etm_channel_handle_t;

typedef struct esp_etm_event_t* esp_etm_event_handle_t;

typedef struct esp_etm_task_t* esp_etm_task_handle_t;

struct etm_chan_flags
{
    unsigned long  int allow_pd:1;
};

struct anonymous_typeX36
{
    struct etm_chan_flags flags;
};

typedef struct anonymous_typeX36 esp_etm_channel_config_t;

enum anonymous_typeY37 { GPIO_ETM_EVENT_EDGE_POS=(1),
GPIO_ETM_EVENT_EDGE_NEG
,GPIO_ETM_EVENT_EDGE_ANY
};

typedef enum anonymous_typeY37 gpio_etm_event_edge_t;

union anonymous_typeZ39
{
enum anonymous_typeY37 edge;
enum anonymous_typeY37 edges[3];
};

union anonymous_typeZ40
{
enum anonymous_typeY37 edge;
enum anonymous_typeY37 edges[3];
};

struct anonymous_typeX38
{
    union anonymous_typeZ40 anonymous_var_nameY2;
};

typedef struct anonymous_typeX38 gpio_etm_event_config_t;

enum anonymous_typeY41 { GPIO_ETM_TASK_ACTION_SET=(1),
GPIO_ETM_TASK_ACTION_CLR
,GPIO_ETM_TASK_ACTION_TOG
};

typedef enum anonymous_typeY41 gpio_etm_task_action_t;

union anonymous_typeZ43
{
enum anonymous_typeY41 action;
enum anonymous_typeY41 actions[3];
};

union anonymous_typeZ44
{
enum anonymous_typeY41 action;
enum anonymous_typeY41 actions[3];
};

struct anonymous_typeX42
{
    union anonymous_typeZ44 anonymous_var_nameY4;
};

typedef struct anonymous_typeX42 gpio_etm_task_config_t;

typedef struct intr_handle_data_t* gpio_isr_handle_t;

typedef void (*gpio_isr_t)(void*);

struct anonymous_typeX45
{
    unsigned long long int pin_bit_mask;
    enum anonymous_typeY31 mode;
    enum anonymous_typeY32 pull_up_en;
    enum anonymous_typeY33 pull_down_en;
    enum anonymous_typeY30 intr_type;
};

typedef struct anonymous_typeX45 gpio_config_t;

// source head

// header function
void* come_calloc(int count, int size, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free);
void come_free_object(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* memset(void* b, int c, long len);
char* __builtin_string(char* str);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* come_null_check(void* mem, char* sname, int sline, int id);
void __retarget_lock_init(struct __lock** lock);
void __retarget_lock_init_recursive(struct __lock** lock);
void __retarget_lock_close(struct __lock* lock);
void __retarget_lock_close_recursive(struct __lock* lock);
void __retarget_lock_acquire(struct __lock* lock);
void __retarget_lock_acquire_recursive(struct __lock* lock);
int __retarget_lock_try_acquire(struct __lock* lock);
int __retarget_lock_try_acquire_recursive(struct __lock* lock);
void __retarget_lock_release(struct __lock* lock);
void __retarget_lock_release_recursive(struct __lock* lock);
void _lock_init(struct __lock** plock);
void _lock_init_recursive(struct __lock** plock);
void _lock_close(struct __lock** plock);
void _lock_close_recursive(struct __lock** plock);
void _lock_acquire(struct __lock** plock);
void _lock_acquire_recursive(struct __lock** plock);
int _lock_try_acquire(struct __lock** plock);
int _lock_try_acquire_recursive(struct __lock** plock);
void _lock_release(struct __lock** plock);
void _lock_release_recursive(struct __lock** plock);
int __locale_mb_cur_max();
void abort();
int abs(int anonymous_var_nameX35);
unsigned long  int arc4random();
unsigned long  int arc4random_uniform(unsigned long  int anonymous_var_nameX36);
void arc4random_buf(void* anonymous_var_nameX37, unsigned int anonymous_var_nameX38);
int atexit(void (*__func)());
double atof(const char* __nptr);
float atoff(const char* __nptr);
int atoi(const char* __nptr);
int _atoi_r(struct _reent* anonymous_var_nameX39, const char* __nptr);
long atol(const char* __nptr);
long _atol_r(struct _reent* anonymous_var_nameX40, const char* __nptr);
void* bsearch(const void* __key, const void* __base, unsigned int __nmemb, unsigned int __size, int (*_compar)(const void*,const void*));
void* calloc(unsigned int anonymous_var_nameX41, unsigned int anonymous_var_nameX42);
struct anonymous_typeX5 div(int __numer, int __denom);
void exit(int __status);
void free(void* anonymous_var_nameX43);
char* getenv(const char* __string);
char* _getenv_r(struct _reent* anonymous_var_nameX44, const char* __string);
char* _findenv(const char* anonymous_var_nameX45, int* anonymous_var_nameX46);
char* _findenv_r(struct _reent* anonymous_var_nameX47, const char* anonymous_var_nameX48, int* anonymous_var_nameX49);
int getsubopt(char** anonymous_var_nameX50, char** anonymous_var_nameX51, char** anonymous_var_nameX52);
long labs(long anonymous_var_nameX53);
struct anonymous_typeX6 ldiv(long __numer, long __denom);
void* malloc(unsigned int anonymous_var_nameX54);
int mblen(const char* anonymous_var_nameX55, unsigned int anonymous_var_nameX56);
int _mblen_r(struct _reent* anonymous_var_nameX57, const char* anonymous_var_nameX58, unsigned int anonymous_var_nameX59, struct anonymous_typeX2* anonymous_var_nameX60);
int mbtowc(unsigned int* anonymous_var_nameX61, const char* anonymous_var_nameX62, unsigned int anonymous_var_nameX63);
int _mbtowc_r(struct _reent* anonymous_var_nameX64, unsigned int* anonymous_var_nameX65, const char* anonymous_var_nameX66, unsigned int anonymous_var_nameX67, struct anonymous_typeX2* anonymous_var_nameX68);
int wctomb(char* anonymous_var_nameX69, unsigned int anonymous_var_nameX70);
int _wctomb_r(struct _reent* anonymous_var_nameX71, char* anonymous_var_nameX72, unsigned int anonymous_var_nameX73, struct anonymous_typeX2* anonymous_var_nameX74);
unsigned int mbstowcs(unsigned int* anonymous_var_nameX75, const char* anonymous_var_nameX76, unsigned int anonymous_var_nameX77);
unsigned int _mbstowcs_r(struct _reent* anonymous_var_nameX78, unsigned int* anonymous_var_nameX79, const char* anonymous_var_nameX80, unsigned int anonymous_var_nameX81, struct anonymous_typeX2* anonymous_var_nameX82);
unsigned int wcstombs(char* anonymous_var_nameX83, const unsigned int* anonymous_var_nameX84, unsigned int anonymous_var_nameX85);
unsigned int _wcstombs_r(struct _reent* anonymous_var_nameX86, char* anonymous_var_nameX87, const unsigned int* anonymous_var_nameX88, unsigned int anonymous_var_nameX89, struct anonymous_typeX2* anonymous_var_nameX90);
char* mkdtemp(char* anonymous_var_nameX91);
int mkstemp(char* anonymous_var_nameX92);
int mkstemps(char* anonymous_var_nameX93, int anonymous_var_nameX94);
char* mktemp(char* anonymous_var_nameX95);
char* _mkdtemp_r(struct _reent* anonymous_var_nameX96, char* anonymous_var_nameX97);
int _mkostemp_r(struct _reent* anonymous_var_nameX98, char* anonymous_var_nameX99, int anonymous_var_nameX100);
int _mkostemps_r(struct _reent* anonymous_var_nameX101, char* anonymous_var_nameX102, int anonymous_var_nameX103, int anonymous_var_nameX104);
int _mkstemp_r(struct _reent* anonymous_var_nameX105, char* anonymous_var_nameX106);
int _mkstemps_r(struct _reent* anonymous_var_nameX107, char* anonymous_var_nameX108, int anonymous_var_nameX109);
char* _mktemp_r(struct _reent* anonymous_var_nameX110, char* anonymous_var_nameX111);
void qsort(void* __base, unsigned int __nmemb, unsigned int __size, int (*_compar)(const void*,const void*));
int rand();
void* realloc(void* anonymous_var_nameX112, unsigned int anonymous_var_nameX113);
void* reallocarray(void* anonymous_var_nameX114, unsigned int anonymous_var_nameX115, unsigned int anonymous_var_nameX116);
void* reallocf(void* anonymous_var_nameX117, unsigned int anonymous_var_nameX118);
char* realpath(const char* path, char* resolved_path);
int rpmatch(const char* response);
void srand(unsigned int __seed);
double strtod(const char* __n, char** __end_PTR);
double _strtod_r(struct _reent* anonymous_var_nameX119, const char* __n, char** __end_PTR);
float strtof(const char* __n, char** __end_PTR);
long strtol(const char* __n, char** __end_PTR, int __base);
long _strtol_r(struct _reent* anonymous_var_nameX120, const char* __n, char** __end_PTR, int __base);
unsigned long  int strtoul(const char* __n, char** __end_PTR, int __base);
unsigned long  int _strtoul_r(struct _reent* anonymous_var_nameX121, const char* __n, char** __end_PTR, int __base);
int system(const char* __string);
long a64l(const char* __input);
char* l64a(long __input);
char* _l64a_r(struct _reent* anonymous_var_nameX122, long __input);
int on_exit(void (*__func)(int,void*), void* __arg);
void _Exit(int __status);
int putenv(char* __string);
int _putenv_r(struct _reent* anonymous_var_nameX125, char* __string);
void* _reallocf_r(struct _reent* anonymous_var_nameX126, void* anonymous_var_nameX127, unsigned int anonymous_var_nameX128);
int setenv(const char* __string, const char* __value, int __overwrite);
int _setenv_r(struct _reent* anonymous_var_nameX129, const char* __string, const char* __value, int __overwrite);
char* __itoa(int anonymous_var_nameX130, char* anonymous_var_nameX131, int anonymous_var_nameX132);
char* __utoa(unsigned int anonymous_var_nameX133, char* anonymous_var_nameX134, int anonymous_var_nameX135);
char* itoa(int anonymous_var_nameX136, char* anonymous_var_nameX137, int anonymous_var_nameX138);
char* utoa(unsigned int anonymous_var_nameX139, char* anonymous_var_nameX140, int anonymous_var_nameX141);
int rand_r(unsigned int* __seed);
double drand48();
double _drand48_r(struct _reent* anonymous_var_nameX142);
double erand48(unsigned short int anonymous_var_nameX143[3]);
double _erand48_r(struct _reent* anonymous_var_nameX144, unsigned short int anonymous_var_nameX145[3]);
long jrand48(unsigned short int anonymous_var_nameX146[3]);
long _jrand48_r(struct _reent* anonymous_var_nameX147, unsigned short int anonymous_var_nameX148[3]);
void lcong48(unsigned short int anonymous_var_nameX149[7]);
void _lcong48_r(struct _reent* anonymous_var_nameX150, unsigned short int anonymous_var_nameX151[7]);
long lrand48();
long _lrand48_r(struct _reent* anonymous_var_nameX152);
long mrand48();
long _mrand48_r(struct _reent* anonymous_var_nameX153);
long nrand48(unsigned short int anonymous_var_nameX154[3]);
long _nrand48_r(struct _reent* anonymous_var_nameX155, unsigned short int anonymous_var_nameX156[3]);
unsigned short int* seed48(unsigned short int anonymous_var_nameX157[3]);
unsigned short int* _seed48_r(struct _reent* anonymous_var_nameX158, unsigned short int anonymous_var_nameX159[3]);
void srand48(long anonymous_var_nameX160);
void _srand48_r(struct _reent* anonymous_var_nameX161, long anonymous_var_nameX162);
char* initstate(unsigned int anonymous_var_nameX163, char* anonymous_var_nameX164, unsigned int anonymous_var_nameX165);
long random();
char* setstate(char* anonymous_var_nameX166);
void srandom(unsigned int anonymous_var_nameX167);
long long atoll(const char* __nptr);
long  long _atoll_r(struct _reent* anonymous_var_nameX168, const char* __nptr);
long long llabs(long  long anonymous_var_nameX169);
struct anonymous_typeX7 lldiv(long  long __numer, long  long __denom);
long long strtoll(const char* __n, char** __end_PTR, int __base);
long  long _strtoll_r(struct _reent* anonymous_var_nameX170, const char* __n, char** __end_PTR, int __base);
unsigned long  long strtoull(const char* __n, char** __end_PTR, int __base);
unsigned long  long _strtoull_r(struct _reent* anonymous_var_nameX171, const char* __n, char** __end_PTR, int __base);
void cfree(void* anonymous_var_nameX172);
int unsetenv(const char* __string);
int _unsetenv_r(struct _reent* anonymous_var_nameX173, const char* __string);
int posix_memalign(void** anonymous_var_nameX174, unsigned int anonymous_var_nameX175, unsigned int anonymous_var_nameX176);
char* _dtoa_r(struct _reent* anonymous_var_nameX177, double anonymous_var_nameX178, int anonymous_var_nameX179, int anonymous_var_nameX180, int* anonymous_var_nameX181, int* anonymous_var_nameX182, char** anonymous_var_nameX183);
void* _malloc_r(struct _reent* anonymous_var_nameX184, unsigned int anonymous_var_nameX185);
void* _calloc_r(struct _reent* anonymous_var_nameX186, unsigned int anonymous_var_nameX187, unsigned int anonymous_var_nameX188);
void _free_r(struct _reent* anonymous_var_nameX189, void* anonymous_var_nameX190);
void* _realloc_r(struct _reent* anonymous_var_nameX191, void* anonymous_var_nameX192, unsigned int anonymous_var_nameX193);
void _mstats_r(struct _reent* anonymous_var_nameX194, char* anonymous_var_nameX195);
int _system_r(struct _reent* anonymous_var_nameX196, const char* anonymous_var_nameX197);
void __eprintf(const char* anonymous_var_nameX198, const char* anonymous_var_nameX199, unsigned int anonymous_var_nameX200, const char* anonymous_var_nameX201);
void __bsd_qsort_r(void* __base, unsigned int __nmemb, unsigned int __size, void* __thunk, int (*_compar)(void*,const void*,const void*));
long  double _strtold_r(struct _reent* anonymous_var_nameX205, const char* anonymous_var_nameX206, char** anonymous_var_nameX207);
long  double strtold(const char* anonymous_var_nameX208, char** anonymous_var_nameX209);
void* aligned_alloc(unsigned int anonymous_var_nameX210, unsigned int anonymous_var_nameX211);
int at_quick_exit(void (*anonymous_lambda_var_nameZ1)());
void quick_exit(int anonymous_var_nameX212);
void __assert(const char* anonymous_var_nameX213, int anonymous_var_nameX214, const char* anonymous_var_nameX215);
void __assert_func(const char* anonymous_var_nameX216, int anonymous_var_nameX217, const char* anonymous_var_nameX218, const char* anonymous_var_nameX219);
struct _reent* __getreent();
void _reclaim_reent(struct _reent* anonymous_var_nameX220);
int _fwalk_sglue(struct _reent* anonymous_var_nameX221, int (*anonymous_lambda_var_nameZ2)(struct _reent*,struct __sFILE*), struct _glue* anonymous_var_nameX224);
void __sinit(struct _reent* anonymous_var_nameX225);
char* ctermid(char* anonymous_var_nameX226);
struct __sFILE* tmpfile();
char* tmpnam(char* anonymous_var_nameX227);
char* tempnam(const char* anonymous_var_nameX228, const char* anonymous_var_nameX229);
int fclose(struct __sFILE* anonymous_var_nameX230);
int fflush(struct __sFILE* anonymous_var_nameX231);
struct __sFILE* freopen(const char* anonymous_var_nameX232, const char* anonymous_var_nameX233, struct __sFILE* anonymous_var_nameX234);
void setbuf(struct __sFILE* anonymous_var_nameX235, char* anonymous_var_nameX236);
int setvbuf(struct __sFILE* anonymous_var_nameX237, char* anonymous_var_nameX238, int anonymous_var_nameX239, unsigned int anonymous_var_nameX240);
int fprintf(struct __sFILE* anonymous_var_nameX241, const char* anonymous_var_nameX242, ...);
int fscanf(struct __sFILE* anonymous_var_nameX243, const char* anonymous_var_nameX244, ...);
int printf(const char* anonymous_var_nameX245, ...);
int scanf(const char* anonymous_var_nameX246, ...);
int sscanf(const char* anonymous_var_nameX247, const char* anonymous_var_nameX248, ...);
int vfprintf(struct __sFILE* anonymous_var_nameX249, const char* anonymous_var_nameX250, va_list anonymous_var_nameX251);
int vprintf(const char* anonymous_var_nameX252, va_list anonymous_var_nameX253);
int vsprintf(char* anonymous_var_nameX254, const char* anonymous_var_nameX255, va_list anonymous_var_nameX256);
int fgetc(struct __sFILE* anonymous_var_nameX257);
char* fgets(char* anonymous_var_nameX258, int anonymous_var_nameX259, struct __sFILE* anonymous_var_nameX260);
int fputc(int anonymous_var_nameX261, struct __sFILE* anonymous_var_nameX262);
int fputs(const char* anonymous_var_nameX263, struct __sFILE* anonymous_var_nameX264);
int getc(struct __sFILE* anonymous_var_nameX265);
int getchar();
char* gets(char* anonymous_var_nameX266);
int putc(int anonymous_var_nameX267, struct __sFILE* anonymous_var_nameX268);
int putchar(int anonymous_var_nameX269);
int puts(const char* anonymous_var_nameX270);
int ungetc(int anonymous_var_nameX271, struct __sFILE* anonymous_var_nameX272);
unsigned int fread(void* anonymous_var_nameX273, unsigned int _size, unsigned int _n, struct __sFILE* anonymous_var_nameX274);
unsigned int fwrite(const void* anonymous_var_nameX275, unsigned int _size, unsigned int _n, struct __sFILE* anonymous_var_nameX276);
int fgetpos(struct __sFILE* anonymous_var_nameX277, long* anonymous_var_nameX278);
int fseek(struct __sFILE* anonymous_var_nameX279, long anonymous_var_nameX280, int anonymous_var_nameX281);
int fsetpos(struct __sFILE* anonymous_var_nameX282, const long* anonymous_var_nameX283);
long ftell(struct __sFILE* anonymous_var_nameX284);
void rewind(struct __sFILE* anonymous_var_nameX285);
void clearerr(struct __sFILE* anonymous_var_nameX286);
int feof(struct __sFILE* anonymous_var_nameX287);
int ferror(struct __sFILE* anonymous_var_nameX288);
void perror(const char* anonymous_var_nameX289);
struct __sFILE* fopen(const char* _name, const char* _type);
int sprintf(char* anonymous_var_nameX290, const char* anonymous_var_nameX291, ...);
int remove(const char* anonymous_var_nameX292);
int rename(const char* anonymous_var_nameX293, const char* anonymous_var_nameX294);
int fseeko(struct __sFILE* anonymous_var_nameX295, long anonymous_var_nameX296, int anonymous_var_nameX297);
long ftello(struct __sFILE* anonymous_var_nameX298);
int snprintf(char* anonymous_var_nameX299, unsigned int anonymous_var_nameX300, const char* anonymous_var_nameX301, ...);
int vsnprintf(char* anonymous_var_nameX302, unsigned int anonymous_var_nameX303, const char* anonymous_var_nameX304, va_list anonymous_var_nameX305);
int vfscanf(struct __sFILE* anonymous_var_nameX306, const char* anonymous_var_nameX307, va_list anonymous_var_nameX308);
int vscanf(const char* anonymous_var_nameX309, va_list anonymous_var_nameX310);
int vsscanf(const char* anonymous_var_nameX311, const char* anonymous_var_nameX312, va_list anonymous_var_nameX313);
int asiprintf(char** anonymous_var_nameX314, const char* anonymous_var_nameX315, ...);
char* asniprintf(char* anonymous_var_nameX316, unsigned int* anonymous_var_nameX317, const char* anonymous_var_nameX318, ...);
char* asnprintf(char* anonymous_var_nameX319, unsigned int* anonymous_var_nameX320, const char* anonymous_var_nameX321, ...);
int diprintf(int anonymous_var_nameX322, const char* anonymous_var_nameX323, ...);
int fiprintf(struct __sFILE* anonymous_var_nameX324, const char* anonymous_var_nameX325, ...);
int fiscanf(struct __sFILE* anonymous_var_nameX326, const char* anonymous_var_nameX327, ...);
int iprintf(const char* anonymous_var_nameX328, ...);
int iscanf(const char* anonymous_var_nameX329, ...);
int siprintf(char* anonymous_var_nameX330, const char* anonymous_var_nameX331, ...);
int siscanf(const char* anonymous_var_nameX332, const char* anonymous_var_nameX333, ...);
int sniprintf(char* anonymous_var_nameX334, unsigned int anonymous_var_nameX335, const char* anonymous_var_nameX336, ...);
int vasiprintf(char** anonymous_var_nameX337, const char* anonymous_var_nameX338, va_list anonymous_var_nameX339);
char* vasniprintf(char* anonymous_var_nameX340, unsigned int* anonymous_var_nameX341, const char* anonymous_var_nameX342, va_list anonymous_var_nameX343);
char* vasnprintf(char* anonymous_var_nameX344, unsigned int* anonymous_var_nameX345, const char* anonymous_var_nameX346, va_list anonymous_var_nameX347);
int vdiprintf(int anonymous_var_nameX348, const char* anonymous_var_nameX349, va_list anonymous_var_nameX350);
int vfiprintf(struct __sFILE* anonymous_var_nameX351, const char* anonymous_var_nameX352, va_list anonymous_var_nameX353);
int vfiscanf(struct __sFILE* anonymous_var_nameX354, const char* anonymous_var_nameX355, va_list anonymous_var_nameX356);
int viprintf(const char* anonymous_var_nameX357, va_list anonymous_var_nameX358);
int viscanf(const char* anonymous_var_nameX359, va_list anonymous_var_nameX360);
int vsiprintf(char* anonymous_var_nameX361, const char* anonymous_var_nameX362, va_list anonymous_var_nameX363);
int vsiscanf(const char* anonymous_var_nameX364, const char* anonymous_var_nameX365, va_list anonymous_var_nameX366);
int vsniprintf(char* anonymous_var_nameX367, unsigned int anonymous_var_nameX368, const char* anonymous_var_nameX369, va_list anonymous_var_nameX370);
struct __sFILE* fdopen(int anonymous_var_nameX371, const char* anonymous_var_nameX372);
int fileno(struct __sFILE* anonymous_var_nameX373);
int pclose(struct __sFILE* anonymous_var_nameX374);
struct __sFILE* popen(const char* anonymous_var_nameX375, const char* anonymous_var_nameX376);
void setbuffer(struct __sFILE* anonymous_var_nameX377, char* anonymous_var_nameX378, int anonymous_var_nameX379);
int setlinebuf(struct __sFILE* anonymous_var_nameX380);
int getw(struct __sFILE* anonymous_var_nameX381);
int putw(int anonymous_var_nameX382, struct __sFILE* anonymous_var_nameX383);
int getc_unlocked(struct __sFILE* anonymous_var_nameX384);
int getchar_unlocked();
void flockfile(struct __sFILE* anonymous_var_nameX385);
int ftrylockfile(struct __sFILE* anonymous_var_nameX386);
void funlockfile(struct __sFILE* anonymous_var_nameX387);
int putc_unlocked(int anonymous_var_nameX388, struct __sFILE* anonymous_var_nameX389);
int putchar_unlocked(int anonymous_var_nameX390);
int dprintf(int anonymous_var_nameX391, const char* anonymous_var_nameX392, ...);
struct __sFILE* fmemopen(void* anonymous_var_nameX393, unsigned int anonymous_var_nameX394, const char* anonymous_var_nameX395);
struct __sFILE* open_memstream(char** anonymous_var_nameX396, unsigned int* anonymous_var_nameX397);
int vdprintf(int anonymous_var_nameX398, const char* anonymous_var_nameX399, va_list anonymous_var_nameX400);
int renameat(int anonymous_var_nameX401, const char* anonymous_var_nameX402, int anonymous_var_nameX403, const char* anonymous_var_nameX404);
int _asiprintf_r(struct _reent* anonymous_var_nameX405, char** anonymous_var_nameX406, const char* anonymous_var_nameX407, ...);
char* _asniprintf_r(struct _reent* anonymous_var_nameX408, char* anonymous_var_nameX409, unsigned int* anonymous_var_nameX410, const char* anonymous_var_nameX411, ...);
char* _asnprintf_r(struct _reent* anonymous_var_nameX412, char* anonymous_var_nameX413, unsigned int* anonymous_var_nameX414, const char* anonymous_var_nameX415, ...);
int _asprintf_r(struct _reent* anonymous_var_nameX416, char** anonymous_var_nameX417, const char* anonymous_var_nameX418, ...);
int _diprintf_r(struct _reent* anonymous_var_nameX419, int anonymous_var_nameX420, const char* anonymous_var_nameX421, ...);
int _dprintf_r(struct _reent* anonymous_var_nameX422, int anonymous_var_nameX423, const char* anonymous_var_nameX424, ...);
int _fclose_r(struct _reent* anonymous_var_nameX425, struct __sFILE* anonymous_var_nameX426);
int _fcloseall_r(struct _reent* anonymous_var_nameX427);
struct __sFILE* _fdopen_r(struct _reent* anonymous_var_nameX428, int anonymous_var_nameX429, const char* anonymous_var_nameX430);
int _fflush_r(struct _reent* anonymous_var_nameX431, struct __sFILE* anonymous_var_nameX432);
int _fgetc_r(struct _reent* anonymous_var_nameX433, struct __sFILE* anonymous_var_nameX434);
int _fgetc_unlocked_r(struct _reent* anonymous_var_nameX435, struct __sFILE* anonymous_var_nameX436);
char* _fgets_r(struct _reent* anonymous_var_nameX437, char* anonymous_var_nameX438, int anonymous_var_nameX439, struct __sFILE* anonymous_var_nameX440);
char* _fgets_unlocked_r(struct _reent* anonymous_var_nameX441, char* anonymous_var_nameX442, int anonymous_var_nameX443, struct __sFILE* anonymous_var_nameX444);
int _fgetpos_r(struct _reent* anonymous_var_nameX445, struct __sFILE* anonymous_var_nameX446, long* anonymous_var_nameX447);
int _fsetpos_r(struct _reent* anonymous_var_nameX448, struct __sFILE* anonymous_var_nameX449, const long* anonymous_var_nameX450);
int _fiprintf_r(struct _reent* anonymous_var_nameX451, struct __sFILE* anonymous_var_nameX452, const char* anonymous_var_nameX453, ...);
int _fiscanf_r(struct _reent* anonymous_var_nameX454, struct __sFILE* anonymous_var_nameX455, const char* anonymous_var_nameX456, ...);
struct __sFILE* _fmemopen_r(struct _reent* anonymous_var_nameX457, void* anonymous_var_nameX458, unsigned int anonymous_var_nameX459, const char* anonymous_var_nameX460);
struct __sFILE* _fopen_r(struct _reent* anonymous_var_nameX461, const char* anonymous_var_nameX462, const char* anonymous_var_nameX463);
struct __sFILE* _freopen_r(struct _reent* anonymous_var_nameX464, const char* anonymous_var_nameX465, const char* anonymous_var_nameX466, struct __sFILE* anonymous_var_nameX467);
int _fprintf_r(struct _reent* anonymous_var_nameX468, struct __sFILE* anonymous_var_nameX469, const char* anonymous_var_nameX470, ...);
int _fpurge_r(struct _reent* anonymous_var_nameX471, struct __sFILE* anonymous_var_nameX472);
int _fputc_r(struct _reent* anonymous_var_nameX473, int anonymous_var_nameX474, struct __sFILE* anonymous_var_nameX475);
int _fputc_unlocked_r(struct _reent* anonymous_var_nameX476, int anonymous_var_nameX477, struct __sFILE* anonymous_var_nameX478);
int _fputs_r(struct _reent* anonymous_var_nameX479, const char* anonymous_var_nameX480, struct __sFILE* anonymous_var_nameX481);
int _fputs_unlocked_r(struct _reent* anonymous_var_nameX482, const char* anonymous_var_nameX483, struct __sFILE* anonymous_var_nameX484);
unsigned int _fread_r(struct _reent* anonymous_var_nameX485, void* anonymous_var_nameX486, unsigned int _size, unsigned int _n, struct __sFILE* anonymous_var_nameX487);
unsigned int _fread_unlocked_r(struct _reent* anonymous_var_nameX488, void* anonymous_var_nameX489, unsigned int _size, unsigned int _n, struct __sFILE* anonymous_var_nameX490);
int _fscanf_r(struct _reent* anonymous_var_nameX491, struct __sFILE* anonymous_var_nameX492, const char* anonymous_var_nameX493, ...);
int _fseek_r(struct _reent* anonymous_var_nameX494, struct __sFILE* anonymous_var_nameX495, long anonymous_var_nameX496, int anonymous_var_nameX497);
int _fseeko_r(struct _reent* anonymous_var_nameX498, struct __sFILE* anonymous_var_nameX499, long anonymous_var_nameX500, int anonymous_var_nameX501);
long _ftell_r(struct _reent* anonymous_var_nameX502, struct __sFILE* anonymous_var_nameX503);
long _ftello_r(struct _reent* anonymous_var_nameX504, struct __sFILE* anonymous_var_nameX505);
void _rewind_r(struct _reent* anonymous_var_nameX506, struct __sFILE* anonymous_var_nameX507);
unsigned int _fwrite_r(struct _reent* anonymous_var_nameX508, const void* anonymous_var_nameX509, unsigned int _size, unsigned int _n, struct __sFILE* anonymous_var_nameX510);
unsigned int _fwrite_unlocked_r(struct _reent* anonymous_var_nameX511, const void* anonymous_var_nameX512, unsigned int _size, unsigned int _n, struct __sFILE* anonymous_var_nameX513);
int _getc_r(struct _reent* anonymous_var_nameX514, struct __sFILE* anonymous_var_nameX515);
int _getc_unlocked_r(struct _reent* anonymous_var_nameX516, struct __sFILE* anonymous_var_nameX517);
int _getchar_r(struct _reent* anonymous_var_nameX518);
int _getchar_unlocked_r(struct _reent* anonymous_var_nameX519);
char* _gets_r(struct _reent* anonymous_var_nameX520, char* anonymous_var_nameX521);
int _iprintf_r(struct _reent* anonymous_var_nameX522, const char* anonymous_var_nameX523, ...);
int _iscanf_r(struct _reent* anonymous_var_nameX524, const char* anonymous_var_nameX525, ...);
struct __sFILE* _open_memstream_r(struct _reent* anonymous_var_nameX526, char** anonymous_var_nameX527, unsigned int* anonymous_var_nameX528);
void _perror_r(struct _reent* anonymous_var_nameX529, const char* anonymous_var_nameX530);
int _printf_r(struct _reent* anonymous_var_nameX531, const char* anonymous_var_nameX532, ...);
int _putc_r(struct _reent* anonymous_var_nameX533, int anonymous_var_nameX534, struct __sFILE* anonymous_var_nameX535);
int _putc_unlocked_r(struct _reent* anonymous_var_nameX536, int anonymous_var_nameX537, struct __sFILE* anonymous_var_nameX538);
int _putchar_unlocked_r(struct _reent* anonymous_var_nameX539, int anonymous_var_nameX540);
int _putchar_r(struct _reent* anonymous_var_nameX541, int anonymous_var_nameX542);
int _puts_r(struct _reent* anonymous_var_nameX543, const char* anonymous_var_nameX544);
int _remove_r(struct _reent* anonymous_var_nameX545, const char* anonymous_var_nameX546);
int _scanf_r(struct _reent* anonymous_var_nameX548, const char* anonymous_var_nameX549, ...);
int _siprintf_r(struct _reent* anonymous_var_nameX550, char* anonymous_var_nameX551, const char* anonymous_var_nameX552, ...);
int _siscanf_r(struct _reent* anonymous_var_nameX553, const char* anonymous_var_nameX554, const char* anonymous_var_nameX555, ...);
int _sniprintf_r(struct _reent* anonymous_var_nameX556, char* anonymous_var_nameX557, unsigned int anonymous_var_nameX558, const char* anonymous_var_nameX559, ...);
int _snprintf_r(struct _reent* anonymous_var_nameX560, char* anonymous_var_nameX561, unsigned int anonymous_var_nameX562, const char* anonymous_var_nameX563, ...);
int _sprintf_r(struct _reent* anonymous_var_nameX564, char* anonymous_var_nameX565, const char* anonymous_var_nameX566, ...);
int _sscanf_r(struct _reent* anonymous_var_nameX567, const char* anonymous_var_nameX568, const char* anonymous_var_nameX569, ...);
char* _tempnam_r(struct _reent* anonymous_var_nameX570, const char* anonymous_var_nameX571, const char* anonymous_var_nameX572);
struct __sFILE* _tmpfile_r(struct _reent* anonymous_var_nameX573);
char* _tmpnam_r(struct _reent* anonymous_var_nameX574, char* anonymous_var_nameX575);
int _ungetc_r(struct _reent* anonymous_var_nameX576, int anonymous_var_nameX577, struct __sFILE* anonymous_var_nameX578);
int _vasiprintf_r(struct _reent* anonymous_var_nameX579, char** anonymous_var_nameX580, const char* anonymous_var_nameX581, va_list anonymous_var_nameX582);
char* _vasniprintf_r(struct _reent* anonymous_var_nameX583, char* anonymous_var_nameX584, unsigned int* anonymous_var_nameX585, const char* anonymous_var_nameX586, va_list anonymous_var_nameX587);
char* _vasnprintf_r(struct _reent* anonymous_var_nameX588, char* anonymous_var_nameX589, unsigned int* anonymous_var_nameX590, const char* anonymous_var_nameX591, va_list anonymous_var_nameX592);
int _vasprintf_r(struct _reent* anonymous_var_nameX593, char** anonymous_var_nameX594, const char* anonymous_var_nameX595, va_list anonymous_var_nameX596);
int _vdiprintf_r(struct _reent* anonymous_var_nameX597, int anonymous_var_nameX598, const char* anonymous_var_nameX599, va_list anonymous_var_nameX600);
int _vdprintf_r(struct _reent* anonymous_var_nameX601, int anonymous_var_nameX602, const char* anonymous_var_nameX603, va_list anonymous_var_nameX604);
int _vfiprintf_r(struct _reent* anonymous_var_nameX605, struct __sFILE* anonymous_var_nameX606, const char* anonymous_var_nameX607, va_list anonymous_var_nameX608);
int _vfiscanf_r(struct _reent* anonymous_var_nameX609, struct __sFILE* anonymous_var_nameX610, const char* anonymous_var_nameX611, va_list anonymous_var_nameX612);
int _vfprintf_r(struct _reent* anonymous_var_nameX613, struct __sFILE* anonymous_var_nameX614, const char* anonymous_var_nameX615, va_list anonymous_var_nameX616);
int _vfscanf_r(struct _reent* anonymous_var_nameX617, struct __sFILE* anonymous_var_nameX618, const char* anonymous_var_nameX619, va_list anonymous_var_nameX620);
int _viprintf_r(struct _reent* anonymous_var_nameX621, const char* anonymous_var_nameX622, va_list anonymous_var_nameX623);
int _viscanf_r(struct _reent* anonymous_var_nameX624, const char* anonymous_var_nameX625, va_list anonymous_var_nameX626);
int _vprintf_r(struct _reent* anonymous_var_nameX627, const char* anonymous_var_nameX628, va_list anonymous_var_nameX629);
int _vscanf_r(struct _reent* anonymous_var_nameX630, const char* anonymous_var_nameX631, va_list anonymous_var_nameX632);
int _vsiprintf_r(struct _reent* anonymous_var_nameX633, char* anonymous_var_nameX634, const char* anonymous_var_nameX635, va_list anonymous_var_nameX636);
int _vsiscanf_r(struct _reent* anonymous_var_nameX637, const char* anonymous_var_nameX638, const char* anonymous_var_nameX639, va_list anonymous_var_nameX640);
int _vsniprintf_r(struct _reent* anonymous_var_nameX641, char* anonymous_var_nameX642, unsigned int anonymous_var_nameX643, const char* anonymous_var_nameX644, va_list anonymous_var_nameX645);
int _vsnprintf_r(struct _reent* anonymous_var_nameX646, char* anonymous_var_nameX647, unsigned int anonymous_var_nameX648, const char* anonymous_var_nameX649, va_list anonymous_var_nameX650);
int _vsprintf_r(struct _reent* anonymous_var_nameX651, char* anonymous_var_nameX652, const char* anonymous_var_nameX653, va_list anonymous_var_nameX654);
int _vsscanf_r(struct _reent* anonymous_var_nameX655, const char* anonymous_var_nameX656, const char* anonymous_var_nameX657, va_list anonymous_var_nameX658);
int fpurge(struct __sFILE* anonymous_var_nameX659);
int __getdelim(char** anonymous_var_nameX660, unsigned int* anonymous_var_nameX661, int anonymous_var_nameX662, struct __sFILE* anonymous_var_nameX663);
int __getline(char** anonymous_var_nameX664, unsigned int* anonymous_var_nameX665, struct __sFILE* anonymous_var_nameX666);
void clearerr_unlocked(struct __sFILE* anonymous_var_nameX667);
int feof_unlocked(struct __sFILE* anonymous_var_nameX668);
int ferror_unlocked(struct __sFILE* anonymous_var_nameX669);
int fileno_unlocked(struct __sFILE* anonymous_var_nameX670);
int fflush_unlocked(struct __sFILE* anonymous_var_nameX671);
int fgetc_unlocked(struct __sFILE* anonymous_var_nameX672);
int fputc_unlocked(int anonymous_var_nameX673, struct __sFILE* anonymous_var_nameX674);
unsigned int fread_unlocked(void* anonymous_var_nameX675, unsigned int _size, unsigned int _n, struct __sFILE* anonymous_var_nameX676);
unsigned int fwrite_unlocked(const void* anonymous_var_nameX677, unsigned int _size, unsigned int _n, struct __sFILE* anonymous_var_nameX678);
int __srget_r(struct _reent* anonymous_var_nameX679, struct __sFILE* anonymous_var_nameX680);
int __swbuf_r(struct _reent* anonymous_var_nameX681, int anonymous_var_nameX682, struct __sFILE* anonymous_var_nameX683);
struct __sFILE* funopen(const void* __cookie, int (*__readfn)(void*,char*,int), int (*__writefn)(void*,const char*,int), long (*__seekfn)(void*,long,int), int (*__closefn)(void*));
struct __sFILE* _funopen_r(struct _reent* anonymous_var_nameX684, const void* __cookie, int (*__readfn)(void*,char*,int), int (*__writefn)(void*,const char*,int), long (*__seekfn)(void*,long,int), int (*__closefn)(void*));
unsigned int btowc(int anonymous_var_nameX685);
int wctob(unsigned int anonymous_var_nameX686);
unsigned int mbrlen(const char* anonymous_var_nameX687, unsigned int anonymous_var_nameX688, struct anonymous_typeX2* anonymous_var_nameX689);
unsigned int mbrtowc(unsigned int* anonymous_var_nameX690, const char* anonymous_var_nameX691, unsigned int anonymous_var_nameX692, struct anonymous_typeX2* anonymous_var_nameX693);
unsigned int _mbrtowc_r(struct _reent* anonymous_var_nameX694, unsigned int* anonymous_var_nameX695, const char* anonymous_var_nameX696, unsigned int anonymous_var_nameX697, struct anonymous_typeX2* anonymous_var_nameX698);
int mbsinit(const struct anonymous_typeX2* anonymous_var_nameX699);
unsigned int mbsnrtowcs(unsigned int* anonymous_var_nameX700, const char** anonymous_var_nameX701, unsigned int anonymous_var_nameX702, unsigned int anonymous_var_nameX703, struct anonymous_typeX2* anonymous_var_nameX704);
unsigned int _mbsnrtowcs_r(struct _reent* anonymous_var_nameX705, unsigned int* anonymous_var_nameX706, const char** anonymous_var_nameX707, unsigned int anonymous_var_nameX708, unsigned int anonymous_var_nameX709, struct anonymous_typeX2* anonymous_var_nameX710);
unsigned int mbsrtowcs(unsigned int* anonymous_var_nameX711, const char** anonymous_var_nameX712, unsigned int anonymous_var_nameX713, struct anonymous_typeX2* anonymous_var_nameX714);
unsigned int _mbsrtowcs_r(struct _reent* anonymous_var_nameX715, unsigned int* anonymous_var_nameX716, const char** anonymous_var_nameX717, unsigned int anonymous_var_nameX718, struct anonymous_typeX2* anonymous_var_nameX719);
unsigned int wcrtomb(char* anonymous_var_nameX720, unsigned int anonymous_var_nameX721, struct anonymous_typeX2* anonymous_var_nameX722);
unsigned int _wcrtomb_r(struct _reent* anonymous_var_nameX723, char* anonymous_var_nameX724, unsigned int anonymous_var_nameX725, struct anonymous_typeX2* anonymous_var_nameX726);
unsigned int wcsnrtombs(char* anonymous_var_nameX727, const unsigned int** anonymous_var_nameX728, unsigned int anonymous_var_nameX729, unsigned int anonymous_var_nameX730, struct anonymous_typeX2* anonymous_var_nameX731);
unsigned int _wcsnrtombs_r(struct _reent* anonymous_var_nameX732, char* anonymous_var_nameX733, const unsigned int** anonymous_var_nameX734, unsigned int anonymous_var_nameX735, unsigned int anonymous_var_nameX736, struct anonymous_typeX2* anonymous_var_nameX737);
unsigned int wcsrtombs(char* anonymous_var_nameX738, const unsigned int** anonymous_var_nameX739, unsigned int anonymous_var_nameX740, struct anonymous_typeX2* anonymous_var_nameX741);
unsigned int _wcsrtombs_r(struct _reent* anonymous_var_nameX742, char* anonymous_var_nameX743, const unsigned int** anonymous_var_nameX744, unsigned int anonymous_var_nameX745, struct anonymous_typeX2* anonymous_var_nameX746);
int wcscasecmp(const unsigned int* anonymous_var_nameX747, const unsigned int* anonymous_var_nameX748);
unsigned int* wcscat(unsigned int* anonymous_var_nameX749, const unsigned int* anonymous_var_nameX750);
unsigned int* wcschr(const unsigned int* anonymous_var_nameX751, unsigned int anonymous_var_nameX752);
int wcscmp(const unsigned int* anonymous_var_nameX753, const unsigned int* anonymous_var_nameX754);
int wcscoll(const unsigned int* anonymous_var_nameX755, const unsigned int* anonymous_var_nameX756);
unsigned int* wcscpy(unsigned int* anonymous_var_nameX757, const unsigned int* anonymous_var_nameX758);
unsigned int* wcpcpy(unsigned int* anonymous_var_nameX759, const unsigned int* anonymous_var_nameX760);
unsigned int* wcsdup(const unsigned int* anonymous_var_nameX761);
unsigned int* _wcsdup_r(struct _reent* anonymous_var_nameX762, const unsigned int* anonymous_var_nameX763);
unsigned int wcscspn(const unsigned int* anonymous_var_nameX764, const unsigned int* anonymous_var_nameX765);
unsigned int wcsftime(unsigned int* anonymous_var_nameX766, unsigned int anonymous_var_nameX767, const unsigned int* anonymous_var_nameX768, const struct tm* anonymous_var_nameX769);
unsigned int wcslcat(unsigned int* anonymous_var_nameX770, const unsigned int* anonymous_var_nameX771, unsigned int anonymous_var_nameX772);
unsigned int wcslcpy(unsigned int* anonymous_var_nameX773, const unsigned int* anonymous_var_nameX774, unsigned int anonymous_var_nameX775);
unsigned int wcslen(const unsigned int* anonymous_var_nameX776);
int wcsncasecmp(const unsigned int* anonymous_var_nameX777, const unsigned int* anonymous_var_nameX778, unsigned int anonymous_var_nameX779);
unsigned int* wcsncat(unsigned int* anonymous_var_nameX780, const unsigned int* anonymous_var_nameX781, unsigned int anonymous_var_nameX782);
int wcsncmp(const unsigned int* anonymous_var_nameX783, const unsigned int* anonymous_var_nameX784, unsigned int anonymous_var_nameX785);
unsigned int* wcsncpy(unsigned int* anonymous_var_nameX786, const unsigned int* anonymous_var_nameX787, unsigned int anonymous_var_nameX788);
unsigned int* wcpncpy(unsigned int* anonymous_var_nameX789, const unsigned int* anonymous_var_nameX790, unsigned int anonymous_var_nameX791);
unsigned int wcsnlen(const unsigned int* anonymous_var_nameX792, unsigned int anonymous_var_nameX793);
unsigned int* wcspbrk(const unsigned int* anonymous_var_nameX794, const unsigned int* anonymous_var_nameX795);
unsigned int* wcsrchr(const unsigned int* anonymous_var_nameX796, unsigned int anonymous_var_nameX797);
unsigned int wcsspn(const unsigned int* anonymous_var_nameX798, const unsigned int* anonymous_var_nameX799);
unsigned int* wcsstr(const unsigned int* anonymous_var_nameX800, const unsigned int* anonymous_var_nameX801);
unsigned int* wcstok(unsigned int* anonymous_var_nameX802, const unsigned int* anonymous_var_nameX803, unsigned int** anonymous_var_nameX804);
double wcstod(const unsigned int* anonymous_var_nameX805, unsigned int** anonymous_var_nameX806);
double _wcstod_r(struct _reent* anonymous_var_nameX807, const unsigned int* anonymous_var_nameX808, unsigned int** anonymous_var_nameX809);
float wcstof(const unsigned int* anonymous_var_nameX810, unsigned int** anonymous_var_nameX811);
float _wcstof_r(struct _reent* anonymous_var_nameX812, const unsigned int* anonymous_var_nameX813, unsigned int** anonymous_var_nameX814);
unsigned int wcsxfrm(unsigned int* anonymous_var_nameX815, const unsigned int* anonymous_var_nameX816, unsigned int anonymous_var_nameX817);
int wcscasecmp_l(const unsigned int* anonymous_var_nameX818, const unsigned int* anonymous_var_nameX819, struct __locale_t* anonymous_var_nameX820);
int wcsncasecmp_l(const unsigned int* anonymous_var_nameX821, const unsigned int* anonymous_var_nameX822, unsigned int anonymous_var_nameX823, struct __locale_t* anonymous_var_nameX824);
int wcscoll_l(const unsigned int* anonymous_var_nameX825, const unsigned int* anonymous_var_nameX826, struct __locale_t* anonymous_var_nameX827);
unsigned int wcsxfrm_l(unsigned int* anonymous_var_nameX828, const unsigned int* anonymous_var_nameX829, unsigned int anonymous_var_nameX830, struct __locale_t* anonymous_var_nameX831);
unsigned int* wmemchr(const unsigned int* anonymous_var_nameX832, unsigned int anonymous_var_nameX833, unsigned int anonymous_var_nameX834);
int wmemcmp(const unsigned int* anonymous_var_nameX835, const unsigned int* anonymous_var_nameX836, unsigned int anonymous_var_nameX837);
unsigned int* wmemcpy(unsigned int* anonymous_var_nameX838, const unsigned int* anonymous_var_nameX839, unsigned int anonymous_var_nameX840);
unsigned int* wmemmove(unsigned int* anonymous_var_nameX841, const unsigned int* anonymous_var_nameX842, unsigned int anonymous_var_nameX843);
unsigned int* wmemset(unsigned int* anonymous_var_nameX844, unsigned int anonymous_var_nameX845, unsigned int anonymous_var_nameX846);
long wcstol(const unsigned int* anonymous_var_nameX847, unsigned int** anonymous_var_nameX848, int anonymous_var_nameX849);
long long wcstoll(const unsigned int* anonymous_var_nameX850, unsigned int** anonymous_var_nameX851, int anonymous_var_nameX852);
unsigned long  int wcstoul(const unsigned int* anonymous_var_nameX853, unsigned int** anonymous_var_nameX854, int anonymous_var_nameX855);
unsigned long  long wcstoull(const unsigned int* anonymous_var_nameX856, unsigned int** anonymous_var_nameX857, int anonymous_var_nameX858);
long _wcstol_r(struct _reent* anonymous_var_nameX859, const unsigned int* anonymous_var_nameX860, unsigned int** anonymous_var_nameX861, int anonymous_var_nameX862);
long  long _wcstoll_r(struct _reent* anonymous_var_nameX863, const unsigned int* anonymous_var_nameX864, unsigned int** anonymous_var_nameX865, int anonymous_var_nameX866);
unsigned long  int _wcstoul_r(struct _reent* anonymous_var_nameX867, const unsigned int* anonymous_var_nameX868, unsigned int** anonymous_var_nameX869, int anonymous_var_nameX870);
unsigned long  long _wcstoull_r(struct _reent* anonymous_var_nameX871, const unsigned int* anonymous_var_nameX872, unsigned int** anonymous_var_nameX873, int anonymous_var_nameX874);
long  double wcstold(const unsigned int* anonymous_var_nameX875, unsigned int** anonymous_var_nameX876);
unsigned int fgetwc(struct __sFILE* anonymous_var_nameX877);
unsigned int* fgetws(unsigned int* anonymous_var_nameX878, int anonymous_var_nameX879, struct __sFILE* anonymous_var_nameX880);
unsigned int fputwc(unsigned int anonymous_var_nameX881, struct __sFILE* anonymous_var_nameX882);
int fputws(const unsigned int* anonymous_var_nameX883, struct __sFILE* anonymous_var_nameX884);
int fwide(struct __sFILE* anonymous_var_nameX885, int anonymous_var_nameX886);
unsigned int getwc(struct __sFILE* anonymous_var_nameX887);
unsigned int getwchar();
unsigned int putwc(unsigned int anonymous_var_nameX888, struct __sFILE* anonymous_var_nameX889);
unsigned int putwchar(unsigned int anonymous_var_nameX890);
unsigned int ungetwc(unsigned int wc, struct __sFILE* anonymous_var_nameX891);
unsigned int _fgetwc_r(struct _reent* anonymous_var_nameX892, struct __sFILE* anonymous_var_nameX893);
unsigned int _fgetwc_unlocked_r(struct _reent* anonymous_var_nameX894, struct __sFILE* anonymous_var_nameX895);
unsigned int* _fgetws_r(struct _reent* anonymous_var_nameX896, unsigned int* anonymous_var_nameX897, int anonymous_var_nameX898, struct __sFILE* anonymous_var_nameX899);
unsigned int* _fgetws_unlocked_r(struct _reent* anonymous_var_nameX900, unsigned int* anonymous_var_nameX901, int anonymous_var_nameX902, struct __sFILE* anonymous_var_nameX903);
unsigned int _fputwc_r(struct _reent* anonymous_var_nameX904, unsigned int anonymous_var_nameX905, struct __sFILE* anonymous_var_nameX906);
unsigned int _fputwc_unlocked_r(struct _reent* anonymous_var_nameX907, unsigned int anonymous_var_nameX908, struct __sFILE* anonymous_var_nameX909);
int _fputws_r(struct _reent* anonymous_var_nameX910, const unsigned int* anonymous_var_nameX911, struct __sFILE* anonymous_var_nameX912);
int _fputws_unlocked_r(struct _reent* anonymous_var_nameX913, const unsigned int* anonymous_var_nameX914, struct __sFILE* anonymous_var_nameX915);
int _fwide_r(struct _reent* anonymous_var_nameX916, struct __sFILE* anonymous_var_nameX917, int anonymous_var_nameX918);
unsigned int _getwc_r(struct _reent* anonymous_var_nameX919, struct __sFILE* anonymous_var_nameX920);
unsigned int _getwc_unlocked_r(struct _reent* anonymous_var_nameX921, struct __sFILE* anonymous_var_nameX922);
unsigned int _getwchar_r(struct _reent* anonymous_var_nameX923);
unsigned int _getwchar_unlocked_r(struct _reent* anonymous_var_nameX924);
unsigned int _putwc_r(struct _reent* anonymous_var_nameX925, unsigned int anonymous_var_nameX926, struct __sFILE* anonymous_var_nameX927);
unsigned int _putwc_unlocked_r(struct _reent* anonymous_var_nameX928, unsigned int anonymous_var_nameX929, struct __sFILE* anonymous_var_nameX930);
unsigned int _putwchar_r(struct _reent* anonymous_var_nameX931, unsigned int anonymous_var_nameX932);
unsigned int _putwchar_unlocked_r(struct _reent* anonymous_var_nameX933, unsigned int anonymous_var_nameX934);
unsigned int _ungetwc_r(struct _reent* anonymous_var_nameX935, unsigned int wc, struct __sFILE* anonymous_var_nameX936);
struct __sFILE* open_wmemstream(unsigned int** anonymous_var_nameX937, unsigned int* anonymous_var_nameX938);
struct __sFILE* _open_wmemstream_r(struct _reent* anonymous_var_nameX939, unsigned int** anonymous_var_nameX940, unsigned int* anonymous_var_nameX941);
int fwprintf(struct __sFILE* anonymous_var_nameX942, const unsigned int* anonymous_var_nameX943, ...);
int swprintf(unsigned int* anonymous_var_nameX944, unsigned int anonymous_var_nameX945, const unsigned int* anonymous_var_nameX946, ...);
int vfwprintf(struct __sFILE* anonymous_var_nameX947, const unsigned int* anonymous_var_nameX948, va_list anonymous_var_nameX949);
int vswprintf(unsigned int* anonymous_var_nameX950, unsigned int anonymous_var_nameX951, const unsigned int* anonymous_var_nameX952, va_list anonymous_var_nameX953);
int vwprintf(const unsigned int* anonymous_var_nameX954, va_list anonymous_var_nameX955);
int wprintf(const unsigned int* anonymous_var_nameX956, ...);
int _fwprintf_r(struct _reent* anonymous_var_nameX957, struct __sFILE* anonymous_var_nameX958, const unsigned int* anonymous_var_nameX959, ...);
int _swprintf_r(struct _reent* anonymous_var_nameX960, unsigned int* anonymous_var_nameX961, unsigned int anonymous_var_nameX962, const unsigned int* anonymous_var_nameX963, ...);
int _vfwprintf_r(struct _reent* anonymous_var_nameX964, struct __sFILE* anonymous_var_nameX965, const unsigned int* anonymous_var_nameX966, va_list anonymous_var_nameX967);
int _vswprintf_r(struct _reent* anonymous_var_nameX968, unsigned int* anonymous_var_nameX969, unsigned int anonymous_var_nameX970, const unsigned int* anonymous_var_nameX971, va_list anonymous_var_nameX972);
int _vwprintf_r(struct _reent* anonymous_var_nameX973, const unsigned int* anonymous_var_nameX974, va_list anonymous_var_nameX975);
int _wprintf_r(struct _reent* anonymous_var_nameX976, const unsigned int* anonymous_var_nameX977, ...);
int fwscanf(struct __sFILE* anonymous_var_nameX978, const unsigned int* anonymous_var_nameX979, ...);
int swscanf(const unsigned int* anonymous_var_nameX980, const unsigned int* anonymous_var_nameX981, ...);
int vfwscanf(struct __sFILE* anonymous_var_nameX982, const unsigned int* anonymous_var_nameX983, va_list anonymous_var_nameX984);
int vswscanf(const unsigned int* anonymous_var_nameX985, const unsigned int* anonymous_var_nameX986, va_list anonymous_var_nameX987);
int vwscanf(const unsigned int* anonymous_var_nameX988, va_list anonymous_var_nameX989);
int wscanf(const unsigned int* anonymous_var_nameX990, ...);
int _fwscanf_r(struct _reent* anonymous_var_nameX991, struct __sFILE* anonymous_var_nameX992, const unsigned int* anonymous_var_nameX993, ...);
int _swscanf_r(struct _reent* anonymous_var_nameX994, const unsigned int* anonymous_var_nameX995, const unsigned int* anonymous_var_nameX996, ...);
int _vfwscanf_r(struct _reent* anonymous_var_nameX997, struct __sFILE* anonymous_var_nameX998, const unsigned int* anonymous_var_nameX999, va_list anonymous_var_nameX1000);
int _vswscanf_r(struct _reent* anonymous_var_nameX1001, const unsigned int* anonymous_var_nameX1002, const unsigned int* anonymous_var_nameX1003, va_list anonymous_var_nameX1004);
int _vwscanf_r(struct _reent* anonymous_var_nameX1005, const unsigned int* anonymous_var_nameX1006, va_list anonymous_var_nameX1007);
int _wscanf_r(struct _reent* anonymous_var_nameX1008, const unsigned int* anonymous_var_nameX1009, ...);
void xthal_save_extra(void* base);
void xthal_restore_extra(void* base);
void xthal_save_cpregs(void* base, int anonymous_var_nameX1010);
void xthal_restore_cpregs(void* base, int anonymous_var_nameX1011);
void xthal_save_cp0(void* base);
void xthal_save_cp1(void* base);
void xthal_save_cp2(void* base);
void xthal_save_cp3(void* base);
void xthal_save_cp4(void* base);
void xthal_save_cp5(void* base);
void xthal_save_cp6(void* base);
void xthal_save_cp7(void* base);
void xthal_restore_cp0(void* base);
void xthal_restore_cp1(void* base);
void xthal_restore_cp2(void* base);
void xthal_restore_cp3(void* base);
void xthal_restore_cp4(void* base);
void xthal_restore_cp5(void* base);
void xthal_restore_cp6(void* base);
void xthal_restore_cp7(void* base);
void xthal_init_mem_extra(void* anonymous_var_nameX1012);
void xthal_init_mem_cp(void* anonymous_var_nameX1013, int anonymous_var_nameX1014);
void xthal_icache_region_invalidate(void* addr, unsigned int size);
void xthal_dcache_region_invalidate(void* addr, unsigned int size);
void xthal_dcache_region_writeback(void* addr, unsigned int size);
void xthal_dcache_region_writeback_inv(void* addr, unsigned int size);
void xthal_icache_line_invalidate(void* addr);
void xthal_dcache_line_invalidate(void* addr);
void xthal_dcache_line_writeback(void* addr);
void xthal_dcache_line_writeback_inv(void* addr);
void xthal_icache_sync();
void xthal_dcache_sync();
unsigned int xthal_icache_get_ways();
void xthal_icache_set_ways(unsigned int ways);
unsigned int xthal_dcache_get_ways();
void xthal_dcache_set_ways(unsigned int ways);
void xthal_cache_coherence_on();
void xthal_cache_coherence_off();
void xthal_cache_coherence_optin();
void xthal_cache_coherence_optout();
int xthal_get_cache_prefetch();
int xthal_set_cache_prefetch(int anonymous_var_nameX1015);
int xthal_set_cache_prefetch_long(unsigned long  long anonymous_var_nameX1016);
unsigned int xthal_set_soft_break(void* addr);
void xthal_remove_soft_break(void* addr, unsigned int anonymous_var_nameX1017);
int xthal_disassemble(unsigned char* instr_buf, void* tgt_addr, char* buffer, unsigned int buflen, unsigned int options);
int xthal_disassemble_size(unsigned char* instr_buf);
void* xthal_memcpy(void* dst, const void* src, unsigned int len);
void* xthal_bcopy(const void* src, void* dst, unsigned int len);
int xthal_compare_and_set(int* addr, int test_val, int compare_val);
void xthal_clear_regcached_code();
void xthal_window_spill();
void xthal_validate_cp(int anonymous_var_nameX1018);
void xthal_invalidate_cp(int anonymous_var_nameX1019);
void xthal_set_cpenable(unsigned int anonymous_var_nameX1020);
unsigned int xthal_get_cpenable();
unsigned int xthal_get_intenable();
void xthal_set_intenable(unsigned int anonymous_var_nameX1021);
unsigned int xthal_get_interrupt();
void xthal_set_intset(unsigned int anonymous_var_nameX1022);
void xthal_set_intclear(unsigned int anonymous_var_nameX1023);
unsigned int xthal_get_ccount();
void xthal_set_ccompare(int anonymous_var_nameX1024, unsigned int anonymous_var_nameX1025);
unsigned int xthal_get_ccompare(int anonymous_var_nameX1026);
unsigned int xthal_get_prid();
unsigned int xthal_vpri_to_intlevel(unsigned int vpri);
unsigned int xthal_intlevel_to_vpri(unsigned int intlevel);
unsigned int xthal_int_enable(unsigned int anonymous_var_nameX1027);
unsigned int xthal_int_disable(unsigned int anonymous_var_nameX1028);
int xthal_set_int_vpri(int intnum, int vpri);
int xthal_get_int_vpri(int intnum);
void xthal_set_vpri_locklevel(unsigned int intlevel);
unsigned int xthal_get_vpri_locklevel();
unsigned int xthal_set_vpri(unsigned int vpri);
unsigned int xthal_get_vpri();
unsigned int xthal_set_vpri_intlevel(unsigned int intlevel);
unsigned int xthal_set_vpri_lock();
unsigned int xthal_tram_pending_to_service();
void xthal_tram_done(unsigned int serviced_mask);
int xthal_tram_set_sync(int intnum, int sync);
void (*xthal_set_tram_trigger_func(void (*trigger_fn)()))();
unsigned int xthal_get_cacheattr();
unsigned int xthal_get_icacheattr();
unsigned int xthal_get_dcacheattr();
void xthal_set_cacheattr(unsigned int anonymous_var_nameX1029);
void xthal_set_icacheattr(unsigned int anonymous_var_nameX1030);
void xthal_set_dcacheattr(unsigned int anonymous_var_nameX1031);
int xthal_set_region_attribute(void* addr, unsigned int size, unsigned int cattr, unsigned int flags);
void xthal_icache_enable();
void xthal_dcache_enable();
void xthal_icache_disable();
void xthal_dcache_disable();
void xthal_icache_all_invalidate();
void xthal_dcache_all_invalidate();
void xthal_dcache_all_writeback();
void xthal_dcache_all_writeback_inv();
void xthal_icache_all_unlock();
void xthal_dcache_all_unlock();
void xthal_icache_region_lock(void* addr, unsigned int size);
void xthal_dcache_region_lock(void* addr, unsigned int size);
void xthal_icache_region_unlock(void* addr, unsigned int size);
void xthal_dcache_region_unlock(void* addr, unsigned int size);
void xthal_icache_hugerange_invalidate(void* addr, unsigned int size);
void xthal_icache_hugerange_unlock(void* addr, unsigned int size);
void xthal_dcache_hugerange_invalidate(void* addr, unsigned int size);
void xthal_dcache_hugerange_unlock(void* addr, unsigned int size);
void xthal_dcache_hugerange_writeback(void* addr, unsigned int size);
void xthal_dcache_hugerange_writeback_inv(void* addr, unsigned int size);
void xthal_icache_line_lock(void* addr);
void xthal_dcache_line_lock(void* addr);
void xthal_icache_line_unlock(void* addr);
void xthal_dcache_line_unlock(void* addr);
void xthal_memep_inject_error(void* addr, int size, int flags);
int xthal_static_v2p(unsigned int vaddr, unsigned int* paddrp);
int xthal_static_p2v(unsigned int paddr, unsigned int* vaddrp, unsigned int cached);
int xthal_set_region_translation(void* vaddr, void* paddr, unsigned int size, unsigned int cache_atr, unsigned int flags);
int xthal_v2p(void* anonymous_var_nameX1032, void** anonymous_var_nameX1033, unsigned int* anonymous_var_nameX1034, unsigned int* anonymous_var_nameX1035);
int xthal_invalidate_region(void* addr);
int xthal_set_region_translation_raw(void* vaddr, void* paddr, unsigned int cattr);
long  int xthal_is_kernel_readable(unsigned long  int accessRights);
long  int xthal_is_kernel_writeable(unsigned long  int accessRights);
long  int xthal_is_kernel_executable(unsigned long  int accessRights);
long  int xthal_is_user_readable(unsigned long  int accessRights);
long  int xthal_is_user_writeable(unsigned long  int accessRights);
long  int xthal_is_user_executable(unsigned long  int accessRights);
int xthal_encode_memory_type(unsigned long  int x);
long  int xthal_is_cacheable(unsigned long  int memoryType);
long  int xthal_is_writeback(unsigned long  int memoryType);
long  int xthal_is_device(unsigned long  int memoryType);
long  int xthal_read_map(struct xthal_MPU_entry* entries);
void xthal_write_map(const struct xthal_MPU_entry* entries, unsigned long  int n);
int xthal_check_map(const struct xthal_MPU_entry* entries, unsigned long  int n);
struct xthal_MPU_entry xthal_get_entry_for_address(void* vaddr, long  int* infgmap);
unsigned long  int xthal_calc_cacheadrdis(const struct xthal_MPU_entry* e, unsigned long  int n);
int xthal_mpu_set_region_attribute(void* vaddr, unsigned int size, long  int accessRights, long  int memoryType, unsigned long  int flags);
long  int xthal_read_background_map(struct xthal_MPU_entry* entries);
unsigned int _xtos_ints_off(unsigned int mask);
unsigned int _xtos_ints_on(unsigned int mask);
unsigned int _xtos_set_intlevel(int intlevel);
unsigned int _xtos_set_min_intlevel(int intlevel);
unsigned int _xtos_restore_intlevel(unsigned int restoreval);
unsigned int _xtos_restore_just_intlevel(unsigned int restoreval);
void (*_xtos_set_interrupt_handler(int n, void (*f)()))();
void (*_xtos_set_interrupt_handler_arg(int n, void (*f)(), void* arg))();
void (*_xtos_set_exception_handler(int n, void (*f)()))();
void _xtos_memep_initrams();
void _xtos_memep_enable(int flags);
void _xtos_dispatch_level1_interrupts();
void _xtos_dispatch_level2_interrupts();
void _xtos_dispatch_level3_interrupts();
void _xtos_dispatch_level4_interrupts();
void _xtos_dispatch_level5_interrupts();
void _xtos_dispatch_level6_interrupts();
unsigned int _xtos_read_ints();
void _xtos_clear_ints(unsigned int mask);
int _xtos_core_shutoff(unsigned int flags);
int _xtos_core_save(unsigned int flags, struct anonymous_typeX12* savearea, void* code);
void _xtos_core_restore(unsigned int retvalue, struct anonymous_typeX12* savearea);
void _xtos_timer_0_delta(int cycles);
void _xtos_timer_1_delta(int cycles);
void _xtos_timer_2_delta(int cycles);
void (*xt_set_exception_handler(int n, void (*f)(struct anonymous_typeX10*)))(struct anonymous_typeX10*);
void (*xt_set_interrupt_handler(int n, void (*f)(void*), void* arg))(void*);
void xt_ints_on(unsigned int mask);
void xt_ints_off(unsigned int mask);
void* xt_get_interrupt_handler_arg(int n);
_Bool xt_int_has_handler(int intr, int cpu);
const char* esp_err_to_name(int code);
const char* esp_err_to_name_r(int code, char* buf, unsigned int buflen);
void _esp_error_check_failed(int rc, const char* file, int line, const char* function, const char* expression);
void _esp_error_check_failed_without_abort(int rc, const char* file, int line, const char* function, const char* expression);
int esp_intr_mark_shared(int intno, int cpu, _Bool is_in_iram);
int esp_intr_reserve(int intno, int cpu);
int esp_intr_alloc(int source, int flags, void (*handler)(void*), void* arg, struct intr_handle_data_t** ret_handle);
int esp_intr_alloc_intrstatus(int source, int flags, unsigned long  int intrstatusreg, unsigned long  int intrstatusmask, void (*handler)(void*), void* arg, struct intr_handle_data_t** ret_handle);
int esp_intr_free(struct intr_handle_data_t* handle);
int esp_intr_get_cpu(struct intr_handle_data_t* handle);
int esp_intr_get_intno(struct intr_handle_data_t* handle);
int esp_intr_disable(struct intr_handle_data_t* handle);
int esp_intr_enable(struct intr_handle_data_t* handle);
int esp_intr_set_in_iram(struct intr_handle_data_t* handle, _Bool is_in_iram);
void esp_intr_noniram_disable();
void esp_intr_noniram_enable();
void esp_intr_enable_source(int inum);
void esp_intr_disable_source(int inum);
int esp_intr_dump(struct __sFILE* stream);
_Bool esp_intr_ptr_in_isr_region(void* ptr);
void esp_cpu_stall(int core_id);
void esp_cpu_unstall(int core_id);
void esp_cpu_reset(int core_id);
void esp_cpu_wait_for_intr();
void esp_cpu_intr_get_desc(int core_id, int intr_num, struct anonymous_typeX15* intr_desc_ret);
void esp_cpu_configure_region_protection();
int esp_cpu_set_breakpoint(int bp_num, const void* bp_addr);
int esp_cpu_clear_breakpoint(int bp_num);
int esp_cpu_set_watchpoint(int wp_num, const void* wp_addr, unsigned int size, enum anonymous_typeY16 trigger);
int esp_cpu_clear_watchpoint(int wp_num);
_Bool esp_cpu_compare_and_set(unsigned long  int* addr, unsigned long  int compare_value, unsigned long  int new_value);
void esp_crosscore_int_init();
void esp_crosscore_int_send_yield(int core_id);
void esp_crosscore_int_send_freq_switch(int core_id);
void esp_crosscore_int_send_gdb_call(int core_id);
void esp_crosscore_int_send_print_backtrace(int core_id);
void esp_crosscore_int_send_twdt_abort(int core_id);
_Bool esp_ptr_dma_ext_capable(const void* p);
_Bool esp_ptr_byte_accessible(const void* p);
_Bool esp_ptr_external_ram(const void* p);
void esp_libc_init();
void esp_setup_syscall_table();
void esp_libc_init_global_stdio();
void esp_libc_time_init();
void esp_reent_init(struct _reent* r);
void esp_reent_cleanup();
void esp_set_time_from_rtc();
void esp_sync_timekeeping_timers();
void esp_libc_locks_init();
void esp_newlib_time_init();
void esp_newlib_init();
void esp_newlib_locks_init();
void* multi_heap_aligned_alloc(struct multi_heap_info* heap, unsigned int size, unsigned int alignment);
void* multi_heap_malloc(struct multi_heap_info* heap, unsigned int size);
void multi_heap_aligned_free(struct multi_heap_info* heap, void* p);
void multi_heap_free(struct multi_heap_info* heap, void* p);
void* multi_heap_realloc(struct multi_heap_info* heap, void* p, unsigned int size);
unsigned int multi_heap_get_allocated_size(struct multi_heap_info* heap, void* p);
struct multi_heap_info* multi_heap_register(void* start, unsigned int size);
void multi_heap_set_lock(struct multi_heap_info* heap, void* lock);
void multi_heap_dump(struct multi_heap_info* heap);
_Bool multi_heap_check(struct multi_heap_info* heap, _Bool print_errors);
unsigned int multi_heap_free_size(struct multi_heap_info* heap);
unsigned int multi_heap_minimum_free_size(struct multi_heap_info* heap);
void multi_heap_get_info(struct multi_heap_info* heap, struct anonymous_typeX19* info);
void* multi_heap_aligned_alloc_offs(struct multi_heap_info* heap, unsigned int size, unsigned int alignment, unsigned int offset);
unsigned int multi_heap_reset_minimum_free_bytes(struct multi_heap_info* heap);
void multi_heap_restore_minimum_free_bytes(struct multi_heap_info* heap, const unsigned int new_minimum_free_bytes_value);
void multi_heap_walk(struct multi_heap_info* heap, _Bool (*walker_func)(void*,unsigned int,int,void*), void* user_data);
int heap_caps_register_failed_alloc_callback(void (*callback)(unsigned int,unsigned long  int,const char*));
void* heap_caps_malloc(unsigned int size, unsigned long  int caps);
void heap_caps_free(void* ptr);
void* heap_caps_realloc(void* ptr, unsigned int size, unsigned long  int caps);
void* heap_caps_aligned_alloc(unsigned int alignment, unsigned int size, unsigned long  int caps);
void heap_caps_aligned_free(void* ptr);
void* heap_caps_aligned_calloc(unsigned int alignment, unsigned int n, unsigned int size, unsigned long  int caps);
void* heap_caps_calloc(unsigned int n, unsigned int size, unsigned long  int caps);
unsigned int heap_caps_get_total_size(unsigned long  int caps);
unsigned int heap_caps_get_free_size(unsigned long  int caps);
unsigned int heap_caps_get_minimum_free_size(unsigned long  int caps);
unsigned int heap_caps_get_largest_free_block(unsigned long  int caps);
int heap_caps_monitor_local_minimum_free_size_start();
int heap_caps_monitor_local_minimum_free_size_stop();
void heap_caps_get_info(struct anonymous_typeX19* info, unsigned long  int caps);
void heap_caps_print_heap_info(unsigned long  int caps);
_Bool heap_caps_check_integrity_all(_Bool print_errors);
_Bool heap_caps_check_integrity(unsigned long  int caps, _Bool print_errors);
_Bool heap_caps_check_integrity_addr(int addr, _Bool print_errors);
void heap_caps_malloc_extmem_enable(unsigned int limit);
void* heap_caps_malloc_prefer(unsigned int size, unsigned int num, ...);
void* heap_caps_realloc_prefer(void* ptr, unsigned int size, unsigned int num, ...);
void* heap_caps_calloc_prefer(unsigned int n, unsigned int size, unsigned int num, ...);
void heap_caps_dump(unsigned long  int caps);
void heap_caps_dump_all();
unsigned int heap_caps_get_allocated_size(void* ptr);
void heap_caps_walk(unsigned long  int caps, _Bool (*walker_func)(struct walker_heap_info,struct walker_block_info,void*), void* user_data);
void heap_caps_walk_all(_Bool (*walker_func)(struct walker_heap_info,struct walker_block_info,void*), void* user_data);
long long int imaxabs(long long int anonymous_var_nameX1039);
struct anonymous_typeX20 imaxdiv(long long int __numer, long long int __denomer);
long long int strtoimax(const char* anonymous_var_nameX1040, char** anonymous_var_nameX1041, int anonymous_var_nameX1042);
long long int _strtoimax_r(struct _reent* anonymous_var_nameX1043, const char* anonymous_var_nameX1044, char** anonymous_var_nameX1045, int anonymous_var_nameX1046);
unsigned long long int strtoumax(const char* anonymous_var_nameX1047, char** anonymous_var_nameX1048, int anonymous_var_nameX1049);
unsigned long long int _strtoumax_r(struct _reent* anonymous_var_nameX1050, const char* anonymous_var_nameX1051, char** anonymous_var_nameX1052, int anonymous_var_nameX1053);
long long int wcstoimax(const unsigned int* anonymous_var_nameX1054, unsigned int** anonymous_var_nameX1055, int anonymous_var_nameX1056);
long long int _wcstoimax_r(struct _reent* anonymous_var_nameX1057, const unsigned int* anonymous_var_nameX1058, unsigned int** anonymous_var_nameX1059, int anonymous_var_nameX1060);
unsigned long long int wcstoumax(const unsigned int* anonymous_var_nameX1061, unsigned int** anonymous_var_nameX1062, int anonymous_var_nameX1063);
unsigned long long int _wcstoumax_r(struct _reent* anonymous_var_nameX1064, const unsigned int* anonymous_var_nameX1065, unsigned int** anonymous_var_nameX1066, int anonymous_var_nameX1067);
long long int strtoimax_l(const char* anonymous_var_nameX1068, char** _restrict, int anonymous_var_nameX1069, struct __locale_t* anonymous_var_nameX1070);
unsigned long long int strtoumax_l(const char* anonymous_var_nameX1071, char** _restrict, int anonymous_var_nameX1072, struct __locale_t* anonymous_var_nameX1073);
long long int wcstoimax_l(const unsigned int* anonymous_var_nameX1074, unsigned int** _restrict, int anonymous_var_nameX1075, struct __locale_t* anonymous_var_nameX1076);
unsigned long long int wcstoumax_l(const unsigned int* anonymous_var_nameX1077, unsigned int** _restrict, int anonymous_var_nameX1078, struct __locale_t* anonymous_var_nameX1079);
void esp_rom_software_reset_system();
void esp_rom_software_reset_cpu(int cpu_no);
int esp_rom_printf(const char* fmt, ...);
int esp_rom_vprintf(const char* fmt, va_list ap);
int esp_rom_cvt(unsigned long  long val, long radix, int pad, const char* digits, char* buf);
void esp_rom_delay_us(unsigned long  int us);
void esp_rom_install_channel_putc(int channel, void (*putc)(char));
void esp_rom_output_to_channels(char c);
void esp_rom_install_uart_printf();
enum anonymous_typeY21 esp_rom_get_reset_reason(int cpu_no);
void esp_rom_route_intr_matrix(int cpu_core, unsigned long  int periph_intr_id, unsigned long  int cpu_intr_num);
unsigned long  int esp_rom_get_cpu_ticks_per_us();
void esp_rom_set_cpu_ticks_per_us(unsigned long  int ticks_per_us);
const char* esp_get_idf_version();
int esp_register_shutdown_handler(void (*handle)());
int esp_unregister_shutdown_handler(void (*handle)());
void esp_restart();
enum anonymous_typeY22 esp_reset_reason();
unsigned long  int esp_get_free_heap_size();
unsigned long  int esp_get_free_internal_heap_size();
unsigned long  int esp_get_minimum_free_heap_size();
void esp_system_abort(const char* details);
int xPortInIsrContext();
void vPortAssertIfInISR();
int xPortInterruptedFromISRContext();
int xPortEnterCriticalTimeout(struct anonymous_typeX17* mux, int timeout);
void vPortExitCritical(struct anonymous_typeX17* mux);
int xPortEnterCriticalTimeoutCompliance(struct anonymous_typeX17* mux, int timeout);
void vPortExitCriticalCompliance(struct anonymous_typeX17* mux);
void vPortYield();
void vPortYieldOtherCore(int coreid);
void vApplicationSleep(unsigned long  int xExpectedIdleTime);
unsigned long  int xPortGetTickRateHz();
void vPortSetStackWatchpoint(void* pxStackStart);
void vPortTCBPreDeleteHook(void* pxTCB);
void _frxt_setup_switch();
_Bool xPortCheckValidListMem(const void* ptr);
_Bool xPortCheckValidTCBMem(const void* ptr);
_Bool xPortcheckValidStackMem(const void* ptr);
unsigned char* pxPortInitialiseStack(unsigned char* pxTopOfStack, void (*pxCode)(void*), void* pvParameters);
void vPortDefineHeapRegions(const struct HeapRegion* pxHeapRegions);
void vPortGetHeapStats(struct xHeapStats* pxHeapStats);
void* pvPortMalloc(unsigned int xSize);
void* pvPortCalloc(unsigned int xNum, unsigned int xSize);
void vPortFree(void* pv);
void vPortInitialiseBlocks();
unsigned int xPortGetFreeHeapSize();
unsigned int xPortGetMinimumEverFreeHeapSize();
int xPortStartScheduler();
void vPortEndScheduler();
int _close_r(struct _reent* anonymous_var_nameX1080, int anonymous_var_nameX1081);
int _execve_r(struct _reent* anonymous_var_nameX1082, const char* anonymous_var_nameX1083, char** anonymous_var_nameX1084, char** anonymous_var_nameX1085);
int _fcntl_r(struct _reent* anonymous_var_nameX1086, int anonymous_var_nameX1087, int anonymous_var_nameX1088, int anonymous_var_nameX1089);
int _fork_r(struct _reent* anonymous_var_nameX1090);
int _fstat_r(struct _reent* anonymous_var_nameX1091, int anonymous_var_nameX1092, struct stat* anonymous_var_nameX1093);
int _getpid_r(struct _reent* anonymous_var_nameX1094);
int _isatty_r(struct _reent* anonymous_var_nameX1095, int anonymous_var_nameX1096);
int _kill_r(struct _reent* anonymous_var_nameX1097, int anonymous_var_nameX1098, int anonymous_var_nameX1099);
int _link_r(struct _reent* anonymous_var_nameX1100, const char* anonymous_var_nameX1101, const char* anonymous_var_nameX1102);
long _lseek_r(struct _reent* anonymous_var_nameX1103, int anonymous_var_nameX1104, long anonymous_var_nameX1105, int anonymous_var_nameX1106);
int _mkdir_r(struct _reent* anonymous_var_nameX1107, const char* anonymous_var_nameX1108, int anonymous_var_nameX1109);
int _open_r(struct _reent* anonymous_var_nameX1110, const char* anonymous_var_nameX1111, int anonymous_var_nameX1112, int anonymous_var_nameX1113);
int _read_r(struct _reent* anonymous_var_nameX1114, int anonymous_var_nameX1115, void* anonymous_var_nameX1116, unsigned int anonymous_var_nameX1117);
int _rename_r(struct _reent* anonymous_var_nameX1118, const char* anonymous_var_nameX1119, const char* anonymous_var_nameX1120);
void* _sbrk_r(struct _reent* anonymous_var_nameX1121, int anonymous_var_nameX1122);
int _stat_r(struct _reent* anonymous_var_nameX1123, const char* anonymous_var_nameX1124, struct stat* anonymous_var_nameX1125);
unsigned long  int _times_r(struct _reent* anonymous_var_nameX1126, struct tms* anonymous_var_nameX1127);
int _unlink_r(struct _reent* anonymous_var_nameX1128, const char* anonymous_var_nameX1129);
int _wait_r(struct _reent* anonymous_var_nameX1130, int* anonymous_var_nameX1131);
int _write_r(struct _reent* anonymous_var_nameX1132, int anonymous_var_nameX1133, const void* anonymous_var_nameX1134, unsigned int anonymous_var_nameX1135);
int _getentropy_r(struct _reent* anonymous_var_nameX1136, void* anonymous_var_nameX1137, unsigned int anonymous_var_nameX1138);
int _gettimeofday_r(struct _reent* anonymous_var_nameX1139, struct timeval* __tp, void* __tzp);
void vListInitialise(struct xLIST* pxList);
void vListInitialiseItem(struct xLIST_ITEM* pxItem);
void vListInsert(struct xLIST* pxList, struct xLIST_ITEM* pxNewListItem);
void vListInsertEnd(struct xLIST* pxList, struct xLIST_ITEM* pxNewListItem);
unsigned int uxListRemove(struct xLIST_ITEM* pxItemToRemove);
int xTaskCreatePinnedToCore(void (*pxTaskCode)(void*), const char* pcName, const unsigned long  int usStackDepth, void* pvParameters, unsigned int uxPriority, struct tskTaskControlBlock** pvCreatedTask, const int xCoreID);
struct tskTaskControlBlock* xTaskCreateStaticPinnedToCore(void (*pxTaskCode)(void*), const char* pcName, const unsigned long  int ulStackDepth, void* pvParameters, unsigned int uxPriority, unsigned char* pxStackBuffer, struct xSTATIC_TCB* pxTaskBuffer, const int xCoreID);
void vTaskAllocateMPURegions(struct tskTaskControlBlock* xTask, const struct xMEMORY_REGION* pxRegions);
void vTaskDelete(struct tskTaskControlBlock* xTaskToDelete);
void vTaskDelay(const unsigned long  int xTicksToDelay);
int xTaskDelayUntil(unsigned long  int* pxPreviousWakeTime, const unsigned long  int xTimeIncrement);
int xTaskAbortDelay(struct tskTaskControlBlock* xTask);
unsigned int uxTaskPriorityGet(const struct tskTaskControlBlock* xTask);
unsigned int uxTaskPriorityGetFromISR(const struct tskTaskControlBlock* xTask);
enum anonymous_typeY25 eTaskGetState(struct tskTaskControlBlock* xTask);
void vTaskGetInfo(struct tskTaskControlBlock* xTask, struct xTASK_STATUS* pxTaskStatus, int xGetFreeStackSpace, enum anonymous_typeY25 eState);
void vTaskPrioritySet(struct tskTaskControlBlock* xTask, unsigned int uxNewPriority);
void vTaskSuspend(struct tskTaskControlBlock* xTaskToSuspend);
void vTaskResume(struct tskTaskControlBlock* xTaskToResume);
int xTaskResumeFromISR(struct tskTaskControlBlock* xTaskToResume);
void vTaskStartScheduler();
void vTaskEndScheduler();
void vTaskSuspendAll();
int xTaskResumeAll();
unsigned long  int xTaskGetTickCount();
unsigned long  int xTaskGetTickCountFromISR();
unsigned int uxTaskGetNumberOfTasks();
char* pcTaskGetName(struct tskTaskControlBlock* xTaskToQuery);
struct tskTaskControlBlock* xTaskGetHandle(const char* pcNameToQuery);
int xTaskGetStaticBuffers(struct tskTaskControlBlock* xTask, unsigned char** ppuxStackBuffer, struct xSTATIC_TCB** ppxTaskBuffer);
unsigned int uxTaskGetStackHighWaterMark(struct tskTaskControlBlock* xTask);
unsigned long  int uxTaskGetStackHighWaterMark2(struct tskTaskControlBlock* xTask);
void vTaskSetThreadLocalStoragePointer(struct tskTaskControlBlock* xTaskToSet, int xIndex, void* pvValue);
void* pvTaskGetThreadLocalStoragePointer(struct tskTaskControlBlock* xTaskToQuery, int xIndex);
void vApplicationStackOverflowHook(struct tskTaskControlBlock* xTask, char* pcTaskName);
void vApplicationGetIdleTaskMemory(struct xSTATIC_TCB** ppxIdleTaskTCBBuffer, unsigned char** ppxIdleTaskStackBuffer, unsigned long  int* pulIdleTaskStackSize);
int xTaskCallApplicationTaskHook(struct tskTaskControlBlock* xTask, void* pvParameter);
struct tskTaskControlBlock* xTaskGetIdleTaskHandle();
unsigned int uxTaskGetSystemState(struct xTASK_STATUS* pxTaskStatusArray, const unsigned int uxArraySize, unsigned long  int* pulTotalRunTime);
void vTaskList(char* pcWriteBuffer);
void vTaskGetRunTimeStats(char* pcWriteBuffer);
unsigned long  int ulTaskGetIdleRunTimeCounter();
unsigned long  int ulTaskGetIdleRunTimePercent();
int xTaskGenericNotify(struct tskTaskControlBlock* xTaskToNotify, unsigned int uxIndexToNotify, unsigned long  int ulValue, enum anonymous_typeY26 eAction, unsigned long  int* pulPreviousNotificationValue);
int xTaskGenericNotifyFromISR(struct tskTaskControlBlock* xTaskToNotify, unsigned int uxIndexToNotify, unsigned long  int ulValue, enum anonymous_typeY26 eAction, unsigned long  int* pulPreviousNotificationValue, int* pxHigherPriorityTaskWoken);
int xTaskGenericNotifyWait(unsigned int uxIndexToWaitOn, unsigned long  int ulBitsToClearOnEntry, unsigned long  int ulBitsToClearOnExit, unsigned long  int* pulNotificationValue, unsigned long  int xTicksToWait);
void vTaskGenericNotifyGiveFromISR(struct tskTaskControlBlock* xTaskToNotify, unsigned int uxIndexToNotify, int* pxHigherPriorityTaskWoken);
unsigned long  int ulTaskGenericNotifyTake(unsigned int uxIndexToWaitOn, int xClearCountOnExit, unsigned long  int xTicksToWait);
int xTaskGenericNotifyStateClear(struct tskTaskControlBlock* xTask, unsigned int uxIndexToClear);
unsigned long  int ulTaskGenericNotifyValueClear(struct tskTaskControlBlock* xTask, unsigned int uxIndexToClear, unsigned long  int ulBitsToClear);
void vTaskSetTimeOutState(struct xTIME_OUT* pxTimeOut);
int xTaskCheckForTimeOut(struct xTIME_OUT* pxTimeOut, unsigned long  int* pxTicksToWait);
int xTaskCatchUpTicks(unsigned long  int xTicksToCatchUp);
int xTaskIncrementTick();
void vTaskPlaceOnEventList(struct xLIST* pxEventList, const unsigned long  int xTicksToWait);
void vTaskPlaceOnUnorderedEventList(struct xLIST* pxEventList, const unsigned long  int xItemValue, const unsigned long  int xTicksToWait);
void vTaskPlaceOnEventListRestricted(struct xLIST* pxEventList, unsigned long  int xTicksToWait, const int xWaitIndefinitely);
int xTaskRemoveFromEventList(const struct xLIST* pxEventList);
void vTaskRemoveFromUnorderedEventList(struct xLIST_ITEM* pxEventListItem, const unsigned long  int xItemValue);
void vTaskSwitchContext();
unsigned long  int uxTaskResetEventItemValue();
struct tskTaskControlBlock* xTaskGetCurrentTaskHandle();
void vTaskMissedYield();
int xTaskGetSchedulerState();
int xTaskPriorityInherit(struct tskTaskControlBlock* pxMutexHolder);
int xTaskPriorityDisinherit(struct tskTaskControlBlock* pxMutexHolder);
void vTaskPriorityDisinheritAfterTimeout(struct tskTaskControlBlock* pxMutexHolder, unsigned int uxHighestPriorityWaitingTask);
unsigned int uxTaskGetTaskNumber(struct tskTaskControlBlock* xTask);
void vTaskSetTaskNumber(struct tskTaskControlBlock* xTask, const unsigned int uxHandle);
void vTaskStepTick(unsigned long  int xTicksToJump);
enum anonymous_typeY27 eTaskConfirmSleepModeStatus();
struct tskTaskControlBlock* pvTaskIncrementMutexHeldCount();
void vTaskInternalSetTimeOutState(struct xTIME_OUT* pxTimeOut);
void esp_rom_gpio_pad_select_gpio(unsigned long  int iopad_num);
void esp_rom_gpio_pad_pullup_only(unsigned long  int iopad_num);
void esp_rom_gpio_pad_unhold(unsigned long  int gpio_num);
void esp_rom_gpio_pad_set_drv(unsigned long  int iopad_num, unsigned long  int drv);
void esp_rom_gpio_connect_in_signal(unsigned long  int gpio_num, unsigned long  int signal_idx, _Bool inv);
void esp_rom_gpio_connect_out_signal(unsigned long  int gpio_num, unsigned long  int signal_idx, _Bool out_inv, _Bool oen_inv);
int esp_etm_new_channel(const struct anonymous_typeX36* config, struct esp_etm_channel_t** ret_chan);
int esp_etm_del_channel(struct esp_etm_channel_t* chan);
int esp_etm_channel_enable(struct esp_etm_channel_t* chan);
int esp_etm_channel_disable(struct esp_etm_channel_t* chan);
int esp_etm_channel_connect(struct esp_etm_channel_t* chan, struct esp_etm_event_t* event, struct esp_etm_task_t* task);
int esp_etm_del_event(struct esp_etm_event_t* event);
int esp_etm_del_task(struct esp_etm_task_t* task);
int esp_etm_dump(struct __sFILE* out_stream);
int gpio_new_etm_event(const struct anonymous_typeX38* config, struct esp_etm_event_t** ret_event, ...);
int gpio_etm_event_bind_gpio(struct esp_etm_event_t* event, int gpio_num);
int gpio_new_etm_task(const struct anonymous_typeX42* config, struct esp_etm_task_t** ret_task, ...);
int gpio_etm_task_add_gpio(struct esp_etm_task_t* task, int gpio_num);
int gpio_etm_task_rm_gpio(struct esp_etm_task_t* task, int gpio_num);
int gpio_config(const struct anonymous_typeX45* pGPIOConfig);
int gpio_reset_pin(enum anonymous_typeY28 gpio_num);
int gpio_set_intr_type(enum anonymous_typeY28 gpio_num, enum anonymous_typeY30 intr_type);
int gpio_intr_enable(enum anonymous_typeY28 gpio_num);
int gpio_intr_disable(enum anonymous_typeY28 gpio_num);
int gpio_set_level(enum anonymous_typeY28 gpio_num, unsigned long  int level);
int gpio_get_level(enum anonymous_typeY28 gpio_num);
int gpio_set_direction(enum anonymous_typeY28 gpio_num, enum anonymous_typeY31 mode);
int gpio_input_enable(enum anonymous_typeY28 gpio_num);
int gpio_set_pull_mode(enum anonymous_typeY28 gpio_num, enum anonymous_typeY34 pull);
int gpio_wakeup_enable(enum anonymous_typeY28 gpio_num, enum anonymous_typeY30 intr_type);
int gpio_wakeup_disable(enum anonymous_typeY28 gpio_num);
int gpio_isr_register(void (*fn)(void*), void* arg, int intr_alloc_flags, struct intr_handle_data_t** handle);
int gpio_pullup_en(enum anonymous_typeY28 gpio_num);
int gpio_pullup_dis(enum anonymous_typeY28 gpio_num);
int gpio_pulldown_en(enum anonymous_typeY28 gpio_num);
int gpio_pulldown_dis(enum anonymous_typeY28 gpio_num);
int gpio_install_isr_service(int intr_alloc_flags);
void gpio_uninstall_isr_service();
int gpio_isr_handler_add(enum anonymous_typeY28 gpio_num, void (*isr_handler)(void*), void* args);
int gpio_isr_handler_remove(enum anonymous_typeY28 gpio_num);
int gpio_set_drive_capability(enum anonymous_typeY28 gpio_num, enum anonymous_typeY35 strength);
int gpio_get_drive_capability(enum anonymous_typeY28 gpio_num, enum anonymous_typeY35* strength);
int gpio_hold_en(enum anonymous_typeY28 gpio_num);
int gpio_hold_dis(enum anonymous_typeY28 gpio_num);
void gpio_deep_sleep_hold_en();
void gpio_deep_sleep_hold_dis();
void gpio_iomux_in(unsigned long  int gpio_num, unsigned long  int signal_idx);
void gpio_iomux_out(unsigned char gpio_num, int func, _Bool out_en_inv);
int gpio_sleep_sel_en(enum anonymous_typeY28 gpio_num);
int gpio_sleep_sel_dis(enum anonymous_typeY28 gpio_num);
int gpio_sleep_set_direction(enum anonymous_typeY28 gpio_num, enum anonymous_typeY31 mode);
int gpio_sleep_set_pull_mode(enum anonymous_typeY28 gpio_num, enum anonymous_typeY34 pull);
int gpio_dump_io_configuration(struct __sFILE* out_stream, unsigned long long int io_bit_mask);
int gpio_get_io_config(enum anonymous_typeY28 gpio_num, _Bool* pu, _Bool* pd, _Bool* ie, _Bool* oe, _Bool* od, unsigned long  int* drv, unsigned long  int* fun_sel, unsigned long  int* sig_out, _Bool* slp_sel);
void app_main();
// uniq global variable
// inline function
static int __sputc_r(struct _reent* _ptr, int _c, struct __sFILE* _p){
    if(    --_p->_w>=0||(_p->_w>=_p->_lbfsize&&(char)_c!=10)) {
        return (*_p->_p++=_c);
    }
    else {
        return (__swbuf_r(_ptr,_c,_p));
    }
}
static int _getchar_unlocked(){
struct _reent* _ptr_0;
_ptr_0 = (void*)0;
    _ptr_0=(__getreent());
    return ((((--(((_ptr_0)->_stdin))->_r<0)?(__srget_r(_ptr_0,((_ptr_0)->_stdin))):((int)(*(((_ptr_0)->_stdin))->_p++)))));
}
static int _putchar_unlocked(int _c){
struct _reent* _ptr_1;
_ptr_1 = (void*)0;
    _ptr_1=(__getreent());
    return (__sputc_r(_ptr_1,_c,((_ptr_1)->_stdout)));
}
static void _xtos_interrupt_enable(unsigned int intnum){
    _xtos_ints_on(1<<intnum);
}
static void _xtos_interrupt_disable(unsigned int intnum){
    _xtos_ints_off(1<<intnum);
}
static void xt_set_intset(unsigned int arg){
    xthal_set_intset(arg);
}
static void xt_set_intclear(unsigned int arg){
    xthal_set_intclear(arg);
}
static unsigned long  int xt_utils_get_core_id(){
unsigned long  int id_2;
memset(&id_2, 0, sizeof(unsigned long  int));
    __asm volatile("rsr.prid %0\n"
        "extui %0,%0,13,1"
        :"=r"(id_2));
    return id_2;
}
static unsigned long  int xt_utils_get_raw_core_id(){
unsigned long  int id_3;
memset(&id_3, 0, sizeof(unsigned long  int));
    __asm volatile("rsr.prid %0\n"
        :"=r"(id_3));
    return id_3;
}
static void* xt_utils_get_sp(){
void* sp_4;
sp_4 = (void*)0;
    __asm volatile("mov %0, sp;" : "=r" (sp_4));
    return sp_4;
}
static unsigned long  int xt_utils_get_cycle_count(){
unsigned long  int ccount_5;
memset(&ccount_5, 0, sizeof(unsigned long  int));
    __asm volatile("rsr %0, %1" : "=r" (ccount_5): "i" (234));
    return ccount_5;
}
static void xt_utils_set_cycle_count(unsigned long  int ccount){
    __asm volatile("wsr %0, %1" : : "r" (ccount), "i" (234));
}
static void xt_utils_wait_for_intr(){
    __asm volatile("waiti 0\n");
}
static void xt_utils_set_vecbase(unsigned long  int vecbase){
    __asm volatile("wsr %0, vecbase" :: "r" (vecbase));
}
static unsigned long  int xt_utils_intr_get_enabled_mask(){
unsigned long  int intr_mask_6;
memset(&intr_mask_6, 0, sizeof(unsigned long  int));
    __asm volatile("rsr %0, %1" : "=r" (intr_mask_6): "i" (228));
    return intr_mask_6;
}
static void xt_utils_set_breakpoint(int bp_num, unsigned long  int bp_addr){
unsigned long  int brk_ena_reg_7;
memset(&brk_ena_reg_7, 0, sizeof(unsigned long  int));
    if(    bp_num==1) {
        __asm volatile("wsr %0, %1" : : "r" (bp_addr), "i" (129));
    }
    else {
        __asm volatile("wsr %0, %1" : : "r" (bp_addr), "i" (128));
    }
    __asm volatile("rsr %0, %1" : "=r" (brk_ena_reg_7): "i" (96));
    brk_ena_reg_7|=(1<<(bp_num));
    __asm volatile("wsr %0, %1" : : "r" (brk_ena_reg_7), "i" (96));
}
static void xt_utils_clear_breakpoint(int bp_num){
unsigned long  int bp_en_8;
unsigned long  int bp_addr_9;
    bp_en_8=0;
    __asm volatile("rsr %0, %1" : "=r" (bp_en_8): "i" (96));
    bp_en_8&=~(1<<(bp_num));
    __asm volatile("wsr %0, %1" : : "r" (bp_en_8), "i" (96));
    bp_addr_9=0;
    if(    bp_num==1) {
        __asm volatile("wsr %0, %1" : : "r" (bp_addr_9), "i" (129));
    }
    else {
        __asm volatile("wsr %0, %1" : : "r" (bp_addr_9), "i" (128));
    }
}
static void xt_utils_set_watchpoint(int wp_num, unsigned long  int wp_addr, unsigned int size, _Bool on_read, _Bool on_write){
unsigned long  int dbreakc_reg_10;
    dbreakc_reg_10=63;
    dbreakc_reg_10=dbreakc_reg_10<<(__builtin_ffsll(size)-1);
    dbreakc_reg_10=dbreakc_reg_10&63;
    if(    on_read) {
        dbreakc_reg_10|=(1<<(30));
    }
    if(    on_write) {
        dbreakc_reg_10|=(1<<(31));
    }
    if(    wp_num==1) {
        __asm volatile("wsr %0, %1" : : "r" ((unsigned long  int)wp_addr), "i" (145));
        __asm volatile("wsr %0, %1" : : "r" (dbreakc_reg_10), "i" (161));
    }
    else {
        __asm volatile("wsr %0, %1" : : "r" ((unsigned long  int)wp_addr), "i" (144));
        __asm volatile("wsr %0, %1" : : "r" (dbreakc_reg_10), "i" (160));
    }
}
static void xt_utils_clear_watchpoint(int wp_num){
    if(    wp_num==1) {
        __asm volatile("wsr %0, %1" : : "r" (0), "i" (161));
        __asm volatile("wsr %0, %1" : : "r" (0), "i" (145));
    }
    else {
        __asm volatile("wsr %0, %1" : : "r" (0), "i" (160));
        __asm volatile("wsr %0, %1" : : "r" (0), "i" (144));
    }
}
static _Bool xt_utils_dbgr_is_attached(){
unsigned long  int dcr_11;
unsigned long  int reg_12;
    dcr_11=0;
    reg_12=1056780;
    __asm volatile("rer %0, %1" : "=r" (dcr_11): "r" (reg_12));
    return (_Bool)(dcr_11&1);
}
static void xt_utils_dbgr_break(){
    __asm ("break 1,15");
}
static _Bool xt_utils_compare_and_set(unsigned long  int* addr, unsigned long  int compare_value, unsigned long  int new_value){
unsigned long  int old_value_13;
    old_value_13=new_value;
    __asm __volatile__("WSR    %2, SCOMPARE1 \n"
        "S32C1I %0, %1, 0 \n"
        :"=r"(old_value_13):"r"(addr), "r"(compare_value), "0"(old_value_13));
    return (old_value_13==compare_value);
}
static int esp_intr_flags_to_level(int flags){
    return __builtin_ffs((flags&((1<<1)|(1<<2)|(1<<3)|(1<<4)|(1<<5)|(1<<6)|(1<<7)))>>1);
}
static int esp_intr_level_to_flags(int level){
    return (((level>0))?((1<<level)&((1<<1)|(1<<2)|(1<<3)|(1<<4)|(1<<5)|(1<<6)|(1<<7))):(0));
}
static int esp_cpu_get_core_id(){
    return (int)xt_utils_get_core_id();
}
static int esp_cpu_get_curr_privilege_level(){
    return -1;
}
static void* esp_cpu_get_sp(){
    return xt_utils_get_sp();
}
static unsigned long  int esp_cpu_get_cycle_count(){
    return (unsigned long  int)xt_utils_get_cycle_count();
}
static void esp_cpu_set_cycle_count(unsigned long  int cycle_count){
    xt_utils_set_cycle_count((unsigned long  int)cycle_count);
}
static void* esp_cpu_pc_to_addr(unsigned long  int pc){
    return (void*)((pc&1073741823)|1073741824);
}
static void esp_cpu_intr_set_ivt_addr(const void* ivt_addr){
    xt_utils_set_vecbase((unsigned long  int)ivt_addr);
}
static _Bool esp_cpu_intr_has_handler(int intr_num){
_Bool has_handler_14;
memset(&has_handler_14, 0, sizeof(_Bool));
    (((__builtin_expect(!!!(intr_num>=0&&intr_num<32),1))?((void)0):(__assert_func((__builtin_strrchr("//Users/ab25cq/esp-idf/components/esp_hw_support/include/esp_cpu.h",47)+1),348,"esp_cpu_intr_has_handler","intr_num >= 0 && intr_num < SOC_CPU_INTR_NUM"))));
    has_handler_14=xt_int_has_handler(intr_num,esp_cpu_get_core_id());
    return has_handler_14;
}
static void esp_cpu_intr_set_handler(int intr_num, void (*handler)(void*), void* handler_arg){
    (((__builtin_expect(!!!(intr_num>=0&&intr_num<32),1))?((void)0):(__assert_func((__builtin_strrchr("//Users/ab25cq/esp-idf/components/esp_hw_support/include/esp_cpu.h",47)+1),372,"esp_cpu_intr_set_handler","intr_num >= 0 && intr_num < SOC_CPU_INTR_NUM"))));
    xt_set_interrupt_handler(intr_num,(void (*)(void*))handler,handler_arg);
}
static void* esp_cpu_intr_get_handler_arg(int intr_num){
void* handler_arg_15;
handler_arg_15 = (void*)0;
    (((__builtin_expect(!!!(intr_num>=0&&intr_num<32),1))?((void)0):(__assert_func((__builtin_strrchr("//Users/ab25cq/esp-idf/components/esp_hw_support/include/esp_cpu.h",47)+1),390,"esp_cpu_intr_get_handler_arg","intr_num >= 0 && intr_num < SOC_CPU_INTR_NUM"))));
    handler_arg_15=xt_get_interrupt_handler_arg(intr_num);
    return handler_arg_15;
}
static void esp_cpu_intr_enable(unsigned long  int intr_mask){
    xt_ints_on(intr_mask);
}
static void esp_cpu_intr_disable(unsigned long  int intr_mask){
    xt_ints_off(intr_mask);
}
static unsigned long  int esp_cpu_intr_get_enabled_mask(){
    return xt_utils_intr_get_enabled_mask();
}
static void esp_cpu_intr_edge_ack(int intr_num){
    (((__builtin_expect(!!!(intr_num>=0&&intr_num<32),1))?((void)0):(__assert_func((__builtin_strrchr("//Users/ab25cq/esp-idf/components/esp_hw_support/include/esp_cpu.h",47)+1),451,"esp_cpu_intr_edge_ack","intr_num >= 0 && intr_num < SOC_CPU_INTR_NUM"))));
    xthal_set_intclear((unsigned int)(1<<intr_num));
}
static _Bool esp_cpu_dbgr_is_attached(){
    return xt_utils_dbgr_is_attached();
}
static void esp_cpu_dbgr_break(){
    xt_utils_dbgr_break();
}
static int esp_cpu_get_call_addr(int return_address){
    return return_address-3;
}
static void spinlock_initialize(struct anonymous_typeX17* lock){
    (((__builtin_expect(!!!(lock),1))?((void)0):(__assert_func((__builtin_strrchr("//Users/ab25cq/esp-idf/components/esp_hw_support/include/spinlock.h",47)+1),53,"spinlock_initialize","lock"))));
    lock->owner=-1287651329;
    lock->count=0;
}
static _Bool spinlock_acquire(struct anonymous_typeX17* lock, long  int timeout){
unsigned long  int irq_status_16;
unsigned long  int core_owner_id_17;
unsigned long  int other_core_owner_id_18;
_Bool lock_set_19;
unsigned long  int start_count_20;
unsigned int __tmp_21;
unsigned int __tmp_22;
unsigned int __tmp_23;
memset(&irq_status_16, 0, sizeof(unsigned long  int));
memset(&core_owner_id_17, 0, sizeof(unsigned long  int));
memset(&other_core_owner_id_18, 0, sizeof(unsigned long  int));
memset(&lock_set_19, 0, sizeof(_Bool));
memset(&start_count_20, 0, sizeof(unsigned long  int));
memset(&__tmp_21, 0, sizeof(unsigned int));
    (((__builtin_expect(!!!(lock),1))?((void)0):(__assert_func((__builtin_strrchr("//Users/ab25cq/esp-idf/components/esp_hw_support/include/spinlock.h",47)+1),84,"spinlock_acquire","lock"))));
    irq_status_16=({__asm __volatile__("rsil	%0, " "3" "\n" : "=a" (__tmp_21): : "memory" ); __tmp_21; });
    core_owner_id_17=xt_utils_get_raw_core_id();
    other_core_owner_id_18=(52685^43947)^core_owner_id_17;
    if(    lock->owner==core_owner_id_17) {
        (((__builtin_expect(!!!(lock->count>0&&lock->count<255),1))?((void)0):(__assert_func((__builtin_strrchr("//Users/ab25cq/esp-idf/components/esp_hw_support/include/spinlock.h",47)+1),106,"spinlock_acquire","lock->count > 0 && lock->count < 0xFF"))));
        lock->count++;
        do {
            __tmp_22=(irq_status_16);
            __asm __volatile__("wsr.ps	%0 ; rsync\n" : : "a" (__tmp_22): "memory" );
        } while(0);
        return 1;
    }
    lock_set_19=esp_cpu_compare_and_set(&lock->owner,-1287651329,core_owner_id_17);
    if(    lock_set_19||timeout==0) {
        goto exit;
    }
    start_count_20=esp_cpu_get_cycle_count();
    do {
        lock_set_19=esp_cpu_compare_and_set(&lock->owner,-1287651329,core_owner_id_17);
        if(        lock_set_19) {
            break;
        }
    } while((timeout==(-1))||(esp_cpu_get_cycle_count()-start_count_20)<=(unsigned long  int)timeout);
    exit:
    if(    lock_set_19) {
        (((__builtin_expect(!!!(lock->owner==core_owner_id_17),1))?((void)0):(__assert_func((__builtin_strrchr("//Users/ab25cq/esp-idf/components/esp_hw_support/include/spinlock.h",47)+1),141,"spinlock_acquire","lock->owner == core_owner_id"))));
        (((__builtin_expect(!!!(lock->count==0),1))?((void)0):(__assert_func((__builtin_strrchr("//Users/ab25cq/esp-idf/components/esp_hw_support/include/spinlock.h",47)+1),142,"spinlock_acquire","lock->count == 0"))));
        lock->count++;
    }
    else {
        (((__builtin_expect(!!!(lock->owner==-1287651329||lock->owner==other_core_owner_id_18),1))?((void)0):(__assert_func((__builtin_strrchr("//Users/ab25cq/esp-idf/components/esp_hw_support/include/spinlock.h",47)+1),145,"spinlock_acquire","lock->owner == SPINLOCK_FREE || lock->owner == other_core_owner_id"))));
        (((__builtin_expect(!!!(lock->count<255),1))?((void)0):(__assert_func((__builtin_strrchr("//Users/ab25cq/esp-idf/components/esp_hw_support/include/spinlock.h",47)+1),146,"spinlock_acquire","lock->count < 0xFF"))));
    }
    do {
        __tmp_23=(irq_status_16);
        __asm __volatile__("wsr.ps	%0 ; rsync\n" : : "a" (__tmp_23): "memory" );
    } while(0);
    return lock_set_19;
}
static void spinlock_release(struct anonymous_typeX17* lock){
unsigned long  int irq_status_24;
unsigned long  int core_owner_id_25;
unsigned int __tmp_26;
unsigned int __tmp_27;
memset(&irq_status_24, 0, sizeof(unsigned long  int));
memset(&core_owner_id_25, 0, sizeof(unsigned long  int));
memset(&__tmp_26, 0, sizeof(unsigned int));
    (((__builtin_expect(!!!(lock),1))?((void)0):(__assert_func((__builtin_strrchr("//Users/ab25cq/esp-idf/components/esp_hw_support/include/spinlock.h",47)+1),181,"spinlock_release","lock"))));
    irq_status_24=({__asm __volatile__("rsil	%0, " "3" "\n" : "=a" (__tmp_26): : "memory" ); __tmp_26; });
    core_owner_id_25=xt_utils_get_raw_core_id();
    (((__builtin_expect(!!!(core_owner_id_25==lock->owner),1))?((void)0):(__assert_func((__builtin_strrchr("//Users/ab25cq/esp-idf/components/esp_hw_support/include/spinlock.h",47)+1),190,"spinlock_release","core_owner_id == lock->owner"))));
    lock->count--;
    if(    !lock->count) {
        lock->owner=-1287651329;
    }
    else {
        (((__builtin_expect(!!!(lock->count<256),1))?((void)0):(__assert_func((__builtin_strrchr("//Users/ab25cq/esp-idf/components/esp_hw_support/include/spinlock.h",47)+1),196,"spinlock_release","lock->count < 0x100"))));
    }
    do {
        __tmp_27=(irq_status_24);
        __asm __volatile__("wsr.ps	%0 ; rsync\n" : : "a" (__tmp_27): "memory" );
    } while(0);
}
static _Bool esp_dram_match_iram(){
_Bool dram_match_iram_28;
    dram_match_iram_28=(1073405952==1074266112)&&(1073741824==1074438144);
    dram_match_iram_28&=(1074528256==1073217536);
    return dram_match_iram_28;
}
static _Bool esp_ptr_in_iram(const void* p){
    return ((int)p>=1074266112&&(int)p<1074438144);
}
static _Bool esp_ptr_in_dram(const void* p){
    return ((int)p>=1073405952&&(int)p<1073741824);
}
static _Bool esp_ptr_in_diram_dram(const void* p){
    return ((int)p>=1073610752&&(int)p<1073741824);
}
static _Bool esp_ptr_in_diram_iram(const void* p){
    return ((int)p>=1074397184&&(int)p<1074528256);
}
static _Bool esp_ptr_in_rtc_iram_fast(const void* p){
    return ((int)p>=1074528256&&(int)p<1074536448);
}
static _Bool esp_ptr_in_rtc_dram_fast(const void* p){
    return ((int)p>=1073217536&&(int)p<1073225728);
}
static _Bool esp_ptr_in_rtc_slow(const void* p){
    return ((int)p>=1342177280&&(int)p<1342185472);
}
static void* esp_ptr_diram_dram_to_iram(const void* p){
    return (void*)(1074397184+(1073741824-(int)p)-4);
}
static void* esp_ptr_rtc_dram_to_iram(const void* p){
int ptr_29;
    ptr_29=(int)p;
    return (void*)(1074528256+(ptr_29-1073217536));
}
static void* esp_ptr_diram_iram_to_dram(const void* p){
    return (void*)(1073610752+(1074528256-(int)p)-4);
}
static _Bool esp_ptr_dma_capable(const void* p){
    return (int)p>=1073405952&&(int)p<1073741824;
}
static _Bool esp_ptr_word_aligned(const void* p){
    return ((int)p)%4==0;
}
static _Bool esp_ptr_executable(const void* p){
int ip_30;
    ip_30=(int)p;
    return (ip_30>=1074593792&&ip_30<1077936128)||(ip_30>=1074266112&&ip_30<1074438144)||(ip_30>=1073741824&&ip_30<1074200576)||(ip_30>=1074528256&&ip_30<1074536448);
}
static _Bool esp_ptr_internal(const void* p){
_Bool r_31;
memset(&r_31, 0, sizeof(_Bool));
    r_31=((int)p>=1073283072&&(int)p<1074536448);
    r_31|=((int)p>=1342177280&&(int)p<1342185472);
    return r_31;
}
static _Bool esp_ptr_in_drom(const void* p){
long  int drom_start_addr_32;
    drom_start_addr_32=1061158912;
    return ((int)p>=drom_start_addr_32&&(int)p<1065353216);
}
static _Bool esp_ptr_in_rom(const void* p){
int ip_33;
    ip_33=(int)p;
    return (ip_33>=1073741824&&ip_33<1074200576);
}
static _Bool esp_stack_ptr_in_dram(unsigned long  int sp){
    return !(sp<1073405952+16||sp>1073741824-16||((sp&15)!=0));
}
static _Bool esp_stack_ptr_is_sane(unsigned long  int sp){
    return esp_stack_ptr_in_dram(sp);
}
static unsigned int xPortSetInterruptMaskFromISR(){
unsigned int __tmp_35;
unsigned int prev_int_level_34;
memset(&__tmp_35, 0, sizeof(unsigned int));
    prev_int_level_34=({__asm __volatile__("rsil	%0, " "3" "\n" : "=a" (__tmp_35): : "memory" ); __tmp_35; });
    return prev_int_level_34;
}
static void vPortClearInterruptMaskFromISR(unsigned int prev_level){
    _xtos_set_intlevel((int)prev_level);
}
static void vPortEnterCritical(struct anonymous_typeX17* mux){
    xPortEnterCriticalTimeout(mux,(-1));
}
static void vPortEnterCriticalCompliance(struct anonymous_typeX17* mux){
    xPortEnterCriticalTimeoutCompliance(mux,(-1));
}
static int xPortEnterCriticalTimeoutSafe(struct anonymous_typeX17* mux, int timeout){
int ret_36;
memset(&ret_36, 0, sizeof(int));
    if(    xPortInIsrContext()) {
        ret_36=xPortEnterCriticalTimeout(mux,timeout);
    }
    else {
        ret_36=xPortEnterCriticalTimeout(mux,timeout);
    }
    return ret_36;
}
static void vPortEnterCriticalSafe(struct anonymous_typeX17* mux){
    xPortEnterCriticalTimeoutSafe(mux,(-1));
}
static void vPortExitCriticalSafe(struct anonymous_typeX17* mux){
    if(    xPortInIsrContext()) {
        vPortExitCritical(mux);
    }
    else {
        vPortExitCritical(mux);
    }
}
static _Bool xPortCanYield(){
unsigned long  int ps_reg_37;
    ps_reg_37=0;
    __asm volatile("rsr %0, %1" : "=r" (ps_reg_37): "i" (230));
    return ((ps_reg_37&15)==0);
}
static int xPortGetCoreID(){
    return (int)esp_cpu_get_core_id();
}
static int xTaskCreate(void (*pxTaskCode)(void*), const char* pcName, const unsigned long  int usStackDepth, void* pvParameters, unsigned int uxPriority, struct tskTaskControlBlock** pxCreatedTask){
    return xTaskCreatePinnedToCore(pxTaskCode,pcName,usStackDepth,pvParameters,uxPriority,pxCreatedTask,((int)2147483647));
}
static struct tskTaskControlBlock* xTaskCreateStatic(void (*pxTaskCode)(void*), const char* pcName, const unsigned long  int ulStackDepth, void* pvParameters, unsigned int uxPriority, unsigned char* puxStackBuffer, struct xSTATIC_TCB* pxTaskBuffer){
    return xTaskCreateStaticPinnedToCore(pxTaskCode,pcName,ulStackDepth,pvParameters,uxPriority,puxStackBuffer,pxTaskBuffer,((int)2147483647));
}

// body function
void app_main(){
    gpio_reset_pin(26);
    gpio_set_direction(26,((2)));
    while(1) {
        gpio_set_level(26,1);
        printf("LED ON\n");
        vTaskDelay(((unsigned long  int)(((unsigned long  int)(1000)*(unsigned long  int)100)/(unsigned long  int)1000)));
        gpio_set_level(26,0);
        printf("LED OFF\n");
        vTaskDelay(((unsigned long  int)(((unsigned long  int)(1000)*(unsigned long  int)100)/(unsigned long  int)1000)));
    }
}

