union U { int i; long l; };
enum E { EA = 0, EB = 1 };

long double*** gl;
int*** gi;

int main(){
  void* vp = 0;
  long double** ldpp = (long double**) vp;
  int*** ippp = (int***) vp;
  union U u = (union U) 0;
  enum E e = (enum E) 1;
  (void)gl; (void)gi; (void)ldpp; (void)ippp; (void)u; (void)e;
  return 0;
}

