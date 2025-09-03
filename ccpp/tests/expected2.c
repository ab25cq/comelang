
int f() {
  int FOO_BAR = 3; // should not change identifier parts
  int y = 7 + FOO_BAR; /* block comment FOO */
  char c = '\''; // single quote handling
  return y;
}
