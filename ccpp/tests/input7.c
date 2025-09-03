#define FOO 5
#define ADD(a,b) ((a)+(b))

int x = ADD(1, 2);
int y = ADD(ADD(1,2), 3);
int z = ADD(FOO, 4);
int w = ADD((1+2), (3+4));

