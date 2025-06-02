// hello.c
int main() {
    volatile char *uart = (char*)0x10000000;
    *uart = 'H';
    while (1) {
        *uart = 'L';
    }
    return 0;
}

