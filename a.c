#include <comelang.h>
#include <comelang-pthread.h>

int main(int argc,char** argv)
{
    var li = new come_mutex<list<int>*%>([1,2,3]);
    
    var thread2 = come {
        sleep(3);
        
        li.lock().to_string().puts();
    }
    
    var thread = come {
        li.lock.add(4);
        li.lock.add(5);
    }
    
    come_join(thread);
    come_join(thread2);
    
    return 0;
}
