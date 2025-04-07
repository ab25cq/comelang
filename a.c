#include <comelang.h>
#include <comelang-pthread.h>

struct sData<T>
{
    T a;
    T b;
};

impl sData<T>
{
    sData<T>*% initialize(sData<T>*% self) {
        self.a = 111;
        self.b = 222;
        
        return self;
    }
    immutable void fun(sData<T>* self) {
        printf("%d %d\n", self.a, self.b);
    }
}

int main(int argc,char** argv)
{
    come_mutex<sData<int>*%>*% data = new come_mutex<sData<int>*%>(new sData<int>());
    
    data.a = 3333;
    
    return 0;
}

