#include <neo-c.h>

/*
macro vector
{
    export VALUE=$PARAMS
    cat <<EOS2
auto v = new vector<int>.initialize();

v.push_back(1);
v.push_back(2);
v.push_back($VALUE);
return v
EOS2
}

macro list
{
    cat <<EOS3
auto li = new list<int>.initialize();

li.push_back(1);
li.push_back(2);
li.push_back(3);

return li
EOS3
}
*/

inline int fun()
{
    defer puts("fun finish");

    puts("in fun");

    return 123;
}

int fun2()
{
    defer puts("fun2 finish");

    puts("in fun2");

    if(true) {
        return 123;
    }
    
    return 123;
}

int main()
{
    defer puts("main FINISH");

/*
    auto v = vector@(7);

    xassert("macro test", v.item(0, -1) == 1 && v.item(1, -1) == 2 && v.item(2, -1) == 7);
    
    auto li = list@();
    
    xassert("macro test2", li.item(0, -1) == 1 && li.item(1, -1) == 2 && li.item(2, -1) == 3 && li.length() == 3);
*/

puts("before fun");
    fun();

puts("before fun2");
    fun2();
puts("after fun2");

    return 0;
}
