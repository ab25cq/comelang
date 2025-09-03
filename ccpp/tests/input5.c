#define A 3

#if 1 + 2*3 == 7
int ok1 = 1;
#else
int bad1 = 1;
#endif

#if (10/2) - 3 != 2
int bad2 = 1;
#else
int ok2 = 2;
#endif

#if 2 < 3 && 4 >= 4
int ok3 = 3;
#endif

#if 5 > 6 || 0
int bad4 = 4;
#elif 1
int ok4 = 4;
#endif

