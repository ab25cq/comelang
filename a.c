#include <comelang.h>

exception int div_op(int left, int right)
{
    if(right == 0) {
        throw;
    }
    return (true, left / right);
}

exception int test(int left, int right)
{
    return div_op(left, right);
}

int main()
{
    int n = test(1,1).catch {
        puts("AAA");
        exit(1);
    }
    
    printf("n %d\n", n);
    
    return 0;
}
