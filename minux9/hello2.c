// hello.c
int main() {
    volatile char *uart = (char*)0x10000000;
    while (1) {
        *uart = 'X';
    }
    return 0;
}

