#define FOO 42
#define BAR hello

int main() {
  int x = FOO; // FOO in comment should not expand: FOO
  printf("FOO in string should not expand: FOO\n");
  printf("%s %s\n", BAR, "BAR");
  return 0;
}

