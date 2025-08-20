#include "minux.h"
#include <stdarg.h>

int strlen(const char *s) {
  int n;

  for(n = 0; s[n]; n++)
    ;
  return n;
}

int memcmp(const void *v1, const void *v2, unsigned int n) {
    const unsigned char *s1, *s2;

    s1 = v1;
    s2 = v2;
    while(n-- > 0){
        if(*s1 != *s2)
            return *s1 - *s2;
        s1++, s2++;
    }

    return 0;
}
            
int main(int argc, char** argv) {
    if(argc <= 1) {
        exit(1);
    }
    
    char* candidate = argv[1];
    
    char buf[512+1];
    int size = read(0, buf, 512);
    buf[size] = '\0';
    char* p = buf;
    char* head = buf;
    while(*p) {
        if(*p == '\n') {
            while(*p == '\n') {
                p++;
            }
            
            head = p;
        }
        else if(memcmp(p, candidate, strlen(candidate)) == 0) {
            char* tail;
            while(*p != '\0' && *p != '\n') {
                p++;
                tail = p;
            }
            write(1, head, tail -head);
            write(1, "\r\n", 2);
        }
        else {
            p++;
        }
    }
    
    exit(0);
}

