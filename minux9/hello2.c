

// hello.c
int main() {
    while (1) {
        *(volatile char*)0x10000000L = 'H';
    }
    return 0;
}

int fun() { return 5; }
