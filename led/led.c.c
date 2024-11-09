// source head
#include "pico/stdlib.h"

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
int fun();
int main();
// uniq global variable

// source head3

// inline function

// body function
int fun(){
    return 3;
}

int main(){
    const unsigned int LED_PIN_0=25;
    gpio_init(LED_PIN_0);
    gpio_set_dir(LED_PIN_0,1);
    while(1) {
        gpio_put(LED_PIN_0,1);
        sleep_ms(500);
        gpio_put(LED_PIN_0,0);
        sleep_ms(500);
    }
    return 0;
}

