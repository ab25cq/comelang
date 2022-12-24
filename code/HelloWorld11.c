#include <neo-c.h>

int main()
{
    auto li = [1,2,3];
    
    xassert("list value test", li.item(0, -1) == 1 && li.item(1, -1) == 2 && li.item(2, -1) == 3 && li.length() == 3);
    
    auto li2 = ["AAA", "BBB", "CCC"];
    
    xassert("list value test2", li2.item(0, null).equals("AAA") && li2.item(1, null).equals("BBB") && li2.item(2, null).equals("CCC") && li2.length() == 3);
    
    auto ma1 = ["AAA":1, "BBB":2, "CCC":3];
    
    xassert("map value test1", ma1.at("AAA", -1) == 1 && ma1.at("BBB", -1) == 2 && ma1.at("CCC", -1) == 3 && ma1.length() == 3);
    
    immutable list<int>* li3 = [1,2,3].to_immutable();
    
    tuple3<int, int, char*>*% t1 = (1,2,"ABC");
    
    xassert("tuple value test1", t1.0 == 1 && t1.1 == 2 && t1.2.equals("ABC"));
    
    xassert("tuple value test2", (1,2,3).0 == 1);

    return 0;
}
