
int main(int argc, char** arv)
{
    char* current_brk = ({ register long _a0 asm("a0") = (long)(0); register long _a7 asm("a7") = 74; asm volatile("ecall" : "+r"(_a0) : "r"(_a7) : "memory"); (char*)_a0; });
}
