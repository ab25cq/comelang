#include <stdatomic.h>

_Atomic int counter = 0;

int main(int argc, char** argv) {
    atomic_fetch_add(&counter, 1);
    return 0;
}
