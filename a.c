
typedef unsigned long long uint64_t;
static __always_inline int __get_current_exception(void) {
    int exception;
    __asm volatile ("mrs %0, ipsr" : "=l" (exception));
    return exception;
}
int main(int argc, char** argv)
{
    
    return 0;
}
