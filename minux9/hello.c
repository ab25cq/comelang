typedef unsigned long size_t;

#define SYS_write 64
#define SYS_exit  70

static inline long write(int fd, const void *buf, size_t len) {
    register long a0 asm("a0") = (long)fd;
    register long a1 asm("a1") = (long)buf;
    register long a2 asm("a2") = (long)len;
    register long a7 asm("a7") = SYS_write;
    asm volatile("ecall"
                 : "+r"(a0)
                 : "r"(a1), "r"(a2), "r"(a7)
                 : "memory");
    return a0;
}

static inline void exit(int status) {
    register long a0 asm("a0") = (long)status;
    register long a7 asm("a7") = SYS_exit;
    asm volatile("ecall"
                 : "+r"(a0)
                 : "r"(a7)
                 : "memory");
    while (1) {
        asm volatile("wfi");
    }
}

int main()
{
    write(1, "HELLO WORLD!!\r\n", 15);
    exit(0);
}
