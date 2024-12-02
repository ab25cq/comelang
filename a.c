#include <comelang.h>

char* gGender[2] = { "Male", "Female" };
enum eGender { kMale, kFemale };

void show(tup:(string:name, int:age, int:gender) t)
{
     puts(s"name \{t.name} age \{t.age} gender \{gGender[t.gender]}");
}

int main(int argc, char** argv) 
{
     var ken = (name: s"Ken", age:32, gender:kMale );
     var ryu = (name: s"Ryu", age:32, gender:kMale );

     var clone_ryu = clone ryu;
     clone_ryu.name = s"CloneRyu";

     show(ken);
     show(ryu);
     show(clone_ryu);

     return 0;
}

