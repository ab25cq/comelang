#include <neo-c.h>

struct sStruct<T>
{
    T a;
    T b;
};

impl sStruct<T>
{
    void fun(sStruct<T>* self, T xxx, void* parent, void (*fun)(void* parent, T a)) {
        fun(parent, xxx);
    }

    template <R> R fun2(sStruct<T>* self, R a, R b) {
        return a + b;
    }
}

template <R> R fun(R a, int b)
{
    return a + b;
}

int main(int argc, char** argv)
{
    int a = 1;
    
/*
    auto fun = int lambda(__current__* parent, int b, int c) {
        *parent.a = 4;
        return (*parent.a + b + c);
    }

    printf("%d\n", fun(__stack__, 1, 2));
    xassert("closure test", a == 4);

    times(3, __stack__, void lambda(__current__* parent) {
        puts("HELLO LAMBDA");
        printf("a %p\n", parent.a);
    });
*/

    3.times() {
        puts("HELLO METHOD BLOCK");
        printf("a %d\n", *parent.a);
    }

    sStruct<int>*% data = new sStruct<int>;
    data.fun(123, __stack__, void lambda(__current__* parent, int a) {
        printf("%d\n", a);
    });
    data.fun(123) {
        puts("HELLO GENERICS METHOD BLOCK");
        printf("%d\n", it);
    }

    auto list2 = new list<int>.initialize();

    list2.push_back(1);
    list2.push_back(2);
    list2.push_back(3);

    list2.filter { return it > 1 }.each {
        printf("%d\n", it);
    }

    xassert("method generics test", fun(1,2) == 3);
    xassert("method generics test", data.fun2(1,2) == 3);

    auto list3 = new list<char*>.initialize();

    list3.push_back("1");
    list3.push_back("2");
    list3.push_back("3");

    auto list4 = list3.map { return atoi(it); }

    xassert("map test", list4.item(0, -1) == 1 && list4.item(1, -1) == 2 && list4.item(2, -1) == 3);

    return 0;
}

