#include "common.h"

string make_type_name_string(sType* type, bool in_header=false, bool array_cast_pointer=false, bool no_pointer=false, sInfo* info=info, bool no_static=false, bool cast_type=false, bool no_alignas=false)
{
    var buf = new buffer();
    
    char* class_name = type->mClass->mName;
    
    if(type->mAlignas && !no_alignas) {
        if(!node_compile(type->mAlignas)) {
            printf("_Alignas error\n");
            return string("");
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        
        buf.append_format("_Alignas(%s) ", come_value.c_value);
    }
    
    if(type->mStatic && !no_static) {
        buf.append_str("static ");
    }
    if(type->mAtomic) {
        buf.append_str("_Atomic ");
        //buf.append_str("_Atomic(");
    }
    if(type->mThreadLocal) {
        buf.append_str("_Thread_local ");
        //buf.append_str("_Atomic(");
    }
    
    if(type->mConstant) {
        buf.append_str("const ");
    }
    if(type->mRegister) {
        buf.append_str("register ");
    }
    
    if(type->mUnsigned) {
        buf.append_str("unsigned ");
    }
    
    if(type->mShort) {
        buf.append_str("short ");
    }
    
    if(type->mOriginalTypeName === "va_list") {
        buf.append_str("va_list");
    }
    else if(type->mOriginalTypeName === "__builtin_va_list") {
        buf.append_str("__builtin_va_list");
    }
    else if(class_name === "__builtin_va_list") {
        if(in_header) {
            buf.append_str(class_name);
        }
        else {
            buf.append_str("va_list");
        }
    }
    else if(type->mClass->mStruct) {
        buf.append_str("struct ");
        buf.append_str(class_name);
    }
    else if(type->mClass->mUnion) {
        buf.append_str("union ");
        buf.append_str(class_name);
    }
    else if(type->mClass->mEnum) {
        buf.append_str("enum ");
        buf.append_str(class_name);
    }
    else if(type->mLongLong) {
        if(class_name === "int") {
            buf.append_str("long long int");
        }
        else if(class_name === "long") {
            buf.append_str("long long");
        }
    }
    else if(type->mLong) {
        buf.append_str("long ");
        
/*
        if(type->mUnsigned) {
            buf.append_str("unsigned ");
        }
*/
        
        if(class_name === "int") {
            buf.append_str(" int");
        }
        else if(class_name === "long") {
            buf.append_str(" long");
        }
        else if(class_name === "double") {
            buf.append_str(" double");
        }
    }
    else if(class_name === "long") {
        buf.append_str("long");
    }
    else if(class_name === "__uint128_t") {
        buf.append_str("__uint128_t");
    }
    else if(class_name === "bool") {
        buf.append_str("_Bool");
    }
    else if(class_name === "lambda") {
        string result_type_str = make_type_name_string(type->mResultType, in_header, no_static:true);
        buf.append_str(result_type_str);
        buf.append_str(" (*");
        
        if(type->mArrayNum.length() > 0) {
            for(int i=0; i<type->mArrayNum.length(); i++) {
                buf.append_str("[");
                sNode*% node = type->mArrayNum[i];
                
                node_compile(node).elif {
                    err_msg(info, "invalid array num");
                    exit(2);
                }
            
                CVALUE*% cvalue = get_value_from_stack(-1, info);
                
                buf.append_format("%s", cvalue.c_value);
                buf.append_str("]");
            }
        }
        buf.append_str(")(");
        
        int j = 0;
        foreach(it, type->mParamTypes) {
            info.undefined_array_num_var = true;
            string param_type_str = make_type_name_string(it, in_header, no_static:true);
            info.undefined_array_num_var = false;
            
            buf.append_str(param_type_str);
            
            if(j != type->mParamTypes.length()-1) {
                buf.append_str(",");
            }
            j++;
        }
        buf.append_str(")");
    }
    else {
        if(class_name == null) {
            err_msg(info, "class name is null");
            return string("");
        }
        buf.append_str(class_name);
    }
    
    if(cast_type && type->mArrayPointerType) {
        buf.append_str("[]");
    }
    else {
        if(class_name !== "lambda" && !no_pointer && type->mOriginalTypeName !== "va_list" && type->mOriginalTypeName !== "__builtin_va_list") {
            for(int i=0; i<type->mPointerNum; i++) {
                buf.append_str("*");
            }
        }
    }
    
    if(array_cast_pointer && type->mArrayNum.length() > 0 && !no_pointer && type->mOriginalTypeName !== "va_list" && type->mOriginalTypeName !== "__builtin_va_list") {
        buf.append_str("*");
    }
    
    if(type->mRestrict) {
        buf.append_str("restrict");
    }
    if(type->mAtomic) {
        //buf.append_str(")");
    }
    
    if(type->mAttribute && gComeBareMetal) {
        buf.append_str(" " + type->mAttribute);
    }
    
    return buf.to_string();
}

sType*% get_no_solved_type(sType* type)
{
    sType*% result;
    if(type->mNoSolvedGenericsType) {
        result = type->mNoSolvedGenericsType;
    }
    else {
        result = clone type;
    }
    
    int i = 0;
    foreach(it, type->mGenericsTypes) {
        result.mGenericsTypes[i] = get_no_solved_type(it);
        i++;
    }
    
    return result;
}

string make_come_type_name_string(sType* type, sInfo* info=info, bool original_type_name=false)
{
    var buf = new buffer();
    
    //sType*% type2 = clone type;
    sType*% type2 = get_no_solved_type(type);
    
    char* class_name = type2->mClass->mName;
    
    if(original_type_name && type->mOriginalTypeName && type->mOriginalTypeName !== "") {
        var buf = new buffer();
        
        buf.append_str(type->mOriginalTypeName);
        for(int i=0; i<type->mOriginalTypeNamePointerNum; i++) {
            buf.append_str("*");
        }
        if(type->mOriginalTypeNameHeap) {
            buf.append_str("%");
        }
        
        return buf.to_string();
    }
    else {
        buf.append_str(class_name);
        
        if(type2->mGenericsTypes.length() > 0) {
            buf.append_str("<");
            for(int i=0; i<type2->mGenericsTypes.length(); i++) {
                sType* gtype = type2->mGenericsTypes[i];
                
                buf.append_str(make_come_type_name_string(gtype));
                
                if(i != type2->mGenericsTypes.length() -1) {
                    buf.append_str(",");
                }
            }
            
            buf.append_str(">");
        }
        
        if(class_name !== "lambda") {
            for(int i=0; i<type2->mPointerNum; i++) {
                buf.append_str("*");
            }
        }
            
        if(type2->mArrayNum.length() > 0) {
            for(int i=0; i<type2->mArrayNum.length(); i++) {
                buf.append_str("[]");
            }
        }
            
        if(type2->mHeap) {
            buf.append_str("%");
        }
        
        if(type2->mAttribute) {
            buf.append_str(" " + type2->mAttribute);
        }
    }
    
    return buf.to_string();
}

static string make_lambda_type_name_string(sType* type, char* var_name, sInfo* info)
{
    var buf = new buffer();
    if(type->mResultType == null) {
        err_msg(info, "invalid lambda type");
        return string("");
    }
    
    if(type->mResultType && type->mResultType.mClass->mName === "lambda") 
    {
        buf.append_format("(*%s", var_name);
        
        if(type->mResultType->mArrayNum.length() > 0) {
            for(int i=0; i<type->mResultType->mArrayNum.length(); i++) {
                buf.append_str("[");
                sNode*% node = type->mArrayNum[i];
                
                node_compile(node).elif {
                    err_msg(info, "invalid array num");
                    exit(2);
                }
            
                CVALUE*% cvalue = get_value_from_stack(-1, info);
                
                buf.append_format("%s", cvalue.c_value);
                buf.append_str("]");
            }
        }
        buf.append_format(")(", var_name);
        
        int i = 0;
        foreach(it, type->mParamTypes) {
            info.undefined_array_num_var = true;
            buf.append_str(make_type_name_string(it, no_static:true));
            info.undefined_array_num_var = false;
            if(i != type->mParamTypes.length()-1) {
                buf.append_str(",");
            }
            
            i++;
        }
        
        buf.append_str(")");
        
        if(type->mAttribute) {
            buf.append_str(" " + type->mAttribute);
        }
        
        return make_lambda_type_name_string(type->mResultType, buf.to_string(), info);
    }
    else {
        buf.append_format("%s ", make_type_name_string(type->mResultType, no_static:true));
        if(type->mFunctionPointerNum > 1) {
            buf.append_str("(");
            for(int i=0; i<type->mFunctionPointerNum; i++) {
                buf.append_str("*");
            }
            buf.append_str(var_name);
        }
        else {
            buf.append_format("(*%s", var_name);
        }
        if(type->mArrayNum.length() > 0) {
            for(int i=0; i<type->mArrayNum.length(); i++) {
                buf.append_str("[");
                sNode*% node = type->mArrayNum[i];
                
                node_compile(node).elif {
                    err_msg(info, "invalid array num");
                    exit(2);
                }
            
                CVALUE*% cvalue = get_value_from_stack(-1, info);
                
                buf.append_format("%s", cvalue.c_value);
                buf.append_str("]");
            }
        }
        buf.append_format(")(");
        
        int i = 0;
        foreach(it, type->mParamTypes) {
            info.undefined_array_num_var = true;
            buf.append_str(make_type_name_string(it, no_static:true));
            info.undefined_array_num_var = false;
            if(i != type->mParamTypes.length()-1) {
                buf.append_str(",");
            }
            
            i++;
        }
        
        buf.append_str(")");
        
        if(type->mAttribute) {
            buf.append_str(" " + type->mAttribute);
        }
        
        return buf.to_string();
    }
    
    return buf.to_string();
}

static string header_lambda(sType* lambda_type, string name, sInfo* info);

string make_define_var(sType* type, char* name, bool in_header=false, bool original_type_name=false, sInfo* info=info, bool come_type=false)
{
    var buf = new buffer();
    
    sType*% type2 = clone type;
    if(type2->mArrayPointerType) {
        type2->mPointerNum--;
    }
    
    if(type2->mClass->mName === "lambda" && type2->mAsmName != null && type2->mAsmName !== "") {
        var str = header_lambda(type2, type2->mAsmName, info);
        
        buf.append_str(str);
    }
    else if(type2->mClass->mName === "lambda") {
        var str = make_lambda_type_name_string(type2, name, info);
        
        buf.append_str(str);
    }
    else if(type2->mArrayPointerNum > 0) {
        string type_name = make_type_name_string(type2);
        
        buf.append_format("%s (*%s)", type_name, name);
        
        foreach(it, type2->mArrayNum) {
            if(!node_compile(it)) {
                err_msg(info, "invalid array number");
                return string("");
            }
            CVALUE*% cvalue = get_value_from_stack(-1, info);
        
            buf.append_format("[%s]", cvalue.c_value);
        }
    }
    else if(type2->mSizeNum != null) {
        if(!node_compile(type2->mSizeNum)) {
            err_msg(info, "invalid bit field number");
            return string("");
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
    
        string type_str;
        if(come_type) {
            type_str = make_come_type_name_string(type2);
        }
        else {
            type_str = make_type_name_string(type2, in_header);
        }
        buf.append_format("%s ", type_str);
        buf.append_format("%s:%s", name, come_value.c_value);
        
        if(type2->mAsmName != null && type2->mAsmName !== "") {
            buf.append_format(" __asm__(\"%s\")", type2->mAsmName);
        }
        
        if(type2->mAsmName != null && type2->mAsmName !== "") {
            buf.append_format(" __asm__(\"%s\")", type2->mAsmName);
        }
    }
    else if(type2->mArrayNum.length() > 0) {
        string type_str;
        if(come_type) {
            type_str = make_come_type_name_string(type2);
        }
        else {
            type_str = make_type_name_string(type2, in_header);
        }
        
        buf.append_str(type_str);
        
        buf.append_str(" ");
        buf.append_str(name);
        
        foreach(it, type2->mArrayNum) {
            if(!node_compile(it)) {
                err_msg(info, "invalid array number");
                return string("");
            }
            CVALUE*% cvalue = get_value_from_stack(-1, info);
        
            buf.append_format("[%s]", cvalue.c_value);
        }
        
        if(type2->mArrayPointerType) {
            buf.append_str("[]");
        }
        
        if(type2->mAsmName != null && type2->mAsmName !== "") {
            buf.append_format(" __asm__(\"%s\")", type2->mAsmName);
        }
    }
    else {
        string type_str;
        if(come_type) {
            type_str = make_come_type_name_string(type2);
        }
        else {
            type_str = make_type_name_string(type2, in_header);
        }
        
        if(type_str === "") {
            return string("");
        }
        
        buf.append_str(type_str);
        
        buf.append_str(" ");
        buf.append_str(name);
        
        if(type2->mArrayPointerType) {
            buf.append_str("[]");
        }
        
        if(type2->mAsmName != null && type2->mAsmName !== "") {
            buf.append_format(" __asm__(\"%s\")", type2->mAsmName);
        }
    }
    
    if(type2->mVarAttribute) {
        buf.append_str(" " + type->mVarAttribute);
    }
    
    return buf.to_string();
}

string make_come_header_function(sFun* fun, string base_fun_name, sType*% impl_type=null, int version_=-1, sInfo* info=info)
{
    buffer*% header = new buffer();
    
    string result_type_name = make_come_type_name_string(fun->mResultType);
    
    if(impl_type) {
        string impl_name = make_come_type_name_string(impl_type);
        header.append_format("extern %s %s::%s(", result_type_name, impl_name, base_fun_name);
    }
    else {
        header.append_format("extern %s %s(", result_type_name, base_fun_name);
    }
    
    for(int i=0; i<fun.mParamTypes.length(); i++) {
        info.undefined_array_num_var = true;
        var param_type = fun.mParamTypes[i];
        var param_name = fun.mParamNames[i];
        var default_parametor = fun.mParamDefaultParametors[i];
        
        if(default_parametor) {
            header.append_format("%s %s=%s", make_come_type_name_string(param_type), param_name, default_parametor);
        }
        else {
            header.append_format("%s %s", make_come_type_name_string(param_type), param_name);
        }
        
        if(i != fun.mParamTypes.length()-1) {
            header.append_str(",");
        }
        info.undefined_array_num_var = false;
    }
    
    if(version_ == -1 || version_ == 0) {
        header.append_str(");\n");
    }
    else {
        header.append_format(") version %d;\n", version_);
    }
    
    return header.to_string();
}

string output_function(sFun* fun, sInfo* info)
{
    var output = new buffer();
    if(fun->mResultType->mResultType) {
        var output2 = new buffer();
        
        output2.append_str(fun->mName);
        output2.append_str("(");
        
        int i = 0;
        foreach(it, fun->mParamTypes) {
            info.undefined_array_num_var = true;
            char* name = fun->mParamNames[i];
            
            var str = make_define_var(it, name);
            output2.append_str(str);
            
            if(i == fun->mParamTypes.length()-1) {
                if(fun->mVarArgs) {
                    output2.append_str(", ...");
                }
            }
            else {
                output2.append_str(", ");
            }
            
            i++;
            info.undefined_array_num_var = false;
        }
        output2.append_str(")");
        
        string str = make_lambda_type_name_string(fun->mResultType, output2.to_string(), info);
        
        if(fun->mAttribute !== "" && gComeBareMetal) {
            output.append_str(s"\{fun->mAttribute} ");
        }
        if(fun->mStatic) {
            output.append_str("static ");
        }
        if(fun->mInline) {
            output.append_str("inline ");
        }
        
        output.append_str(str);
        
        info.module.mSourceHead.append_str(output.to_string());
        // when declaring outputs function attribute
        if(fun->mFunAttribute !== "" && gComeBareMetal) {
            info.module.mSourceHead.append_str(s" \{fun->mFunAttribute};\n");
        }
        else {
            info.module.mSourceHead.append_str(";\n");
        }
    }
    else if(fun->mResultType->mArrayNum.length() > 0) {
        sType*% base_result_type = fun->mResultType;
        base_result_type.mArrayNum = new list<sNode*%>();
        
        string result_type_str = make_type_name_string(base_result_type, no_static:true);
        
        if(fun->mAttribute !== "" && gComeBareMetal) {
            output.append_str(s"\{fun->mAttribute} ");
        }
        if(fun->mStatic) {
            output.append_str("static ");
        }
        if(fun->mInline) {
            output.append_str("inline ");
        }
        
        output.append_str(result_type_str);
        output.append_str(" (*");
        
        output.append_str(fun->mName);
        output.append_str("(");
        
        int i = 0;
        foreach(it, fun->mParamTypes) {
            info.undefined_array_num_var = true;
            char* name = fun->mParamNames[i];
            
            string str = make_define_var(it, name);
            output.append_str(str);
            
            if(i == fun->mParamTypes.length()-1) {
                if(fun->mVarArgs) {
                    output.append_str(", ...");
                }
            }
            else {
                output.append_str(", ");
            }
            
            i++;
            info.undefined_array_num_var = false;
        }
        
        sNode* node = fun->mResultType->mArrayNum[0]??;
        
        if(!node_compile(node)) {
            err_msg(info, "invalid array number");
            return string("");
        }
        CVALUE*% cvalue = get_value_from_stack(-1, info);
        
        output.append_format("))[%s]", cvalue.c_value);
        
        info.module.mSourceHead.append_str(output.to_string());
        if(fun->mFunAttribute !== "" && gComeBareMetal) {
            info.module.mSourceHead.append_str(s" \{fun->mFunAttribute};\n");
        }
        else {
            info.module.mSourceHead.append_str(";\n");
        }
    }
    else {
        string result_type_str = make_type_name_string(fun->mResultType, no_static:true);
        
        if(fun->mAttribute !== "" && gComeBareMetal) {
            output.append_str(s"\{fun->mAttribute} ");
        }
        if(fun->mStatic) {
            output.append_str("static ");
        }
        if(fun->mInline) {
            output.append_str("inline ");
        }
        
        output.append_str(result_type_str);
        output.append_str(" ");
        
        output.append_str(fun->mName);
        output.append_str("(");
        
        int i = 0;
        foreach(it, fun->mParamTypes) {
            info.undefined_array_num_var = true;
            char* name = fun->mParamNames[i];
            
            string str = make_define_var(it, name);
            output.append_str(str);
            
            if(i == fun->mParamTypes.length()-1) {
                if(fun->mVarArgs) {
                    output.append_str(", ...");
                }
            }
            else {
                output.append_str(", ");
            }
            i++;
            info.undefined_array_num_var = false;
        }
        
        output.append_str(")");
        
        info.module.mSourceHead.append_str(output.to_string());
        if(fun->mFunAttribute !== "" && gComeBareMetal) {
            info.module.mSourceHead.append_str(s" \{fun->mFunAttribute};\n");
        }
        else {
            info.module.mSourceHead.append_str(";\n");
        }
    }
    
    output.append_str("{\n");
    
    output.append_str(fun->mSourceHead.to_string());
    output.append_str(fun->mSourceHead2.to_string());
    output.append_str(fun->mSource.to_string());
    
    output.append_str("}\n");
    
    return output.to_string();
}

string header_function(sFun* fun, sInfo* info)
{
    var output = new buffer();
    
    if(fun->mResultType->mResultType) {
        var output2 = new buffer();
        
        output2.append_str(fun->mName);
        output2.append_str("(");
        
        int i = 0;
        foreach(it, fun->mParamTypes) {
            info.undefined_array_num_var = true;
            char* name = fun->mParamNames[i];
            
            string str = make_define_var(it, name);
            output2.append_str(str);
            
            if(i != fun->mParamTypes.length()-1) {
                output2.append_str(", ");
            }
            i++;
            info.undefined_array_num_var = false;
        }
        output2.append_str(")");
        
        string str = make_lambda_type_name_string(fun->mResultType, output2.to_string(), info);
        
        if(fun->mStatic) {
            output.append_str("static ");
        }
        if(fun->mInline) {
            output.append_str("inline ");
        }
        output.append_str(str);
        
        if(fun->mFunAttribute !== "" && gComeBareMetal) {
            output.append_str(s" \{fun->mFunAttribute} ");
        }
        
        output.append_str(";\n");
    }
    else if(fun->mResultType->mArrayNum.length() > 0) {
        sType*% base_result_type = fun->mResultType;
        base_result_type->mArrayNum = new list<sNode*%>();
        
        string result_type_str = make_type_name_string(base_result_type, no_static:true);
        
        if(fun->mStatic) {
            output.append_str("static ");
        }
        if(fun->mInline) {
            output.append_str("inline ");
        }
        
        output.append_str(result_type_str);
        output.append_str(" (*");
        
        output.append_str(fun->mName);
        output.append_str("(");
        
        int i = 0;
        foreach(it, fun->mParamTypes) {
            info.undefined_array_num_var = true;
            char* name = fun->mParamNames[i];
            
            string str = make_define_var(it, name);
            output.append_str(str);
            
            if(i == fun->mParamTypes.length()-1) {
                if(fun->mVarArgs) {
                    output.append_str(", ...");
                }
            }
            else {
                output.append_str(", ");
            }
            i++;
            info.undefined_array_num_var = false;
        }
        
        sNode* node = fun->mResultType->mArrayNum[0]??;
        if(!node_compile(node)) {
            err_msg(info, "invalid array number");
            return string("");
        }
        CVALUE*% cvalue = get_value_from_stack(-1, info);
        
        output.append_format("))[%s]", cvalue.c_value);
        if(fun->mAttribute !== "" && gComeBareMetal) {
            output.append_str(s"\{fun->mAttribute} ");
        }
        output.append_format(";\n");
    }
    else {
        string result_type_str = make_type_name_string(fun->mResultType, no_static:true);
        
        if(fun->mStatic) {
            output.append_str("static ");
        }
        if(fun->mInline) {
            output.append_str("inline ");
        }
        
        output.append_str(result_type_str);
        output.append_str(" ");
        
        output.append_str(fun->mName);
        output.append_str("(");
        
        int i = 0;
        foreach(it, fun->mParamTypes) {
            info.undefined_array_num_var = true;
            char* name = fun->mParamNames[i];
            
            info.undefined_array_num_var = true;
            string str = make_define_var(it, name);
            info.undefined_array_num_var = false;
            output.append_str(str);
            
            if(i == fun->mParamTypes.length()-1) {
                if(fun->mVarArgs) {
                    output.append_str(", ...");
                }
            }
            else {
                output.append_str(", ");
            }
            i++;
            info.undefined_array_num_var = false;
        }
        
        if(fun->mFunAttribute !== "" && gComeBareMetal) {
            output.append_str(s") \{fun->mFunAttribute};\n");
        }
        else {
            output.append_str(");\n");
        }
    }
    
    return output.to_string();
}

static string header_lambda(sType* lambda_type, string name, sInfo* info)
{
    var output = new buffer();
    
    string result_type_str = make_type_name_string(lambda_type->mResultType, no_static:true);
    
    output.append_str(result_type_str);
    output.append_str(" ");
    
    output.append_str(name);
    if(lambda_type->mArrayNum.length() > 0) {
        for(int i=0; i<lambda_type->mArrayNum.length(); i++) {
            output.append_str("[");
            sNode*% node = lambda_type->mArrayNum[i];
            
            node_compile(node).elif {
                err_msg(info, "invalid array num");
                exit(2);
            }
        
            CVALUE*% cvalue = get_value_from_stack(-1, info);
            
            output.append_format("%s", cvalue.c_value);
            output.append_str("]");
        }
    }
    output.append_str("(");
    
    int i = 0;
    foreach(it, lambda_type->mParamTypes) {
        info.undefined_array_num_var = true;
        char* name = lambda_type->mParamNames[i];
        
        string str = make_define_var(it, name);
        output.append_str(str);
        
        if(i == lambda_type->mParamTypes.length()-1) {
            if(lambda_type->mVarArgs) {
                output.append_str(", ...");
            }
        }
        else {
            output.append_str(", ");
        }
        i++;
        info.undefined_array_num_var = false;
    }
    
    if(lambda_type->mAttribute) {
        output.append_str(" " + lambda_type->mAttribute + ");\n");
    }
    else {
        output.append_str(");\n");
    }
    
    return output.to_string();
}

void add_come_code(sInfo* info, const char* msg, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    char* msg2;

    va_list args;
    va_start(args, msg);
    int len = vasprintf(&msg2, msg, args);
    va_end(args);
    
    if(info->come_fun) {
        int i;
        for(i=0; i<info->block_level; i++) {
            info.come_fun.mSource.append_str("    ");
        }
        
        info.come_fun.mSource.append_str(xsprintf("%s", msg2));
    }
    else {
        info.module.mSourceHead.append_str(xsprintf("%s", msg2));
    }
    
    free(msg2);
}

void add_come_code_at_come_header(sInfo* info, string id, const char* msg, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    if(info->sname_at_head === info->base_sname) {
        char* msg2;
    
        va_list args;
        va_start(args, msg);
        int len = vasprintf(&msg2, msg, args);
        va_end(args);
        
        if(info.module.mHeader[string(id)]?? == null) {
            info.module.mHeader[string(id)] = xsprintf("%s", msg2);
        }
        
        free(msg2);
    }
}

void add_come_code_at_come_struct_header(sInfo* info, string id, const char* msg, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    if(info->sname_at_head === info->base_sname) {
        char* msg2;
    
        va_list args;
        va_start(args, msg);
        int len = vasprintf(&msg2, msg, args);
        va_end(args);
        
        if(info.module.mHeaderStructs[string(id)]?? == null) {
            info.module.mHeaderStructs[string(id)] = xsprintf("%s", msg2);
        }
        
        free(msg2);
    }
}

bool is_contained_generics_funcstion(sFun* fun, sInfo* info=info)
{
    foreach(it, fun->mParamTypes) {
        sType*% type = clone it;
        
        if(type->mNoSolvedGenericsType) {
            type = type->mNoSolvedGenericsType;
        }
        if(is_contained_generics_class(type, info)) {
            return true;
        }
    }
    sType*% result_type = fun->mResultType;
    
    if(result_type->mNoSolvedGenericsType) {
        result_type = result_type->mNoSolvedGenericsType;
    }
    
    if(is_contained_generics_class(result_type, info)) {
        return true;
    }
    
    return false;
}

bool output_source_file(sInfo* info)
{
    sFun* main_fun = info->funcs[s"main"]??;
    bool main_module = false;
    if(main_fun) {
        if(!main_fun->mExternal) {
            main_module = true;
        }
    }
    
    if(main_module) {   // uniq function is compiled the last
        foreach(it, info.uniq_funcs) {
            sFun* it2 = info.uniq_funcs[string(it)];
            sFun*% new_fun = compile_uniq_function(it2, info);
            
            info.funcs.put(string(it), new_fun);
        }
    }
    
    /// go ///
    string output_file_name = xsprintf("%s.c", info.sname);
    
    FILE* f = fopen(output_file_name, "w");
    if(f == null) { die("fopen"); }
    
    fprintf(f, "/// previous struct definition ///\n");
    foreach(it, info.previous_struct_definition) {
        buffer* buf = info.previous_struct_definition[string(it)]??;
        fprintf(f, "%s\n", buf.to_string());
    }
    
    fprintf(f, "/// struct definition ///\n");
    foreach(it, info.struct_definition) {
        buffer* buf = info.struct_definition[string(it)]??;
        fprintf(f, "%s\n", buf.to_string());
    }
    
    fprintf(f, "// source head\n");
    fprintf(f, "%s\n", info.module.mSourceHead.to_string());
    
    fprintf(f, "// header function\n");
    foreach(it, info.funcs) {
        sFun* it2 = info.funcs[string(it)];
        
        bool contained_generics = is_contained_generics_funcstion(it2);

        if(!contained_generics) {
            string header = header_function(it2, info);
            
            if(it2->mInline) {
            }
            else if(it !== "__builtin_va_start" && it !== "__builtin_va_end") {
                fprintf(f, "%s", header);
            }
        }
    }
    
    fprintf(f, "// uniq global variable\n");
    if(main_module) {
        foreach(it, info.uniq_definition) {
            char* str = info.uniq_definition[string(it)]??;
            fprintf(f, "%s\n", str);
        }
    }
    
    fprintf(f, "// inline function\n");
    foreach(it, info.funcs) {
        sFun* it2 = info.funcs[string(it)];
        bool contained_generics = is_contained_generics_funcstion(it2);

        if(contained_generics) {
        }
        else if(it2->mInline) {
            string output = output_function(it2, info);
            fprintf(f, "%s", output);
        }
    }
    
    fprintf(f, "\n");
    
    fprintf(f, "// body function\n");
    foreach(it, info.funcs) {
        sFun* it2 = info.funcs[string(it)];
        
        bool contained_generics = is_contained_generics_funcstion(it2);

        if(contained_generics) {
        }
        else if(it2->mExternal) {
        }
        else if(!main_module && it2->mUniq) {
        }
        else if(it2->mInline) {
        }
        else {
            string output = output_function(it2, info);
            
            fprintf(f, "%s", output);
            
            fprintf(f, "\n");
        }
    }
    
    fclose(f);
    
    return true;
}

bool output_header_file(sInfo* info)
{
    /// go ///
    string output_file_name = info.output_file_name;
    
    FILE* f = fopen(output_file_name, "a");
    
    if(info.output_file_name === "common.h") {
        fprintf(f, "#ifndef __COMMON_H__\n");
        fprintf(f, "#define __COMMON_H__\n");
        fprintf(f, "#include <comelang.h>\n");
    }
    
    foreach(it, info.module.mHeaderStructs) {
        string item = info.module.mHeaderStructs[string(it)];
        
        fprintf(f, "%s", item);
    }
    
    foreach(it, info.module.mHeader) {
        string item = info.module.mHeader[string(it)];
        
        fprintf(f, "%s", item);
    }
    
    fprintf(f, "\n");
    
    if(info.output_file_name === "common.h") {
        fprintf(f, "#endif\n");
    }
    
    fclose(f);
    
    return true;
}

void add_come_code_at_function_head(sInfo* info, char* code, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    char* msg2;

    va_list args;
    va_start(args, code);
    int len = vasprintf(&msg2, code, args);
    va_end(args);
    
    if(info.come_fun) {
        info->come_fun->mSourceHead.append_str(msg2);
    }
    
    free(msg2);
}

void add_come_code_at_function_head2(sInfo* info, char* code, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    char* msg2;

    va_list args;
    va_start(args, code);
    int len = vasprintf(&msg2, code, args);
    va_end(args);
    
    if(info.come_fun) {
        info->come_fun->mSourceHead2.append_str(msg2);
    }
    
    free(msg2);
}

void add_last_code_to_source(sInfo* info)
{
    if(info->prohibits_output_last_code) {
        return;
    }
    if(info->no_output_come_code) {
        return;
    }
    if(info.module.mLastCode) {
       add_come_code(info, "%s;\n", info.module.mLastCode);
       info.module.mLastCode = null;
    }
    if(info.module.mLastCode2) {
       add_come_code(info, "%s;\n", info.module.mLastCode2);
       info.module.mLastCode2 = null;
    }
}

void add_last_code_to_source_with_comma(sInfo* info)
{
    if(info->prohibits_output_last_code) {
        return;
    }
    if(info->no_output_come_code) {
        return;
    }
    if(info.module.mLastCode) {
       add_come_code(info, "%s ,", info.module.mLastCode);
       info.module.mLastCode = null;
    }
    if(info.module.mLastCode2) {
       add_come_code(info, "%s ,", info.module.mLastCode2);
       info.module.mLastCode2 = null;
    }
}

void add_come_last_code(sInfo* info, const char* msg, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    char* msg2;

    va_list args;
    va_start(args, msg);
    int len = vasprintf(&msg2, msg, args);
    va_end(args);
    
    info.module.mLastCode = string(msg2);
    
    free(msg2);
}

void add_come_last_code2(sInfo* info, const char* msg, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    char* msg2;

    va_list args;
    va_start(args, msg);
    int len = vasprintf(&msg2, msg, args);
    va_end(args);
    
    info.module.mLastCode2 = string(msg2);
    
    free(msg2);
}

void dec_stack_ptr(int value=1, sInfo* info=info)
{
    info.stack.delete(-value, -1);
}

CVALUE*% get_value_from_stack(int offset, sInfo* info)
{
    info.module.mLastCode = null;
//    info.module.mLastCode2 = null;
    CVALUE*% result = clone info.stack[offset];
    
    if(result == null) {
        err_msg(info, "invalid stack value");
        exit(2);
    }
    
    info.stack.delete(-1, -1);
    
    return result;
}

void transpiler_clear_last_code(sInfo* info)
{
    info.module.mLastCode = null;
    info.module.mLastCode2 = null;
}
