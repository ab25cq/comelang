#include <comelang.h>

struct sData
{
    string a;
    string b;
};

int main(int argc,char** argv)
{
    sData*% a = if(true) {
        string b = if(true) {
            s"ABC"
        }
        else {
            s"DEF"
        }
        
        puts(b);
        
        new sData { a:s"AAA", b:s"BBB" }
    }
    else {
        new sData { a:s"BBB", b:s"CCC" }
    }
    
    puts(a.a);
    
    return 0;
}
