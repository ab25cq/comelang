#include "src/common.h"

int main(int argc, char** argv)
{
    char module_name3[PATH_MAX];
    
    char* p = module_name3 + strlen(module_name3);
    while(p >= module_name3) {
        if(*p == '.') {
            *p = '\0';
            break;
        }
    }
    
    return 0;
}
