#include <comelang.h>

int main(int argc, char** argv) {
    ["1", "2", "3"].map { atoi(it) }.to_string().puts();
    
    return 0;
}
