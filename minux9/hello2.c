// hello.c
int main() {
    volatile char *uart = (char*)0x10000000;
    *uart = 'G';
    while (1) {
        *uart = 'D';
    }
    return 0;
}

