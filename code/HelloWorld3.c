#include <neo-c.h>

int main()
{
    xassert("xaasert test", true);

    auto a = xsprintf("AAA");

    xassert("xsprintf test", strcmp(xsprintf("AAA"), "AAA") == 0);
    xassert("xsprintf test", strcmp(xsprintf("%d%d", 1, 1), "11") == 0);

    xassert("string test", strcmp(string("AAA"), "AAA") == 0);

    xassert("string test2", strcmp("ABC".reverse(), "CBA") == 0);
    xassert("string test3", strcmp("ABC".substring(0,1), "A") == 0);

    vector<int>*% v = new vector<int>.initialize();

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    xassert("vector test1", v.item(0, -1) == 1 && v.item(1, -1) == 2 && v.item(2, -1) == 3 && v.item(100, -1) == -1 && v.length() == 3);
    
    v.replace(0, 7);

    xassert("vector test2", v.item(0, -1) == 7);

    foreach(it, v) {
        printf("%d\n", it);
    }

    list<int>*% l = new list<int>.initialize();

    xassert("list test1", l.length() == 0);

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    xassert("list test2", l.length() == 3 && l.item(0, -1) == 1 && l.item(1, -1) == 2 && l.item(2, -1) == 3);

    l.insert(0,0);

    xassert("list test3", l.length() == 4 && l.item(0, -1) == 0 && l.item(1, -1) == 1 && l.item(2, -1) == 2 && l.item(3, -1) == 3);

    l.delete(0, 1);

    xassert("list test4", l.length() == 3 && l.item(0, -1) == 1 && l.item(1, -1) == 2 && l.item(2, -1) == 3);

    l.replace(0, 7);

    xassert("list test5", l.length() == 3 && l.item(0, -1) == 7 && l.item(1, -1) == 2 && l.item(2, -1) == 3);

    list<int>*% l2 = l.sublist(1,-1);

    xassert("list test6", l2.length() == 2 && l2.item(0, -1) == 2 && l2.item(1, -1) == 3);

    list<int>*% l3 = l2.reverse();

    xassert("list test7", l3.length() == 2 && l3.item(0, -1) == 3 && l3.item(1, -1) == 2);

    list<int>*% l4 = new list<int>.initialize();

    l4.push_back(3);
    l4.push_back(1);
    l4.push_back(2);

    list<int>*% l5 = l4.sort_with_lambda(int_compare);

    foreach(it, l5) {
        printf("%d\n", it);
    }

    map<string, int>*% m = new map<string, int>.initialize();

    m.insert(string("AAA"), 1);
    m.insert(string("BBB"), 2);
    m.insert(string("CCC"), 3);

    xassert("map test1", m.length() == 3);
    xassert("map test2", m.at(string("AAA"), -1) == 1 && m.at(string("BBB"), -1) == 2 && m.at(string("CCC"), -1) == 3);
    xassert("map test3", m.at("AAA", -1) == 1 && m.at("BBB", -1) == 2 && m.at("CCC", -1) == 3);

    foreach(it, m) {
        puts(it);
    }

    tuple2<int, char*>*% t = new tuple2<int, char*>;

    t.v1 = 123;
    t.v2 = "ABC";

    xassert("tuple test", t.v1 == 123 && t.v2 == "ABC");

    auto lx = new list<int>.initialize();

    lx.push_back(1);
    lx.push_back(2);
    lx.push_back(3);

    
    foreach(it, lx.sublist(1,3)) {
        int a = 1;
        auto str = string("AAA");
        printf("%d\n", it);
    }

    vector<int*>*% v3 = new vector<init*>.initialize();

    int x = 0;

    v3.push_back(&x);

    printf("%d\n", *v3.item(0, null));

    buffer*% b1 = new buffer.initialize();

    b1.append_str("ABC");
    b1.append_str("DEF");

    xassert("buffer test", strcmp(b1.to_string(), "ABCDEF") == 0);

    auto m1 = new map<char*, int>.initialize();

    m1.insert("AAA", 1);

    auto m2 = new map<char*, int>.initialize();

    m2.insert("AAA", 1);

    xassert("map test", m1.at("AAA", -1) == 1);
    xassert("map test2", m2.at("AAA", -1) == 1);

    xassert("map test3", m1.equals(m2));
    
    list<char*>*% li = ["1"];
    
/*
    xassert("list.map test", li.map { return atoi(it); }.item(0, -1) == 1);
    
    auto li2 = ["111", "222", "333"];
    
    xassert("list.map2 test", li2.map { return it.substring(0,1); }.item(0, null).equals("1"));
*/

    return 0;
}
