#include <comelang.h>

extern const char _ctype_[];
static __inline const char *
__locale_ctype_ptr_l(locale_t _l)
{
 (void)_l;
 return _ctype_;
}

int main(int argc, char** argv)
{
    char* a  =malloc(128);
    
    if(a == 0) {
        puts("AAA");
    }
    
    return 0;
}
