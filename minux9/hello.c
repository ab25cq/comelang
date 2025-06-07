//int fun() { return 3; }

// hello.c
int main() {
    while (1) {
        *(volatile char*)0x10000000L = 'W';
    }
    return 0;
}

int fun() {
    return 3;
}
