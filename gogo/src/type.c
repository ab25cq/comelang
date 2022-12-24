#include <neo-c.h>
#include "common.h"

public {#define PARAMS_MAX 32}
public {#define VAR_NAME_MAX 128}

struct sClass 
{
    string name;
    bool number;
    bool unsigned_;
};

private map<string, sClass*>* gClasses;

void class_init()
{
    gClasses = new map<string, sClass*>();
    
    new sClass("void", number:false, unsigned_:false);
    new sClass("bool", number:true, unsigned_:false);
    new sClass("int", number:true, unsigned_:false);
    new sClass("byte", number:true, unsigned_:true);
    new sClass("int8", number:true, unsigned_:false);
    new sClass("int16", number:true, unsigned_:false);
    new sClass("int32", number:true, unsigned_:false);
    new sClass("int64", number:true, unsigned_:false);
    new sClass("uint8", number:true, unsigned_:true);
    new sClass("uint16", number:true, unsigned_:true);
    new sClass("uint32", number:true, unsigned_:true);
    new sClass("uint64", number:true, unsigned_:true);
    new sClass("uint32", number:true, unsigned_:true);
    new sClass("uint64", number:true, unsigned_:true);
    new sClass("float32", number:true, unsigned_:false);
    new sClass("float64", number:true, unsigned_:false);
}

void class_final()
{
}

sClass* sClass*::initialize(sClass* self, char* class_name, bool number, bool unsigned_)
{
    self.name = string(class_name);
    self.number = number;
    self.unsigned_ = unsigned_;
    
    gClasses[class_name] = self;
    
    return self;
}

sClass* sClass*::clone(sClass* klass)
{
    sClass* result = new sClass;
    
    result.name = clone klass.name;
    result.number = klass.number;
    result.unsigned_ = klass.unsigned_;
    
    return result;
}

sClass* get_class(char* class_name_)
{
    sClass* klass = gClasses.at(class_name_, null);
    
    if(klass == null) {
        fprintf(stderr, "unexpected err in get_class (%s)\n", class_name_);
        exit(1);
    }
    
    return klass;
}

struct sType 
{
    sClass* klass;
    
    int pointer_num;
    int size_num;
    bool immutable_;
    bool unsigned_;
    bool global_;
    bool constant_;

    list<sType*>* param_types;
    struct sType* result_type;

    list<int>* num_arrays;
};

sType* sType*::initialize(sType* self)
{
    self.param_types = new list<sType*>();
    self.num_arrays = new list<int>();
    
    return self;
}

sType* sType*::clone(sType* node_type)
{
    auto result_type = new sType();
    
    result_type->klass = node_type->klass;
    
    result_type->num_arrays = clone node_type->num_arrays;
    
    result_type->pointer_num = node_type->pointer_num;
    result_type->size_num = node_type->size_num;
    result_type->immutable_ = node_type->immutable_;
    result_type->unsigned_ = node_type->unsigned_;
    
    result_type->global_ = node_type->global_;
    result_type->constant_ = node_type->constant_;

    result_type->param_types = clone node_type->param_types;
    
    return result_type;
}

bool auto_cast_posibility(sType* left_type, sType* right_type)
{
    sClass* left_class = left_type->klass;
    sClass* right_class = right_type->klass;

    if(left_type->size_num > 0) {
        return true;
    }
    else if(left_type->klass->number && right_type->klass->number) {
        return true;
    }

    return false;
}

bool cast_posibility(sType* left_type, sType* right_type)
{
    sClass* left_class = left_type->klass;
    sClass* right_class = right_type->klass; 

    if(auto_cast_posibility(left_type, right_type))
    {
        return true;
    }
    else if(left_type->pointer_num > 0 && right_type->pointer_num > 0)
    {
        return true;
    }

    return true;
}

bool substitution_posibility(sType* left_type, sType* right_type, LLVMValueRef right_obj, sInfo* info)
{
    sClass* left_class = left_type->klass;
    sClass* right_class = right_type->klass; 

    return true;
}

bool type_identify(sType* left, sType* right)
{
    return left->klass->name === right->klass->name;
}

private sType* parse_class_name(char** p, char** p2, char* buf)
{
    sType* node_type = new sType();

    *p2 = buf;

    while(**p) {
        if(**p == '*') {
            (*p)++;
            
            while(**p == ' ' || **p == '\t') {
                (*p)++;
            }

            node_type->pointer_num++;
        }
        else {
            char* pp = *p2;
            *pp = **p;

            (*p)++;
            (*p2)++;
        }
    }

    if(*p2 - buf > 0) {
        char* pp = *p2;
        *pp = '\0';

        node_type->klass = get_class(buf);

        if(node_type->klass == NULL) {
            return NULL;
        }
    }

    return node_type;
}

sType* create_node_type_with_class_name(char* class_name_)
{
    char buf[VAR_NAME_MAX+1];

    char* p = class_name_;
    char* p2 = buf;

    sType* result = parse_class_name(&p, &p2, buf);
    
    return result;
}

bool type_identify_with_class_name(sType* left, char* right_class_name)
{
    sType* right = create_node_type_with_class_name(right_class_name);

    if(right == NULL) {
        return false;
    }

    return type_identify(left, right);
}

bool type_equalability(sType* left_type, sType* right_type)
{
    if(!(left_type->klass->name === right_type->klass->name)) {
        return false;
    }
    
    return true;
}

LLVMTypeRef create_llvm_type_from_node_type(sType* node_type)
{
    LLVMTypeRef result_type = NULL;

    sClass* klass = node_type->klass;

    if(node_type->size_num > 0) {
        result_type = LLVMIntTypeInContext(gContext, node_type->size_num*8);
    }
    else if(type_identify_with_class_name(node_type, "int")) {
        result_type = LLVMInt32TypeInContext(gContext);
    }
    else if(type_identify_with_class_name(node_type, "int64")) {
        result_type = LLVMInt64TypeInContext(gContext);
    }
    else if(type_identify_with_class_name(node_type, "int8")) {
        result_type = LLVMInt8TypeInContext(gContext);
    }
    else if(type_identify_with_class_name(node_type, "int16")) {
        result_type = LLVMInt16TypeInContext(gContext);
    }
    else if(type_identify_with_class_name(node_type, "float32"))
    {
        result_type = LLVMFloatTypeInContext(gContext);
    }
    else if(type_identify_with_class_name(node_type, "float64"))
    {
        result_type = LLVMDoubleTypeInContext(gContext);
    }
    else if(type_identify_with_class_name(node_type, "bool")) {
        result_type = LLVMInt1TypeInContext(gContext);
    }
    else if(type_identify_with_class_name(node_type, "void")) {
        result_type = LLVMVoidTypeInContext(gContext);
    }

    if(result_type == NULL) {
        fprintf(stderr, "invalid type %s(1)\n", node_type->klass->name);
        return LLVMInt32TypeInContext(gContext);
    }

    int i;
    for(i=0; i<node_type->pointer_num; i++) {
        result_type = LLVMPointerType(result_type, 0);
    }

    return result_type;
}

LLVMTypeRef create_llvm_type_with_class_name(char* class_name)
{
    sType* node_type = create_node_type_with_class_name(class_name);

    return create_llvm_type_from_node_type(node_type);
}

bool cast_right_type_to_left_type(sType* left_type, sType** right_type, LVALUE* rvalue, struct sInfo* info)
{
    return true;
}
