#define SYS_puts 64
#define SYS_puts 64

// user-space 側
void user_puts(const char *s) {
    asm volatile(
        "mv a0, %0\n"
        "li a7, %1\n"
        "ecall\n"
        :
        : "r"(s), "i"(SYS_puts)
        : "a0", "a7", "memory"
    );
}

// hello.c
int main() {
//    user_puts("H");
    *(volatile char*)0x10000000L = 'H';
    while (1) {
        *(volatile char*)0x10000000L = 'H';
//        user_puts("H");
        //puts("UHI");
    }
    return 0;
}

int fun() { return 5; }
