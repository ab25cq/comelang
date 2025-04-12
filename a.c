#include <comelang.h>

int main(int argc, char** argv) {
    var li = [1,2,3];
    
    li.map { it.to_string() + s"AAA" }.to_string().puts();
    
    return 0;
}
