#include <comelang.h>

exception int div_op(int left, int right)
{
    if(right == 0) {
        throw;
    }
    return left / right;
}

exception int test(int left, int right)
{
    return div_op(left, right).catch {
        throw;
    }
}

int main()
{
    int n = test(4,0).catch {
        puts("zero div");
        exit(1);
    }
    
    printf("n %d\n", n);
    
    return 0;
}
