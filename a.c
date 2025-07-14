#include <comelang.h>

struct aaa {
    map<void*, tuple2<void*, long>*%>*% m;
};

int main(int argc, char** argv)
{
    aaa X;
    
    X.m = new map<void*, tuple2<void*, long>*%>();
    
    X.m.insert((void*)1, ((void*)1, (long)1));
    
    return 0;
}
