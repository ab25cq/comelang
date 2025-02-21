#include <comelang.h>

dynamic struct sData<T>
{
    T a;
    T b;
};

int main(int argc, char** argv)
{
    var data = new sData<int>;
    
    return 0;
}
