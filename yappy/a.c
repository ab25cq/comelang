#include <neo-c.h>

int main()
{
    auto re = ",|\\\.".to_regex();
    re.global = true;
    auto li = "AAA,BBB.CCC".split(re);
    
    printf("(%s)\n", li.item(0, null));
    
    return 0;
}
