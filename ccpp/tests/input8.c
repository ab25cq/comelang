#define STR(x) #x
#define CAT(a,b) a##b
#define TAKEFIRST(a,b) a

const char *s = STR(hello   "x"   world);
int a = CAT(fo, o);
int b = CAT(A, 1);
int t = TAKEFIRST([1,2,3,4], 99);

