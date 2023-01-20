#include "common.h"
#include <ctype.h>

static bool sClass*::equals(sClass* self, sClass* right)
{
    return self == right;
}

unsigned int ZVALUE_get_hash_key(ZVALUE self)
{
    switch(self.kind) {
        case kIntValue:
            return self.intValue;
            
        case kBoolValue:
            return self.boolValue;
            
        case kLongValue:
            return self.longValue;
            
        case kStringValue:
            return self.stringValue.get_hash_key();
            
        case kRegexValue:
            return self.regexValue.get_hash_key();
            
        case kObjValue: {
            sObject* obj = (sObject*)self.objValue;
            
            int n = 0;
            
            foreach(it, obj.fields) {
                ZVALUE item = obj.fields.at(it, gNoneValue);
                
                n += item.get_hash_key();
            }
            
            return n;
            }
            break;
            
        case kNoneValue:
            return 1;
            
        case kExceptionValue:
            return self.expValue;
            
        case kModuleValue:
            return (long)self.moduleValue;
            
        case kClassValue: 
            return (long)self.classValue;
            
        case kTupleValue:
        case kListValue: {
            list<ZVALUE>* obj = self.listValue;
            
            int n = 0;
            
            foreach(it, obj) {
                n += it.get_hash_key();
            }
            return n;
            }
            break;
            
        case kMapValue: {
            map<ZVALUE, ZVALUE>* obj = self.mapValue;
            
            int n = 0;
            
            foreach(it, obj) {
                ZVALUE value = obj.at(it, gNoneValue);
                
                n += it.get_hash_key();
                n += value.get_hash_key();
            }
            return n;
            }
            break;
    }
    
    return true;
}

bool ZVALUE::equals(ZVALUE self, ZVALUE right)
{
    if(self.kind != right.kind) {
        return false;
    }
    
    switch(self.kind) {
        case kIntValue:
            if(self.intValue != right.intValue) {
                return false;
            }
            break;
            
        case kBoolValue:
            if(self.boolValue != right.boolValue) {
                return false;
            }
            break;
            
        case kLongValue:
            if(self.longValue != right.longValue) {
                return false;
            }
            break;
            
        case kStringValue:
            if(wcscmp(self.stringValue, right.stringValue) != 0) {
                return false;
            }
            break;
            
        case kRegexValue:
            if(!self.regexValue.equals(right.regexValue)) {
                return false;
            }
            break;
            
        case kObjValue: {
            sObject* left_obj = self.objValue;
            sObject* right_obj = right.objValue;
            
            if(left_obj.klass != right_obj.klass) {
                return false;
            }
            if(left_obj.module != right_obj.module) {
                return false;
            }
            
            if(left_obj.fields.length() != right_obj.fields.length()) {
                return false;
            }
            
            foreach(it, left_obj.fields) {
                ZVALUE item1 = left_obj.fields.at(it, gNoneValue);
                ZVALUE item2 = right_obj.fields.at(it, gNoneValue);
                
                if(!item1.equals(item2)) {
                    return false;
                }
            }
            }
            break;
            
        case kNoneValue:
            if(right.kind != kNoneValue) {
                return false;
            }
            break;
            
        case kExceptionValue:
            if(self.expValue != right.expValue) {
                return false;
            }
            break;
            
        case kModuleValue:
            return false;
            break;
            
        case kClassValue: {
            sClass* klass1 = self.classValue;
            sClass* klass2 = self.classValue;
            if(!klass1.equals(klass2)) {
                return false;
            }
            }
            break;
            
        case kListValue:
            if(!self.listValue.equals(right.listValue)) {
                return false;
            }
            break;
            
        case kTupleValue:
            if(!self.tupleValue.equals(right.tupleValue)) {
                return false;
            }
            break;
            
        case kMapValue:
            if(!self.mapValue.equals(right.mapValue)) {
                return false;
            }
            break;
    }
    
    return true;
}

class sPrintNode(sNode* exp)
{
    sNode* self.left = exp;
    
    bool compile(sPrintNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* exp = self.left;
        
        if(!exp.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_PRINT);

        return true;
    }
};

class sLenNode(sNode* exp)
{
    sNode* self.left = exp;
    
    bool compile(sLenNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* exp = self.left;
        
        if(!exp.compile->(codes, info)) {
            return false;
        }
        
        info.stack_num--;
        
        codes.append_int(OP_LEN);
        
        info.stack_num++;
        
        return true;
    }
};

class sStrToIntNode(sNode* exp)
{
    sNode* self.left = exp;
    
    bool compile(sStrToIntNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* exp = self.left;
        
        if(!exp.compile->(codes, info)) {
            return false;
        }
        
        info.stack_num--;
        
        codes.append_int(OP_INT);
        info.stack_num++;
        
        return true;
    }
};

class sStrNode(sNode* exp)
{
    sNode* self.left = exp;
    
    bool compile(sStrNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* exp = self.left;
        
        if(!exp.compile->(codes, info)) {
            return false;
        }
        
        info.stack_num--;
        
        codes.append_int(OP_STR);
        info.stack_num++;
        
        return true;
    }
};

class sTypeNode(sNode* exp)
{
    sNode* self.left = exp;
    
    bool compile(sStrNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* exp = self.left;
        
        if(!exp.compile->(codes, info)) {
            return false;
        }
        
        info.stack_num--;
        
        codes.append_int(OP_TYPE);
        info.stack_num++;
        
        return true;
    }
};

class sExitNode(sNode* exp)
{
    sNode* self.left = exp;
    
    bool compile(sStrNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* exp = self.left;
        
        if(!exp.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_EXIT);
        
        return true;
    }
};

class sReturnNode(sNode* exp)
{
    sNode* self.left = exp;
    
    bool compile(sStrNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* exp = self.left;
        
        if(!exp.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_RETURN);
        
        return true;
    }
};

static bool emb_funcmp(char* p, char* word2)
{
    bool result = strstr(p, word2) == p;
    
    char c = p[strlen(word2)];
    
    if(result && (c == ' ' || c == '\t' || c == '\0' || c == '(' || c == '\n')) {
        return true;
    }
    
    return false;
}

sNode* exp_node(sParserInfo* info) version 4
{
    sNode* result = inherit(info);
    
    if(result == null) {
        if(emb_funcmp(info->p, "print")) {
            info->p += strlen("print");
            skip_spaces_until_eol(info);
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            sNode* node = null;
            if(!expression(&node, info)) {
                return null;
            }
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            result = new sNode(new sPrintNode(node));
        }
        else if(emb_funcmp(info->p, "len")) {
            info->p += strlen("len");
            skip_spaces_until_eol(info);
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            sNode* node = null;
            if(!expression(&node, info)) {
                return null;
            }
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            result = new sNode(new sLenNode(node));
        }
        else if(emb_funcmp(info->p, "int")) {
            info->p += strlen("int");
            skip_spaces_until_eol(info);
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            sNode* node = null;
            if(!expression(&node, info)) {
                return null;
            }
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            result = new sNode(new sStrToIntNode(node));
        }
        else if(emb_funcmp(info->p, "str")) {
            info->p += strlen("str");
            skip_spaces_until_eol(info);
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            sNode* node = null;
            if(!expression(&node, info)) {
                return null;
            }
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            result = new sNode(new sStrNode(node));
        }
        else if(emb_funcmp(info->p, "type")) {
            info->p += strlen("type");
            skip_spaces_until_eol(info);
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            sNode* node = null;
            if(!expression(&node, info)) {
                return null;
            }
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            result = new sNode(new sTypeNode(node));
        }
        else if(emb_funcmp(info->p, "exit")) {
            info->p += strlen("exit");
            skip_spaces_until_eol(info);
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            sNode* node = null;
            if(!expression(&node, info)) {
                return null;
            }
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            result = new sNode(new sExitNode(node));
        }
        else if(emb_funcmp(info->p, "return")) {
            info->p += strlen("return");
            skip_spaces_until_eol(info);
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            sNode* node = null;
            if(!expression(&node, info)) {
                return null;
            }
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            
            result = new sNode(new sReturnNode(node));
        }
    }
    
    return result;
}

static char* zvalue_to_str(ZVALUE value)
{
    switch(value.kind) {
        case kIntValue:
            return xsprintf("%d", value.intValue);
            
        case kBoolValue:
            if(value.boolValue) {
                return string("True");
            }
            else {
                return string("False");
            }
            break;
            
        case kStringValue:
            return value.stringValue.to_string();
            
        case kRegexValue: 
            return xsprintf("re.compile('%s')", value.regexValue.str);
            
        case kNoneValue:
            return string("None");
            
        case kUndefinedValue:
            return string("Undefined");
            
        case kClassValue: {
            sClass* klass = value.value.classValue;
            return xsprintf("<class '%s.%s'>", klass.module_name, klass.name);
            }
            
        case kObjValue: {
            sObject* object = value.value.objValue;
            
            return xsprintf("%s.%s at %p", object.klass.name, object.module.name, object);
            }
            break;
            
        case kListValue: {
            list<ZVALUE>* li = value.value.listValue;
            
            buffer* buf = new  buffer.initialize();
            
            buf.append_str("[");
            for(int i= 0; i<li.length(); i++) {
                buf.append_str(zvalue_to_str(li.item(i, gNoneValue)));
                if(i != li.length()-1) {
                    buf.append_str(", ");
                }
            }
            buf.append_str("]");
            
            return buf.to_string();
            }
            break;
            
        case kTupleValue: {
            immutable list<ZVALUE>* li = value.value.tupleValue;
            
            buffer* buf = new  buffer.initialize();
            
            buf.append_str("(");
            for(int i= 0; i<li.length(); i++) {
                buf.append_str(zvalue_to_str(li.item(i, gNoneValue)));
                if(i != li.length()-1) {
                    buf.append_str(", ");
                }
            }
            buf.append_str(")");
            
            return buf.to_string();
            }
            break;
    }
    
    return NULL;
}

static void print_obj(ZVALUE obj, bool lf)
{
    switch(obj.kind) {
        case kStringValue: 
            printf("%s", obj.value.stringValue.to_string());
            if(lf) {
                puts("");
            }
            break;
            
        case kRegexValue: 
            printf("re.compile('%s')", obj.value.regexValue.str);
            if(lf) {
                puts("");
            }
            break;
            
        case kClassValue: {
            sClass* klass = obj.value.classValue;
            
            if(strcmp(klass.module_name, "") == 0) {
                printf("<class '%s'>", klass.name);
            }
            else {
                printf("<class '%s.%s'>", klass.module_name, klass.name);
            }
            
            if(lf) {
                puts("");
            }
            }
            break;
            
        case kIntValue: 
            printf("%d", obj.value.intValue);
            if(lf) {
                puts("");
            }
            break;
            
        case kBoolValue:
           if(obj.value.boolValue) {
               printf("True");
               if(lf) {
                   puts("");
               }
           }
           else {
               printf("False");
               if(lf) {
                   puts("");
               }
           }
           break;
           
       case kNoneValue: {
           printf("None");
           if(lf) {
               puts("");
           }
           }
           break;
           
       case kUndefinedValue: {
           printf("Undefined");
           if(lf) {
               puts("");
           }
           }
           break;
           
       case kObjValue: {
           sObject* object = obj.value.objValue;
           printf("%s.%s object at %p", object.module.name, object.klass.name, object);
           if(lf) {
               puts("");
           }
           }
           break;
           
       case kListValue: {
           list<ZVALUE>* li = obj.value.listValue;
           
           printf("[");
           for(int i= 0; i<li.length(); i++) {
               print_obj(li.item(i, gNoneValue), false);
               if(i != li.length()-1) {
                   printf(",");
               }
           }
           printf("]");
           if(lf) {
               puts("");
           }
           }
           break;
           
       case kTupleValue: {
           immutable list<ZVALUE>* li = obj.value.listValue;
           
           printf("(");
           for(int i= 0; i<li.length(); i++) {
               print_obj(li.item(i, gNoneValue), false);
               if(i != li.length()-1) {
                   printf(",");
               }
           }
           printf(")");
           if(lf) {
               puts("");
           }
           }
           break;
           
       case kMapValue: {
           immutable map<ZVALUE, ZVALUE>* ma = obj.value.mapValue;
           
           printf("{");
           int n = 0;
           foreach(it, ma) {
               ZVALUE value = ma.at(it, gNoneValue);
               
               print_obj(it, false);
               printf(":");
               print_obj(value, false);
               if(n != ma.length()-1) {
                   printf(",");
               }
               n++;
           }
           printf("}");
           if(lf) {
               puts("");
           }
           }
           break;
           
       case kMatchObjectValue: {
           matchValueStruct* ma = &obj.matchValue;
           
           printf("re.Match object; ");
           foreach(it, ma.object) {
               for(int i=0; i<it.num; i++) {
                   printf("span=(%d,%d) ", it.start[i], it.end[i]);
                   printf("match='%ls'", ma.str.substring(it.start[i], it.end[i]));
               }
           }
           if(lf) {
               puts("");
           }
           }
           break;
    }
}

bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 96
{
    switch(*info->p) {
        case OP_PRINT:
            info->p++;
            
            print_obj(info->stack[info->stack_num-1], true);
            break;
            
        case OP_LEN: 
            info->p++;
            
            if(info->stack[info->stack_num-1].kind == kStringValue) {
                wchar_t* wstr = info->stack[info->stack_num-1].value.stringValue;
                int len = wstr.length();
                
                info->stack_num--;
                
                info->stack[info->stack_num].kind = kIntValue;
                info->stack[info->stack_num].intValue = len;
                info->stack_num++;
            }
            else if(info->stack[info->stack_num-1].kind == kListValue) {
                list<ZVALUE>* list_object = info->stack[info->stack_num-1].value.listValue;
                
                int len = list_object.length();
                
                info->stack_num--;
                
                info->stack[info->stack_num].kind = kIntValue;
                info->stack[info->stack_num].intValue = len;
                info->stack_num++;
            }
            else if(info->stack[info->stack_num-1].kind == kTupleValue) {
                immutable list<ZVALUE>* tuple_object = info->stack[info->stack_num-1].value.tupleValue;
                
                int len = tuple_object.length();
                
                info->stack_num--;
                
                info->stack[info->stack_num].kind = kIntValue;
                info->stack[info->stack_num].intValue = len;
                info->stack_num++;
            }
            else {
                info->exception.kind = kExceptionValue;
                info->exception.value.expValue = kExceptionTypeError;
                return false;
            }
            break;
            
        case OP_INT: 
            info->p++;
            
            if(info->stack[info->stack_num-1].kind == kStringValue) {
                wchar_t* wstr = info->stack[info->stack_num-1].value.stringValue;
                int n = wcstol(wstr, NULL, 0);
                
                info->stack_num--;
                
                info->stack[info->stack_num].kind = kIntValue;
                info->stack[info->stack_num].intValue = n;
                info->stack_num++;
            }
            else {
                info->exception.kind = kExceptionValue;
                info->exception.value.expValue = kExceptionTypeError;
                return false;
            }
            break;
            
        case OP_STR: 
            info->p++;
            
            if(info->stack[info->stack_num-1].kind == kListValue || info->stack[info->stack_num-1].kind == kTupleValue || info->stack[info->stack_num-1].kind == kBoolValue || info->stack[info->stack_num-1].kind == kIntValue || info->stack[info->stack_num-1].kind == kNoneValue || info->stack[info->stack_num-1].kind == kUndefinedValue || info->stack[info->stack_num-1].kind == kObjValue) 
            {
                char* str = zvalue_to_str(info->stack[info->stack_num-1]);
                
                info->stack_num--;
                
                info->stack[info->stack_num].kind = kStringValue;
                info->stack[info->stack_num].stringValue = str.to_wstring();
                info->stack_num++;
            }
            else {
                info->exception.kind = kExceptionValue;
                info->exception.value.expValue = kExceptionTypeError;
                return false;
            }
            break;
            
            
        default: {
            bool result = inherit(codes, params, info);
            if(!result) {
                return false;
            }
            }
            break;
    }
    
    return true;
}
