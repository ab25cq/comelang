#define FOO 7

int f() {
  int FOO_BAR = 3; // should not change identifier parts
  int y = FOO + FOO_BAR; /* block comment FOO */
  char c = '\''; // single quote handling
  return y;
}

