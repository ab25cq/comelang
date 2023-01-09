#include <neo-c.h>
#include "common.h"

bool str_method(char* fun_name, list<ZVALUE*%>* params, ZVALUE* obj, ZVALUE** result, buffer* codes, sInfo* info)
{
    if(fun_name === "chomp") {
        if(params.length() == 0) {
            string str = obj.strValue.to_string().chomp();
            *result = new ZVALUE(kind:kStrValue, str_value:str.to_wstring());
        }
    }
    else if(fun_name === "lower_case") {
        if(params.length() == 0) {
            string str = obj.strValue.to_string();
            string str2 = str.lower_case();
            
            *result =  new ZVALUE(kind:kStrValue, str_value:str2.to_wstring());
        }
    }
    else if(fun_name === "reverse") {
        if(params.length() == 0) {
            string str = obj.strValue.to_string();
            string str2 = str.reverse();
            
            *result =  new ZVALUE(kind:kStrValue, str_value:str2.to_wstring());
        }
    }
    else if(fun_name === "upper_case") {
        if(params.length() == 0) {
            string str = obj.strValue.to_string();
            string str2 = str.upper_case();
            
            *result =  new ZVALUE(kind:kStrValue, str_value:str2.to_wstring());
        }
    }
    else if(fun_name === "length") {
        if(params.length() == 0) {
            string str = obj.strValue.to_string();
            int len = str.length();
            
            *result =  new ZVALUE(kind:kIntValue, int_value:len);
        }
    }
    else if(fun_name === "printable") {
        if(params.length() == 0) {
            string str = obj.strValue.to_string().printable();
            
            *result =  new ZVALUE(kind:kStrValue, str_value:str.to_wstring());
        }
    }
    else if(fun_name === "scan") {
        if(params.length() == 1 && params[0].kind == kRegexValue) {
            regex_struct* param0 = params[0].regexValue;
            
            list<string>*% list1 = obj.strValue.to_string().scan(param0);
            
            list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
            
            foreach(it, list1) {
                list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
            }
            
            *result =  new ZVALUE(kind:kListValue, list_value:clone list2);
        }
    }
    else if(fun_name === "compare") {
        if(params.length() == 1 && params[0].kind == kStrValue) {
            string param0 = params[0].strValue.to_string();
            
            int result2 = obj.strValue.to_string().compare(param0);
            
            *result =  new ZVALUE(kind:kIntValue, int_value:result2);
        }
    }
    else if(fun_name === "sub") {
        if(params.length() == 2 && params[0].kind == kRegexValue && params[1].kind == kStrValue) {
            regex_struct* param0 = params[0].regexValue;
            char*% param1 = params[1].strValue.to_string();
            
            string str = obj.strValue.to_string().sub(param0, param1);
            
            *result =  new ZVALUE(kind:kStrValue, str_value:str.to_wstring());
        }
    }
    else if(fun_name === "delete") {
        if(params.length() == 2 && params[0].kind == kIntValue && params[1].kind == kIntValue) {
            int param0 = params[0].intValue;
            int param1 = params[1].intValue;
            
            char* str = obj.strValue.to_string().delete(param0, param1);
            
            *result =  new ZVALUE(kind:kStrValue, str_value:str.to_wstring());
        }
    }
    else if(fun_name === "index_count") {
        if(params.length() == 3 && params[0].kind == kStrValue && params[1].kind == kIntValue && params[2].kind == kIntValue) {
            string param0 = params[0].strValue.to_string();
            int param1 = params[1].intValue;
            int param2 = params[2].intValue;
            
            int n = obj.strValue.to_string().index_count(param0, param1, param2);
            
            *result =  new ZVALUE(kind:kIntValue, int_value:n);
        }
    }
    else if(fun_name === "index_regex_count") {
        if(params.length() == 3 && params[0].kind == kRegexValue && params[1].kind == kIntValue && params[2].kind == kIntValue) {
            regex_struct* param0 = params[0].regexValue;
            int param1 = params[1].intValue;
            int param2 = params[2].intValue;
            
            int n = obj.strValue.to_string().index_regex_count(param0, param1, param2);
            
            *result =  new ZVALUE(kind:kIntValue, int_value:n);
        }
    }
    else if(fun_name === "rindex_regex_count") {
        if(params.length() == 3 && params[0].kind == kRegexValue && params[1].kind == kIntValue && params[2].kind == kIntValue) {
            regex_struct* param0 = params[0].regexValue;
            int param1 = params[1].intValue;
            int param2 = params[2].intValue;
            
            int n = obj.strValue.to_string().rindex_regex_count(param0, param1, param2);
            
            *result =  new ZVALUE(kind:kIntValue, int_value:n);
        }
    }
    else if(fun_name === "substring") {
        if(params.length() == 2 && params[0].kind == kIntValue && params[1].kind == kIntValue) {
            int param0 = params[0].intValue;
            int param1 = params[1].intValue;
            
            string str = obj.strValue.to_string().substring(param0, param1);
            
            *result =  new ZVALUE(kind:kStrValue, str_value:str.to_wstring());
        }
    }
    else if(fun_name === "split_maxsplit") {
        if(params.length() == 2 && params[0].kind == kRegexValue && params[1].kind == kIntValue) {
            regex_struct* param0 = params[0].regexValue;
            int param1 = params[1].intValue;
            
            list<string>*% list1 = obj.strValue.to_string().split_maxsplit(param0, param1);
            
            list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
            
            foreach(it, list1) {
                list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
            }
            
            *result =  new ZVALUE(kind:kListValue, list_value:clone list2);
        }
    }
    else if(fun_name === "index") {
        if(params.length() == 2 && params[0].kind == kStrValue && params[1].kind == kIntValue) {
            char*% param0 = params[0].strValue.to_string();
            int param1 = params[1].intValue;
            
            int result2 = obj.strValue.to_string().index(param0, param1);
            
            *result =  new ZVALUE(kind:kIntValue, int_value:result2);
        }
    }
    else if(fun_name === "index_regex") {
        if(params.length() == 2 && params[0].kind == kRegexValue && params[1].kind == kIntValue) {
            regex_struct* param0 = params[0].regexValue;
            int param1 = params[1].intValue;
            
            int result2 = obj.strValue.to_string().index_regex(param0, param1);
            
            *result =  new ZVALUE(kind:kIntValue, int_value:result2);
        }
    }
    else if(fun_name === "replace") {
        if(params.length() == 2 && params[0].kind == kIntValue && params[1].kind == kStrValue) {
            int param0 = params[0].intValue;
            string param1 = params[1].strValue.to_string();
            
            char* result2 = obj.strValue.to_string().replace(param0, param1[0]);
            
            *result =  new ZVALUE(kind:kStrValue, str_value:result2.to_wstring());
        }
    }
    else if(fun_name === "rindex") {
        if(params.length() == 2 && params[0].kind == kStrValue && params[1].kind == kIntValue) {
            char*% param0 = params[0].strValue.to_string();
            int param1 = params[1].intValue;
            
            int result2 = obj.strValue.to_string().rindex(param0, param1);
            
            *result =  new ZVALUE(kind:kIntValue, int_value:result2);
        }
    }
    else if(fun_name === "rindex_count") {
        if(params.length() == 3 && params[0].kind == kStrValue && params[1].kind == kIntValue && params[2].kind == kIntValue) {
            string param0 = params[0].strValue.to_string();
            int param1 = params[1].intValue;
            int param2 = params[2].intValue;
            
            int result2 = obj.strValue.to_string().rindex_count(param0, param1, param2);
            
            *result =  new ZVALUE(kind:kIntValue, int_value:result2);
        }
    }
    else if(fun_name === "index_regex") {
        if(params.length() == 2 && params[0].kind == kRegexValue && params[1].kind == kIntValue) {
            regex_struct* param0 = params[0].regexValue;
            int param1 = params[1].intValue;
            
            int result2 = obj.strValue.to_string().index_regex(param0, param1);
            
            *result =  new ZVALUE(kind:kIntValue, int_value:result2);
        }
    }
    else if(fun_name === "rindex_regex") {
        if(params.length() == 2 && params[0].kind == kRegexValue && params[1].kind == kIntValue) {
            regex_struct* param0 = params[0].regexValue;
            int param1 = params[1].intValue;
            
            int result2 = obj.strValue.to_string().rindex_regex(param0, param1);
            
            *result =  new ZVALUE(kind:kIntValue, int_value:result2);
        }
    }
    else if(fun_name === "multiply") {
        if(params.length() == 1 && params[0].kind == kIntValue) {
            int param0 = params[0].intValue;
            
            string result2 = obj.strValue.to_string().multiply(param0);
            
            *result =  new ZVALUE(kind:kStrValue, str_value:result2.to_wstring());
        }
    }
    else if(fun_name === "match") {
        if(params.length() == 1 && params[0].kind == kRegexValue) {
            regex_struct* param0 = params[0].regexValue;
            
            bool result2 = obj.strValue.to_string().match(param0);
            
            *result =  new ZVALUE(kind:kBoolValue, bool_value:result2);
        }
    }
    else if(fun_name === "match_count") {
        if(params.length() == 2 && params[0].kind == kRegexValue && params[1].kind == kIntValue) {
            regex_struct* param0 = params[0].regexValue;
            int param1 = params[1].intValue;
            
            int n = obj.strValue.to_string().match_count(param0, param1);
            
            *result =  new ZVALUE(kind:kIntValue, int_value:n);
        }
    }
    else if(fun_name === "split") {
        if(params.length() == 1 && params[0].kind == kRegexValue) {
            regex_struct* param0 = params[0].regexValue;
            
            string strX = obj.strValue.to_string();
            list<string>*% list1 = strX.split(param0);
            
            list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
            
            foreach(it, list1) {
                list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
            }
            
            *result =  new ZVALUE(kind:kListValue, list_value:clone list2);
        }
    }
    else if(fun_name === "strip") {
        if(params.length() == 0) {
            string str = obj.strValue.to_string().strip();
            
            *result =  new ZVALUE(kind:kStrValue, str_value:str.to_wstring());
        }
    }
    else if(fun_name === "split_char") {
        if(params.length() == 1 && params[0].kind == kStrValue) {
            string param0 = params[0].strValue.to_string();
            
            list<string>*% list1 = obj.strValue.to_string().split_char(param0[0]);
            
            list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
            
            foreach(it, list1) {
                list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
            }
            
            *result =  new ZVALUE(kind:kListValue, list_value:clone list2);
        }
    }
    else if(fun_name === "sub_count") {
        if(params.length() == 3 && params[0].kind == kRegexValue && params[1].kind == kStrValue && params[2].kind == kIntValue) {
            regex_struct* param0 = params[0].regexValue;
            char*% param1 = params[1].strValue.to_string();
            int param2 = params[2].intValue;
            
            string result2 = obj.strValue.to_string().sub_count(param0, param1, param2);
            
            *result =  new ZVALUE(kind:kStrValue, str_value:result2.to_wstring());
        }
    }
    else if(fun_name === "sub_block") {
        if(params.length() == 1 && params[0].kind == kRegexValue) {
            regex_struct* param0 = params[0].regexValue;
            
            string str = obj.strValue.to_string().sub_block(param0) {
                ZVALUE*% value = new ZVALUE(kind:kStrValue, str_value:it.to_wstring());
                append_var(name:"it".to_wstring(), value: value);
                
                list<string>* group_strings = it2;
                
                list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
                
                foreach(it, group_strings) {
                    list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
                }
                
                ZVALUE*% value2 = new ZVALUE(kind:kListValue, list_value:clone list2);
                append_var(name:"it2".to_wstring(), value: value2);
                
                sInfo info2;
                
                info2.p = null;
                info2.command = null;
                info2.codes = clone *(parent.codes);
                info2.nodes = null;
                info2.head = (int*)info2.codes.buf;
                info2.op = (int*)info2.codes.buf;
                info2.stack = new vector<ZVALUE*%>();
                info2.loop_head = 0;
                info2.breaks = null;
                info2.result_value = null;
                info2.stack_num = 0;
                
                while(*info2.op) {
                    if(!vm(&info2)) {
                        exit(1);
                    }
                }
                
                if(info2.result_value == null || info2.result_value.kind != kStrValue) {
                    fprintf(stderr, "invalid block result value\n");
                    exit(1);
                }
                
                return info2.result_value.strValue.to_string();
            };
            
            *result =  new ZVALUE(kind:kStrValue, str_value:str.to_wstring());
        }
    }
    else if(fun_name === "sub_block_count") {
        if(params.length() == 2 && params[0].kind == kRegexValue && params[1].kind == kIntValue) {
            regex_struct* param0 = params[0].regexValue;
            int param1 = params[1].intValue;
            
            string str = obj.strValue.to_string().sub_block_count(param0, param1) {
                ZVALUE*% value = new ZVALUE(kind:kStrValue, str_value:it.to_wstring());
                append_var(name:"it".to_wstring(), value: value);
                
                list<string>* group_strings = it2;
                
                list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
                
                foreach(it, group_strings) {
                    list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
                }
                
                ZVALUE*% value2 = new ZVALUE(kind:kListValue, list_value:clone list2);
                append_var(name:"it2".to_wstring(), value: value2);
                
                sInfo info2;
                
                info2.p = null;
                info2.command = null;
                info2.codes = clone *(parent.codes);
                info2.nodes = null;
                info2.head = (int*)info2.codes.buf;
                info2.op = (int*)info2.codes.buf;
                info2.stack = new vector<ZVALUE*%>();
                info2.loop_head = 0;
                info2.breaks = null;
                info2.result_value = null;
                info2.stack_num = 0;
                
                while(*info2.op) {
                    if(!vm(&info2)) {
                        exit(1);
                    }
                }
                
                if(info2.result_value == null || info2.result_value.kind != kStrValue) {
                    fprintf(stderr, "invalid block result value\n");
                    exit(1);
                }
                
                return info2.result_value.strValue.to_string();
            };
            
            *result =  new ZVALUE(kind:kStrValue, str_value:str.to_wstring());
        }
    }
    else if(fun_name === "scan_block") {
        if(params.length() == 1 && params[0].kind == kRegexValue) {
            regex_struct* param0 = params[0].regexValue;
            
            list<string>*% list1 = obj.strValue.to_string().scan_block(param0) {
                ZVALUE*% value = new ZVALUE(kind:kStrValue, str_value:it.to_wstring());
                append_var(name:"it".to_wstring(), value: value);
                
                list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
                
                list<string>* group_strings = it2;
                
                foreach(it, group_strings) {
                    list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
                }
                
                ZVALUE*% value2 = new ZVALUE(kind:kListValue, list_value:clone list2);
                append_var(name:"it2".to_wstring(), value: value2);
                
                sInfo info2;
                
                info2.p = null;
                info2.command = null;
                info2.codes = clone *(parent.codes);
                info2.nodes = null;
                info2.head = (int*)info2.codes.buf;
                info2.op = (int*)info2.codes.buf;
                info2.stack = new vector<ZVALUE*%>();
                info2.loop_head = 0;
                info2.breaks = null;
                info2.result_value = null;
                info2.stack_num = 0;
                
                while(*info2.op) {
                    if(!vm(&info2)) {
                        exit(1);
                    }
                }
                
                if(info2.result_value == null || info2.result_value.kind != kStrValue) {
                    fprintf(stderr, "invalid block result value\n");
                    exit(1);
                }
                
                return info2.result_value.strValue.to_string();
            }
            
            list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
            
            foreach(it, list1) {
                list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
            };
            
            *result =  new ZVALUE(kind:kListValue, list_value:clone list2);
        }
    }
    else if(fun_name === "scan_block_count") {
        if(params.length() == 2 && params[0].kind == kRegexValue && params[1].kind == kIntValue) {
            regex_struct* param0 = params[0].regexValue;
            int param1 = params[1].intValue;
            
            list<string>*% list1 = obj.strValue.to_string().scan_block_count(param0, param1) {
                ZVALUE*% value = new ZVALUE(kind:kStrValue, str_value:it.to_wstring());
                append_var(name:"it".to_wstring(), value: value);
                
                list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
                
                list<string>* group_strings = it2;
                
                foreach(it, group_strings) {
                    list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
                }
                
                ZVALUE*% value2 = new ZVALUE(kind:kListValue, list_value:clone list2);
                append_var(name:"it2".to_wstring(), value: value2);
                
                sInfo info2;
                
                info2.p = null;
                info2.command = null;
                info2.codes = clone *(parent.codes);
                info2.nodes = null;
                info2.head = (int*)info2.codes.buf;
                info2.op = (int*)info2.codes.buf;
                info2.stack = new vector<ZVALUE*%>();
                info2.loop_head = 0;
                info2.breaks = null;
                info2.result_value = null;
                info2.stack_num = 0;
                
                while(*info2.op) {
                    if(!vm(&info2)) {
                        exit(1);
                    }
                }
                
                if(info2.result_value == null || info2.result_value.kind != kStrValue) {
                    fprintf(stderr, "invalid block result value\n");
                    exit(1);
                }
                
                return info2.result_value.strValue.to_string();
            }
            
            list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
            
            foreach(it, list1) {
                list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
            };
            
            *result =  new ZVALUE(kind:kListValue, list_value:clone list2);
        }
    }
    
    return true;
}
