#include <comelang.h>


int main(int argc, char** argv) {
    const int a = 1;
    const int b = 3;
    int values[b] = { [a]=1,[0]=2,[2]=3 };
    
    list<int>*% li = new list<int>.initialize_with_values(3, values);
    
    li.add(4).add(5);
    
    (li.sublist(0,1000000).filter { it > 3 }.map { it.to_string() } === [s"4",s"5"]).if {
        puts("OK");
    }

    return 0;
}
