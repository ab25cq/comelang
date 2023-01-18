#include "common.h"

static sPyClass* sPyClass*::initialize(sPyClass* self, char* name, int generics_num, int method_generics_num)
{
    self.mName = string(name);
    self.mGenericsNum = generics_num;
    self.mMethodGenericsNum = method_generics_num;
    
    return self;
}

sPyType* sPyType*::initialize(sPyType* self, char* name, vector<sPyType*>* generics_types, int generics_num, int method_generics_num)
{
    self.mClass = new sPyClass(name, generics_num, method_generics_num);
    if(generics_types) {
        self.mGenericsTypes = clone generics_types;
    }
    else {
        self.mGenericsTypes = null;
    }
    
    return self;
}

static map<char*, sPyType*>* gPyTypes;

void add_type(char* name, vector<sPyType*>* generics_types)
{
    sPyType* type_ = new sPyType(string(name), generics_types, -1, -1);
    
    gPyTypes.insert(name, type_);
}

sPyType* get_type(char* name)
{
    return gPyTypes.at(string(name), null);
}

void initialize_modules() version 2
{
    inherit();
    
    gPyTypes = new  map<char*, sPyType*>.initialize();
    
    add_type("int", null);
    add_type("float", null);
    add_type("str", null);
    add_type("bytes", null);
    add_type("bool", null);
    add_type("None", null);
}

void finalize_modules() version 2
{
    inherit();
}

