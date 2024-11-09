// source head
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
typedef long  long __int64_t;
typedef unsigned long  long __uint64_t;
typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
typedef int __darwin_ct_rune_t;
union anonymous_typeZ1
{
char __mbstate8[128];
long  long _mbstateL;
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
typedef long  long __darwin_blkcnt_t;
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
typedef long  long __darwin_off_t;
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
typedef long  int ptrdiff_t;
typedef unsigned long  int size_t;
typedef unsigned long  int rsize_t;
typedef int wchar_t;
typedef long  double max_align_t;
typedef unsigned int uint;
typedef unsigned long  long absolute_time_t;
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
extern const unsigned long  long at_the_end_of_time;
extern const unsigned long  long nil_time;
typedef int alarm_id_t;
typedef long long (*alarm_callback_t)(int,void*);
typedef struct alarm_pool alarm_pool_t;
typedef void alarm_pool_timer_t;
typedef struct repeating_timer repeating_timer_t;
typedef _Bool (*repeating_timer_callback_t)(struct repeating_timer*);
struct repeating_timer
{
    long long delay_us;
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
void __assert_rtn(const char* anonymous_var_nameX1, const char* anonymous_var_nameX2, int anonymous_var_nameX3, const char* anonymous_var_nameX4);
void panic_unsupported();
void panic(const char* fmt, ...);
unsigned char rp2040_chip_version();
void stdio_uart_init();
int getchar_timeout_us(unsigned int timeout_us);
unsigned int time_us_32();
unsigned long  long time_us_64();
void busy_wait_us_32(unsigned int delay_us);
void busy_wait_us(unsigned long  long delay_us);
void busy_wait_ms(unsigned int delay_m);
void busy_wait_until(unsigned long  long t);
_Bool time_reached(unsigned long  long t);
void hardware_alarm_claim(unsigned int alarm_num);
void hardware_alarm_unclaim(unsigned int alarm_num);
int hardware_alarm_claim_unused(_Bool required);
void hardware_alarm_set_callback(unsigned int alarm_num, void (*callback)(unsigned int));
_Bool hardware_alarm_set_target(unsigned int alarm_num, unsigned long  long t);
void hardware_alarm_cancel(unsigned int alarm_num);
void hardware_alarm_force_irq(unsigned int alarm_num);
void sleep_until(unsigned long  long target);
void sleep_us(unsigned long  long us);
void sleep_ms(unsigned int ms);
_Bool best_effort_wfe_or_timeout(unsigned long  long timeout_timestamp);
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
int alarm_pool_add_alarm_at(struct alarm_pool* pool, unsigned long  long time, long long (*callback)(int,void*), void* user_data, _Bool fire_if_past);
int alarm_pool_add_alarm_at_force_in_context(struct alarm_pool* pool, unsigned long  long time, long long (*callback)(int,void*), void* user_data);
long long alarm_pool_remaining_alarm_time_us(struct alarm_pool* pool, int alarm_id);
int alarm_pool_remaining_alarm_time_ms(struct alarm_pool* pool, int alarm_id);
_Bool alarm_pool_cancel_alarm(struct alarm_pool* pool, int alarm_id);
long long remaining_alarm_time_us(int alarm_id);
int remaining_alarm_time_ms(int alarm_id);
_Bool alarm_pool_add_repeating_timer_us(struct alarm_pool* pool, long long delay_us, _Bool (*callback)(struct repeating_timer*), void* user_data, struct repeating_timer* out);
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
int fun();
int main();
// uniq global variable

// source head3

// inline function
static inline unsigned long  long to_us_since_boot(unsigned long  long t){
    return t;
}
static inline void update_us_since_boot(unsigned long  long* t, unsigned long  long us_since_boot){
    *t=us_since_boot;
}
static inline unsigned long  long from_us_since_boot(unsigned long  long us_since_boot){
unsigned long  long t_0;
memset(&t_0, 0, sizeof(unsigned long  long));
    update_us_since_boot(&t_0,us_since_boot);
    return t_0;
}
static inline void __compiler_memory_barrier(){
    __asm volatile("" : : : "memory");
}
static inline void tight_loop_contents(){
}
static inline void busy_wait_at_least_cycles(unsigned int minimum_cycles){
    __asm volatile("1: subs %0, #3\n" "bcs 1b\n" : "+l" (minimum_cycles) : : "cc", "memory");
}
static inline _Bool running_on_fpga(){
    return 0;
}
static inline void __breakpoint(){
    __asm volatile("bkpt #0" : : : "memory");
}
static inline unsigned int get_core_num(){
    return (*(unsigned int*)(3489660928+0));
}
static inline unsigned int __get_current_exception(){
unsigned int exception_1;
memset(&exception_1, 0, sizeof(unsigned int));
    __asm volatile("mrs %0, ipsr" : "=l" (exception_1));
    return exception_1;
}
static inline unsigned char rp2040_rom_version(){
    return *(unsigned char*)19;
}
static inline int __mul_instruction(int a, int b){
    __asm ("muls %0, %1" : "+l" (a) : "l" (b) : "cc");
    return a;
}
static inline void stdio_usb_init(){
}
static inline void stdio_init_all(){
    stdio_uart_init();
}
static inline void stdio_filter_driver(struct stdio_driver* driver){
}
static inline void stdio_set_translate_crlf(struct stdio_driver* driver, _Bool enabled){
}
static inline _Bool stdio_usb_connected(){
    return 1;
}
static inline void check_hardware_alarm_num_param(unsigned int alarm_num){
    ({    if(    ((0||0)&&!0)) {
        (((__builtin_expect(!(!(alarm_num>=4)),0))?(__assert_rtn("check_hardware_alarm_num_param","timer.h",26,"!(alarm_num >= 4u)")):((void)0)));
    }
    });}
static inline unsigned long  long get_absolute_time(){
unsigned long  long t_2;
memset(&t_2, 0, sizeof(unsigned long  long));
    update_us_since_boot(&t_2,time_us_64());
    return t_2;
}
static inline unsigned int us_to_ms(unsigned long  long us){
    if(    us>>32) {
        return (unsigned int)(us/1000);
    }
    else {
        return ((unsigned int)us)/1000;
    }
}
static inline unsigned int to_ms_since_boot(unsigned long  long t){
unsigned long  long us_3;
    us_3=to_us_since_boot(t);
    return us_to_ms(us_3);
}
static inline unsigned long  long delayed_by_us(const unsigned long  long t, unsigned long  long us){
unsigned long  long t2_4;
unsigned long  long base_5;
unsigned long  long delayed_6;
memset(&t2_4, 0, sizeof(unsigned long  long));
    base_5=to_us_since_boot(t);
    delayed_6=base_5+us;
    if(    (long long)delayed_6<0) {
        delayed_6=9223372036854775807;
    }
    update_us_since_boot(&t2_4,delayed_6);
    return t2_4;
}
static inline unsigned long  long delayed_by_ms(const unsigned long  long t, unsigned int ms){
unsigned long  long t2_7;
unsigned long  long base_8;
unsigned long  long delayed_9;
memset(&t2_7, 0, sizeof(unsigned long  long));
    base_8=to_us_since_boot(t);
    delayed_9=base_8+ms*1000;
    if(    (long long)delayed_9<0) {
        delayed_9=9223372036854775807;
    }
    update_us_since_boot(&t2_7,delayed_9);
    return t2_7;
}
static inline unsigned long  long make_timeout_time_us(unsigned long  long us){
    return delayed_by_us(get_absolute_time(),us);
}
static inline unsigned long  long make_timeout_time_ms(unsigned int ms){
    return delayed_by_ms(get_absolute_time(),ms);
}
static inline long long absolute_time_diff_us(unsigned long  long from, unsigned long  long to){
    return (long long)(to_us_since_boot(to)-to_us_since_boot(from));
}
static inline unsigned long  long absolute_time_min(unsigned long  long a, unsigned long  long b){
    return ((to_us_since_boot(a)<to_us_since_boot(b))?(a):(b));
}
static inline _Bool is_at_the_end_of_time(unsigned long  long t){
    return to_us_since_boot(t)==to_us_since_boot(at_the_end_of_time);
}
static inline _Bool is_nil_time(unsigned long  long t){
    return !to_us_since_boot(t);
}
static inline struct alarm_pool* alarm_pool_create(unsigned int timer_alarm_num, unsigned int max_timers){
    return alarm_pool_create_on_timer(alarm_pool_get_default_timer(),timer_alarm_num,max_timers);
}
static inline struct alarm_pool* alarm_pool_create_with_unused_hardware_alarm(unsigned int max_timers){
    return alarm_pool_create_on_timer_with_unused_hardware_alarm(alarm_pool_get_default_timer(),max_timers);
}
static inline unsigned int alarm_pool_hardware_alarm_num(struct alarm_pool* pool){
    return alarm_pool_timer_alarm_num(pool);
}
static inline int alarm_pool_add_alarm_in_us(struct alarm_pool* pool, unsigned long  long us, long long (*callback)(int,void*), void* user_data, _Bool fire_if_past){
    return alarm_pool_add_alarm_at(pool,delayed_by_us(get_absolute_time(),us),callback,user_data,fire_if_past);
}
static inline int alarm_pool_add_alarm_in_ms(struct alarm_pool* pool, unsigned int ms, long long (*callback)(int,void*), void* user_data, _Bool fire_if_past){
    return alarm_pool_add_alarm_at(pool,delayed_by_ms(get_absolute_time(),ms),callback,user_data,fire_if_past);
}
static inline int add_alarm_at(unsigned long  long time, long long (*callback)(int,void*), void* user_data, _Bool fire_if_past){
    return alarm_pool_add_alarm_at(alarm_pool_get_default(),time,callback,user_data,fire_if_past);
}
static inline int add_alarm_in_us(unsigned long  long us, long long (*callback)(int,void*), void* user_data, _Bool fire_if_past){
    return alarm_pool_add_alarm_in_us(alarm_pool_get_default(),us,callback,user_data,fire_if_past);
}
static inline int add_alarm_in_ms(unsigned int ms, long long (*callback)(int,void*), void* user_data, _Bool fire_if_past){
    return alarm_pool_add_alarm_in_ms(alarm_pool_get_default(),ms,callback,user_data,fire_if_past);
}
static inline _Bool cancel_alarm(int alarm_id){
    return alarm_pool_cancel_alarm(alarm_pool_get_default(),alarm_id);
}
static inline _Bool alarm_pool_add_repeating_timer_ms(struct alarm_pool* pool, int delay_ms, _Bool (*callback)(struct repeating_timer*), void* user_data, struct repeating_timer* out){
    return alarm_pool_add_repeating_timer_us(pool,delay_ms*(long long)1000,callback,user_data,out);
}
static inline _Bool add_repeating_timer_us(long long delay_us, _Bool (*callback)(struct repeating_timer*), void* user_data, struct repeating_timer* out){
    return alarm_pool_add_repeating_timer_us(alarm_pool_get_default(),delay_us,callback,user_data,out);
}
static inline _Bool add_repeating_timer_ms(int delay_ms, _Bool (*callback)(struct repeating_timer*), void* user_data, struct repeating_timer* out){
    return alarm_pool_add_repeating_timer_us(alarm_pool_get_default(),delay_ms*(long long)1000,callback,user_data,out);
}

// body function









































int fun(){
    return 3;
}

int main(){
    const unsigned int LED_PIN_10=25;
    gpio_init(LED_PIN_10);
    gpio_set_dir(LED_PIN_10,1);
    while(1) {
        gpio_put(LED_PIN_10,1);
        sleep_ms(500);
        gpio_put(LED_PIN_10,0);
        sleep_ms(500);
    }
    return 0;
}

