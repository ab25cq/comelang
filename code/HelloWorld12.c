#include <neo-c.h>
#include <stdio.h>

int fun(int x = 123, int y = 345, int z = 456) 
{
    printf("x %d y %d z %d\n", x, y, z);
}

struct sData 
{
    int x;
    int y;
    int z;
};

int sData*::fun(sData* self, int x = 123, int y = 345, int z = 456)
{
    self.x = x;
    self.y = y;
    self.z = z;
}

void sData*::show(sData* self)
{
    printf("x %d y %d z %d\n", self.x, self.y, self.z);
}

int putc(int c, FILE* f) version 2
{
    int result = inherit(c, f);
    puts("");
    
    return result;
}

struct sData2
{
    map<string,int>*% m1;
};

void sData2::finalize(sData2* self)
{
    delete self.m1;
}

struct sInfo
{
    smart_pointer<char>*% p;
};

void funX(sInfo* info)
{
    info->p++
}

void funX2(sInfo* info)
{
    info->p++;
}

int main(int argc, char** argv) 
{
    fun();
    fun(y:2);
    
    fun(y:1, x:3);
    
    fun(1);
    fun(1,2);
    
    sData data;
    (&data).fun(1,2,3);
    (&data).show();
    
    (&data).fun(y:2);
    (&data).show();
    
    (&data).fun(1);
    (&data).show();
    
/*
    auto li = list<int>();
    
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    
    xassert("list initializer test", li.item(0, -1) == 1 && li.item(1, -1) == 2 && li.item(2, -1) == 3);
*/
    auto li2 = ["1", "2", "3"];
    
    auto li3 = li2.map { atoi(it); };
    
    xassert("return test", li3.item(0, -1) == 1 && li3.item(1, -1) == 2 && li3.item(2, -1) == 3);
    
    xassert("operator overload test", [1,2] + [3] === [1,2,3]);
    xassert("operator overload test2", [1,2] + [4] !== [1,2,3]);
    xassert("operator overload test3", [1,2] * 2 === [1,2,1,2]);
    xassert("operator overload test4", "ABC" * 3 === "ABCABCABC");
    
    xassert("operator overload test4.5", "ABC" + "DEF" === "ABCDEF");
    
    auto li4 = [1,2,3];
    xassert("operator overload test5", li4[0] == 1 && li4[1] == 2 && li4[2] == 3 && li4[5] == 0);
    
    li4[0] = 2;

    xassert("operator overload test6", li4[0] == 2);
    
    auto ma1 = ["AAA":1, "BBB":2, "CCC":3]
    xassert("operator overload test6", ma1["AAA"] == 1 && ma1["BBB"] == 2 && ma1["CCC"] == 3);
    
    ma1["DDD"] = 4;
    ma1["AAA"] = 11;
    xassert("operator overload test7", ma1["DDD"] == 4 && ma1["AAA"] == 11 && ma1["XXX"] == null);
    
    putc('X', stdout);
    
    int*? a = null;
    
    int b = 123;
    
    a = nullable &b;
    
    printf("%d\n", *a!);
    
    sData2*% c = new sData2;
    
    c.m1 = new map<string,int>.initialize();
    
    c.m1.insert(string("AAA"), 1);
    c.m1.insert(string("BBB"), 2);
    
    printf("%d %d\n", c.m1[string("AAA")], c.m1[string("BBB")]);
    
    c.m1 = new map<string,int>.initialize();
    
    c.m1.insert(string("AAA"), 3);
    c.m1.insert(string("BBB"), 4);
    
    printf("%d %d\n", c.m1[string("AAA")], c.m1[string("BBB")]);
    
    auto info = new sInfo;
    
    info->p = "ABC".to_buffer().to_pointer();
    
    funX(info);
    funX2(info);
    
    auto p = "ABC".to_buffer().to_pointer();
    
    p++;
    
    xassert("auto pointer test", *info->p == 'C' && *p == 'B');
    
    return 0;
}
