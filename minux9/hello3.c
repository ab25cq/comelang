#include "minux.h"

int main(int argc, char** argv)
{
    write(1, "HELLO3\r\n", 8);
    exit(3);
}
