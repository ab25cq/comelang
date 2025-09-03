#define VA(a, ...) a, __VA_ARGS__
#define SARGS(...) #__VA_ARGS__
#define JOIN2(a, ...) a##__VA_ARGS__

int arr[] = { VA(1, [2,3], {4,5}) };
const char *s = SARGS( a , [1,2] , {3,4} );
int j = JOIN2(A, 1);
int j2 = JOIN2(A, );

