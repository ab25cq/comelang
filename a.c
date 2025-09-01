#include <comelang.h>

int main(int argc, char** argv) {
    strcmp("aaa", "aaa").case {
        (Value == 0) {
            0;
        }
        (Value < 0) {
            1;
        }
        (Value > 0) {
            2;
        }
    }
    return 0;
}
