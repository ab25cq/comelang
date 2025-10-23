#include "minux.h"
#include <stdarg.h>
            
int main(int argc, char** argv) {
    char* candidate;
    char* p;
    char* head;
    char* tail;
    int size;
    char buf[32] = { 0 };
    if(argc <= 1) {
        exit(1);
    }
    candidate = argv[1];
    while ((size = read(0, buf, 32)) > 0) {
        buf[size] = '\0';
        p = buf;
        head = buf;
        while(*p) {
            if(*p == '\n') {
                while(*p == '\n') {
                    p++;
                }
                
                head = p;
            }
            else if(memcmp(p, candidate, strlen(candidate)) == 0) {
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
    }
    /*
    while(*p) {
        if(*p == '\n') {
            while(*p == '\n') {
                p++;
            }
            
            head = p;
        }
        else if(memcmp(p, candidate, strlen(candidate)) == 0) {
            while(*p != '\0' && *p != '\n') {
                p++;
                tail = p;
            }
            write(1, "a", 1); //strlen(buf)); //head, tail -head);
            //write(1, buf, strlen(buf)); //head, tail -head);
            write(1, "\r\n", 2);
        }
        else {
            p++;
        }
    }
    */

    exit(0);
}

