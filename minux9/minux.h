#ifndef MINUX_H
#define MINUX_H

#define SYS_write 64

// user-space 側
static inline int write(long fd, const char *s, long size) {
    asm volatile(
        "mv a0, %0\n"
        "mv a1, %1\n"
        "mv a2, %2\n"
        "li a7, %3\n"
        "ecall\n"
        :
        : "r"(fd), "r"(s), "r"(size), "i"(SYS_write)
        : "a0", "a7", "memory"
    );
}

#endif
