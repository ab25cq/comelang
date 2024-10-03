#include "common.h"

int come_main(int argc, char** argv) version 1
{
    puts("HELLO COMELANG");
    
    return 0;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "");
    return come_main(argc, argv);
}
