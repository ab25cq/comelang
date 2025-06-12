#define SYS_puts 64

// user-space 側
void user_puts(const char *s) {
//    *(volatile char*)0x10000000L = 'X';
    asm volatile(
        "mv a0, %0\n"
        "li a7, %1\n"
        "ecall\n"
        :
        : "r"(s), "i"(SYS_puts)
        : "a0", "a7", "memory"
    );
}

int fun() {
    return 3;
}
            
// hello.c
int main() {
    *(volatile char*)0x10000000L = 'O';
    //*(volatile char*)0x10000000L = 'W';
//    user_puts("O");
    while (1) {
//        user_puts("O");
    }
    return 0;
}

