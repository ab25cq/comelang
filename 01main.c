#include "common.h"

int main(int argc, char** argv)
{
#ifndef __MINUX__
    setlocale(LC_ALL, "");
#endif
    return come_main(argc, argv);
}

