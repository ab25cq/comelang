/// previous struct definition ///
struct _reent;

struct __locale_t;

/// struct definition ///
typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long long int __int64_t;

typedef unsigned long long int __uint64_t;

typedef char __int_least8_t;

typedef unsigned char __uint_least8_t;

typedef short __int_least16_t;

typedef unsigned short int __uint_least16_t;

typedef int __int_least32_t;

typedef unsigned int __uint_least32_t;

typedef long long int __int_least64_t;

typedef unsigned long long int __uint_least64_t;

typedef long  int __intmax_t;

typedef unsigned long  int __uintmax_t;

typedef long  int __intptr_t;

typedef unsigned long  int __uintptr_t;

typedef char int8_t;

typedef unsigned char uint8_t;

typedef short int16_t;

typedef unsigned short int uint16_t;

typedef int int32_t;

typedef unsigned int uint32_t;

typedef long long int int64_t;

typedef unsigned long long int uint64_t;

typedef long  int intmax_t;

typedef unsigned long  int uintmax_t;

typedef long  int intptr_t;

typedef unsigned long  int uintptr_t;

typedef char int_least8_t;

typedef unsigned char uint_least8_t;

typedef short int_least16_t;

typedef unsigned short int uint_least16_t;

typedef int int_least32_t;

typedef unsigned int uint_least32_t;

typedef long long int int_least64_t;

typedef unsigned long long int uint_least64_t;

typedef char int_fast8_t;

typedef unsigned char uint_fast8_t;

typedef short int_fast16_t;

typedef unsigned short int uint_fast16_t;

typedef int int_fast32_t;

typedef unsigned int uint_fast32_t;

typedef long long int int_fast64_t;

typedef unsigned long long int uint_fast64_t;

typedef long  int ptrdiff_t;

typedef unsigned long  int size_t;

typedef int wchar_t;

struct anonymous_typeX1
{
    long  long __max_align_ll;
    long  double __max_align_ld;
};

typedef struct anonymous_typeX1 max_align_t;

typedef unsigned int uint;

typedef unsigned long long int absolute_time_t;

enum pico_error_codes { PICO_OK=(0),
PICO_ERROR_NONE=(0),
PICO_ERROR_GENERIC=(-1),
PICO_ERROR_TIMEOUT=(-2),
PICO_ERROR_NO_DATA=(-3),
PICO_ERROR_NOT_PERMITTED=(-4),
PICO_ERROR_INVALID_ARG=(-5),
PICO_ERROR_IO=(-6),
PICO_ERROR_BADAUTH=(-7),
PICO_ERROR_CONNECT_FAILED=(-8),
PICO_ERROR_INSUFFICIENT_RESOURCES=(-9),
PICO_ERROR_INVALID_ADDRESS=(-10),
PICO_ERROR_BAD_ALIGNMENT=(-11),
PICO_ERROR_INVALID_STATE=(-12),
PICO_ERROR_BUFFER_TOO_SMALL=(-13),
PICO_ERROR_PRECONDITION_NOT_MET=(-14),
PICO_ERROR_MODIFIED_DATA=(-15),
PICO_ERROR_INVALID_DATA=(-16),
PICO_ERROR_NOT_FOUND=(-17),
PICO_ERROR_UNSUPPORTED_MODIFICATION=(-18),
PICO_ERROR_LOCK_REQUIRED=(-19),
PICO_ERROR_VERSION_MISMATCH=(-20),
PICO_ERROR_RESOURCE_IN_USE=(-21)
};

typedef struct stdio_driver stdio_driver_t;

typedef void (*hardware_alarm_callback_t)(unsigned int);

extern const unsigned long long int at_the_end_of_time;
extern const unsigned long long int nil_time;
typedef int alarm_id_t;

typedef long long int (*alarm_callback_t)(int,void*);

typedef struct alarm_pool alarm_pool_t;

typedef void alarm_pool_timer_t;

typedef struct repeating_timer repeating_timer_t;

typedef _Bool (*repeating_timer_callback_t)(struct repeating_timer*);

struct repeating_timer
{
    long long int delay_us;
    struct alarm_pool* pool;
    int alarm_id;
    _Bool (*callback)(struct repeating_timer*);
    void* user_data;
};

enum gpio_function { GPIO_FUNC_XIP=(0),
GPIO_FUNC_SPI=(1),
GPIO_FUNC_UART=(2),
GPIO_FUNC_I2C=(3),
GPIO_FUNC_PWM=(4),
GPIO_FUNC_SIO=(5),
GPIO_FUNC_PIO0=(6),
GPIO_FUNC_PIO1=(7),
GPIO_FUNC_GPCK=(8),
GPIO_FUNC_USB=(9),
GPIO_FUNC_NULL=(15)
};

enum gpio_slew_rate { GPIO_SLEW_RATE_SLOW=(0),
GPIO_SLEW_RATE_FAST=(1)
};

enum gpio_drive_strength { GPIO_DRIVE_STRENGTH_2MA=(0),
GPIO_DRIVE_STRENGTH_4MA=(1),
GPIO_DRIVE_STRENGTH_8MA=(2),
GPIO_DRIVE_STRENGTH_12MA=(3)
};

typedef struct uart_inst uart_inst_t;

extern struct uart_inst* uart0;
extern struct uart_inst* uart1;
enum anonymous_typeY2 { UART_PARITY_NONE
,UART_PARITY_EVEN
,UART_PARITY_ODD
};

typedef enum anonymous_typeY2 uart_parity_t;

typedef __builtin_va_list __gnuc_va_list;

typedef __builtin_va_list va_list;

typedef int wint_t;

typedef long __blkcnt_t;

typedef long __blksize_t;

typedef unsigned long long int __fsblkcnt_t;

typedef unsigned int __fsfilcnt_t;

typedef long _off_t;

typedef int __pid_t;

typedef short __dev_t;

typedef unsigned short int __uid_t;

typedef unsigned short int __gid_t;

typedef unsigned int __id_t;

typedef unsigned short int __ino_t;

typedef unsigned int __mode_t;

typedef long  long _off64_t;

typedef long __off_t;

typedef long  long __loff_t;

typedef long __key_t;

typedef long _fpos_t;

typedef unsigned long  int __size_t;

typedef long  int _ssize_t;

typedef long  int __ssize_t;

union anonymous_typeZ4
{
int __wch;
unsigned char __wchb[4];
};

union anonymous_typeZ5
{
int __wch;
unsigned char __wchb[4];
};

struct anonymous_typeX3
{
    int __count;
    union anonymous_typeZ5 __value;
};

typedef struct anonymous_typeX3 _mbstate_t;

typedef void* _iconv_t;

typedef unsigned long  int __clock_t;

typedef long __time_t;

typedef unsigned long  int __clockid_t;

typedef long __daddr_t;

typedef unsigned long  int __timer_t;

typedef unsigned char __sa_family_t;

typedef unsigned int __socklen_t;

typedef int __nl_item;

typedef unsigned short int __nlink_t;

typedef long __suseconds_t;

typedef unsigned long  int __useconds_t;

typedef __builtin_va_list __va_list;

typedef unsigned int __ULong;

typedef int _LOCK_T;

typedef int _LOCK_RECURSIVE_T;

typedef int _flock_t;

struct _Bigint
{
    struct _Bigint* _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
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
    unsigned int _fntypes;
    unsigned int _is_cxa;
};

struct _atexit
{
    struct _atexit* _next;
    int _ind;
    void (*_fns[32])();
    struct _on_exit_args _on_exit_args;
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
    struct _reent* _data;
    int _lock;
    struct anonymous_typeX3 _mbstate;
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

extern struct _glue __sglue;
struct _rand48
{
    unsigned short int _seed[3];
    unsigned short int _mult[3];
    unsigned short int _add;
};

struct anonymous_typeX7
{
    char* _strtok_last;
    char _asctime_buf[26];
    struct __tm _localtime_buf;
    int _gamma_signgam;
    unsigned long  long _rand_next;
    struct _rand48 _r48;
    struct anonymous_typeX3 _mblen_state;
    struct anonymous_typeX3 _mbtowc_state;
    struct anonymous_typeX3 _wctomb_state;
    char _l64a_buf[8];
    char _signal_buf[24];
    int _getdate_err;
    struct anonymous_typeX3 _mbrlen_state;
    struct anonymous_typeX3 _mbrtowc_state;
    struct anonymous_typeX3 _mbsrtowcs_state;
    struct anonymous_typeX3 _wcrtomb_state;
    struct anonymous_typeX3 _wcsrtombs_state;
    int _h_errno;
    char _getlocalename_l_buf[32];
};

union anonymous_typeZ6
{
struct anonymous_typeX7 _reent;
};

struct anonymous_typeX9
{
    char* _strtok_last;
    char _asctime_buf[26];
    struct __tm _localtime_buf;
    int _gamma_signgam;
    unsigned long  long _rand_next;
    struct _rand48 _r48;
    struct anonymous_typeX3 _mblen_state;
    struct anonymous_typeX3 _mbtowc_state;
    struct anonymous_typeX3 _wctomb_state;
    char _l64a_buf[8];
    char _signal_buf[24];
    int _getdate_err;
    struct anonymous_typeX3 _mbrlen_state;
    struct anonymous_typeX3 _mbrtowc_state;
    struct anonymous_typeX3 _mbsrtowcs_state;
    struct anonymous_typeX3 _wcrtomb_state;
    struct anonymous_typeX3 _wcsrtombs_state;
    int _h_errno;
    char _getlocalename_l_buf[32];
};

union anonymous_typeZ8
{
struct anonymous_typeX9 _reent;
};

struct _reent
{
    int _errno;
    struct __sFILE* _stdin;
    struct __sFILE* _stdout;
    struct __sFILE* _stderr;
    int _inc;
    char _emergency[25];
    struct __locale_t* _locale;
    void (*__cleanup)(struct _reent*);
    struct _Bigint* _result;
    int _result_k;
    struct _Bigint* _p5s;
    struct _Bigint** _freelist;
    int _cvtlen;
    char* _cvtbuf;
    union anonymous_typeZ8 _new;
    void (**_sig_func)(int);
};

extern struct _reent* _impure_ptr;
extern struct _reent _impure_data;
extern struct _atexit* __atexit;
extern struct _atexit __atexit0;
extern void (*__stdio_exit_handler)();
typedef struct __sFILE FILE;

typedef long fpos_t;

typedef long off_t;

typedef long  int ssize_t;

typedef unsigned long long int io_rw_64;

typedef const unsigned long long int io_ro_64;

typedef unsigned long long int io_wo_64;

typedef unsigned int io_rw_32;

typedef const unsigned int io_ro_32;

typedef unsigned int io_wo_32;

typedef unsigned short int io_rw_16;

typedef const unsigned short int io_ro_16;

typedef unsigned short int io_wo_16;

typedef unsigned char io_rw_8;

typedef const unsigned char io_ro_8;

typedef unsigned char io_wo_8;

typedef unsigned char* ioptr;

typedef unsigned char* const_ioptr;

struct anonymous_typeX10
{
    unsigned int lock;
    unsigned int force_core_ns;
    unsigned int cfgreset;
    unsigned int gpio_nsmask[2];
    unsigned int rom;
    unsigned int xip_main;
    unsigned int sram[10];
    unsigned int dma;
    unsigned int usbctrl;
    unsigned int pio[3];
    unsigned int coresight_trace;
    unsigned int coresight_periph;
    unsigned int sysinfo;
    unsigned int resets;
    unsigned int io_bank[2];
    unsigned int pads_bank0;
    unsigned int pads_qspi;
    unsigned int busctrl;
    unsigned int adc0;
    unsigned int hstx;
    unsigned int i2c[2];
    unsigned int pwm;
    unsigned int spi[2];
    unsigned int timer[2];
    unsigned int uart[2];
    unsigned int otp;
    unsigned int tbman;
    unsigned int powman;
    unsigned int trng;
    unsigned int sha256;
    unsigned int syscfg;
    unsigned int clocks;
    unsigned int xosc;
    unsigned int rosc;
    unsigned int pll_sys;
    unsigned int pll_usb;
    unsigned int ticks;
    unsigned int watchdog;
    unsigned int rsm;
    unsigned int xip_ctrl;
    unsigned int xip_qmi;
    unsigned int xip_aux;
};

typedef struct anonymous_typeX10 accessctrl_hw_t;

struct anonymous_typeX11
{
    unsigned int csr;
    unsigned int rvr;
    unsigned int cvr;
    const unsigned int calib;
};

typedef struct anonymous_typeX11 systick_hw_t;

typedef unsigned int spin_lock_t;

struct anonymous_typeX12
{
    unsigned int task_stacks[3][256];
    unsigned int* the_tasks[3];
    unsigned long  int task_count;
    unsigned long  int current_task;
    _Bool started;
};

typedef struct anonymous_typeX12 piccolo_os_internals_t;

typedef unsigned int piccolo_sleep_t;

struct anonymous_typeX12 piccolo_ctx;
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
void __assert(const char* anonymous_var_nameX1, int anonymous_var_nameX2, const char* anonymous_var_nameX3);
void __assert_func(const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6, const char* anonymous_var_nameX7);
void panic_unsupported();
void panic(const char* fmt, ...);
unsigned char rp2040_chip_version();
void stdio_uart_init();
int getchar_timeout_us(unsigned int timeout_us);
unsigned int time_us_32();
unsigned long long int time_us_64();
void busy_wait_us_32(unsigned int delay_us);
void busy_wait_us(unsigned long long int delay_us);
void busy_wait_ms(unsigned int delay_m);
void busy_wait_until(unsigned long long int t);
_Bool time_reached(unsigned long long int t);
void hardware_alarm_claim(unsigned int alarm_num);
void hardware_alarm_unclaim(unsigned int alarm_num);
int hardware_alarm_claim_unused(_Bool required);
void hardware_alarm_set_callback(unsigned int alarm_num, void (*callback)(unsigned int));
_Bool hardware_alarm_set_target(unsigned int alarm_num, unsigned long long int t);
void hardware_alarm_cancel(unsigned int alarm_num);
void hardware_alarm_force_irq(unsigned int alarm_num);
void sleep_until(unsigned long long int target);
void sleep_us(unsigned long long int us);
void sleep_ms(unsigned int ms);
_Bool best_effort_wfe_or_timeout(unsigned long long int timeout_timestamp);
void alarm_pool_init_default();
void runtime_init_default_alarm_pool();
struct alarm_pool* alarm_pool_get_default();
struct alarm_pool* alarm_pool_create_on_timer(void* timer, unsigned int timer_alarm_num, unsigned int max_timers);
void* alarm_pool_timer_for_timer_num(unsigned int timer_num);
void* alarm_pool_get_default_timer();
struct alarm_pool* alarm_pool_create_on_timer_with_unused_hardware_alarm(void* timer, unsigned int max_timers);
unsigned int alarm_pool_timer_alarm_num(struct alarm_pool* pool);
unsigned int alarm_pool_core_num(struct alarm_pool* pool);
void alarm_pool_destroy(struct alarm_pool* pool);
int alarm_pool_add_alarm_at(struct alarm_pool* pool, unsigned long long int time, long long int (*callback)(int,void*), void* user_data, _Bool fire_if_past);
int alarm_pool_add_alarm_at_force_in_context(struct alarm_pool* pool, unsigned long long int time, long long int (*callback)(int,void*), void* user_data);
long long int alarm_pool_remaining_alarm_time_us(struct alarm_pool* pool, int alarm_id);
int alarm_pool_remaining_alarm_time_ms(struct alarm_pool* pool, int alarm_id);
_Bool alarm_pool_cancel_alarm(struct alarm_pool* pool, int alarm_id);
long long int remaining_alarm_time_us(int alarm_id);
int remaining_alarm_time_ms(int alarm_id);
_Bool alarm_pool_add_repeating_timer_us(struct alarm_pool* pool, long long int delay_us, _Bool (*callback)(struct repeating_timer*), void* user_data, struct repeating_timer* out);
_Bool cancel_repeating_timer(struct repeating_timer* timer);
void gpio_set_function(unsigned int gpio, enum gpio_function fn);
enum gpio_function gpio_get_function(unsigned int gpio);
void gpio_pull_up(unsigned int gpio);
void gpio_pull_down(unsigned int gpio);
void gpio_disable_pulls(unsigned int gpio);
void gpio_set_pulls(unsigned int gpio, _Bool up, _Bool down);
void gpio_set_irqover(unsigned int gpio, unsigned int value);
void gpio_set_outover(unsigned int gpio, unsigned int value);
void gpio_set_inover(unsigned int gpio, unsigned int value);
void gpio_set_oeover(unsigned int gpio, unsigned int value);
void gpio_set_input_enabled(unsigned int gpio, _Bool enable);
void gpio_set_input_hysteresis_enabled(unsigned int gpio, _Bool enabled);
_Bool gpio_is_input_hysteresis_enabled(unsigned int gpio);
void gpio_set_slew_rate(unsigned int gpio, enum gpio_slew_rate slew);
enum gpio_slew_rate gpio_get_slew_rate(unsigned int gpio);
void gpio_set_drive_strength(unsigned int gpio, enum gpio_drive_strength drive);
enum gpio_drive_strength gpio_get_drive_strength(unsigned int gpio);
void gpio_init(unsigned int gpio);
void gpio_init_mask(unsigned int gpio_mask);
_Bool gpio_get(unsigned int gpio);
unsigned int gpio_get_all();
void gpio_set_mask(unsigned int mask);
void gpio_clr_mask(unsigned int mask);
void gpio_xor_mask(unsigned int mask);
void gpio_put_masked(unsigned int mask, unsigned int value);
void gpio_put_all(unsigned int value);
void gpio_put(unsigned int gpio, int value);
void gpio_set_dir_out_masked(unsigned int mask);
void gpio_set_dir_in_masked(unsigned int mask);
void gpio_set_dir_masked(unsigned int mask, unsigned int value);
void gpio_set_dir_all_bits(unsigned int value);
void gpio_set_dir(unsigned int gpio, _Bool out);
void gpio_debug_pins_init();
unsigned int uart_init(struct uart_inst* uart, unsigned int baudrate);
void uart_deinit(struct uart_inst* uart);
unsigned int uart_set_baudrate(struct uart_inst* uart, unsigned int baudrate);
void uart_set_hw_flow(struct uart_inst* uart, _Bool cts, _Bool rts);
void uart_set_format(struct uart_inst* uart, unsigned int data_bits, unsigned int stop_bits, enum anonymous_typeY2 parity);
void uart_set_irqs_enabled(struct uart_inst* uart, _Bool rx_has_data, _Bool tx_needs_data);
_Bool uart_is_writable(struct uart_inst* uart);
_Bool uart_is_readable(struct uart_inst* uart);
void uart_write_blocking(struct uart_inst* uart, const unsigned char* src, unsigned long  int len);
void uart_read_blocking(struct uart_inst* uart, unsigned char* dst, unsigned long  int len);
void uart_putc(struct uart_inst* uart, char c);
void uart_putc_raw(struct uart_inst* uart, char c);
void uart_puts(struct uart_inst* uart, const char* s);
char uart_getc(struct uart_inst* uart);
void uart_set_break(struct uart_inst* uart, _Bool en);
void uart_default_tx_wait_blocking();
void setup_default_uart();
void _reclaim_reent(struct _reent* anonymous_var_nameX40);
int _fwalk_sglue(struct _reent* anonymous_var_nameX41, int (*anonymous_lambda_var_nameZ1)(struct _reent*,struct __sFILE*), struct _glue* anonymous_var_nameX44);
char* ctermid(char* anonymous_var_nameX45);
struct __sFILE* tmpfile();
char* tmpnam(char* anonymous_var_nameX46);
char* tempnam(const char* anonymous_var_nameX47, const char* anonymous_var_nameX48);
int fclose(struct __sFILE* anonymous_var_nameX49);
int fflush(struct __sFILE* anonymous_var_nameX50);
struct __sFILE* freopen(const char* anonymous_var_nameX51, const char* anonymous_var_nameX52, struct __sFILE* anonymous_var_nameX53);
void setbuf(struct __sFILE* anonymous_var_nameX54, char* anonymous_var_nameX55);
int setvbuf(struct __sFILE* anonymous_var_nameX56, char* anonymous_var_nameX57, int anonymous_var_nameX58, unsigned long  int anonymous_var_nameX59);
int fprintf(struct __sFILE* anonymous_var_nameX60, const char* anonymous_var_nameX61, ...);
int fscanf(struct __sFILE* anonymous_var_nameX62, const char* anonymous_var_nameX63, ...);
int printf(const char* anonymous_var_nameX64, ...);
int scanf(const char* anonymous_var_nameX65, ...);
int sscanf(const char* anonymous_var_nameX66, const char* anonymous_var_nameX67, ...);
int vfprintf(struct __sFILE* anonymous_var_nameX68, const char* anonymous_var_nameX69, va_list anonymous_var_nameX70);
int vprintf(const char* anonymous_var_nameX71, va_list anonymous_var_nameX72);
int vsprintf(char* anonymous_var_nameX73, const char* anonymous_var_nameX74, va_list anonymous_var_nameX75);
int fgetc(struct __sFILE* anonymous_var_nameX76);
char* fgets(char* anonymous_var_nameX77, int anonymous_var_nameX78, struct __sFILE* anonymous_var_nameX79);
int fputc(int anonymous_var_nameX80, struct __sFILE* anonymous_var_nameX81);
int fputs(const char* anonymous_var_nameX82, struct __sFILE* anonymous_var_nameX83);
int getc(struct __sFILE* anonymous_var_nameX84);
int getchar();
char* gets(char* anonymous_var_nameX85);
int putc(int anonymous_var_nameX86, struct __sFILE* anonymous_var_nameX87);
int putchar(int anonymous_var_nameX88);
int puts(const char* anonymous_var_nameX89);
int ungetc(int anonymous_var_nameX90, struct __sFILE* anonymous_var_nameX91);
unsigned long  int fread(void* anonymous_var_nameX92, unsigned long  int _size, unsigned long  int _n, struct __sFILE* anonymous_var_nameX93);
unsigned long  int fwrite(const void* anonymous_var_nameX94, unsigned long  int _size, unsigned long  int _n, struct __sFILE* anonymous_var_nameX95);
int fgetpos(struct __sFILE* anonymous_var_nameX96, long* anonymous_var_nameX97);
int fseek(struct __sFILE* anonymous_var_nameX98, long anonymous_var_nameX99, int anonymous_var_nameX100);
int fsetpos(struct __sFILE* anonymous_var_nameX101, const long* anonymous_var_nameX102);
long ftell(struct __sFILE* anonymous_var_nameX103);
void rewind(struct __sFILE* anonymous_var_nameX104);
void clearerr(struct __sFILE* anonymous_var_nameX105);
int feof(struct __sFILE* anonymous_var_nameX106);
int ferror(struct __sFILE* anonymous_var_nameX107);
void perror(const char* anonymous_var_nameX108);
struct __sFILE* fopen(const char* _name, const char* _type);
int sprintf(char* anonymous_var_nameX109, const char* anonymous_var_nameX110, ...);
int remove(const char* anonymous_var_nameX111);
int rename(const char* anonymous_var_nameX112, const char* anonymous_var_nameX113);
int fseeko(struct __sFILE* anonymous_var_nameX114, long anonymous_var_nameX115, int anonymous_var_nameX116);
long ftello(struct __sFILE* anonymous_var_nameX117);
int snprintf(char* anonymous_var_nameX118, unsigned long  int anonymous_var_nameX119, const char* anonymous_var_nameX120, ...);
int vsnprintf(char* anonymous_var_nameX121, unsigned long  int anonymous_var_nameX122, const char* anonymous_var_nameX123, va_list anonymous_var_nameX124);
int vfscanf(struct __sFILE* anonymous_var_nameX125, const char* anonymous_var_nameX126, va_list anonymous_var_nameX127);
int vscanf(const char* anonymous_var_nameX128, va_list anonymous_var_nameX129);
int vsscanf(const char* anonymous_var_nameX130, const char* anonymous_var_nameX131, va_list anonymous_var_nameX132);
int asiprintf(char** anonymous_var_nameX133, const char* anonymous_var_nameX134, ...);
char* asniprintf(char* anonymous_var_nameX135, unsigned long  int* anonymous_var_nameX136, const char* anonymous_var_nameX137, ...);
char* asnprintf(char* anonymous_var_nameX138, unsigned long  int* anonymous_var_nameX139, const char* anonymous_var_nameX140, ...);
int diprintf(int anonymous_var_nameX141, const char* anonymous_var_nameX142, ...);
int fiprintf(struct __sFILE* anonymous_var_nameX143, const char* anonymous_var_nameX144, ...);
int fiscanf(struct __sFILE* anonymous_var_nameX145, const char* anonymous_var_nameX146, ...);
int iprintf(const char* anonymous_var_nameX147, ...);
int iscanf(const char* anonymous_var_nameX148, ...);
int siprintf(char* anonymous_var_nameX149, const char* anonymous_var_nameX150, ...);
int siscanf(const char* anonymous_var_nameX151, const char* anonymous_var_nameX152, ...);
int sniprintf(char* anonymous_var_nameX153, unsigned long  int anonymous_var_nameX154, const char* anonymous_var_nameX155, ...);
int vasiprintf(char** anonymous_var_nameX156, const char* anonymous_var_nameX157, va_list anonymous_var_nameX158);
char* vasniprintf(char* anonymous_var_nameX159, unsigned long  int* anonymous_var_nameX160, const char* anonymous_var_nameX161, va_list anonymous_var_nameX162);
char* vasnprintf(char* anonymous_var_nameX163, unsigned long  int* anonymous_var_nameX164, const char* anonymous_var_nameX165, va_list anonymous_var_nameX166);
int vdiprintf(int anonymous_var_nameX167, const char* anonymous_var_nameX168, va_list anonymous_var_nameX169);
int vfiprintf(struct __sFILE* anonymous_var_nameX170, const char* anonymous_var_nameX171, va_list anonymous_var_nameX172);
int vfiscanf(struct __sFILE* anonymous_var_nameX173, const char* anonymous_var_nameX174, va_list anonymous_var_nameX175);
int viprintf(const char* anonymous_var_nameX176, va_list anonymous_var_nameX177);
int viscanf(const char* anonymous_var_nameX178, va_list anonymous_var_nameX179);
int vsiprintf(char* anonymous_var_nameX180, const char* anonymous_var_nameX181, va_list anonymous_var_nameX182);
int vsiscanf(const char* anonymous_var_nameX183, const char* anonymous_var_nameX184, va_list anonymous_var_nameX185);
int vsniprintf(char* anonymous_var_nameX186, unsigned long  int anonymous_var_nameX187, const char* anonymous_var_nameX188, va_list anonymous_var_nameX189);
struct __sFILE* fdopen(int anonymous_var_nameX190, const char* anonymous_var_nameX191);
int fileno(struct __sFILE* anonymous_var_nameX192);
int pclose(struct __sFILE* anonymous_var_nameX193);
struct __sFILE* popen(const char* anonymous_var_nameX194, const char* anonymous_var_nameX195);
void setbuffer(struct __sFILE* anonymous_var_nameX196, char* anonymous_var_nameX197, int anonymous_var_nameX198);
int setlinebuf(struct __sFILE* anonymous_var_nameX199);
int getw(struct __sFILE* anonymous_var_nameX200);
int putw(int anonymous_var_nameX201, struct __sFILE* anonymous_var_nameX202);
int getc_unlocked(struct __sFILE* anonymous_var_nameX203);
int getchar_unlocked();
void flockfile(struct __sFILE* anonymous_var_nameX204);
int ftrylockfile(struct __sFILE* anonymous_var_nameX205);
void funlockfile(struct __sFILE* anonymous_var_nameX206);
int putc_unlocked(int anonymous_var_nameX207, struct __sFILE* anonymous_var_nameX208);
int putchar_unlocked(int anonymous_var_nameX209);
int dprintf(int anonymous_var_nameX210, const char* anonymous_var_nameX211, ...);
struct __sFILE* fmemopen(void* anonymous_var_nameX212, unsigned long  int anonymous_var_nameX213, const char* anonymous_var_nameX214);
struct __sFILE* open_memstream(char** anonymous_var_nameX215, unsigned long  int* anonymous_var_nameX216);
int vdprintf(int anonymous_var_nameX217, const char* anonymous_var_nameX218, va_list anonymous_var_nameX219);
int renameat(int anonymous_var_nameX220, const char* anonymous_var_nameX221, int anonymous_var_nameX222, const char* anonymous_var_nameX223);
int _asiprintf_r(struct _reent* anonymous_var_nameX224, char** anonymous_var_nameX225, const char* anonymous_var_nameX226, ...);
char* _asniprintf_r(struct _reent* anonymous_var_nameX227, char* anonymous_var_nameX228, unsigned long  int* anonymous_var_nameX229, const char* anonymous_var_nameX230, ...);
char* _asnprintf_r(struct _reent* anonymous_var_nameX231, char* anonymous_var_nameX232, unsigned long  int* anonymous_var_nameX233, const char* anonymous_var_nameX234, ...);
int _asprintf_r(struct _reent* anonymous_var_nameX235, char** anonymous_var_nameX236, const char* anonymous_var_nameX237, ...);
int _diprintf_r(struct _reent* anonymous_var_nameX238, int anonymous_var_nameX239, const char* anonymous_var_nameX240, ...);
int _dprintf_r(struct _reent* anonymous_var_nameX241, int anonymous_var_nameX242, const char* anonymous_var_nameX243, ...);
int _fclose_r(struct _reent* anonymous_var_nameX244, struct __sFILE* anonymous_var_nameX245);
int _fcloseall_r(struct _reent* anonymous_var_nameX246);
struct __sFILE* _fdopen_r(struct _reent* anonymous_var_nameX247, int anonymous_var_nameX248, const char* anonymous_var_nameX249);
int _fflush_r(struct _reent* anonymous_var_nameX250, struct __sFILE* anonymous_var_nameX251);
int _fgetc_r(struct _reent* anonymous_var_nameX252, struct __sFILE* anonymous_var_nameX253);
int _fgetc_unlocked_r(struct _reent* anonymous_var_nameX254, struct __sFILE* anonymous_var_nameX255);
char* _fgets_r(struct _reent* anonymous_var_nameX256, char* anonymous_var_nameX257, int anonymous_var_nameX258, struct __sFILE* anonymous_var_nameX259);
char* _fgets_unlocked_r(struct _reent* anonymous_var_nameX260, char* anonymous_var_nameX261, int anonymous_var_nameX262, struct __sFILE* anonymous_var_nameX263);
int _fgetpos_r(struct _reent* anonymous_var_nameX264, struct __sFILE* anonymous_var_nameX265, long* anonymous_var_nameX266);
int _fsetpos_r(struct _reent* anonymous_var_nameX267, struct __sFILE* anonymous_var_nameX268, const long* anonymous_var_nameX269);
int _fiprintf_r(struct _reent* anonymous_var_nameX270, struct __sFILE* anonymous_var_nameX271, const char* anonymous_var_nameX272, ...);
int _fiscanf_r(struct _reent* anonymous_var_nameX273, struct __sFILE* anonymous_var_nameX274, const char* anonymous_var_nameX275, ...);
struct __sFILE* _fmemopen_r(struct _reent* anonymous_var_nameX276, void* anonymous_var_nameX277, unsigned long  int anonymous_var_nameX278, const char* anonymous_var_nameX279);
struct __sFILE* _fopen_r(struct _reent* anonymous_var_nameX280, const char* anonymous_var_nameX281, const char* anonymous_var_nameX282);
struct __sFILE* _freopen_r(struct _reent* anonymous_var_nameX283, const char* anonymous_var_nameX284, const char* anonymous_var_nameX285, struct __sFILE* anonymous_var_nameX286);
int _fprintf_r(struct _reent* anonymous_var_nameX287, struct __sFILE* anonymous_var_nameX288, const char* anonymous_var_nameX289, ...);
int _fpurge_r(struct _reent* anonymous_var_nameX290, struct __sFILE* anonymous_var_nameX291);
int _fputc_r(struct _reent* anonymous_var_nameX292, int anonymous_var_nameX293, struct __sFILE* anonymous_var_nameX294);
int _fputc_unlocked_r(struct _reent* anonymous_var_nameX295, int anonymous_var_nameX296, struct __sFILE* anonymous_var_nameX297);
int _fputs_r(struct _reent* anonymous_var_nameX298, const char* anonymous_var_nameX299, struct __sFILE* anonymous_var_nameX300);
int _fputs_unlocked_r(struct _reent* anonymous_var_nameX301, const char* anonymous_var_nameX302, struct __sFILE* anonymous_var_nameX303);
unsigned long  int _fread_r(struct _reent* anonymous_var_nameX304, void* anonymous_var_nameX305, unsigned long  int _size, unsigned long  int _n, struct __sFILE* anonymous_var_nameX306);
unsigned long  int _fread_unlocked_r(struct _reent* anonymous_var_nameX307, void* anonymous_var_nameX308, unsigned long  int _size, unsigned long  int _n, struct __sFILE* anonymous_var_nameX309);
int _fscanf_r(struct _reent* anonymous_var_nameX310, struct __sFILE* anonymous_var_nameX311, const char* anonymous_var_nameX312, ...);
int _fseek_r(struct _reent* anonymous_var_nameX313, struct __sFILE* anonymous_var_nameX314, long anonymous_var_nameX315, int anonymous_var_nameX316);
int _fseeko_r(struct _reent* anonymous_var_nameX317, struct __sFILE* anonymous_var_nameX318, long anonymous_var_nameX319, int anonymous_var_nameX320);
long _ftell_r(struct _reent* anonymous_var_nameX321, struct __sFILE* anonymous_var_nameX322);
long _ftello_r(struct _reent* anonymous_var_nameX323, struct __sFILE* anonymous_var_nameX324);
void _rewind_r(struct _reent* anonymous_var_nameX325, struct __sFILE* anonymous_var_nameX326);
unsigned long  int _fwrite_r(struct _reent* anonymous_var_nameX327, const void* anonymous_var_nameX328, unsigned long  int _size, unsigned long  int _n, struct __sFILE* anonymous_var_nameX329);
unsigned long  int _fwrite_unlocked_r(struct _reent* anonymous_var_nameX330, const void* anonymous_var_nameX331, unsigned long  int _size, unsigned long  int _n, struct __sFILE* anonymous_var_nameX332);
int _getc_r(struct _reent* anonymous_var_nameX333, struct __sFILE* anonymous_var_nameX334);
int _getc_unlocked_r(struct _reent* anonymous_var_nameX335, struct __sFILE* anonymous_var_nameX336);
int _getchar_r(struct _reent* anonymous_var_nameX337);
int _getchar_unlocked_r(struct _reent* anonymous_var_nameX338);
char* _gets_r(struct _reent* anonymous_var_nameX339, char* anonymous_var_nameX340);
int _iprintf_r(struct _reent* anonymous_var_nameX341, const char* anonymous_var_nameX342, ...);
int _iscanf_r(struct _reent* anonymous_var_nameX343, const char* anonymous_var_nameX344, ...);
struct __sFILE* _open_memstream_r(struct _reent* anonymous_var_nameX345, char** anonymous_var_nameX346, unsigned long  int* anonymous_var_nameX347);
void _perror_r(struct _reent* anonymous_var_nameX348, const char* anonymous_var_nameX349);
int _printf_r(struct _reent* anonymous_var_nameX350, const char* anonymous_var_nameX351, ...);
int _putc_r(struct _reent* anonymous_var_nameX352, int anonymous_var_nameX353, struct __sFILE* anonymous_var_nameX354);
int _putc_unlocked_r(struct _reent* anonymous_var_nameX355, int anonymous_var_nameX356, struct __sFILE* anonymous_var_nameX357);
int _putchar_unlocked_r(struct _reent* anonymous_var_nameX358, int anonymous_var_nameX359);
int _putchar_r(struct _reent* anonymous_var_nameX360, int anonymous_var_nameX361);
int _puts_r(struct _reent* anonymous_var_nameX362, const char* anonymous_var_nameX363);
int _remove_r(struct _reent* anonymous_var_nameX364, const char* anonymous_var_nameX365);
int _rename_r(struct _reent* anonymous_var_nameX366, const char* _old, const char* _new);
int _scanf_r(struct _reent* anonymous_var_nameX367, const char* anonymous_var_nameX368, ...);
int _siprintf_r(struct _reent* anonymous_var_nameX369, char* anonymous_var_nameX370, const char* anonymous_var_nameX371, ...);
int _siscanf_r(struct _reent* anonymous_var_nameX372, const char* anonymous_var_nameX373, const char* anonymous_var_nameX374, ...);
int _sniprintf_r(struct _reent* anonymous_var_nameX375, char* anonymous_var_nameX376, unsigned long  int anonymous_var_nameX377, const char* anonymous_var_nameX378, ...);
int _snprintf_r(struct _reent* anonymous_var_nameX379, char* anonymous_var_nameX380, unsigned long  int anonymous_var_nameX381, const char* anonymous_var_nameX382, ...);
int _sprintf_r(struct _reent* anonymous_var_nameX383, char* anonymous_var_nameX384, const char* anonymous_var_nameX385, ...);
int _sscanf_r(struct _reent* anonymous_var_nameX386, const char* anonymous_var_nameX387, const char* anonymous_var_nameX388, ...);
char* _tempnam_r(struct _reent* anonymous_var_nameX389, const char* anonymous_var_nameX390, const char* anonymous_var_nameX391);
struct __sFILE* _tmpfile_r(struct _reent* anonymous_var_nameX392);
char* _tmpnam_r(struct _reent* anonymous_var_nameX393, char* anonymous_var_nameX394);
int _ungetc_r(struct _reent* anonymous_var_nameX395, int anonymous_var_nameX396, struct __sFILE* anonymous_var_nameX397);
int _vasiprintf_r(struct _reent* anonymous_var_nameX398, char** anonymous_var_nameX399, const char* anonymous_var_nameX400, va_list anonymous_var_nameX401);
char* _vasniprintf_r(struct _reent* anonymous_var_nameX402, char* anonymous_var_nameX403, unsigned long  int* anonymous_var_nameX404, const char* anonymous_var_nameX405, va_list anonymous_var_nameX406);
char* _vasnprintf_r(struct _reent* anonymous_var_nameX407, char* anonymous_var_nameX408, unsigned long  int* anonymous_var_nameX409, const char* anonymous_var_nameX410, va_list anonymous_var_nameX411);
int _vasprintf_r(struct _reent* anonymous_var_nameX412, char** anonymous_var_nameX413, const char* anonymous_var_nameX414, va_list anonymous_var_nameX415);
int _vdiprintf_r(struct _reent* anonymous_var_nameX416, int anonymous_var_nameX417, const char* anonymous_var_nameX418, va_list anonymous_var_nameX419);
int _vdprintf_r(struct _reent* anonymous_var_nameX420, int anonymous_var_nameX421, const char* anonymous_var_nameX422, va_list anonymous_var_nameX423);
int _vfiprintf_r(struct _reent* anonymous_var_nameX424, struct __sFILE* anonymous_var_nameX425, const char* anonymous_var_nameX426, va_list anonymous_var_nameX427);
int _vfiscanf_r(struct _reent* anonymous_var_nameX428, struct __sFILE* anonymous_var_nameX429, const char* anonymous_var_nameX430, va_list anonymous_var_nameX431);
int _vfprintf_r(struct _reent* anonymous_var_nameX432, struct __sFILE* anonymous_var_nameX433, const char* anonymous_var_nameX434, va_list anonymous_var_nameX435);
int _vfscanf_r(struct _reent* anonymous_var_nameX436, struct __sFILE* anonymous_var_nameX437, const char* anonymous_var_nameX438, va_list anonymous_var_nameX439);
int _viprintf_r(struct _reent* anonymous_var_nameX440, const char* anonymous_var_nameX441, va_list anonymous_var_nameX442);
int _viscanf_r(struct _reent* anonymous_var_nameX443, const char* anonymous_var_nameX444, va_list anonymous_var_nameX445);
int _vprintf_r(struct _reent* anonymous_var_nameX446, const char* anonymous_var_nameX447, va_list anonymous_var_nameX448);
int _vscanf_r(struct _reent* anonymous_var_nameX449, const char* anonymous_var_nameX450, va_list anonymous_var_nameX451);
int _vsiprintf_r(struct _reent* anonymous_var_nameX452, char* anonymous_var_nameX453, const char* anonymous_var_nameX454, va_list anonymous_var_nameX455);
int _vsiscanf_r(struct _reent* anonymous_var_nameX456, const char* anonymous_var_nameX457, const char* anonymous_var_nameX458, va_list anonymous_var_nameX459);
int _vsniprintf_r(struct _reent* anonymous_var_nameX460, char* anonymous_var_nameX461, unsigned long  int anonymous_var_nameX462, const char* anonymous_var_nameX463, va_list anonymous_var_nameX464);
int _vsnprintf_r(struct _reent* anonymous_var_nameX465, char* anonymous_var_nameX466, unsigned long  int anonymous_var_nameX467, const char* anonymous_var_nameX468, va_list anonymous_var_nameX469);
int _vsprintf_r(struct _reent* anonymous_var_nameX470, char* anonymous_var_nameX471, const char* anonymous_var_nameX472, va_list anonymous_var_nameX473);
int _vsscanf_r(struct _reent* anonymous_var_nameX474, const char* anonymous_var_nameX475, const char* anonymous_var_nameX476, va_list anonymous_var_nameX477);
int fpurge(struct __sFILE* anonymous_var_nameX478);
long  int __getdelim(char** anonymous_var_nameX479, unsigned long  int* anonymous_var_nameX480, int anonymous_var_nameX481, struct __sFILE* anonymous_var_nameX482);
long  int __getline(char** anonymous_var_nameX483, unsigned long  int* anonymous_var_nameX484, struct __sFILE* anonymous_var_nameX485);
void clearerr_unlocked(struct __sFILE* anonymous_var_nameX486);
int feof_unlocked(struct __sFILE* anonymous_var_nameX487);
int ferror_unlocked(struct __sFILE* anonymous_var_nameX488);
int fileno_unlocked(struct __sFILE* anonymous_var_nameX489);
int fflush_unlocked(struct __sFILE* anonymous_var_nameX490);
int fgetc_unlocked(struct __sFILE* anonymous_var_nameX491);
int fputc_unlocked(int anonymous_var_nameX492, struct __sFILE* anonymous_var_nameX493);
unsigned long  int fread_unlocked(void* anonymous_var_nameX494, unsigned long  int _size, unsigned long  int _n, struct __sFILE* anonymous_var_nameX495);
unsigned long  int fwrite_unlocked(const void* anonymous_var_nameX496, unsigned long  int _size, unsigned long  int _n, struct __sFILE* anonymous_var_nameX497);
int __srget_r(struct _reent* anonymous_var_nameX498, struct __sFILE* anonymous_var_nameX499);
int __swbuf_r(struct _reent* anonymous_var_nameX500, int anonymous_var_nameX501, struct __sFILE* anonymous_var_nameX502);
struct __sFILE* funopen(const void* __cookie, int (*__readfn)(void*,char*,int), int (*__writefn)(void*,const char*,int), long (*__seekfn)(void*,long,int), int (*__closefn)(void*));
struct __sFILE* _funopen_r(struct _reent* anonymous_var_nameX503, const void* __cookie, int (*__readfn)(void*,char*,int), int (*__writefn)(void*,const char*,int), long (*__seekfn)(void*,long,int), int (*__closefn)(void*));
unsigned int* spin_lock_init(unsigned int lock_num);
void spin_locks_reset();
unsigned int next_striped_spin_lock_num();
void spin_lock_claim(unsigned int lock_num);
void spin_lock_claim_mask(unsigned int lock_num_mask);
void spin_lock_unclaim(unsigned int lock_num);
int spin_lock_claim_unused(_Bool required);
_Bool spin_lock_is_claimed(unsigned int lock_num);
void piccolo_yield();
void piccolo_syscall();
void piccolo_task_init();
unsigned int* __piccolo_pre_switch(unsigned int* stack);
void __piccolo_task_init_stack(unsigned int* stack);
unsigned int* __piccolo_os_create_task(unsigned int* task_stack, void (*pointer_to_task_function)());
int piccolo_create_task(void (*pointer_to_task_function)());
void piccolo_sleep(unsigned int* start, int ticks);
void piccolo_sleep_ms(int ticks);
void __piccolo_task_init();
void piccolo_init();
void __piccolo_systick_config(unsigned int n);
void piccolo_start();
char piccolo_get_task_id();
void piccolo_lock_wait();
_Bool piccolo_lock_wait_until(unsigned long long int timeout_timestamp);
void piccolo_lock_yield();
// uniq global variable
// inline function
static unsigned long long int to_us_since_boot(unsigned long long int t){
    return t;
}
static void update_us_since_boot(unsigned long long int* t, unsigned long long int us_since_boot){
    *t=us_since_boot;
}
static unsigned long long int from_us_since_boot(unsigned long long int us_since_boot){
unsigned long long int t_0;
memset(&t_0, 0, sizeof(unsigned long long int));
    update_us_since_boot(&t_0,us_since_boot);
    return t_0;
}
static void __compiler_memory_barrier(){
    __asm volatile("" : : : "memory");
}
static void tight_loop_contents(){
}
static void busy_wait_at_least_cycles(unsigned int minimum_cycles){
    __asm volatile("1: subs %0, #3\n" "bcs 1b\n" : "+l" (minimum_cycles) : : "cc", "memory");
}
static _Bool running_on_fpga(){
    return 0;
}
static void __breakpoint(){
    __asm volatile("bkpt #0" : : : "memory");
}
static unsigned int get_core_num(){
    return (*(unsigned int*)(3489660928+0));
}
static unsigned int __get_current_exception(){
unsigned int exception_1;
memset(&exception_1, 0, sizeof(unsigned int));
    __asm volatile("mrs %0, ipsr" : "=l" (exception_1));
    return exception_1;
}
static unsigned char rp2040_rom_version(){
    return *(unsigned char*)19;
}
static int __mul_instruction(int a, int b){
    __asm ("muls %0, %1" : "+l" (a) : "l" (b) : "cc");
    return a;
}
static void stdio_usb_init(){
}
static void stdio_init_all(){
    stdio_uart_init();
}
static void stdio_filter_driver(struct stdio_driver* driver){
}
static void stdio_set_translate_crlf(struct stdio_driver* driver, _Bool enabled){
}
static _Bool stdio_usb_connected(){
    return 1;
}
static void check_hardware_alarm_num_param(unsigned int alarm_num){
    ({    if(    ((0||0)&&!0)) {
        ((((!(alarm_num>=4)))?((void)0):(__assert_func("/Users/ab25cq/pico-sdk/src/host/hardware_timer/include/hardware/timer.h",26,"check_hardware_alarm_num_param","!(alarm_num >= 4u)"))));
    }
    });}
static unsigned long long int get_absolute_time(){
unsigned long long int t_2;
memset(&t_2, 0, sizeof(unsigned long long int));
    update_us_since_boot(&t_2,time_us_64());
    return t_2;
}
static unsigned int us_to_ms(unsigned long long int us){
    if(    us>>32) {
        return (unsigned int)(us/1000);
    }
    else {
        return ((unsigned int)us)/1000;
    }
}
static unsigned int to_ms_since_boot(unsigned long long int t){
unsigned long long int us_3;
    us_3=to_us_since_boot(t);
    return us_to_ms(us_3);
}
static unsigned long long int delayed_by_us(const unsigned long long int t, unsigned long long int us){
unsigned long long int t2_4;
unsigned long long int base_5;
unsigned long long int delayed_6;
memset(&t2_4, 0, sizeof(unsigned long long int));
    base_5=to_us_since_boot(t);
    delayed_6=base_5+us;
    if(    (long long int)delayed_6<0) {
        delayed_6=(9223372036854775807);
    }
    update_us_since_boot(&t2_4,delayed_6);
    return t2_4;
}
static unsigned long long int delayed_by_ms(const unsigned long long int t, unsigned int ms){
unsigned long long int t2_7;
unsigned long long int base_8;
unsigned long long int delayed_9;
memset(&t2_7, 0, sizeof(unsigned long long int));
    base_8=to_us_since_boot(t);
    delayed_9=base_8+ms*1000;
    if(    (long long int)delayed_9<0) {
        delayed_9=(9223372036854775807);
    }
    update_us_since_boot(&t2_7,delayed_9);
    return t2_7;
}
static unsigned long long int make_timeout_time_us(unsigned long long int us){
    return delayed_by_us(get_absolute_time(),us);
}
static unsigned long long int make_timeout_time_ms(unsigned int ms){
    return delayed_by_ms(get_absolute_time(),ms);
}
static long long int absolute_time_diff_us(unsigned long long int from, unsigned long long int to){
    return (long long int)(to_us_since_boot(to)-to_us_since_boot(from));
}
static unsigned long long int absolute_time_min(unsigned long long int a, unsigned long long int b){
    return ((to_us_since_boot(a)<to_us_since_boot(b))?(a):(b));
}
static _Bool is_at_the_end_of_time(unsigned long long int t){
    return to_us_since_boot(t)==to_us_since_boot(at_the_end_of_time);
}
static _Bool is_nil_time(unsigned long long int t){
    return !to_us_since_boot(t);
}
static struct alarm_pool* alarm_pool_create(unsigned int timer_alarm_num, unsigned int max_timers){
    return alarm_pool_create_on_timer(alarm_pool_get_default_timer(),timer_alarm_num,max_timers);
}
static struct alarm_pool* alarm_pool_create_with_unused_hardware_alarm(unsigned int max_timers){
    return alarm_pool_create_on_timer_with_unused_hardware_alarm(alarm_pool_get_default_timer(),max_timers);
}
static unsigned int alarm_pool_hardware_alarm_num(struct alarm_pool* pool){
    return alarm_pool_timer_alarm_num(pool);
}
static int alarm_pool_add_alarm_in_us(struct alarm_pool* pool, unsigned long long int us, long long int (*callback)(int,void*), void* user_data, _Bool fire_if_past){
    return alarm_pool_add_alarm_at(pool,delayed_by_us(get_absolute_time(),us),callback,user_data,fire_if_past);
}
static int alarm_pool_add_alarm_in_ms(struct alarm_pool* pool, unsigned int ms, long long int (*callback)(int,void*), void* user_data, _Bool fire_if_past){
    return alarm_pool_add_alarm_at(pool,delayed_by_ms(get_absolute_time(),ms),callback,user_data,fire_if_past);
}
static int add_alarm_at(unsigned long long int time, long long int (*callback)(int,void*), void* user_data, _Bool fire_if_past){
    return alarm_pool_add_alarm_at(alarm_pool_get_default(),time,callback,user_data,fire_if_past);
}
static int add_alarm_in_us(unsigned long long int us, long long int (*callback)(int,void*), void* user_data, _Bool fire_if_past){
    return alarm_pool_add_alarm_in_us(alarm_pool_get_default(),us,callback,user_data,fire_if_past);
}
static int add_alarm_in_ms(unsigned int ms, long long int (*callback)(int,void*), void* user_data, _Bool fire_if_past){
    return alarm_pool_add_alarm_in_ms(alarm_pool_get_default(),ms,callback,user_data,fire_if_past);
}
static _Bool cancel_alarm(int alarm_id){
    return alarm_pool_cancel_alarm(alarm_pool_get_default(),alarm_id);
}
static _Bool alarm_pool_add_repeating_timer_ms(struct alarm_pool* pool, int delay_ms, _Bool (*callback)(struct repeating_timer*), void* user_data, struct repeating_timer* out){
    return alarm_pool_add_repeating_timer_us(pool,delay_ms*(long long int)1000,callback,user_data,out);
}
static _Bool add_repeating_timer_us(long long int delay_us, _Bool (*callback)(struct repeating_timer*), void* user_data, struct repeating_timer* out){
    return alarm_pool_add_repeating_timer_us(alarm_pool_get_default(),delay_us,callback,user_data,out);
}
static _Bool add_repeating_timer_ms(int delay_ms, _Bool (*callback)(struct repeating_timer*), void* user_data, struct repeating_timer* out){
    return alarm_pool_add_repeating_timer_us(alarm_pool_get_default(),delay_ms*(long long int)1000,callback,user_data,out);
}
static int __sputc_r(struct _reent* _ptr, int _c, struct __sFILE* _p){
    if(    --_p->_w>=0||(_p->_w>=_p->_lbfsize&&(char)_c!=10)) {
        return (*_p->_p++=_c);
    }
    else {
        return (__swbuf_r(_ptr,_c,_p));
    }
}
static int _getchar_unlocked(){
struct _reent* _ptr_10;
_ptr_10 = (void*)0;
    _ptr_10=_impure_ptr;
    return ((((--(((_ptr_10)->_stdin))->_r<0)?(__srget_r(_ptr_10,((_ptr_10)->_stdin))):((int)(*(((_ptr_10)->_stdin))->_p++)))));
}
static int _putchar_unlocked(int _c){
struct _reent* _ptr_11;
_ptr_11 = (void*)0;
    _ptr_11=_impure_ptr;
    return (__sputc_r(_ptr_11,_c,((_ptr_11)->_stdout)));
}
static void hw_set_bits(unsigned int* addr, unsigned int mask){
    *(unsigned int*)((void*)((2<<12)+((unsigned long  int)((void*)addr))))=mask;
}
static void hw_clear_bits(unsigned int* addr, unsigned int mask){
    *(unsigned int*)((void*)((3<<12)+((unsigned long  int)((void*)addr))))=mask;
}
static void hw_xor_bits(unsigned int* addr, unsigned int mask){
    *(unsigned int*)((void*)((1<<12)+((unsigned long  int)((void*)addr))))=mask;
}
static void hw_write_masked(unsigned int* addr, unsigned int values, unsigned int write_mask){
    hw_xor_bits(addr,(*addr^values)&write_mask);
}
static void __nop(){
    __asm volatile("nop.w");
}
static void __sev(){
    __asm volatile("sev");
}
static void __wfe(){
    __asm volatile("wfe");
}
static void __wfi(){
    __asm volatile("wfi");
}
static void __dmb(){
    __asm volatile("dmb" : : : "memory");
}
static void __dsb(){
    __asm volatile("dsb" : : : "memory");
}
static void __isb(){
    __asm volatile("isb" ::: "memory");
}
static void __mem_fence_acquire(){
    __dmb();
}
static void __mem_fence_release(){
    __dmb();
}
static unsigned int save_and_disable_interrupts(){
unsigned int status_12;
memset(&status_12, 0, sizeof(unsigned int));
    __asm volatile("mrs %0, PRIMASK\n" "cpsid i" : "=r" (status_12) :: "memory");
    return status_12;
}
static void restore_interrupts(unsigned int status){
    __asm volatile("msr PRIMASK,%0"::"r" (status) : "memory");
}
static void restore_interrupts_from_disabled(unsigned int status){
    __asm volatile("msr PRIMASK,%0"::"r" (status) : "memory");
}
static unsigned int* spin_lock_instance(unsigned int lock_num){
    ({    if(    ((0||0)&&!0)) {
        ((((!(lock_num>=32)))?((void)0):(__assert_func("/Users/ab25cq/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h",226,"spin_lock_instance","!(lock_num >= 32u)"))));
    }
    });    return (unsigned int*)(3489660928+256+lock_num*4);
}
static unsigned int spin_lock_get_num(unsigned int* lock){
    ({    if(    ((0||0)&&!0)) {
        ((((!((unsigned int)lock<3489660928+256||(unsigned int)lock>=32*sizeof(unsigned int)+3489660928+256||((unsigned int)lock-3489660928+256)%sizeof(unsigned int)!=0)))?((void)0):(__assert_func("/Users/ab25cq/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h",248,"spin_lock_get_num","!((uint) lock < 0xd0000000u + 0x00000100u || (uint) lock >= 32u * sizeof(spin_lock_t) + 0xd0000000u + 0x00000100u || ((uint) lock - 0xd0000000u + 0x00000100u) % sizeof(spin_lock_t) != 0)"))));
    }
    });    return (unsigned int)(lock-(unsigned int*)(3489660928+256));
}
static void spin_lock_unsafe_blocking(unsigned int* lock){
    while(__builtin_expect(!*lock,0)) {
        tight_loop_contents();
    }
    __mem_fence_acquire();
}
static _Bool spin_try_lock_unsafe(unsigned int* lock){
    return *lock;
}
static void spin_unlock_unsafe(unsigned int* lock){
    __mem_fence_release();
    *lock=0;
}
static unsigned int spin_lock_blocking(unsigned int* lock){
unsigned int save_13;
    save_13=save_and_disable_interrupts();
    spin_lock_unsafe_blocking(lock);
    return save_13;
}
static _Bool is_spin_locked(unsigned int* lock){
unsigned int lock_num_14;
    "hw size mismatch";
    lock_num_14=spin_lock_get_num(lock);
    return 0!=(*(const unsigned int*)(3489660928+92)&(1<<lock_num_14));
}
static void spin_unlock(unsigned int* lock, unsigned int saved_irq){
    spin_unlock_unsafe(lock);
    restore_interrupts_from_disabled(saved_irq);
}

// body function
unsigned int* __piccolo_os_create_task(unsigned int* task_stack, void (*pointer_to_task_function)()){
    task_stack+=256-17;
    task_stack[8]=(unsigned int)-3;
    task_stack[15]=(unsigned int)pointer_to_task_function;
    task_stack[16]=(unsigned int)16777216;
    return task_stack;
}

int piccolo_create_task(void (*pointer_to_task_function)()){
int tc_15;
    if(    piccolo_ctx.task_count>=3) {
        return -1;
    }
    tc_15=piccolo_ctx.task_count;
    piccolo_ctx.the_tasks[tc_15]=__piccolo_os_create_task(/*b*/(void*)piccolo_ctx.task_stacks[tc_15],pointer_to_task_function);
    piccolo_ctx.task_count++;
    return piccolo_ctx.task_count-1;
}

void piccolo_sleep(unsigned int* start, int ticks){
    *start=to_ms_since_boot(get_absolute_time());
    while(to_ms_since_boot(get_absolute_time())<*start+ticks) {
        piccolo_yield();
    }
}

void piccolo_sleep_ms(int ticks){
unsigned int start_16;
memset(&start_16, 0, sizeof(unsigned int));
    start_16=to_ms_since_boot(get_absolute_time());
    while(to_ms_since_boot(get_absolute_time())<start_16+ticks) {
        piccolo_yield();
    }
}

void __piccolo_task_init(){
    unsigned int dummy_17[32];
    memset(&dummy_17, 0, sizeof(unsigned int)    *(32)    );
    stdio_usb_init();
    __piccolo_task_init_stack(dummy_17+32);
}

void piccolo_init(){
    piccolo_ctx.task_count=0;
    hw_set_bits((unsigned int*)(3758096384+60700),3221225472);
    hw_set_bits((unsigned int*)(3758096384+60704),3233808384);
}

void __piccolo_systick_config(unsigned int n){
    ((struct anonymous_typeX11*)(3758096384+57360))->csr=0;
    __dsb();
    __isb();
    hw_set_bits((unsigned int*)(3758096384+60676),33554432);
    ((struct anonymous_typeX11*)(3758096384+57360))->rvr=(n)-1;
    ((struct anonymous_typeX11*)(3758096384+57360))->cvr=0;
    ((struct anonymous_typeX11*)(3758096384+57360))->csr=3;
}

void piccolo_start(){
    piccolo_ctx.current_task=0;
    __piccolo_task_init();
    while(1) {
        __piccolo_systick_config(1000);
        piccolo_ctx.the_tasks[piccolo_ctx.current_task]=__piccolo_pre_switch(piccolo_ctx.the_tasks[piccolo_ctx.current_task]);
        piccolo_ctx.current_task++;
        if(        piccolo_ctx.current_task>=piccolo_ctx.task_count) {
            piccolo_ctx.current_task=0;
        }
    }
}

char piccolo_get_task_id(){
char task_18;
memset(&task_18, 0, sizeof(char));
    return (char)piccolo_ctx.current_task;
}

void piccolo_lock_wait(){
    if(    piccolo_ctx.started) {
        piccolo_yield();
    }
    return;
}

_Bool piccolo_lock_wait_until(unsigned long long int timeout_timestamp){
    if(    piccolo_ctx.started) {
        piccolo_yield();
    }
    return time_reached(timeout_timestamp);
}

void piccolo_lock_yield(){
    if(    piccolo_ctx.started) {
        piccolo_yield();
    }
    return;
}

