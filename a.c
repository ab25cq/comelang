#include <comelang.h>
#include <comelang-pthread.h>

int main(int argc,char** argv)
{
    int a = 111;
    var thread1 = come {
        int b = 222;
        
        printf("a %d b %d\n", a, b);
        
        int*% a = new int;
        var li = [1,2,3];
        *a = 111;
        printf("%d\n", *a);
        
        li.each {
            printf("%d\n", it);
        }
    }
    
    var thread2 = come {
        int c = 333;
        
        printf("a %d c %d\n", a,c );
        
        int*% b = new int;
        var li = [s"AAA", s"BBB", s"CCC"];
        *b = 112;
        printf("%d\n", *b);
        
        li.each {
            puts(it);
        }
    }
    
    come_join(thread1);
    come_join(thread2);
    
    return 0;
}
