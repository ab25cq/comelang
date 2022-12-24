#include <neo-c.h>

interface sBase
{
    void show();
};

struct sChildA
{
    int x;
    int y;
    int z;
    string str;
};

sChildA*% sChildA*::initialize(sChildA*% self)
{
    self.x = 1;
    self.y = 2;
    self.z = 3;
    self.str = string("ABC");

    return self;
}

void sChildA*::show(sChildA* self)
{
    printf("x %d y %d z %d str %s\n", self.x, self.y, self.z, self.str);
}

interface IA
{
    void show();
};

class DataA
{
    list<string>*% self.a = [string("AAA"), string("BBB")];
    string self.b = string("CCC");
    
    void show(DataA* self) 
    {
        self.a.each {
            puts(it);
        }
        puts(self.b);
    }
};

class DataB
{
    int self.a = 777;
    int self.b = 333;
    
    void show(DataB* self) {
        printf("%d %d\n", self.a, self.b);
    }
};

void DataB*::finalize(DataB* self)
{
puts("DataB::finalize");
}


int main(int argc, char** argv)
{
    vector<vector<sBase*%>*%>*% v = new vector<vector<sBase*%>*%>.initialize();
    
    vector<sBase*%>*% v2 = new vector<sBase*%>.initialize()
    
    v2.push_back(new sBase(new sChildA.initialize()));
    v2.push_back(new sBase(new sChildA.initialize()));
    
    v.push_back(v2);
    
    vector<sBase*%>*% v3 = new vector<sBase*%>.initialize();
    
    v3.push_back(new sBase(new sChildA.initialize()));
    
    v.push_back(v3);
    
    list<list<sBase*%>*%>*% li = new list<list<sBase*%>*%>.initialize();
    
    list<sBase*%>*% l2 = new list<sBase*%>.initialize()
    
    l2.push_back(new sBase(new sChildA.initialize()));
    
    li.push_back(l2);
    
    list<sBase*%>*% l3 = new list<sBase*%>.initialize();
    
    l3.push_back(new sBase(new sChildA.initialize()));
    
    li.push_back(l3);

    
    list<IA*%>*% data = new list<IA*%>();
    
    data.push_back(new IA(new DataA()));
    data.push_back(new IA(new DataB()));

    
    return 0;
}

