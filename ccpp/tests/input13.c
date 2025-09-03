#define A 3

#if (1<<3) == 8 && (7%4)==3
int ok_shift_mod = 1;
#endif

#if (5 & 3) == 1 && (5 | 2) == 7 && (5 ^ 1) == 4
int ok_bitwise = 2;
#endif

#if 0 ? 111 : 222
int ok_ternary = 3;
#endif

