volatile char *uart = (char *)0x10000000;

void putc(char c) {

    *(volatile char*)(0x10000000) = c;
}

void puts(const char *s) {
    while (*s) putc(*s++);
}


int main()
{
    puts("HELLO WORLD\n");
    while (1);
}
