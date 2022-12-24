#include "common.h"

unsigned int get_hash_key(char* name, unsigned int max)
{
    unsigned int result = 0;
    char* p = name;
    while(*p) {
        result += *p;
        p++;
    }

    return result % max;
}

static sCLClass* alloc_class(char* class_name_, BOOL primitive_, BOOL struct_, BOOL number_type, BOOL unsigned_number, int generics_number, int method_generics_number, BOOL union_, BOOL anonymous, BOOL enum_, BOOL anonymous_var_name, BOOL user, sCLClass* parent, BOOL protocol_);
static void class_free(sCLClass* klass);

struct sClassTableStruct
{
    char* mName;
    sCLClass* mClass;
};

typedef struct sClassTableStruct sClassTable;

sClassTable* gClasses;
int gNumClasses;
int gSizeClasses;

void class_init()
{
    gSizeClasses = CLASS_NUM_MAX;
    gClasses = calloc(1, sizeof(sClassTable)*gSizeClasses);
    memset(gClasses, 0, sizeof(sClassTable)*gSizeClasses);
    gNumClasses = 0;

    alloc_class("bool", TRUE, FALSE, TRUE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("char", TRUE, FALSE, TRUE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("short", TRUE, FALSE, TRUE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("int", TRUE, FALSE, TRUE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("long", TRUE, FALSE, TRUE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("__uint128_t", TRUE, FALSE, TRUE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("void", TRUE, FALSE, FALSE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("float", TRUE, FALSE, TRUE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("double", TRUE, FALSE, TRUE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("long_double", TRUE, FALSE, TRUE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("any", FALSE, FALSE, FALSE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("protocol_obj_t", FALSE, FALSE, FALSE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("TYPEOF", FALSE, FALSE, FALSE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("lambda", FALSE, FALSE, FALSE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("regex_struct", FALSE, TRUE, FALSE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("generics0", FALSE, FALSE, FALSE, FALSE, 0, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("generics1", FALSE, FALSE, FALSE, FALSE, 1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("generics2", FALSE, FALSE, FALSE, FALSE, 2, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("generics3", FALSE, FALSE, FALSE, FALSE, 3, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("generics4", FALSE, FALSE, FALSE, FALSE, 4, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("generics5", FALSE, FALSE, FALSE, FALSE, 5, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("generics6", FALSE, FALSE, FALSE, FALSE, 6, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("generics7", FALSE, FALSE, FALSE, FALSE, 7, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("generics8", FALSE, FALSE, FALSE, FALSE, 8, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("generics9", FALSE, FALSE, FALSE, FALSE, 9, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("mgenerics0", FALSE, FALSE, FALSE, FALSE, -1, 0, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("mgenerics1", FALSE, FALSE, FALSE, FALSE, -1, 1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("mgenerics2", FALSE, FALSE, FALSE, FALSE, -1, 2, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("mgenerics3", FALSE, FALSE, FALSE, FALSE, -1, 3, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("mgenerics4", FALSE, FALSE, FALSE, FALSE, -1, 4, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("mgenerics5", FALSE, FALSE, FALSE, FALSE, -1, 5, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("mgenerics6", FALSE, FALSE, FALSE, FALSE, -1, 6, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("mgenerics7", FALSE, FALSE, FALSE, FALSE, -1, 7, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("mgenerics8", FALSE, FALSE, FALSE, FALSE, -1, 8, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("mgenerics9", FALSE, FALSE, FALSE, FALSE, -1, 9, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("_Float16", TRUE, FALSE, TRUE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("_Float16x", TRUE, FALSE, TRUE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("_Float32", TRUE, FALSE, TRUE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("_Float32x", TRUE, FALSE, TRUE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("_Float64", TRUE, FALSE, TRUE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("_Float64x", TRUE, FALSE, TRUE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("_Float128", TRUE, FALSE, TRUE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);
    alloc_class("_Float128x", TRUE, FALSE, TRUE, FALSE, -1, -1, FALSE, FALSE, FALSE, FALSE, FALSE, NULL, FALSE);

    if(sizeof(size_t) == 4) {
        add_typedef("size_t", create_node_type_with_class_name("int"), FALSE);
    }
    else {
        add_typedef("size_t", create_node_type_with_class_name("long"), FALSE);
    }
    add_typedef("_Bool", create_node_type_with_class_name("bool"), FALSE);
}

void class_final()
{
    int i;
    for(i=0; i<gSizeClasses; i++) {
        if(gClasses[i].mName) {
            class_free(gClasses[i].mClass);
            free(gClasses[i].mName);
        }
    }
}

static sCLClass* create_class(char* class_name_, BOOL primitive_, BOOL struct_, BOOL number_type, BOOL unsigned_number, int generics_number, int method_generics_number, BOOL union_, BOOL anonymous, BOOL enum_, BOOL anonymous_var_name, BOOL user, sCLClass* parent, BOOL protocol_)
{
    sCLClass* klass = calloc(1, sizeof(sCLClass));
    memset(klass, 0, sizeof(sCLClass));
    
    klass->mName = strdup(class_name_);
    
    klass->mFlags = 0;

    klass->mFlags |= (primitive_ ? CLASS_FLAGS_PRIMITIVE:0) | (struct_ ? CLASS_FLAGS_STRUCT:0) | (number_type ? CLASS_FLAGS_NUMBER:0) | (unsigned_number ? CLASS_FLAGS_UNSIGNED_NUMBER:0) | (union_ ? CLASS_FLAGS_UNION:0) | (anonymous ? CLASS_FLAGS_ANONYMOUS:0) | (enum_ ? CLASS_FLAGS_ENUM:0) | (anonymous_var_name ? CLASS_FLAGS_ANONYMOUS_VAR_NAME:0);

    if(generics_number >= 0) {
        klass->mFlags |= CLASS_FLAGS_GENERICS;
    }
    if(method_generics_number >= 0) {
        klass->mFlags |= CLASS_FLAGS_METHOD_GENERICS;
    }
    klass->mGenericsNum = generics_number;
    klass->mMethodGenericsNum = method_generics_number;
    klass->mUndefinedStructType = NULL;

    klass->mVersion = 0;

    klass->mFieldName = NULL;
    klass->mFields = NULL;

    klass->mNumFields = 0;

    klass->mUser = user;
    
    klass->mParent = parent;
    klass->mProtocol = protocol_;
    
    return klass;
}

static void class_free(sCLClass* klass)
{
    free(klass->mName);

    int j;
    for(j=0; j<klass->mNumFields; j++) {
        free(klass->mFieldName[j]);
    }

    if(klass->mFieldName) {
        free(klass->mFieldName);
    }
    if(klass->mFields) {
        free(klass->mFields);
    }
    for(j=0; j<klass->mNumElementNum; j++) {
        free(klass->mEnumElementNames[j]);
    }
}

void rehash_classes()
{
    int new_size_classes = gSizeClasses * 2;
    sClassTable* new_classes = calloc(1, sizeof(sClassTable)*new_size_classes);
    memset(new_classes, 0, sizeof(sClassTable)*new_size_classes);

    int i;
    for(i=0; i<gSizeClasses; i++) {
        if(gClasses[i].mName) {
            int hash_value = get_hash_key(gClasses[i].mName, new_size_classes);
            
            sClassTable* p = new_classes + hash_value;

            while(1) {
                if(p->mName == NULL) {
                    p->mName = strdup(gClasses[i].mName);
                    p->mClass = gClasses[i].mClass;
                    break;
                }
                else {
                    p++;

                    if(p == new_classes + new_size_classes) {
                        p = new_classes;
                    }
                    else if(p == new_classes + hash_value) {
                        fprintf(stderr, "overflow classes\n");
                        exit(2);
                    }
                }
            }
        }
    }
    
    for(i=0; i<gSizeClasses; i++) {
        if(gClasses[i].mName) {
            free(gClasses[i].mName);
        }
    }

    gClasses = new_classes;
    gSizeClasses = new_size_classes;
}

void show_classes()
{
    int i;
    for(i=0; i<gSizeClasses; i++) {
        if(gClasses[i].mName && gClasses[i].mClass->mUser) {
            sCLClass* klass = gClasses[i].mClass;

            sNodeType* node_type = create_node_type_with_class_pointer(klass);

            show_node_type(node_type);
        }
    }
}

static sCLClass* alloc_class(char* class_name_, BOOL primitive_, BOOL struct_, BOOL number_type, BOOL unsigned_number, int generics_number, int method_generics_number, BOOL union_, BOOL anonymous, BOOL enum_, BOOL anonymous_var_name, BOOL user, sCLClass* parent, BOOL protocol_)
{
    if(gNumClasses >= gSizeClasses/3) {
        rehash_classes();
    }

    int hash_value = get_hash_key(class_name_, gSizeClasses);
    sClassTable* p = gClasses + hash_value;

    while(1) {
        if(p->mName == NULL) {
            sCLClass* klass = create_class(class_name_, primitive_, struct_, number_type, unsigned_number, generics_number, method_generics_number, union_, anonymous, enum_, anonymous_var_name, user, parent, protocol_);

            p->mName = strdup(class_name_);
            p->mClass = klass;
            
            gNumClasses++;

            return klass;
        }
        else {
            if(strcmp(p->mName, class_name_) == 0) {
                class_free(p->mClass);
                sCLClass* klass = create_class(class_name_, primitive_, struct_, number_type, unsigned_number, generics_number, method_generics_number, union_, anonymous, enum_, anonymous_var_name, user, parent, protocol_);
                
                p->mClass = klass;
                
                return klass;
            }
            else {
                p++;

                if(p == gClasses + gSizeClasses) {
                    p = gClasses;
                }
                else if(p == gClasses + hash_value) {
                    fprintf(stderr, "overflow classes\n");
                    exit(2);
                }
            }
        }
    }
}

sCLClass* get_class(char* class_name_)
{
    unsigned int hash_key = get_hash_key(class_name_, gSizeClasses);
    sClassTable* p = gClasses + hash_key;

    while(1) {
        if(p->mName) {
            if(strcmp(p->mName, class_name_) == 0) {
                return p->mClass;
            }
            else {
                p++;

                if(p == gClasses + gSizeClasses) {
                    p = gClasses;
                }
                else if(p == gClasses + hash_key) {
                    break;
                }
            }
        }
        else {
            break;
        }
    }

    return NULL;
}

sCLClass* alloc_struct(char* class_name_, BOOL anonymous, BOOL user, sCLClass* parent, BOOL protocol_)
{
    sCLClass* klass = alloc_class(class_name_, FALSE, TRUE, FALSE, FALSE, -1, -1, FALSE, anonymous, FALSE, FALSE, user, parent, protocol_);

    return klass;
}

sCLClass* alloc_enum(char* class_name_, int num_element, char** element_names, int* element_values)
{
    sCLClass* klass = alloc_class(class_name_, FALSE, FALSE, TRUE, FALSE, -1, -1, FALSE, FALSE, TRUE, FALSE, TRUE, NULL, FALSE);

    klass->mNumElementNum = num_element;

    int i;
    for(i=0; i<num_element; i++) {
        klass->mEnumElementNames[i] = strdup(element_names[i]);
        klass->mEnumElementValues[i] = element_values[i];
    }

    return klass;
}

sCLClass* alloc_union(char* class_name_, BOOL anonymous, BOOL anonymous_var_name)
{
    sCLClass* klass = alloc_class(class_name_, FALSE, FALSE, FALSE, FALSE, -1, -1, TRUE, anonymous, FALSE, anonymous_var_name, TRUE, NULL, FALSE);

    return klass;
}

void add_fields_to_struct(sCLClass* klass, int num_fields, char** field_names, struct sNodeTypeStruct** fields)
{
    if(klass->mNumFields > 0) {
        int i;
        for(i=0; i<klass->mNumFields; i++) {
            free(klass->mFieldName[i]);
        }
        free(klass->mFieldName);
        free(klass->mFields);

        klass->mNumFields = 0;
    }
    
    /// append parent fieds ///
    sCLClass* parent_class = klass->mParent;
    
    if(parent_class) {
        int num_fields2 = num_fields + parent_class->mNumFields;
    
        klass->mFieldName = calloc(1, sizeof(char*)*num_fields2);
        klass->mFields = calloc(1, sizeof(sNodeType*)*num_fields2);
        
        int i;
        for(i=0; i<parent_class->mNumFields; i++) {
            klass->mFieldName[i] = strdup(parent_class->mFieldName[i]);
            klass->mFields[i] = clone_node_type(parent_class->mFields[i]);
        }
    
        /// go ///
        for(i=0; i<num_fields; i++) {
            klass->mFieldName[i+parent_class->mNumFields] = strdup(field_names[i]);
            klass->mFields[i+parent_class->mNumFields] = clone_node_type(fields[i]);
        }
    
        klass->mNumFields = num_fields2;
    }
    else {
        klass->mFieldName = calloc(1, sizeof(char*)*num_fields);
        klass->mFields = calloc(1, sizeof(sNodeType*)*num_fields);
        
        int i;
        for(i=0; i<num_fields; i++) {
            klass->mFieldName[i] = strdup(field_names[i]);
            klass->mFields[i] = clone_node_type(fields[i]);
        }
    
        klass->mNumFields = num_fields;
    }
}

void add_fields_to_open_class(sCLClass* klass, int num_fields, char** field_names, struct sNodeTypeStruct** fields)
{
    int n = klass->mNumFields;
    
    klass->mFieldName = realloc(klass->mFieldName, sizeof(char*)*(n+num_fields));
    klass->mFields = realloc(klass->mFields, sizeof(sNodeType*)*(n+num_fields));
    
    int i;
    for(i=0; i<num_fields; i++) {
        klass->mFieldName[i+n] = strdup(field_names[i]);
        klass->mFields[i+n] = clone_node_type(fields[i]);
    }

    klass->mNumFields += num_fields;
}

void add_fields_to_union(sCLClass* klass, int num_fields, char** field_names, struct sNodeTypeStruct** fields)
{
    if(klass->mNumFields > 0) {
        int i;
        for(i=0; i<klass->mNumFields; i++) {
            free(klass->mFieldName[i]);
        }
        free(klass->mFieldName);
        free(klass->mFields);

        klass->mNumFields = 0;
    }

    klass->mFieldName = calloc(1, sizeof(char*)*num_fields);
    klass->mFields = calloc(1, sizeof(sNodeType*)*num_fields);

    int i;
    for(i=0; i<num_fields; i++) {
        klass->mFieldName[i] = strdup(field_names[i]);
        klass->mFields[i] = clone_node_type(fields[i]);
    }

    klass->mNumFields = num_fields;
}

int get_field_index(sCLClass* klass, char* var_name, int* parent_field_index)
{
    if((klass->mFlags & CLASS_FLAGS_STRUCT) || (klass->mFlags & CLASS_FLAGS_UNION)) 
    {
        int i;
        for(i=0; i<klass->mNumFields; i++) {
            if(parent_field_index) {
                sNodeType* field_type = clone_node_type(klass->mFields[i]);

                sCLClass* field_class = field_type->mClass;

                if(field_class->mFlags & CLASS_FLAGS_ANONYMOUS_VAR_NAME)
                {
                    int result = get_field_index(field_class, var_name, NULL);

                    if(result != -1) {
                        *parent_field_index = i;
                        return result;
                    }
                }
            }

            char* field_name = klass->mFieldName[i];

            if(strcmp(field_name, var_name) == 0) {
                return i;
            }
        }
    }

    return -1;
}


