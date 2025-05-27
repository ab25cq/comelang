// hello.c
int main() {
    volatile char *uart = (char*)0x10000000;
    const char *msg = "Hello from user!\n";
    while (*msg) *uart = *msg++;
    while (1); // halt
    return 0;
}

