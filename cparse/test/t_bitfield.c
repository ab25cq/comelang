struct B {
  unsigned a:1;
  int b:3;
  int :0;      // zero-width unnamed bit-field (force alignment)
  int c:5;
};
int main(){ return 0; }

