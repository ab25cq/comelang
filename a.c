#include <comelang.h>

struct sData;

void fun(sData* a)
{
}

class sData
{
    new() {
        string self.str = s"ABC";
    }
    
    void show() {
        puts(self.str);
    }
};

int main(int argc, char** argv)
{
    var data = new sData();
    
    data.show();
    
    return 0;
}


