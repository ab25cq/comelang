// hello.c
int main() {
    volatile char *uart = (char*)0x10000000;
    while (1) {
        *uart = 'H';
        *uart = 'E';
        *uart = 'L';
        *uart = 'L';
        *uart = 'O';
    }
    return 0;
}

