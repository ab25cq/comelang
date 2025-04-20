
ZVALUE*%, bool str_method(string fun_name, ZVALUE* obj, list<ZVALUE*%>* params, buffer* codes, sInfo* info) version 2
{
    if(fun_name === "chomp") {
        if(params.length() == 0) {
            string str = obj.strValue.to_string().chomp();
            return (new ZVALUE(kind:kStrValue, str_value:str.to_wstring()), true)
        }
    }
    else if(fun_name === "lower_case") {
        if(params.length() == 0) {
            string str = obj.strValue.to_string();
            string str2 = str.lower_case();
            
            return (new ZVALUE(kind:kStrValue, str_value:str2.to_wstring()), true);
        }
    }
    else if(fun_name === "reverse") {
        if(params.length() == 0) {
            string str = obj.strValue.to_string();
            string str2 = str.reverse();
            
            return (new ZVALUE(kind:kStrValue, str_value:str2.to_wstring()), true);
        }
    }
    else if(fun_name === "upper_case") {
        if(params.length() == 0) {
            string str = obj.strValue.to_string();
            string str2 = str.upper_case();
            
            return (new ZVALUE(kind:kStrValue, str_value:str2.to_wstring()), true);
        }
    }
    else if(fun_name === "length") {
        if(params.length() == 0) {
            string str = obj.strValue.to_string();
            int len = str.length();
            
            return (new ZVALUE(kind:kIntValue, int_value:len), true);
        }
    }
    else if(fun_name === "printable") {
        if(params.length() == 0) {
            string str = obj.strValue.to_string().printable();
            
            return (new ZVALUE(kind:kStrValue, str_value:str.to_wstring()), true);
        }
    }
    else if(fun_name === "scan") {
        if(params.length() == 1 && params[0].kind == kRegexValue) {
            come_regex* param0 = params[0].regexValue;
            
            list<string>*% list1 = obj.strValue.to_string().scan(param0);
            
            list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
            
            foreach(it, list1) {
                list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
            }
            
            return (new ZVALUE(kind:kListValue, list_value:clone list2), true);
        }
    }
    else if(fun_name === "xsprintf") {
        if(params.length() == 1 && params[0].kind == kStrValue) {
            wchar_t* param0 = params[0].strValue;
            
            string str1 = obj.strValue.to_string().xsprintf(param0.to_string());
            
            return (new ZVALUE(kind:kStrValue, str_value:str1.to_wstring()), true);
        }
    }
    else if(fun_name === "compare") {
        if(params.length() == 1 && params[0].kind == kStrValue) {
            string param0 = params[0].strValue.to_string();
            
            int result2 = obj.strValue.to_string().compare(param0);
            
            return (new ZVALUE(kind:kIntValue, int_value:result2), true);
        }
    }
    else if(fun_name === "sub") {
        if(params.length() == 2 && params[0].kind == kRegexValue && params[1].kind == kStrValue) {
            come_regex* param0 = params[0].regexValue;
            char*% param1 = params[1].strValue.to_string();
            
            string str = obj.strValue.to_string().sub(param0, param1);
            
            return (new ZVALUE(kind:kStrValue, str_value:str.to_wstring()), true);
        }
    }
    else if(fun_name === "delete") {
        if(params.length() == 2 && params[0].kind == kIntValue && params[1].kind == kIntValue) {
            int param0 = params[0].intValue;
            int param1 = params[1].intValue;
            
            string str2 = obj.strValue.to_string().delete(param0, param1);
            
            return (new ZVALUE(kind:kStrValue, str_value:str2.to_wstring()), true);
        }
    }
    else if(fun_name === "index_count") {
        if(params.length() == 3 && params[0].kind == kStrValue && params[1].kind == kIntValue && params[2].kind == kIntValue) {
            string param0 = params[0].strValue.to_string();
            int param1 = params[1].intValue;
            int param2 = params[2].intValue;
            
            int n = obj.strValue.to_string().index_count(param0, param1, param2);
            
            return (new ZVALUE(kind:kIntValue, int_value:n), true);
        }
    }
    else if(fun_name === "index_regex_count") {
        if(params.length() == 3 && params[0].kind == kRegexValue && params[1].kind == kIntValue && params[2].kind == kIntValue) {
            come_regex* param0 = params[0].regexValue;
            int param1 = params[1].intValue;
            int param2 = params[2].intValue;
            
            int n = obj.strValue.to_string().index_regex_count(param0, param1, param2);
            
            return (new ZVALUE(kind:kIntValue, int_value:n), true);
        }
    }
    else if(fun_name === "rindex_regex_count") {
        if(params.length() == 3 && params[0].kind == kRegexValue && params[1].kind == kIntValue && params[2].kind == kIntValue) {
            come_regex* param0 = params[0].regexValue;
            int param1 = params[1].intValue;
            int param2 = params[2].intValue;
            
            int n = obj.strValue.to_string().rindex_regex_count(param0, param1, param2);
            
            return (new ZVALUE(kind:kIntValue, int_value:n), true);
        }
    }
    else if(fun_name === "substring") {
        if(params.length() == 2 && params[0].kind == kIntValue && params[1].kind == kIntValue) {
            int param0 = params[0].intValue;
            int param1 = params[1].intValue;
            
            string str = obj.strValue.to_string().substring(param0, param1);
            
            return (new ZVALUE(kind:kStrValue, str_value:str.to_wstring()), true);
        }
    }
    else if(fun_name === "split_maxsplit") {
        if(params.length() == 2 && params[0].kind == kRegexValue && params[1].kind == kIntValue) {
            come_regex* param0 = params[0].regexValue;
            int param1 = params[1].intValue;
            
            list<string>*% list1 = obj.strValue.to_string().split_maxsplit(param0, param1);
            
            list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
            
            foreach(it, list1) {
                list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
            }
            
            return (new ZVALUE(kind:kListValue, list_value:clone list2), true);
        }
    }
    else if(fun_name === "index") {
        if(params.length() == 2 && params[0].kind == kStrValue && params[1].kind == kIntValue) {
            char*% param0 = params[0].strValue.to_string();
            int param1 = params[1].intValue;
            
            int result2 = obj.strValue.to_string().index(param0, param1);
            
            return (new ZVALUE(kind:kIntValue, int_value:result2), true);
        }
    }
    else if(fun_name === "index_regex") {
        if(params.length() == 2 && params[0].kind == kRegexValue && params[1].kind == kIntValue) {
            come_regex* param0 = params[0].regexValue;
            int param1 = params[1].intValue;
            
            int result2 = obj.strValue.to_string().index_regex(param0, param1);
            
            return (new ZVALUE(kind:kIntValue, int_value:result2), true);
        }
    }
    else if(fun_name === "replace") {
        if(params.length() == 2 && params[0].kind == kIntValue && params[1].kind == kStrValue) {
            int param0 = params[0].intValue;
            string param1 = params[1].strValue.to_string();
            
            string str = obj.strValue.to_string();
            
            string result2 = str.replace(param0, param1[0]);
            
            return (new ZVALUE(kind:kStrValue, str_value:result2.to_wstring()), true);
        }
    }
    else if(fun_name === "rindex") {
        if(params.length() == 2 && params[0].kind == kStrValue && params[1].kind == kIntValue) {
            char*% param0 = params[0].strValue.to_string();
            int param1 = params[1].intValue;
            
            int result2 = obj.strValue.to_string().rindex(param0, param1);
            
            return (new ZVALUE(kind:kIntValue, int_value:result2), true);
        }
    }
    else if(fun_name === "rindex_count") {
        if(params.length() == 3 && params[0].kind == kStrValue && params[1].kind == kIntValue && params[2].kind == kIntValue) {
            string param0 = params[0].strValue.to_string();
            int param1 = params[1].intValue;
            int param2 = params[2].intValue;
            
            int result2 = obj.strValue.to_string().rindex_count(param0, param1, param2);
            
            return (new ZVALUE(kind:kIntValue, int_value:result2), true);
        }
    }
    else if(fun_name === "index_regex") {
        if(params.length() == 2 && params[0].kind == kRegexValue && params[1].kind == kIntValue) {
            come_regex* param0 = params[0].regexValue;
            int param1 = params[1].intValue;
            
            int result2 = obj.strValue.to_string().index_regex(param0, param1);
            
            return (new ZVALUE(kind:kIntValue, int_value:result2), true);
        }
    }
    else if(fun_name === "rindex_regex") {
        if(params.length() == 2 && params[0].kind == kRegexValue && params[1].kind == kIntValue) {
            come_regex* param0 = params[0].regexValue;
            int param1 = params[1].intValue;
            
            int result2 = obj.strValue.to_string().rindex_regex(param0, param1);
            
            return (new ZVALUE(kind:kIntValue, int_value:result2), true);
        }
    }
    else if(fun_name === "multiply") {
        if(params.length() == 1 && params[0].kind == kIntValue) {
            int param0 = params[0].intValue;
            
            string result2 = obj.strValue.to_string().multiply(param0);
            
            return (new ZVALUE(kind:kStrValue, str_value:result2.to_wstring()), true);
        }
    }
    else if(fun_name === "match") {
        if(params.length() == 1 && params[0].kind == kRegexValue) {
            come_regex* param0 = params[0].regexValue;
            
            bool result2 = obj.strValue.to_string().match(param0);
            
            return (new ZVALUE(kind:kBoolValue, bool_value:result2), true);
        }
    }
    else if(fun_name === "match_count") {
        if(params.length() == 2 && params[0].kind == kRegexValue && params[1].kind == kIntValue) {
            come_regex* param0 = params[0].regexValue;
            int param1 = params[1].intValue;
            
            int n = obj.strValue.to_string().match_count(param0, param1);
            
            return (new ZVALUE(kind:kIntValue, int_value:n), true);
        }
    }
    else if(fun_name === "split") {
        if(params.length() == 1 && params[0].kind == kRegexValue) {
            come_regex* param0 = params[0].regexValue;
            
            string strX = obj.strValue.to_string();
            list<string>*% list1 = strX.split(param0);
            
            list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
            
            foreach(it, list1) {
                list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
            }
            
            return (new ZVALUE(kind:kListValue, list_value:clone list2), true);
        }
    }
    else if(fun_name === "strip") {
        if(params.length() == 0) {
            string str = obj.strValue.to_string().strip();
            
            return (new ZVALUE(kind:kStrValue, str_value:str.to_wstring()), true);
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
            
            return (new ZVALUE(kind:kListValue, list_value:clone list2), true);
        }
    }
    else if(fun_name === "sub_count") {
        if(params.length() == 3 && params[0].kind == kRegexValue && params[1].kind == kStrValue && params[2].kind == kIntValue) {
            come_regex* param0 = params[0].regexValue;
            char*% param1 = params[1].strValue.to_string();
            int param2 = params[2].intValue;
            
            string result2 = obj.strValue.to_string().sub_count(param0, param1, param2);
            
            return (new ZVALUE(kind:kStrValue, str_value:result2.to_wstring()), true);
        }
    }
    
    return (null, false);
}
