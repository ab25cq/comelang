#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

static char const ab_month_name2[2][12][4] =
{
    "Jan", "Feb", "Mar", "Apr", "May", "Jun",
    "Jul", "Aug", "Sep", "Oct", "Nov", "Dec",
    
    "Jan", "Feb", "Mar", "Apr", "May", "Jun",
    "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
};

int main()
{
    puts(ab_month_name2[1][0]);
    
    return 0;
}
