#include <comelang.h>

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

class sData2
{
    int a;
    int b;
    
    new() {
        self.a = 111;
        self.b = 222;
    }
    
    immutable void fun() {
        printf("%d %d\n", self.a, self.b);
    }
}

int main(int argc,char** argv)
{
    immutable sData<int> data;
    
    (&data).fun();
    
    val data2 = new sData2();
    
    data2.fun();
    
    immutable list<int>*% data3 = [1,2,3];
    
    data3.add(4);
    
    puts(data3.to_string());
    
    return 0;
}

