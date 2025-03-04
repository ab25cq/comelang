#include <comelang.h>

class sMethodNode
{
    new() {
        list<string>*% self.methods = new list<string>();
    }
    
    bool compile() {
        self.methods.each {
            puts(it);
        }
    }
};

int main(int argc, char** argv)
{
    sMethodNode*% method = new sMethodNode();
    
    method.compile();
    
    return 0;
}


