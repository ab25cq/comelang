#ifndef MINUX_H
#define MINUX_H

#define SYS_write 64
#define SYS_read 65
#define SYS_open 66
#define SYS_close 67

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

// user-space 側
static inline int read(long fd, const char *s, long size) {
    asm volatile(
        "mv a0, %0\n"
        "mv a1, %1\n"
        "mv a2, %2\n"
        "li a7, %3\n"
        "ecall\n"
        :
        : "r"(fd), "r"(s), "r"(size), "i"(SYS_read)
        : "a0", "a1", "a2", "a7", "memory"
    );
}

// user-space 側
static inline int open(char* path, int oflag) {
    asm volatile(
        "mv a0, %0\n"
        "mv a1, %1\n"
        "li a7, %2\n"
        "ecall\n"
        :
        : "r"(path), "r"(oflag), "i"(SYS_open)
        : "a0", "a1", "a7", "memory"
    );
}

// user-space 側
static inline int close(long fd) {
    asm volatile(
        "mv a0, %0\n"
        "li a7, %1\n"
        "ecall\n"
        :
        : "r"(fd), "i"(SYS_close)
        : "a0", "a7", "memory"
    );
}

#endif
