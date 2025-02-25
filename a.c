#include <comelang.h>

class sData
{
    int a;
    string b;
    string c;
    
    exception int show()
    {
        puts("sData");
        
        return none(s"ERR");
    }
};

int main(int argc, char** argv)
{
    var data = new sData { a:111, b:s"AAA", c:s"BBB" };
    
    data.show().rescue {
        puts("RESCUE");
    }
    
    return 0;
}
