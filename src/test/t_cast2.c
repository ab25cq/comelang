struct P { int x; };
int main(){
  void* vp = 0;
  int* ip = (const int*) vp;
  struct P* pp = (struct P*) vp;
  return (int) (unsigned long) 0;
}

