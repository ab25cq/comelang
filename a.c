#include <comelang.h>


int main(int argc, char** argv) {
    const int a = 1;
    const int b = 3;
    int values[b] = { [a]=1,[0]=2,[2]=3 };
    
    list<int>*% li = new list<int>.initialize_with_values(3, values);
    
    li.add(4).add(5);
    
    foreach(it, li.sublist(0,1000000).map { it.to_string() }) {
        printf("%s\n", it);
    }

    return 0;
}
