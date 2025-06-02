// hello.c
int main() {
    volatile char *uart = (char*)0x10000000;
    *uart = 'G';
    while (1); // halt
    return 0;
}

