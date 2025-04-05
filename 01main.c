#include "common.h"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "");
    return come_main(argc, argv);
}

bool strmemcmp(char* p, char* p2)
{
    bool terminated = false;
    char* p3  = p;
    for(int i=0; i<strlen(p2); i++) {
        if(*p3 == '\0') {
            terminated = true;
            break;
        }
        p3++;
    }
    return !terminated && memcmp(p, p2, strlen(p2)) == 0;
}

bool parsecmp(char* str, sInfo* info=info) 
{
    if(strlen(info.p) < strlen(str)) {
        return false;
    }
    char c = *(info->p+strlen(str));
    return strmemcmp(info.p, str) && (c == ';' || c == ' ' || c == '\t' || c == '\n' || c == '\n' || c == '(');
}
