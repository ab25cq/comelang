#define __BYTE_ORDER 1111
struct timespec { int :8*(sizeof(long)-sizeof(int))*(__BYTE_ORDER==4321); long tv_nsec; int :8*(sizeof(long)-sizeof(int))*(__BYTE_ORDER!=4321); };


int main(int argc, char** argv)
{
    return 0;
}

