#define A 1
#define B 0

int t0 = 1; // keep
#if 0
int should_be_removed_0 = 1;
#endif

#if 1
int kept_1 = 1;
#endif

#ifdef A
int kept_ifdef = 10;
#endif

#ifndef A
int removed_ifndef = 20;
#endif

#if defined(A) && !defined(BBB)
int kept_defined = 30;
#endif

#if defined(UNDEF) || 0
int removed_defined = 40;
#endif

#if 0
int removed_branch = 50;
#elif 0
int removed_branch2 = 60;
#else
int kept_else = 70;
#endif

int tail = 99;
