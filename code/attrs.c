// Demonstrates GCC function and variable attributes
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

// constructor/destructor: run before/after main
static void __attribute__((constructor)) on_load(void) {
    puts("[constructor] Library/Program loaded");
}

static void __attribute__((destructor)) on_unload(void) {
    puts("[destructor] Library/Program unloading");
}

// format(printf): ask GCC to check printf-style formatting
static void __attribute__((format(printf, 1, 2))) my_log(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    vfprintf(stdout, fmt, ap);
    va_end(ap);
}

// aligned/packed on structs
struct __attribute__((packed)) PackedPoint {
    char x;
    int  y;
};

struct __attribute__((aligned(32))) AlignedBuf {
    char bytes[32];
};

// cleanup attribute for automatic resource management
static void cleanup_FILEp(FILE **fp) {
    if (fp && *fp) {
        puts("[cleanup] fclose(fp)");
        fclose(*fp);
    }
}

// hot/cold function attributes (mostly optimization hints)
static int __attribute__((hot)) hot_add(int a, int b) { return a + b; }
static int __attribute__((cold)) cold_path(int code) { 
    fprintf(stderr, "[cold] code=%d\n", code);
    return -code;
}

int main(void) {
    // unused variable attribute suppresses warnings
    int __attribute__((unused)) tmp_unused = 42;

    my_log("[format] hello %s, num=%d\n", "gcc", 123);

    struct PackedPoint p = { .x = 'A', .y = 0x12345678 };
    struct AlignedBuf  b = { .bytes = {0} };

    printf("[packed] sizeof(PackedPoint)=%zu, align=%zu\n",
           sizeof(p), (size_t)_Alignof(struct PackedPoint));
    printf("[aligned] alignof(AlignedBuf)=%zu\n",
           (size_t)_Alignof(struct AlignedBuf));

    // Resource auto-cleanup at scope exit
    //__attribute__((cleanup(cleanup_FILEp))) FILE *fp = fopen("/dev/null", "w");
/*
    __attribute__((cleanup(cleanup_FILEp))) output { FILE *fp = fopen("/dev/null", "w") };
    
    if (!fp) {
        perror("fopen");
        return 1;
    }
    fputs("[cleanup] writing to /dev/null\n", fp);
*/

    // Hot/cold usage
    int s = hot_add(10, 32);
    if (s < 0) s = cold_path(s);
    printf("[hot/cold] sum=%d\n", s);

    return 0; // triggers destructor after return
}
