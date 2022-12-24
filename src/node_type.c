#include "common.h"

static sNodeType** gNodeTypes = NULL;
static int gUsedPageNodeTypes = 0;
static int gSizePageNodeTypes = 0;
static int gUsedNodeTypes = 0;

#define NODE_TYPE_PAGE_SIZE 64

void init_node_types()
{
    const int size_page_node_types = 4;

    if(gSizePageNodeTypes == 0) {
        gNodeTypes = xcalloc(1, sizeof(sNodeType*)*size_page_node_types);

        int i;
        for(i=0; i<size_page_node_types; i++) {
            gNodeTypes[i] = xcalloc(1, sizeof(sNodeType)*NODE_TYPE_PAGE_SIZE);
        }

        gSizePageNodeTypes = size_page_node_types;
        gUsedPageNodeTypes = 0;
        gUsedNodeTypes = 0;
    }
}

void free_node_types()
{
    if(gSizePageNodeTypes > 0) {
        int i;
        for(i=0; i<gSizePageNodeTypes; i++) {
            free(gNodeTypes[i]);
        }
        free(gNodeTypes);

        gSizePageNodeTypes = 0;
        gUsedPageNodeTypes = 0;
        gUsedNodeTypes = 0;
    }
}

static sNodeType* alloc_node_type()
{
    if(gUsedNodeTypes == NODE_TYPE_PAGE_SIZE) {
        gUsedNodeTypes = 0;
        gUsedPageNodeTypes++;

        if(gUsedPageNodeTypes == gSizePageNodeTypes) {
            int new_size = (gSizePageNodeTypes+1) * 2;
            gNodeTypes = xrealloc(gNodeTypes, sizeof(sNodeType*)*new_size);
            memset(gNodeTypes + gSizePageNodeTypes, 0, sizeof(sNodeType*)*(new_size - gSizePageNodeTypes));

            int i;
            for(i=gSizePageNodeTypes; i<new_size; i++) {
                gNodeTypes[i] = xcalloc(1, sizeof(sNodeType)*NODE_TYPE_PAGE_SIZE);
            }

            gSizePageNodeTypes = new_size;
        }
    }

    return gNodeTypes[gUsedPageNodeTypes] + gUsedNodeTypes++;
}

sNodeType* clone_node_type(sNodeType* node_type)
{
    sNodeType* node_type2 = alloc_node_type();

    node_type2->mClass = node_type->mClass;
    node_type2->mNumGenericsTypes = node_type->mNumGenericsTypes;

    int i;
    for(i=0; i<node_type->mNumGenericsTypes; i++) {
        node_type2->mGenericsTypes[i] = ALLOC clone_node_type(node_type->mGenericsTypes[i]);
    }

    node_type2->mArrayDimentionNum = node_type->mArrayDimentionNum;
    for(i=0; i<node_type->mArrayDimentionNum; i++) {
        node_type2->mArrayNum[i] = node_type->mArrayNum[i];
    }
    node_type2->mSizeNum = node_type->mSizeNum;
    node_type2->mNullable = node_type->mNullable;
    node_type2->mGuarded = node_type->mGuarded;
    node_type2->mImmutable = node_type->mImmutable;
    node_type2->mChannel = node_type->mChannel;
    node_type2->mPointerNum = node_type->mPointerNum;
    node_type2->mHeap = node_type->mHeap;
    node_type2->mAllocaValue = node_type->mAllocaValue;
    node_type2->mNoHeap = node_type->mNoHeap;
    node_type2->mRefference = node_type->mRefference;
    node_type2->mUnsigned = node_type->mUnsigned;
    node_type2->mRegister = node_type->mRegister;
    node_type2->mVolatile = node_type->mVolatile;
    node_type2->mStatic = node_type->mStatic;
    node_type2->mUniq = node_type->mUniq;
    node_type2->mDummyHeap = node_type->mDummyHeap;
    node_type2->mDynamicArrayNum = node_type->mDynamicArrayNum;
    node_type2->mArrayInitializeNum = node_type->mArrayInitializeNum;
    node_type2->mTypeOfExpression = node_type->mTypeOfExpression;
    node_type2->mException = node_type->mException;
    node_type2->mConstant = node_type->mConstant;
    node_type2->mCurrentStackVariable = node_type->mCurrentStackVariable;
    node_type2->mMethodGenericsResult = node_type->mMethodGenericsResult;

    xstrncpy(node_type2->mOriginalTypeName, node_type->mOriginalTypeName, VAR_NAME_MAX);
    node_type2->mOriginalPointerNum = node_type->mOriginalPointerNum;

    if(node_type->mResultType) {
        node_type2->mResultType = clone_node_type(node_type->mResultType);
    }
    else {
        node_type2->mResultType = NULL;
    }

    node_type2->mNumParams = node_type->mNumParams;
    for(i=0; i<node_type->mNumParams; i++) {
        node_type2->mParamTypes[i] = clone_node_type(node_type->mParamTypes[i]);
    }
    node_type2->mVarArgs = node_type->mVarArgs;

    node_type2->mNumFields = node_type->mNumFields;

    xstrncpy(node_type2->mTypeName, node_type->mTypeName, VAR_NAME_MAX);
    node_type2->mTypePointerNum = node_type->mTypePointerNum;
    
    node_type2->mArrayPointer = node_type->mArrayPointer;
    node_type2->mOmitArrayNum = node_type->mOmitArrayNum;
    node_type2->mNoArrayPointerNum = node_type->mNoArrayPointerNum;
    node_type2->mFunctionParam = node_type->mFunctionParam;
    node_type2->mArrayParam = node_type->mArrayParam;
    node_type2->mCastedPointerToPointer = node_type->mCastedPointerToPointer;
    node_type2->mNoAutoCast = node_type->mNoAutoCast;
    
    return node_type2;
}

void show_type_core(sNodeType* type, int* num_classes, char** classes, BOOL no_output_fields) 
{
    sCLClass* klass = type->mClass;
    char* class_name = CLASS_NAME(klass);

    int i;
    for(i=0; i<*num_classes; i++) {
        char* class_name2 = classes[i];

        if(strcmp(class_name, class_name2) == 0) 
        {
            return;
        }
    }

    if((klass->mFlags & CLASS_FLAGS_STRUCT) || (klass->mFlags & CLASS_FLAGS_UNION)) {
        classes[*num_classes] = strdup(class_name);
        (*num_classes)++;
    }

    printf("%s ", CLASS_NAME(klass));

    if(type->mConstant) {
        printf("const ");
    }
    if(type->mUnsigned) {
        printf("unsinged ");
    }
    if(type->mResultType) {
        show_type_core(type->mResultType, num_classes, classes, no_output_fields);
        printf(" ");
    }
    if(klass->mFlags & CLASS_FLAGS_UNION) {
        printf("union ");
    }
    if(klass->mFlags & CLASS_FLAGS_ENUM) {
        printf("enum ");
    }
    if(klass->mFlags & CLASS_FLAGS_STRUCT) {
        printf("struct ");
    }

    if(strcmp(type->mOriginalTypeName, "") != 0) {
        printf(" typedef %s", type->mOriginalTypeName);
    }
    for(i=0; i<type->mPointerNum; i++) {
        printf("*");
    }
    for(i=0; i<type->mNoArrayPointerNum; i++) {
        printf("*");
    }
    for(i=0; i<type->mArrayDimentionNum; i++) {
        printf("[%d]", type->mArrayNum[i]);
    }
    if(type->mHeap) {
        printf("%%");
    }
    if(type->mNumGenericsTypes > 0) {
        printf("<");
        int i;
        for(i=0; i<type->mNumGenericsTypes; i++) {
            show_type_core(type->mGenericsTypes[i], num_classes, classes, no_output_fields);
        }
        printf(">");
    }
    if(type->mNullable) {
        printf("?");
    }
    if(type->mImmutable) {
        printf(" immutable ");
    }
    if(type->mChannel) {
        printf("@");
    }
    if(type->mNumParams > 0) printf("(");
/*
    for(i=0; i<type->mNumParams; i++)
    {
        show_node_type_core(type->mParamTypes[i]);
        puts(" ");
    }
*/
    if(type->mNumParams > 0) printf(")");
    if(!no_output_fields && ((klass->mFlags & CLASS_FLAGS_STRUCT) || (klass->mFlags & CLASS_FLAGS_UNION))) {
        puts("");
        int i;
        for(i=0; i<klass->mNumFields; i++) {
            char* field_name = klass->mFieldName[i];
            sNodeType* field_type = klass->mFields[i];

            char* class_name = CLASS_NAME(field_type->mClass);

            int j;
            BOOL nest = FALSE;
            for(j=0; j<*num_classes; j++) {
                char* class_name2 = classes[j];

                if(strcmp(class_name, class_name2) == 0) 
                {
                    nest = TRUE;
                }
            }

            if((field_type->mClass->mFlags & CLASS_FLAGS_STRUCT) 
                || (field_type->mClass->mFlags & CLASS_FLAGS_UNION))
            {
                classes[*num_classes] = strdup(class_name);
                (*num_classes)++;
            }

            if(*num_classes >= 128) {
                fprintf(stderr, "overflow class\n");
                exit(2);
            }

            printf("#%d ", i);
            if(nest) {
                BOOL no_output_fields = TRUE;
                show_type_core(field_type, num_classes, classes, no_output_fields);

                printf(" ");
                if(i == klass->mNumFields -1) {
                    printf("%s", field_name);
                }
                else {
                    puts(field_name);
                }
            }
            else {
                show_type_core(field_type, num_classes, classes, no_output_fields);

                printf(" ");
                if(i == klass->mNumFields -1) {
                    printf("%s", field_name);
                }
                else {
                    puts(field_name);
                }
            }
        }
    }
    if(type_identify_with_class_name(type, "lambda")) {
        puts("");
        int i;
        printf("num_param %d\n", type->mNumParams);
        for(i=0; i<type->mNumParams; i++) {
            printf("%d %s\n", i, CLASS_NAME(type->mParamTypes[i]->mClass));
        }
        if(type->mResultType) {
            printf("result type %s", CLASS_NAME(type->mResultType->mClass));
        }
    }
    if(klass->mFlags & CLASS_FLAGS_ENUM) {
        if(!no_output_fields) {
            puts("");
            int i;
            for(i=0; i<klass->mNumElementNum; i++) {
                printf("%s %d", klass->mEnumElementNames[i], klass->mEnumElementValues[i]);
    
                if(i != klass->mNumElementNum -1) {
                    puts("");
                }
            }
        }
    }
}


void show_node_type(sNodeType* type)
{
    char* classes[128];

    BOOL no_output_fields = FALSE;
    int num_classes = 0;
    
    show_type_core(type, &num_classes, classes, no_output_fields);
    puts("");
    
    int i;
    for(i=0; i<num_classes; i++) {
        free(classes[i]);
    }
}

void show_node_type_one_line(sNodeType* type)
{
    char* classes[128];
    
    int num_classes = 0;

    BOOL no_output_fields = TRUE;
    show_type_core(type, &num_classes, classes, no_output_fields);
    puts("");
    
    int i;
    for(i=0; i<num_classes; i++) {
        free(classes[i]);
    }
}

static void skip_spaces_for_parse_class_name(char** p) 
{
    while(**p == ' ' || **p == '\t') {
        (*p)++;
    }
}

static sNodeType* parse_class_name(char** p, char** p2, char* buf)
{
    sNodeType* node_type = alloc_node_type();

    node_type->mClass = NULL;
    node_type->mNumGenericsTypes = 0;
    node_type->mArrayDimentionNum = 0;
    node_type->mNullable = FALSE;
    node_type->mImmutable = FALSE;
    node_type->mChannel = FALSE;

    *p2 = buf;

    while(**p) {
        if(**p == '<') {
            (*p)++;
            skip_spaces_for_parse_class_name(p);

            char* pp = *p2;

            *pp = '\0';

            node_type->mClass = get_class(buf);

            if(node_type->mClass == NULL) {
                return NULL;
            }

            while(1) {
                node_type->mGenericsTypes[node_type->mNumGenericsTypes] = parse_class_name(p, p2, buf);
                node_type->mNumGenericsTypes++;

                if(node_type->mNumGenericsTypes >= GENERICS_TYPES_MAX) 
                {
                    return NULL;
                }

                if(**p == ',') {
                    (*p)++;
                    skip_spaces_for_parse_class_name(p);
                }
                else if(**p == '>') {
                    (*p)++;
                    skip_spaces_for_parse_class_name(p);
                    return node_type;
                }
                else {
                    return NULL;
                }
            }
        }
        else if(**p == '[') {
            node_type->mArrayDimentionNum = 0;
            while(**p == '[') {
                (*p)++;

                int n = 0;
                while(xisdigit(**p)) {
                    n = n * 10 + (**p - '0');
                    (*p)++;
                }

                node_type->mArrayNum[node_type->mArrayDimentionNum++] = n;

                if(**p == ']') {
                    (*p)++;
                }
                else {
                    return NULL;
                }
            }
        }
        else if(**p == '?') {
            (*p)++;
            skip_spaces_for_parse_class_name(p);

            node_type->mNullable = TRUE;
        }
        else if(**p == '~') {
            (*p)++;
            skip_spaces_for_parse_class_name(p);

            node_type->mChannel = TRUE;
        }
        else if(**p == '*') {
            (*p)++;
            skip_spaces_for_parse_class_name(p);

            node_type->mPointerNum++;
        }
        else if(**p == '>') {
            char* pp = *p2;
            *pp = '\0';

            node_type->mClass = get_class(buf);

            if(node_type->mClass == NULL) {
                return NULL;
            }

            return node_type;
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

        node_type->mClass = get_class(buf);

        if(node_type->mClass == NULL) {
            return NULL;
        }
    }

    return node_type;
}

sNodeType* create_node_type_with_class_name(char* class_name_)
{
    char buf[VAR_NAME_MAX+1];

    char* p = class_name_;
    char* p2 = buf;

    sNodeType* result = parse_class_name(&p, &p2, buf);

/*
    if(strcmp(class_name_, "lambda") == 0) {
        result->mPointerNum++;
    }
*/
    
    return result;
}

sNodeType* create_node_type_with_class_pointer(sCLClass* klass)
{
    sNodeType* result = alloc_node_type();
    result->mClass = klass;
    return result;
}

BOOL is_number_type(sNodeType* node_type)
{
    int n = (node_type->mClass->mFlags & CLASS_FLAGS_NUMBER) == CLASS_FLAGS_NUMBER;
    return n && node_type->mPointerNum == 0;
}

BOOL is_float_type(sNodeType* node_type)
{
    return type_identify_with_class_name(node_type, "float") || type_identify_with_class_name(node_type, "double") || type_identify_with_class_name(node_type, "long_double");
}

BOOL is_number_class(sNodeType* node_type)
{
    int n = (node_type->mClass->mFlags & CLASS_FLAGS_NUMBER) == CLASS_FLAGS_NUMBER;
    return n;
}

BOOL check_the_same_fields(sNodeType* left_node, sNodeType* right_node)
{
    sCLClass* left_class = left_node->mClass;
    sCLClass* right_class = right_node->mClass;

    if(left_class->mNumFields != right_class->mNumFields)
    {
        return FALSE;
    }

    if(left_class->mNumFields == 0) {
        return FALSE;
    }

    int i;
    for(i=0; i<left_class->mNumFields; i++) {
        sNodeType* left_field = left_class->mFields[i];
        sNodeType* right_field = right_class->mFields[i];

        if(!type_identify(left_field, right_field))
        {
            return FALSE;
        }

    }

    return TRUE;
}

BOOL lambda_posibility(sNodeType* left_type, sNodeType* right_type)
{
    if(left_type->mNumParams != right_type->mNumParams) {
        return FALSE;
    }

    int i;
    for(i=0; i<left_type->mNumParams; i++) {
        sNodeType* left_param = left_type->mParamTypes[i];
        sNodeType* right_param = right_type->mParamTypes[i];

        if(!cast_posibility(left_param, right_param)) {
            return FALSE;
        }
    }
    
    if(!cast_posibility(left_type->mResultType, right_type->mResultType)) {
        return FALSE;
    }

    return TRUE;
}

BOOL auto_cast_posibility(sNodeType* left_type, sNodeType* right_type, BOOL op)
{
    sCLClass* left_class = left_type->mClass;
    sCLClass* right_class = right_type->mClass; 
    
    if(right_type->mNoAutoCast) {
        return FALSE;
    }
    else if(!gNCCome && left_type->mSizeNum > 0) {
        return TRUE;
    }
    else if(!gNCCome && type_identify_with_class_name(left_type, "int")) {
        return TRUE;
    }
    else if(!gNCCome && type_identify_with_class_name(left_type, "lambda") && is_number_type(right_type))
    {
        return TRUE;
    }
    else if((is_number_type(left_type) && left_type->mSizeNum == 0) && right_type->mSizeNum > 0) 
    {
        return TRUE;
    }
    else if(type_identify(left_type, right_type) && (left_class->mFlags & CLASS_FLAGS_UNION) && (right_class->mFlags & CLASS_FLAGS_UNION)) {
        return TRUE;
    }
    else if(type_identify(left_type, right_type) && right_type->mChannel) {
        return TRUE;
    }
    else if(is_number_type(left_type) && is_number_type(right_type)) {
        return TRUE;
    }
    else if(!gNCCome && left_type->mPointerNum > 0 && is_number_type(right_type))
    {
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "bool"))
    {
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "void*") && right_type->mPointerNum > 0) 
    {
        return TRUE;
    }
    else if(op && type_identify_with_class_name(left_type, "float") && (is_number_type(right_type) || is_float_type(right_type))) {
        return TRUE;
    }
    else if(op && type_identify_with_class_name(left_type, "double") && (is_number_type(right_type) || is_float_type(right_type))) {
        return TRUE;
    }
    else if(!op && type_identify_with_class_name(left_type, "double") && (is_number_type(right_type) || is_float_type(right_type))) {
        return TRUE;
    }
    else if(!op && type_identify_with_class_name(left_type, "float") && (is_number_type(right_type) || is_float_type(right_type))) {
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "long_double") && (is_number_type(right_type) || is_float_type(right_type))) {
        return TRUE;
    }
    else if(left_type->mPointerNum > 0 && type_identify_with_class_name(right_type, "void*")) 
    {
        return TRUE;
    }
    else if(type_identify(left_type, right_type) && left_type->mPointerNum == 1 && right_type->mArrayDimentionNum == 1) {
        return TRUE;
    }
/*
    else if(left_type->mOriginalTypeName[0] != 0 && strcmp(left_type->mOriginalTypeName, right_type->mOriginalTypeName) == 0 && left_type->mPointerNum > 0 && right_type->mPointerNum > 0)
    {
        return TRUE;
    }
*/
/*
    /// NULL in clang is defined int type, so this is required
    else if(left_type->mPointerNum > 0 && is_number_type(right_type))
    {
        return TRUE;
    }
*/
/*
    else if(is_number_type(left_type) && right_type->mPointerNum > 0) 
    {
        return TRUE;
    }
*/
    else if(type_identify_with_class_name(left_type, "lambda") && type_identify_with_class_name(right_type, "void*")) 
    {
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "lambda") && type_identify_with_class_name(right_type, "lambda") && lambda_posibility(left_type, right_type)) 
    {
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "any") || type_identify_with_class_name(right_type, "any")) {
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "void") && left_type->mPointerNum == 1 && right_type->mPointerNum > 0) {
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "protocol_obj_t")) {
        return TRUE;
    }
    else if(type_identify_with_class_name(right_type, "protocol_obj_t")) {
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "char*") && type_identify_with_class_name(right_type, "__builtin_va_list"))
    {
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "__builtin_va_list") && type_identify_with_class_name(right_type, "char*"))
    {
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "va_list") && type_identify_with_class_name(right_type, "va_list*"))
    {
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "__builtin_va_list") && type_identify_with_class_name(right_type, "__builtin_va_list*"))
    {
        return TRUE;
    }
    else if((left_type->mPointerNum-1 == right_type->mPointerNum) && right_type->mArrayDimentionNum == 1)
    {
        return TRUE;
    }
    else if(left_type->mPointerNum+left_type->mNoArrayPointerNum == right_type->mPointerNum+right_type->mArrayDimentionNum) 
    {
        return TRUE;
    }
    else if(left_type->mPointerNum == 1 && left_type->mArrayDimentionNum == 1 && right_type->mArrayDimentionNum == 2 && right_type->mPointerNum == 0) {
        return TRUE;
    }
    else if((left_type->mPointerNum-1 == right_type->mPointerNum) && right_type->mChannel == 1)
    {
        return TRUE;
    }

    return FALSE;
}

BOOL cast_posibility(sNodeType* left_type, sNodeType* right_type)
{
    sCLClass* left_class = left_type->mClass;
    sCLClass* right_class = right_type->mClass; 

    if(auto_cast_posibility(left_type, right_type, FALSE))
    {
        return TRUE;
    }
    else if(left_type->mPointerNum > 0 && right_type->mPointerNum > 0)
    {
        return TRUE;
    }
    else if(left_type->mPointerNum > 0 && right_type->mArrayDimentionNum > 0) {
        return TRUE;
    }

    return TRUE;
    //return FALSE;
}

BOOL substitution_posibility(sNodeType* left_type, sNodeType* right_type, LLVMValueRef right_obj, sCompileInfo* info)
{
    sCLClass* left_class = left_type->mClass;
    sCLClass* right_class = right_type->mClass; 
    
/*
    if(!left_type->mNullable && right_type->mNullable) {
        return FALSE;
    }
*/
    
    if(left_type->mNullable != right_type->mNullable) {
        if(left_type->mNullable && !right_type->mNullable) {
        }
        else if(!left_type->mNullable && right_type->mGuarded) {
        }
        else {
            return FALSE;
        }
    }
    
    if(type_identify_with_class_name(left_type, "lambda") && type_identify_with_class_name(right_type, "lambda")) {
        return lambda_posibility(left_type, right_type);
    }
    if(left_type->mPointerNum > 0 && !left_type->mHeap && right_type->mPointerNum > 0 && right_type->mHeap && right_obj && is_right_values(right_obj, info)) {
        return FALSE;
    }
    else if(left_type->mSizeNum > 0 && left_type->mSizeNum == right_type->mSizeNum) {
        return TRUE;
    }
    else if(type_identify(left_type, right_type) && left_type->mPointerNum+left_type->mNoArrayPointerNum == right_type->mPointerNum+right_type->mNoArrayPointerNum) 
    {
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "bool")) {
        return TRUE;
    }
    else if((type_identify_with_class_name(left_type, "char") && right_type->mSizeNum == 1) || (left_type->mSizeNum == 1 && type_identify_with_class_name(right_type, "char"))) {
        return TRUE;
    }
    else if((type_identify_with_class_name(left_type, "short") && right_type->mSizeNum == 2) || (left_type->mSizeNum == 2 && type_identify_with_class_name(right_type, "short"))) {
        return TRUE;
    }
    else if((type_identify_with_class_name(left_type, "int") && right_type->mSizeNum == 4) || (left_type->mSizeNum == 4 && type_identify_with_class_name(right_type, "int"))) {
        return TRUE;
    }
    else if((type_identify_with_class_name(left_type, "long") && right_type->mSizeNum == 8) || (left_type->mSizeNum == 8 && type_identify_with_class_name(right_type, "long"))) {
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "any")) {
        return TRUE;
    }
    else if(left_type->mPointerNum == 0 && type_identify_with_class_name(left_type, "void")) 
    {
        return FALSE;
    }
    else if((left_class->mFlags & CLASS_FLAGS_ENUM) && type_identify_with_class_name(right_type, "int"))
    {
        return TRUE;
    }
    else if((left_type->mPointerNum > 0 && left_type->mHeap) && ((right_type->mPointerNum > 0) && !right_type->mHeap)) 
    {
        return FALSE;
    }
    else if(type_identify_with_class_name(left_type, "void") && left_type->mPointerNum == 1)
    {
        if(right_type->mPointerNum > 0) {
            return TRUE;
        }
    }
    else if(type_identify(left_type, right_type) && left_type->mPointerNum == right_type->mPointerNum && (left_type->mNumGenericsTypes > 0 || right_type->mNumGenericsTypes > 0))
    {
        if(left_type->mNumGenericsTypes != right_type->mNumGenericsTypes)
        {
            return FALSE;
        }

        int i;
        for(i=0; i<left_type->mNumGenericsTypes; i++)
        {
            if(!substitution_posibility(left_type->mGenericsTypes[i], right_type->mGenericsTypes[i], NULL, info))
            {
                return FALSE;
            }
        }

        return TRUE;
    }
    else if(type_identify(left_type, right_type)) {
        if(left_type->mPointerNum+left_type->mArrayDimentionNum == right_type->mPointerNum+right_type->mArrayDimentionNum)
        {
            return TRUE;
        }
        else if((left_type->mPointerNum-1 == right_type->mPointerNum) && right_type->mDynamicArrayNum != 0)
        {
            return TRUE;
        }
        else if(left_type->mPointerNum == right_type->mPointerNum) 
        {
            return TRUE;
        }
        else if(left_type->mPointerNum == right_type->mPointerNum+1 && right_type->mArrayDimentionNum == -1)
        {
            return TRUE;
        }
    }
    
    return FALSE;
}

BOOL type_identify(sNodeType* left, sNodeType* right)
{
    return strcmp(CLASS_NAME(left->mClass), CLASS_NAME(right->mClass)) == 0 && left->mSizeNum == 0 && right->mSizeNum == 0;
}

BOOL type_identify_with_class_name(sNodeType* left, char* right_class_name)
{
    sNodeType* right = create_node_type_with_class_name(right_class_name);
    
/*
    if(left->mSizeNum == 1 && strcmp(right_class_name, "char") == 0) {
        return TRUE;
    }
    else if(left->mSizeNum == 2 && strcmp(right_class_name, "short") == 0) {
        return TRUE;
    }
    else if(left->mSizeNum == 4 && strcmp(right_class_name, "int") == 0) {
        return TRUE;
    }
    else if(left->mSizeNum == 8 && strcmp(right_class_name, "long") == 0) {
        return TRUE;
    }
*/

    if(right == NULL) {
        return FALSE;
    }

    return type_identify(left, right);
}

BOOL solve_generics(sNodeType** node_type, sNodeType* generics_type)
{
    if(generics_type == NULL) {
        return TRUE;
    }

    sCLClass* klass = (*node_type)->mClass;


    if(type_identify_with_class_name(*node_type, "lambda")) 
    {
        if(!solve_generics(&(*node_type)->mResultType, generics_type))
        {
            return FALSE;
        }

        int i;
        for(i=0; i<(*node_type)->mNumParams; i++)
        {
            if(!solve_generics(&(*node_type)->mParamTypes[i], generics_type))
            {
                return FALSE;
            }
        }
    }
    else if(klass->mFlags & CLASS_FLAGS_GENERICS) {
        int generics_number = klass->mGenericsNum;

        if(generics_number >= generics_type->mNumGenericsTypes)
        {
            return FALSE;
        }

        sCLClass* klass2 = generics_type->mGenericsTypes[generics_number]->mClass;

        int generics_number2 = klass2->mGenericsNum;

        if(generics_number != generics_number2) 
        {
            int array_dimetion_num = (*node_type)->mArrayDimentionNum;
            int array_num[ARRAY_DIMENTION_MAX];
            int i;
            for(i=0; i<array_dimetion_num; i++) {
                array_num[i] = (*node_type)->mArrayNum[i];
            }
            BOOL nullable_ = (*node_type)->mNullable;
            BOOL immutable_ = (*node_type)->mImmutable;
            BOOL channel = (*node_type)->mChannel;
            int pointer_num = (*node_type)->mPointerNum;
            BOOL heap = (*node_type)->mHeap;

            BOOL no_heap = (*node_type)->mNoHeap;
            BOOL refference = (*node_type)->mRefference;

            *node_type = clone_node_type(generics_type->mGenericsTypes[generics_number]);

            if(heap) {
                (*node_type)->mHeap = heap;
            }
            if(no_heap) {
                (*node_type)->mHeap = FALSE;
            }
            if(refference) {
                (*node_type)->mRefference = refference;
            }
            if(nullable_) {
                (*node_type)->mNullable = nullable_;
            }
            if(immutable_) {
                (*node_type)->mImmutable = immutable_;
            }
            if(channel) {
                (*node_type)->mChannel = channel;
            }
            if(array_dimetion_num > 0) {
                (*node_type)->mArrayDimentionNum = array_dimetion_num;
                int i;
                for(i=0; i<array_dimetion_num; i++) {
                    (*node_type)->mArrayNum[i] = array_num[i];
                }
            }
            
            if(pointer_num > 0) {
                sNodeType* ppp = *node_type;
                ppp->mPointerNum += pointer_num;
            };
        }
    }
    else {
        if(((klass->mFlags & CLASS_FLAGS_STRUCT) || (klass->mFlags & CLASS_FLAGS_UNION)) && (klass->mFlags & CLASS_FLAGS_ANONYMOUS))
        {
            //(*node_type)->mClass = clone_class(klass);
            klass = (*node_type)->mClass;
            
            int i;
            for(i=0; i<klass->mNumFields; i++) {
                sNodeType* node_type = clone_node_type(klass->mFields[i]);
                if(!solve_generics(&node_type, generics_type))
                {
                    return FALSE;
                }
            }
        }

        int i;
        for(i=0; i<(*node_type)->mNumGenericsTypes; i++)
        {
            if(!solve_generics(&(*node_type)->mGenericsTypes[i], generics_type))
            {
                return FALSE;
            }
        }
        
    }

    if((*node_type)->mPointerNum == 0) {
        (*node_type)->mHeap = FALSE;
    }
    

    return TRUE;
}

BOOL solve_method_generics(sNodeType** node_type, int num_method_generics_types, sNodeType** method_generics_types)
{
    sCLClass* klass = (*node_type)->mClass;

    if(type_identify_with_class_name(*node_type, "lambda")) 
    {
        if(!solve_method_generics(&(*node_type)->mResultType, num_method_generics_types, method_generics_types))
        {
            return FALSE;
        }

        int i;
        for(i=0; i<(*node_type)->mNumParams; i++)
        {
            if(!solve_method_generics(&(*node_type)->mParamTypes[i], num_method_generics_types, method_generics_types))
            {
                return FALSE;
            }
        }
    }
    else if(klass->mFlags & CLASS_FLAGS_METHOD_GENERICS)
    {
        int method_generics_number = klass->mMethodGenericsNum;

        if(method_generics_types[method_generics_number])
        {
            int array_dimetion_num = (*node_type)->mArrayDimentionNum;
            int array_num[ARRAY_DIMENTION_MAX];
            int i;
            for(i=0; i<array_dimetion_num; i++) {
                array_num[i] = (*node_type)->mArrayNum[i];
            }
            BOOL nullable_ = (*node_type)->mNullable;
            BOOL immutable_ = (*node_type)->mImmutable;
            int pointer_num = (*node_type)->mPointerNum;
            BOOL heap = (*node_type)->mHeap;
            BOOL channel = (*node_type)->mChannel;

            BOOL no_heap = (*node_type)->mNoHeap;
            BOOL refference = (*node_type)->mRefference;

            *node_type = clone_node_type(method_generics_types[method_generics_number]);

            if(heap) {
                (*node_type)->mHeap = heap;
            }
            if(no_heap) {
                (*node_type)->mHeap = FALSE;
            }
            if(refference) {
                (*node_type)->mRefference = refference;
            }
            if(nullable_) {
                (*node_type)->mNullable = nullable_;
            }
            if(channel) {
                (*node_type)->mChannel = channel;
            }
            if(immutable_) {
                (*node_type)->mImmutable = immutable_;
            }
            if(array_dimetion_num > 0) {
                (*node_type)->mArrayDimentionNum = array_dimetion_num;
                int i;
                for(i=0; i<array_dimetion_num; i++) {
                    (*node_type)->mArrayNum[i] = array_num[i];
                }
            }
            if(pointer_num > 0) {
                (*node_type)->mPointerNum += pointer_num;
            }
        }
        else {
            return FALSE;
        }
    }
    else {
        int i;
        for(i=0; i<(*node_type)->mNumGenericsTypes; i++)
        {
            if(!solve_method_generics(&(*node_type)->mGenericsTypes[i], num_method_generics_types, method_generics_types))
            {
                return FALSE;
            }
        }
    }

    return TRUE;
}

void solve_method_generics2(sNodeType** left_type, sNodeType* right_type)
{
    sCLClass* klass = (*left_type)->mClass;

    if(type_identify_with_class_name(*left_type, "lambda") && type_identify_with_class_name(right_type, "lambda")) 
    {
        solve_method_generics2(&(*left_type)->mResultType, right_type->mResultType);

        int i;
        for(i=0; i<(*left_type)->mNumParams; i++)
        {
            solve_method_generics2(&(*left_type)->mParamTypes[i], right_type->mParamTypes[i]);
        }
    }
    else if(klass->mFlags & CLASS_FLAGS_METHOD_GENERICS)
    {
        *left_type = clone_node_type(right_type);
    }
    else {
        int i;
        for(i=0; i<(*left_type)->mNumGenericsTypes; i++)
        {
            if(i < right_type->mNumGenericsTypes) {
                solve_method_generics2(&(*left_type)->mGenericsTypes[i], right_type->mGenericsTypes[i]);
            }
        }
    }
}

BOOL is_typeof_type(sNodeType* node_type)
{
    BOOL result = FALSE;

    int i;
    for(i=0; i<node_type->mNumGenericsTypes; i++)
    {
        if(node_type->mGenericsTypes[i]->mTypeOfExpression) {
            result = TRUE;
        }
    }

    if(node_type->mTypeOfExpression) {
        result = TRUE;
    }

    return result;
}

BOOL solve_typeof(sNodeType** node_type, sCompileInfo* info)
{
    int pointer_num = (*node_type)->mPointerNum;
    
    int array_dimention_num = (*node_type)->mArrayDimentionNum;
    int array_num[ARRAY_DIMENTION_MAX];
    int i;
    for(i=0; i<array_dimention_num; i++) {
        array_num[i] = (*node_type)->mArrayNum[i];
    }
    
    for(i=0; i<(*node_type)->mNumGenericsTypes; i++)
    {
        if(!solve_typeof(&(*node_type)->mGenericsTypes[i], info))
        {
            return FALSE;
        }
    }

    unsigned int node = (*node_type)->mTypeOfExpression;

    if(node) {
        BOOL no_output = info->no_output;
        info->no_output = TRUE;
        if(!compile(node, info)) {
            compile_err_msg(info, "can't get type from typedef");
            return TRUE;
        }
        info->no_output = no_output;

        dec_stack_ptr(1, info);

        *node_type = clone_node_type(info->type);
    }
    
    (*node_type)->mPointerNum += pointer_num;
    (*node_type)->mArrayDimentionNum = array_dimention_num;
    for(i=0; i<array_dimention_num; i++ ) {
        (*node_type)->mArrayNum[i] = array_num[i];
    }

    return TRUE;
}

BOOL solve_type(sNodeType** node_type, sNodeType* generics_type, int num_method_generics_types, sNodeType** method_generics_types, sCompileInfo* info)
{
    if(!solve_method_generics(node_type, num_method_generics_types, method_generics_types))
    {
        compile_err_msg(info, "Can't solve method generics type(2)");
        show_node_type(*node_type);
        return FALSE;
    }

    if(generics_type) {
        if(!solve_generics(node_type, generics_type))
        {
            compile_err_msg(info, "Can't solve generics types(3)");
            show_node_type(*node_type);
            show_node_type(generics_type);
            return FALSE;
        }
    }

    if(is_typeof_type(*node_type))
    {
        if(!solve_typeof(node_type, info)) 
        {
            compile_err_msg(info, "Can't solve typeof types");
            show_node_type(*node_type);
            return TRUE;
        }
    }


    return TRUE;
}

BOOL get_type_of_method_generics(sNodeType** method_generics_types, sNodeType* fun_param_type, sNodeType* param_type)
{
    sCLClass* klass = fun_param_type->mClass;

    if(klass->mFlags & CLASS_FLAGS_METHOD_GENERICS)
    {
        int method_generics_number = klass->mMethodGenericsNum;
        method_generics_types[method_generics_number] = clone_node_type(param_type);
    }

    if(fun_param_type->mNumGenericsTypes == param_type->mNumGenericsTypes) 
    {
        int i;
        for(i=0; i<fun_param_type->mNumGenericsTypes; i++)
        {
            if(!get_type_of_method_generics(method_generics_types, fun_param_type->mGenericsTypes[i], param_type->mGenericsTypes[i]))
            {
                return FALSE;
            }
        }
    }

    if(type_identify_with_class_name(fun_param_type, "lambda") 
        && type_identify_with_class_name(param_type, "lambda"))
    {
        if(!get_type_of_method_generics(method_generics_types, fun_param_type->mResultType, param_type->mResultType))
        {
            return FALSE;
        }

        int i;
        for(i=0; i<fun_param_type->mNumParams; i++)
        {
            if(!get_type_of_method_generics(method_generics_types, fun_param_type->mParamTypes[i], param_type->mParamTypes[i]))
            {
                return FALSE;
            }
        }
    }

    return TRUE;
}

BOOL included_generics_type(sNodeType* node_type, sCLClass* checked_class[], int* num_checked_class)
{
    sCLClass* klass = node_type->mClass;

    checked_class[*num_checked_class] = klass;
    (*num_checked_class)++;

    if(*num_checked_class >= STRUCT_FIELD_MAX) 
    {
        fprintf(stderr, "overflow struct field max at included_generics_type");
        exit(2);
    }

    if(type_identify_with_class_name(node_type, "lambda")) 
    {
        if(included_generics_type(node_type->mResultType, checked_class, num_checked_class))
        {
            return TRUE;
        }

        int i;
        for(i=0; i<node_type->mNumParams; i++)
        {
            if(included_generics_type(node_type->mParamTypes[i], checked_class, num_checked_class))
            {
                return TRUE;
            }
        }
    }
    else if(klass->mFlags & CLASS_FLAGS_GENERICS || klass->mFlags & CLASS_FLAGS_METHOD_GENERICS) 
    {
        return TRUE;
    }
    else {
        if((klass->mFlags & CLASS_FLAGS_STRUCT) || (klass->mFlags & CLASS_FLAGS_UNION))
        {
            int i;

            for(i=0; i<klass->mNumFields; i++) {
                sNodeType* field_type = clone_node_type(klass->mFields[i]);

                BOOL same_class = FALSE;
                int j;
                for(j=0; j<*num_checked_class; j++)
                {
                    if(field_type->mClass == checked_class[j])
                    {
                        if(field_type->mClass->mFlags & CLASS_FLAGS_GENERICS || field_type->mClass->mFlags & CLASS_FLAGS_METHOD_GENERICS) 
                        {
                            return TRUE;
                        }
                        else {
                            return FALSE;
                        }
                    }
                }

                if(included_generics_type(field_type, checked_class, num_checked_class))
                {
                    return TRUE;
                }
            }
        }

        int i;
        for(i=0; i<node_type->mNumGenericsTypes; i++)
        {
            if(node_type->mGenericsTypes[i]->mClass == klass || included_generics_type(node_type->mGenericsTypes[i], checked_class, num_checked_class))
            {
                return TRUE;
            }
        }
    }

    return FALSE;
}

void create_type_name_from_node_type(char* type_name, int type_name_max, sNodeType* node_type, BOOL neo_c)
{
    sCLClass* klass = node_type->mClass;

    xstrncat(type_name, CLASS_NAME(klass), type_name_max);

    if(node_type->mNumParams > 0) {
        xstrncat(type_name, "(", type_name_max);

        int i;
        for(i=0; i<node_type->mNumParams; i++) {
            create_type_name_from_node_type(type_name, type_name_max, node_type->mParamTypes[i], neo_c);
            
            if(i != node_type->mNumParams-1) {
                xstrncat(type_name, ",", type_name_max);
            }
        }
        xstrncat(type_name, ")", type_name_max);

        xstrncat(type_name, ":", type_name_max);

        create_type_name_from_node_type(type_name, type_name_max, node_type->mResultType, neo_c);
    }

    int pointer_num = node_type->mPointerNum;
    if(klass->mFlags & CLASS_FLAGS_STRUCT && neo_c)
    {
        pointer_num--;
    }

    int i;
    for(i=0; i<pointer_num; i++) {
        xstrncat(type_name, "*", type_name_max);
    }
    if(node_type->mNullable) {
        xstrncat(type_name, "?", type_name_max);
    }
    if(node_type->mImmutable) {
        xstrncat(type_name, " immutable ", type_name_max);
    }
    if(node_type->mHeap) {
        xstrncat(type_name, "%", type_name_max);
    }
    if(node_type->mChannel) {
        xstrncat(type_name, "~", type_name_max);
    }
    if(node_type->mNumGenericsTypes > 0) {
        xstrncat(type_name, "<", type_name_max);

        int i;
        for(i=0; i<node_type->mNumGenericsTypes; i++) {
            create_type_name_from_node_type(type_name, type_name_max, node_type->mGenericsTypes[i], neo_c);

            if(i != node_type->mNumGenericsTypes-1) {
                xstrncat(type_name, ",", type_name_max);
            }
        }

        xstrncat(type_name, ">", type_name_max);
    }
}

BOOL check_nullable_type(char* var_name, sNodeType* node_type, sCompileInfo* info)
{
    if(node_type->mNullable && !info->in_generics_function) {
        if(var_name) {
            compile_err_msg(info, "Require unwrap to use this variable(%s)", var_name);
        }
        else {
            compile_err_msg(info, "Require unwrap to use this variable");
        }
    }
    return TRUE;
}

BOOL type_equalability(sNodeType* left_type, sNodeType* right_type)
{
    if(strcmp(CLASS_NAME(left_type->mClass), CLASS_NAME(right_type->mClass)) != 0) {
        return FALSE;
    }
    if(left_type->mPointerNum != right_type->mPointerNum || left_type->mHeap != right_type->mHeap || left_type->mNullable != right_type->mNullable)
    {
        return FALSE;
    }
    
    if(left_type->mNumGenericsTypes != right_type->mNumGenericsTypes) {
        return FALSE;
    }
    
    int i;
    for(i=0; i<left_type->mNumGenericsTypes; i++) {
        if(!type_equalability(left_type->mGenericsTypes[i], right_type->mGenericsTypes[i])) {
            return FALSE;
        }
    }
    
    return TRUE;
}

BOOL is_left_type_bigger_size(sNodeType* left_type, sNodeType* right_type)
{
    if(left_type->mPointerNum > 0 || right_type->mPointerNum > 0) {
        return FALSE;
    }
    else if(left_type->mArrayDimentionNum > 0 || right_type->mArrayDimentionNum > 0) {
        return FALSE;
    }
    else if(type_identify_with_class_name(left_type, "long") && !type_identify_with_class_name(right_type, "long")) {
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "int")) {
        if(type_identify_with_class_name(right_type, "float")) {
            return FALSE;
        }
        else if(type_identify_with_class_name(right_type, "double")) {
            return FALSE;
        }
        else if(type_identify_with_class_name(right_type, "long")) {
            return FALSE;
        }
        else if(type_identify_with_class_name(right_type, "int")) {
            return FALSE;
        }
        
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "short")) {
        if(type_identify_with_class_name(right_type, "float")) {
            return FALSE;
        }
        else if(type_identify_with_class_name(right_type, "double")) {
            return FALSE;
        }
        else if(type_identify_with_class_name(right_type, "long")) {
            return FALSE;
        }
        else if(type_identify_with_class_name(right_type, "int")) {
            return FALSE;
        }
        else if(type_identify_with_class_name(right_type, "short")) {
            return FALSE;
        }
        
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "char")) {
        if(type_identify_with_class_name(right_type, "float")) {
            return FALSE;
        }
        else if(type_identify_with_class_name(right_type, "double")) {
            return FALSE;
        }
        else if(type_identify_with_class_name(right_type, "long")) {
            return FALSE;
        }
        else if(type_identify_with_class_name(right_type, "int")) {
            return FALSE;
        }
        else if(type_identify_with_class_name(right_type, "short")) {
            return FALSE;
        }
        else if(type_identify_with_class_name(right_type, "char")) {
            return FALSE;
        }
        
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "float")) {
        if(type_identify_with_class_name(right_type, "double")) {
            return FALSE;
        }
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "double")) {
        return TRUE;
    }
    
    return FALSE;
}

