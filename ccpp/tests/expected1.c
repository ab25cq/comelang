
int main() {
  int x = 42; // FOO in comment should not expand: FOO
  printf("FOO in string should not expand: FOO\n");
  printf("%s %s\n", hello, "BAR");
  return 0;
}
