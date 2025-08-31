#include <comelang.h>


int main(int argc, char** argv) {
    const int a = 1;
    const int b = 3;
    int values[b] = { [a]=1,[0]=2,[2]=3 };
    
    list<int>*% li = clone new list<int>.initialize_with_values(3, values);
    
    li.add(4).add(5);
    
    var li2 = li;
    
    (clone (li2.sublist(0,1000000).filter { it > 3 }) === clone [4,5]).if {
        puts("OK");
    }
    
    int a = li2.pop_front();
    
    printf("%d\n", a);

    return 0;
}
