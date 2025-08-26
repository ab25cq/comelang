struct P { int x; };
enum E { EA = 0 };
int main(){
  void* vp = 0;
  long long* llp = (volatile long long*) vp;
  unsigned long long* ullp = (volatile unsigned long long*) vp;
  char* rc = (restrict char*) vp;
  struct P* pp = (const struct P*) vp;
  enum E e = (enum E) 0;
  (void)llp; (void)ullp; (void)rc; (void)pp; (void)e;
  return 0;
}

