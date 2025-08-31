#include <comelang.h>

int main(int argc, char** argv) {
    strcmp("A", "B").case {
        (Value < 0) { puts("Lesser"); }
        (Value == 0) { puts("Equal"); }
        (Value > 0) { puts("Greater"); }
    }
    strcmp("A", "A").case {
        (Value == 0) { puts("Equal"); }
        else puts("Not Equal");
    }
    [1,2,3].each {
        printf("%d\n", it);
    }
    
    return 0;
}
