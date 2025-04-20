#include <comelang.h>

int main(int argc, char** argv) {
    var a = ["1", "2", "3"].map { atoi(it) };
    var b = a;
    
    b[0] = 111;
    
    a.to_string().puts();
    
    return 0;
}
