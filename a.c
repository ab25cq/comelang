#include <neo-c.h>

int main()
{
    int len = 111;
    char* var_name = (char*)"ABC";
    
    char var_name2[1042];
    memcpy(var_name2, var_name, len);
    var_name2[len] = '\0'
    
    return 0;
}

