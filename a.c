//#include <stdio.h>
#include <stddef.h>

struct WithFlexible {
    int n;
    char data[]; // flexible array member (C99)
};


int main(int argc, char** argv) {
    int bytes = offsetof(struct WithFlexible, data) + 5;

    return 0;
}
