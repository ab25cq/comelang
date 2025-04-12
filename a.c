#include <comelang.h>

int main(int argc, char** argv) {
    var li = [1,2,3];
    
    li.map<char*%> {
        return s"AAA";
    }
    
    return 0;
}
