#include <neo-c.h>

struct sData 
{
    int a;
    string b;
};

int main()
{
    sData*% data = new sData;
    data.b = string("AAA");
    
    return 0;
}

