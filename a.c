#include <comelang.h>
#include <comelang-str.h>

exception int char*::test(char* self, come_regex* regex) 
{
    return 1;
}

exception int char*::test(char* self, come_regex* regex) 
{
    return 1;
}

int fun()
{
    int a = s"ABC".test(/./);
    
    printf("a(fun) %d\n", a);
    
    return a;
}

struct ZVALUE;

struct ZVALUE
{
    enum { kIntValue, kStrValue, kBoolValue, kNullValue, kFileValue, kRegexValue, kListValue, kMapValue } kind;

    int intValue;
    wstring strValue;
    bool boolValue;
    FILE* fileValue;
    come_regex*% regexValue;
    list<ZVALUE*%>*% listValue;
    map<ZVALUE*%, ZVALUE*%>*% mapValue;
};
ZVALUE*% ZVALUE*::initialize(ZVALUE*% self, int kind, int int_value=0, wstring str_value=null, bool bool_value=false, FILE* file_value=null, come_regex*% regex_value=null, list<ZVALUE*%>*% list_value=null, map<ZVALUE*%, ZVALUE*%>*% map_value=null)
{
    return self;
}

int main(int argc, char** argv)
{
    int a = fun();
    
    printf("a %d\n", a);
    s"aaa\nbbb\nccc\n".split_char('\n').map { it }.each {
        puts(it);
    }
    
    list<ZVALUE*%>*% li = new list<ZVALUE*%>();
    li.push_back(new ZVALUE(kind: kRegexValue, regex_value:wstring("ABC").to_string().to_regex(global:true, ignore_case:true)));
    
    return 0;
}
