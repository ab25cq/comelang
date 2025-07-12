#include <comelang.h>


map<void*, tuple2<void*, long>*%>*% m;

int main(int argc, char** argv)
{
    m = new map<void*, tuple2<void*, long>*%>();
    
    m.insert((void*)1, ((void*)1, (long)1));
    
    return 0;
}
