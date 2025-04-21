volatile char *uart = (char *)0x10000000;

void putc(char c) {
    while ((*(volatile int*)(0x10000005)) & 0x20); // TX FIFOが空くのを待つ
    *(volatile char*)(0x10000000) = c;
}


void puts(const char *s) {
    while (*s) putc(*s++);
}

void _start() 
{
//    puts("HELLO WORLD\n");
    while (1);
}

