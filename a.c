
/*
static int max_int(int a, int b) { return a > b ? a : b; }
static long max_long(long a, long b) { return a > b ? a : b; }
static double max_double(double a, double b) { return a > b ? a : b; }

int total_tests = 0;
*/

int fun(int a, int b) {
    return a + b;
}
static int sum_vla_param(int len, int arr[len]) {
    int sum = 0; for (int i = 0; i < len; ++i) sum += arr[i];
    return sum;
}

int main(int argc, char** argv) {
/*
    int (*fi)(int,int) = _Generic(0, int: max_int, default: max_int);
    long (*fl)(long,long) = _Generic(0L, long: max_long, default: max_long);
    double (*fd)(double,double) = _Generic(0.0, double: max_double, default: max_double);
    
    do { do { total_tests++; } while(0); 
    
    long long _e = (long long)(5); 
    long long _g = (long long)(_Generic((3), int: max_int, long: max_long, double: max_double, default: max_double)(3, 5)); 
    if(_e != _g) do { failed_tests++; 
    printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 434, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); long long _e = (long long)(7L); long long _g = (long long)((long)_Generic((7L), int: max_int, long: max_long, double: max_double, default: max_double)(7L, 2L)); if(_e != _g) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "INT expected=%lld got=%lld" "\n", "code/codex.c", 435, __func__, _e, _g); } while(0); } while(0);
    do { do { total_tests++; } while(0); double _e = (double)(2.5); double _g = (double)(_Generic((2.5), int: max_int, long: max_long, double: max_double, default: max_double)(2.5, -1.0)); double _d = fabs(_e - _g); if(!(_d <= (1e-12))) do { failed_tests++; printf("FAIL: %s:%d in %s() -> " "DBL expected=%.10f got=%.10f (|d|=%.3g, eps=%.3g)" "\n", "code/codex.c", 436, __func__, _e, _g, _d, (double)(1e-12)); } while(0); } while(0);
*/
    char s[] = "ABC";

    return 0;
}
