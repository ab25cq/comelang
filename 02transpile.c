#include "common.h"

bool gComelang;
bool gGC;
bool gComeDebug = false;
char* gProgramName = NULL;

void come_init() version 2
{
    gComelang = false;
    gGC = false;
}

void come_final() version 2
{
}

void err_msg(sInfo* info, char* msg, ...)
{
    if(!info.no_output_err) {
        char* msg2;
    
        va_list args;
        va_start(args, msg);
        vasprintf(&msg2,msg,args);
        va_end(args);
        
        printf("%s %d: %s\n", info.sname, info.sline, msg2);
        info.err_num++;

        free(msg2);
    }
}

int transpile(sInfo* info) version 2
{
    return 0;
}

bool output_source_file(sInfo* info) version 2
{
    string output_file_name = xsprintf("%s.c", info.sname);
    
    /// dummy output ///
    string("int main(int argc, char** argv) { return 0; }\n")
        .write(output_file_name);
    
    return true;
}

static bool cpp(sInfo* info)
{
    string input_file_name = info.sname;
    
    string output_file_name;
    if(info.output_file_name) {
        output_file_name = info.output_file_name + ".i";
    }
    else {
        output_file_name = info.sname + ".i";
    }
    
    string cmd = xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");

    int rc = system(cmd);
    if(rc == 0) {
        //string cmd2 = xsprintf("/opt/homebrew/opt/llvm/bin/clang-cpp -lang-c -I. -I/usr/local/include -DCOMELANG2 -D__DARWIN_ARM__ -U__GNUC__ %s > %s", input_file_name, output_file_name);
        string cmd2 = xsprintf("/opt/homebrew/opt/llvm/bin/clang-cpp -lang-c -I. -I/usr/local/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -U__GNUC__ %s > %s", input_file_name, output_file_name);
        puts(cmd2);
        
        int rc = system(cmd2);
        
        if(rc != 0) {
            printf("failed to cpp(2) (%s)\n", cmd2);
            exit(5);
        }
    }
    else {
        string cmd3 = xsprintf("cpp -lang-c -I. -DCOMELANG2 -U__GNUC__ %s > %s", input_file_name, output_file_name);
        
        puts(cmd3);
        rc = system(cmd3);
        
        if(rc != 0) {
            string cmd4 = xsprintf("cpp -I. -C %s > %s", input_file_name, output_file_name);
    
            puts(cmd4);
            rc = system(cmd4);
    
            if(rc != 0) {
                printf("failed to cpp(2) (%s)\n", cmd4);
                exit(5);
            }
        }
    }
    
    return true;
}

static bool compile(sInfo* info, bool output_object_file, list<string>* object_files)
{
    string input_file_name = info.sname + ".c";
    
    string output_file_name = null;
    if(info.output_file_name) {
        output_file_name = string(info.output_file_name);
    }
    else {
        output_file_name = info.sname + ".o";
    }
    
    var command = xsprintf("clang -o %s -c %s %s", output_file_name, input_file_name, info.clang_option);
    
    puts(command);
    int rc = system(command);
    
    if(rc != 0) {
        err_msg(info, "clang is faield");
        return false;
    }
    
    if(!output_object_file) {
        object_files.push_back(string(output_file_name));
    }
    
    return true;
}

static bool linker(sInfo* info, list<string>* object_files)
{
    string output_file_name = null;
    if(info.output_file_name) {
        output_file_name = string(info.output_file_name);
    }
    else {
        output_file_name = xnoextname(info.sname);
    }
    
    var command = new buffer();
    
    command.append_str(xsprintf("clang -o %s ", output_file_name));
    
    foreach(it, object_files) {
        command.append_str(xsprintf("%s ", it));
    }
    
#ifndef COMPILING_LIBRARY
    //if(gProgramName === "comelang2") {
        command.append_str("-L/usr/local/lib -lcomelang2 ");
    //}
    //else {
    //    command.append_str("-lcomelang2-sh ");
    //}
#endif
    command.append_str(xsprintf("%s ", info.clang_option));
    
    puts(command.to_string());
    int rc = system(command.to_string());
    
    if(rc != 0) {
        err_msg(info, "clang is faield");
        return false;
    }
    
    return true;
}

sModule*% sModule*::initialize(sModule*% self)
{
    self.mSourceHead = new buffer();
    self.mSource = new buffer();
    self.mLastCode = null;
    self.mLastCode2 = null;
    
    return self;
}

sVarTable*% sVarTable*::initialize(sVarTable*% self, bool global, sVarTable* parent)
{
    self.mVars = new map<string, sVar*%>();
    self.mGlobal = global;
    self.mParent = parent;
    static int id = 0;
    self.mID = ++id;
    
    return self;
}

void sVarTable*::finalize(sVarTable* self)
{
    delete borrow self.mVars;
}

sType*% sType*::initialize(sType*% self, char* name, sInfo* info, bool heap=false)
{
    int pointer_num = 0;
    char* p = name;
    while(*p) {
        if(xisalpha(*p)) {
            p++;
        }
        else {
            break;
        }
    }
    while(*p == '*') {
        pointer_num++;
        p++;
    }
    
    string name2 = string(name).substring(0, -pointer_num-1);
    
    sClass* klass = info.classes[name2];
    sClass* generics_class = info.generics_classes[name2]
    
    if(klass == null && generics_class == null) {
        err_msg(info, "class not found(%s)(1)\n", name2);
    }
    if(klass) {
        self.mClass = klass;
    }
    else {
        self.mClass = borrow new sClass;
        self.mClass.mName = string(name);
    }
    
    self.mNoSolvedGenericsType = new tuple1<sType*%>(null);
    self.mGenericsTypes = new list<sType*%>();
    self.mArrayNum = new list<sNode*%>();
    self.mOmitArrayNum = false;
    self.mParamTypes = new list<sType*%>();
    self.mParamNames = new list<string>();
    self.mVarArgs = false;
    self.mResultType = null;
    self.mUnsigned = false;
    self.mConstant = false;
    self.mRegister = false;
    self.mVolatile = false;
    self.mStatic = false;
    self.mRestrict = false;
    self.mImmutable = false;
    self.mLongLong = false;
    self.mHeap = heap;
    self.mDummyHeap = false;
    self.mNoHeap = false;
    self.mRefference = false;
    
    self.mPointerNum = pointer_num;
    self.mNoArrayPointerNum = 0;
    self.mSizeNum = 0;
    
    self.mDynamicArrayNum = 0;
    self.mTypeOfExpression = 0;

    self.mOriginalTypeName = string("");
    self.mOriginalPointerNum = 0;
    
    self.mFunctionParam = false;
    
    return self;
}

sClass*% sClass*::initialize(sClass*% self, char* name, bool number=false, bool union_=false, bool generics=false, bool method_generics=false, bool protocol_=false, bool struct_=false, bool float_=false, int generics_num=-1, int method_generics_num=-1, bool enum_=false)
{
    self.mNumber = number;
    self.mStruct = struct_;
    self.mUnion = union_;
    self.mGenerics = generics;
    self.mMethodGenerics = method_generics;
    self.mEnum = false;
    self.mProtocol = protocol_;
    self.mFloat = float_;
    self.mEnum = enum_;
    
    self.mName = string(name);
    
    self.mGenericsNum = generics_num;
    self.mMethodGenericsNum = method_generics_num;
    
    self.mFields = new list<tuple2<string, sType*%>*%>();
    
    return self;
};

sFun*% sFun*::initialize(sFun*% self, string name, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, list<string>%* param_default_parametors, bool external, bool var_args, sBlock*%? block, bool static_, string come_header, sInfo* info)
{
    self.mName = name;
    self.mResultType = result_type;
    self.mParamTypes = param_types;
    self.mParamNames = param_names;
    self.mParamDefaultParametors = param_default_parametors;
    self.mExternal = external;
    self.mVarArgs = var_args;
    self.mStatic = static_;
    
    self.mLambdaType = new sType("lambda", info);
    
    foreach(it, param_types) {
        self.mLambdaType.mParamTypes.push_back(clone it);
    }
    
    foreach(it, param_names) {
        self.mLambdaType.mParamNames.push_back(clone it);
    }
    
    self.mLambdaType.mResultType = new tuple1<sType*%>(result_type);
    self.mLambdaType.mVarArgs = var_args;
    
    self.mSource = new buffer();
    self.mSourceHead = new buffer();
    self.mSourceHead2 = new buffer();
    self.mSourceDefer = new buffer();
    
    self.mBlock = clone block;
    
    self.mComeHeader = come_header;
    
    return self;
}

void init_classes(sInfo* info)
{
    info.classes.insert(string("int"), new sClass("int", number:true));
    info.classes.insert(string("short"), new sClass("short", number:true));
    info.classes.insert(string("long"), new sClass("long", number:true));
    info.classes.insert(string("char"), new sClass("char", number:true));
    info.classes.insert(string("bool"), new sClass("bool", number:true));
    info.classes.insert(string("_Bool"), new sClass("_Bool", number:true));
    info.classes.insert(string("void"), new sClass("void"));
    info.classes.insert(string("float"), new sClass("float", float_:true));
    info.classes.insert(string("double"), new sClass("double", float_:true));
    info.classes.insert(string("lambda"), new sClass("lambda"));
    info.classes.insert(string("__uint128_t"), new sClass("__uint128_t", number:true));
    for(int i=0; i<GENERICS_TYPE_MAX; i++) {
        string generics_type = xsprintf("generics_type%d", i);
        info.classes.insert(generics_type, new sClass(generics_type, generics:true, generics_num:i));
    }
    
    char cmd[1024];
    snprintf(cmd, 1024, "which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");

    int rc = system(cmd);
    if(rc == 0) {
        info.classes.insert(string("__builtin_va_list"), new sClass("__builtin_va_list", number:true));
        
        string type_name = string("__builtin_va_list");
        
        sType*% type = new sType("__builtin_va_list", info);
        type->mOriginalTypeName = string("__builtin_va_list");
        
        info.types.insert(string(type_name), type);
        
//        add_come_code_at_source_head(info, "typedef %s;\n", make_define_var(type, type_name, info, true@in_header));
    }
    else {
        sClass*% klass = new sClass("__builtin_va_list", struct_:true);
        
        klass.mFields.push_back(new tuple2<string, sType*%>(string("v1"), new sType("char*", info)));
        klass.mFields.push_back(new tuple2<string, sType*%>(string("v2"), new sType("char*", info)));
        klass.mFields.push_back(new tuple2<string, sType*%>(string("v3"), new sType("char*", info)));
        klass.mFields.push_back(new tuple2<string, sType*%>(string("v4"), new sType("int", info)));
        klass.mFields.push_back(new tuple2<string, sType*%>(string("v5"), new sType("int", info)));
        
        info.classes.insert(string("__builtin_va_list"), klass);
    }
}

void init_module(sInfo* info)
{
    char fname[PATH_MAX];
    char* p = info.sname;
    char* p2 = fname;
    while(*p) {
        if(xisalpha(*p)) {
            *p2++ = *p++;
        }
        else {
            *p2++ = '_';
            p++;
        }
    }
    
    *p2 = '\0';
}
                
int come_main(int argc, char** argv) version 2
{
    gProgramName = argv[0];
    
    var clang_option = new buffer();
    var files = new list<string>();
    var object_files = new list<string>();
    bool output_object_file = false;
    bool output_cpp_file = false;
    bool output_source_file_flag = false;
    string output_file_name = null;
    for(int i=1; i<argc; i++) {
        if(argv[i] === "-o" && i+1 < argc) {
            output_file_name = string(argv[i+1]);
            i++;
        }
        else if(argv[i] === "-g") {
            clang_option.append_str("-g ");
            gComeDebug = true;
        }
        else if(argv[i] === "-s" || argv[i] === "-S") {
            output_source_file_flag = true;
        }
        else if(argv[i] === "-c") {
            output_object_file = true;
        }
        else if(argv[i] === "-E") {
            output_cpp_file = true;
        }
        else if(argv[i][0] == '-') {
            clang_option.append_str(argv[i] + " ");
        }
        else if(memcmp(argv[i] + strlen(argv[i]) -2, ".o", 2) == 0) {
            object_files.push_back(string(argv[i]));
        }
        else {
            files.push_back(string(argv[i]));
        }
    }
    
    come_init();
    
    foreach(it, files) {
        sInfo info;
        
        info.sname = string(it);
        info.sline = 1;
        info.err_num = 0;
        info.clang_option = clang_option.to_string();
        info.no_output_err = false;
        info.funcs = new map<string, sFun*%>();
        info.generics_funcs = new map<string, sGenericsFun*%>();
        info.classes = new map<string, sClass*%>();
        info.types = new map<string, sType*%>();
        info.module = new sModule();
        info.right_value_objects = new list<sRightValueObject*%>();
        info.stack = new list<CVALUE*%>();
        info.gv_table = new sVarTable(global:true, parent:null);
        sVarTable*% lv_table = new sVarTable(global:false, parent:null);
        info.lv_table = lv_table;
        info.generics_type_names = new list<string>();
        info.generics_classes = new map<string, sClass*%>();
        
        init_classes(&info);
        init_module(&info);
        
        if(!cpp(&info)) {
            printf("%s %d: transpile failed\n", info.sname, info.sline);
            exit(2);
        }
        
        info.source = xsprintf("%s.i", it).read().to_buffer();
        info.p = info.source.buf;
        info.head = info.source.buf;
        
        if(output_file_name) {
            info.output_file_name = string(output_file_name);
        }
        else {
            info.output_file_name = null;
        }
        
        if(!output_cpp_file) {
            transpile(&info);
            
            if(!output_source_file(&info)) {
                printf("%s %d: output source file faield\n", info->sname, info->sline);
                exit(2);
            }
            
            if(info.err_num > 0) {
                printf("transpile error. err num %d\n", info->err_num);
                
                exit(2);
            }
            else {
                if(!compile(&info, output_object_file, object_files)) {
                    printf("%s %d: compile faield\n", info.sname, info.sline);
                    exit(1);
                }
                
            }
        }
    }
    
    if(!output_object_file && !output_cpp_file && (files.length() > 0 || object_files.length() > 0)) {
        sInfo info;
        
        info.sname = clone files[0];
        info.clang_option = clang_option.to_string();
        
        if(output_file_name) {
            info.output_file_name = string(output_file_name);
        }
        else {
            info.output_file_name = null;
        }
        
        linker(&info, object_files).expect {
            printf("%s %d: linker faield\n", info.sname, info.sline);
            exit(1);
        }
    }
    
    come_final();
    
    return 0;
}
