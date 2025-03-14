#include <comelang.h>
header {#include <comelang-str.h>}
header {#include <comelang-net.h>}

struct sInfo;

interface sNode
{
    unsigned int id();
    bool compile(sInfo* info);
};

unsigned int sNode*::get_hash_key(sNode* self)
{
    return self.id->();
}

bool sNode*::equals(sNode* self, sNode* right)
{
    return (self.compile == right.compile);
}

struct ZVALUE;

struct ZVALUE 
{
    enum { kIntValue, kStrValue, kBoolValue, kNullValue, kFileValue, kRegexValue, kListValue, kMapValue } kind;
    
    int intValue;
    wstring strValue;
    bool boolValue;
    FILE* fileValue;
    come_regex*% regexValue;
    list<ZVALUE*%>*% listValue;
    map<ZVALUE*%, ZVALUE*%>*% mapValue;
};

struct sInfo
{
    char* p;
    string command;
    buffer*% codes;
    list<sNode*%>*% nodes;
    int* op;
    char* head;
    list<ZVALUE*%>*% stack;
    
    ZVALUE*% result_value;
    
    int stack_num;
    
    list<int>*% breaks;
    int loop_head;
};

typedef list<sNode*%>*% sNodeBlock;

enum { OP_INT_VALUE=1,  OP_IADD, OP_ISUB, OP_IMUL, OP_IDIV, OP_IMOD, OP_IEQ , OP_INOTEQ, OP_IGT , OP_ILT , OP_IGTEQ , OP_ILTEQ , OP_IANDAND , OP_IOROR , OP_POP ,  OP_STR_VALUE , OP_TRUE_VALUE , OP_FALSE_VALUE ,  OP_STORE , OP_LOAD ,  OP_IF , OP_GOTO ,  OP_PRINT , OP_STDIN , OP_STDOUT , OP_STDERR ,  OP_REGEX_VALUE , OP_LIST_VALUE , OP_MAP_VALUE ,  OP_FUN  OP_LOAD_ELEMENT , OP_STORE_ELEMENT };

int gNodeID = 0;

void skip_spaces(sInfo* info)
{
    while(*info->p == ' ' || *info->p == '\t' || *info->p == '\n') {
        info->p++;
    }
}

unsigned int ZVALUE*::get_hash_key(ZVALUE* self)
{
    switch(self.kind) {
        case kIntValue:
            return self.intValue.get_hash_key();
            
        case kStrValue: {
            unsigned int result = self.strValue.get_hash_key();
            return result;
            }
            break;
            
        case kBoolValue:
            return self.boolValue.get_hash_key();
            
        case kFileValue:
            if(self.fileValue == stdin) {
                return xsprintf("stdin").get_hash_key();
            }
            else if(self.fileValue == stdout) {
                return xsprintf("stdout").get_hash_key();
            }
            else if(self.fileValue == stderr) {
                return xsprintf("stderr").get_hash_key();
            }
            else {
                int file_no = fileno(self.fileValue);
                
                return xsprintf("file discriptor: %d", file_no).get_hash_key();
            }
            break;
            
        case kNullValue:
            return xsprintf("null").get_hash_key();
            break;
            
        case kRegexValue:
            return self.regexValue.get_hash_key();
            break;
            
        case kListValue:
            return self.to_string().get_hash_key();
            break;
            
        case kMapValue: 
            return self.to_string().get_hash_key();
            break;
    }
    
    return 0;
}

bool ZVALUE*::equals(ZVALUE* self, ZVALUE* right)
{
    bool result;
    switch(self.kind) {
        case kIntValue:
            return self.intValue.equals(right.intValue);
            
        case kStrValue:
            result = self.strValue.equals(right.strValue);
            return result;
            
        case kBoolValue:
            return self.boolValue.equals(right.boolValue);
            
        case kFileValue:
            return self.fileValue == right.fileValue;
            break;
            
        case kNullValue:
            return right.kind == kNullValue;
            break;
            
        case kRegexValue:
            return self.regexValue.equals(right.regexValue);
            break;
            
        case kListValue:
            return self.listValue.equals(right.listValue);
            break;
            
        case kMapValue: 
            return self.mapValue.equals(right.mapValue);
            break;
    }
    
    return false;
}

int ZVALUE*::compare(ZVALUE* self, ZVALUE* right)
{
    switch(self.kind) {
        case kIntValue:
            return self.intValue.compare(right.intValue);
            
        case kStrValue:
            return self.strValue.compare(right.strValue);
            
        case kBoolValue:
            return self.boolValue.compare(right.boolValue);
            
        case kFileValue:
            return self.fileValue == right.fileValue;
            break;
            
        case kNullValue:
            return right.kind == kNullValue;
            break;
            
        case kRegexValue:
            return self.regexValue == right.regexValue;
            break;
            
        case kListValue:
            return self.listValue == right.listValue;
            break;
            
        case kMapValue: 
            return self.mapValue == right.mapValue;
            break;
    }
    
    return false;
}

bool ZVALUE*::operator_equals(ZVALUE* self, ZVALUE* right)
{
    return self.equals(right);
}

bool ZVALUE*::operator_not_equals(ZVALUE* self, ZVALUE* right)
{
    return !self.equals(right);
}

string ZVALUE*::to_string(ZVALUE* self)
{
    switch(self.kind) {
        case kIntValue:
            return xsprintf("%d", self.intValue);
            break;
            
        case kStrValue:
            return xsprintf("%ls", self.strValue);
            break;
            
        case kBoolValue:
            if(self.boolValue) {
                return xsprintf("true");
            }
            else {
                return xsprintf("false");
            }
            break;
            
        case kFileValue:
            if(self.fileValue == stdin) {
                return xsprintf("stdin");
            }
            else if(self.fileValue == stdout) {
                return xsprintf("stdout");
            }
            else if(self.fileValue == stderr) {
                return xsprintf("stderr");
            }
            else {
                int file_no = fileno(self.fileValue);
                
                return xsprintf("file discriptor: %d", file_no);
            }
            break;
            
        case kNullValue:
            return xsprintf("null");
            break;
            
        case kRegexValue:
            return self.regexValue.to_string();
            break;
            
        case kListValue: {
            buffer*% buf = new buffer.initialize();
            
            buf.append_str("[");
            
            list<ZVALUE*%>* list_ = self.listValue;
            int n = 0;
            foreach(it, list_) {
                buf.append_str(it.to_string());
                
                n++;
                
                if(n < list_.length()) {
                    buf.append_str(",");
                }
            }
            
            buf.append_str("]");
            
            return buf.to_string();
            }
            break;
            
        case kMapValue: {
            buffer*% buf = new buffer.initialize();
            
            buf.append_str("[");
            
            map<ZVALUE*%, ZVALUE*%>* map_ = self.mapValue;
            int n = 0;
            foreach(it, map_) {
                ZVALUE* item = map_[it];
                buf.append_str(it.to_string());
                buf.append_str(":");
                if(item == null) {
                    buf.append_str("null");
                }
                else {
                    buf.append_str(item.to_string());
                }
                
                n++;
                
                if(n < map_.length()) {
                    buf.append_str(",");
                }
            }
            
            buf.append_str("]");
            
            return buf.to_string();
            }
            break;
    }
    
    return string("");
}

ZVALUE*% ZVALUE*::initialize(ZVALUE*% self, int kind, int int_value=0, wstring str_value=null, bool bool_value=false, FILE* file_value=null, come_regex*% regex_value=null, list<ZVALUE*%>*% list_value=null, map<ZVALUE*%, ZVALUE*%>*% map_value=null)
{
    self.kind = kind;
    self.intValue = int_value;
    self.strValue = clone str_value;
    self.boolValue = bool_value;
    self.fileValue = file_value;
    self.regexValue = clone regex_value;
    self.listValue = clone list_value;
    self.mapValue = clone map_value;
    
    return self;
}

