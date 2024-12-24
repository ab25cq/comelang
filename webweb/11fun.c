
class sFunNode
{
    new(string name, sNode*% obj, list<sNode*%>*% params, sNodeBlock block)
    {
        int self.id = gNodeID++;
        string self.name = name;
        sNode*% self.obj = obj;
        list<sNode*%>*% self.params = params;
        sNodeBlock self.block = clone block;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
    {
        char* name = self.name;
        list<sNode*%>* params = self.params;
        sNode* obj = self.obj;
        sNodeBlock& block = self.block;
        
        if(!obj.compile->(info)) {
            return false;
        }
        
        for(int i=0; i<params.length(); i++) {
            sNode* node = params[i];
            
            if(!node.compile->(info)) {
                return false;
            }
        }
        
        buffer* codes = null;
        if(block) {
            sInfo info2;
            
            info2.p = info.p;
            info2.command = null;
            info2.codes = new buffer();
            info2.nodes = null;
            info2.head = null;
            info2.op = null;
            info2.stack = new list<ZVALUE*%>();
            
            info2.loop_head = 0;
            info2.breaks = null;
            info2.result_value = null;
            
            info2.stack_num = 0;
            
            if(!compile_block(block, &info2)) {
                return false;
            }
    
            codes = borrow gc_inc(clone info2.codes);
        }
        
        info.codes.append_int(OP_FUN);
        info.codes.append_int(params.length());
        
        append_str_to_codes(info, wstring(name));
        
        info.codes.append_int(codes ? codes.length():0);
        
        if(codes) {
            info.codes.append(codes.buf, codes.length());
            
            delete codes;
        }
        
        info.stack_num -= params.length() + 1;
        info.stack_num++;
        
        return true;
    }
};

sNode*% exp_node(sInfo* info) version 9
{
    sNode*% result = null;
    if(*info->p == '.') {
        result = inherit(info);
        
        string fun_name = string("read");
        list<sNode*%>*% params = new list<sNode*%>();
        sNodeBlock? block = null
        result = new sFunNode(fun_name, clone result, params, block) implements sNode;
    }
    else {
        result = inherit(info);
    }
    
    while(*info->p == '.') {
        info->p++;
        skip_spaces(info);
        
        if(result == null) {
            fprintf(stderr, "invalid method call. require object\n");
            exit(2);
        }
        
        buffer*% buf = new buffer();
        
        while(xisalnum(*(info->p)) || *info->p == '_') {
            buf.append_char(*info->p);
            info->p++;
        }
        skip_spaces(info);
        
        string fun_name = buf.to_string();
        
        list<sNode*%>*% params = new list<sNode*%>();
        
        if(*info->p != '{' && *info->p == '(') {
            if(*info->p == '(') {
                info->p++;
                skip_spaces(info);
            }
            
            while(true) {
                if(*info->p == ')') {
                    info->p++;
                    skip_spaces(info);
                    break;
                }
                
                sNode*% node = expression(info);
                
                if(node == null) {
                    fprintf(stderr, "require parametor expression\n");
                    exit(1);
                }
                
                params.push_back(dummy_heap node);
                
                if(*info->p == ',') {
                    info->p++;
                    skip_spaces(info);
                }
            }
        }
        
        sNodeBlock block = null
        if(*info->p == '{') {
            block = parse_block(info);
        }
        
        result = new sFunNode(fun_name, dummy_heap result, params, block) implements sNode;
    }
    
    return result;
}

ZVALUE*%,bool str_method(string fun_name, ZVALUE* obj, list<ZVALUE*%>* params, buffer* codes, sInfo* info) version 1
{
    return (null, true);
}

bool vm(sInfo* info) version 10
{
    inherit(info);
    
    switch(*info->op) {
        case OP_FUN: {
            info->op++;
            
            int len = *info->op;
            info->op++;
            
            string fun_name = get_str_from_codes(info).to_string();
            
            int codes_len = *info->op;
            info->op++;
            
            buffer*% codes = new buffer();
            if(codes_len > 0) {
                char*% mem = new char[codes_len+1];
                memcpy(mem, (char*)info->op, sizeof(char)*codes_len);
                codes.append(mem, codes_len);
                
                info->op += codes_len / sizeof(int);
            }
            
            ZVALUE*% obj = clone info.stack[-len-1];
            
            list<ZVALUE*%>*% params = new list<ZVALUE*%>();
            
            for(int i=0; i<len; i++) {
                ZVALUE*% value = clone info.stack[-len+i];
                
                params.push_back(value);
            }
            
            for(int i=0; i<len+1; i++) {
                info.stack.delete(-1, -1);
            }
            
            ZVALUE*% result = null;
            
            switch(obj.kind) {
                case kStrValue: {
                    var result2 = str_method(fun_name, obj, params, codes, info).catch {
                        exit(1);
                    }
                    
                    result = clone result2;
                    }
                    break;
                    
                case kIntValue: {
                    if(fun_name === "to_string") {
                        if(params.length() == 0) {
                            string str = obj.intValue.to_string();
                            
                            result = new ZVALUE(kind:kStrValue, str_value:str.to_wstring());
                        }
                    }
                    }
                    break;
                    
                case kListValue: {
                    if(fun_name === "join") {
                        if(params.length() == 1 && params[0].kind == kStrValue) {
                            string param0 = params[0].strValue.to_string();
                            
                            list<ZVALUE*%>* list1 = obj.listValue;
                            
                            list<string>*% list2 = new list<string>();
                            
                            foreach(it, list1) {
                                list2.push_back(it.strValue.to_string());
                            }
                            
                            string str = list2.join(param0);
                            
                            result = new ZVALUE(kind:kStrValue, str_value:str.to_wstring());
                        }
                    }
                    else if(fun_name === "sublist") {
                        if(params.length() == 2 && params[0].kind == kIntValue && params[1].kind == kIntValue) {
                            int param0 = params[0].intValue;
                            int param1 = params[1].intValue;
                            
                            list<ZVALUE*%>* list1 = obj.listValue;
                            
                            list<ZVALUE*%>*% list2 = list1.sublist(param0, param1);
                            
                            result = new ZVALUE(kind:kListValue, list_value:list2);
                        }
                    }
                    else if(fun_name === "uniq") {
                        if(params.length() == 0) {
                            list<ZVALUE*%>* list1 = obj.listValue;
                            
                            list<ZVALUE*%>*% list2 = list1.uniq();
                            
                            result = new ZVALUE(kind:kListValue, list_value:list2);
                        }
                    }
                    else if(fun_name === "reverse") {
                        if(params.length() == 0) {
                            list<ZVALUE*%>* list1 = obj.listValue;
                            
                            list<ZVALUE*%>*% list2 = list1.reverse();
                            
                            result = new ZVALUE(kind:kListValue, list_value:list2);
                        }
                    }
                    else if(fun_name === "sort") {
                        if(params.length() == 0) {
                            list<ZVALUE*%>* list1 = obj.listValue;
                            
                            list<ZVALUE*%>*% list2 = list1.sort();
                            
                            result = new ZVALUE(kind:kListValue, list_value:list2);
                        }
                    }
                    else if(fun_name === "find") {
                        if(params.length() == 1) {
                            ZVALUE* param0 = params[0];
                            
                            list<ZVALUE*%>* list1 = obj.listValue;
                            
                            int n = list1.find(param0, -1);
                            
                            result = new ZVALUE(kind:kIntValue, int_value:n);
                        }
                    }
                    else if(fun_name === "length") {
                        if(params.length() == 0) {
                            list<ZVALUE*%>* list1 = obj.listValue;
                            
                            int n = list1.length();
                            
                            result = new ZVALUE(kind:kIntValue, int_value:n);
                        }
                    }
                    else if(fun_name === "filter") {
                        if(params.length() == 0) {
                            list<ZVALUE*%>*% list1 = obj.listValue.filter {
                                using unsafe;
                                
                                append_var(name:"it".to_wstring(), value: clone it);
                                
                                sInfo info2;
                                
                                info2.p = null;
                                info2.command = null;
                                info2.codes = clone codes;
                                info2.nodes = null;
                                info2.op = (int*)info2.codes.buf;
                                info2.head = (char*)info2.op;
                                info2.stack = new list<ZVALUE*%>();
                                info2.loop_head = 0;
                                info2.breaks = null;
                                info2.result_value = null;
                                info2.stack_num = 0;
                                
                                while(*info2.op) {
                                    if(!vm(&info2)) {
                                        exit(1);
                                    }
                                }
                                
                                if(info2.result_value == null || info2.result_value.kind != kBoolValue) {
                                    fprintf(stderr, "invalid block result value\n");
                                    exit(1);
                                }
                                
                                return info2.result_value.boolValue;
                            }
                            
                            result = new ZVALUE(kind:kListValue, list_value:list1);
                        }
                    }
                    else if(fun_name === "map") {
                        if(params.length() == 0) {
                            list<ZVALUE*%>*% list1 = obj.listValue.map2<ZVALUE*%> {
                                using unsafe;
                                
                                ZVALUE*% var_value = clone it;
                                
                                append_var(name:"it".to_wstring(), value: var_value);
                                
                                sInfo info2;
                                
                                info2.p = null;
                                info2.command = null;
                                info2.codes = clone codes;
                                info2.nodes = null;
                                info2.op = (int*)info2.codes.buf;
                                info2.head = (char*)info2.op;
                                info2.stack = new list<ZVALUE*%>();
                                info2.loop_head = 0;
                                info2.breaks = null;
                                info2.result_value = null;
                                info2.stack_num = 0;
                                
                                while(*info2.op) {
                                    if(!vm(&info2)) {
                                        exit(1);
                                    }
                                }
                                
                                if(info2.result_value == null) {
                                    fprintf(stderr, "invalid block result value\n");
                                    exit(1);
                                }
                                
                                return clone info2->result_value;
                            }
                            
                            result = new ZVALUE(kind:kListValue, list_value:list1);
                        }
                    }
                    else if(fun_name === "each") {
                        if(params.length() == 0) {
                            obj.listValue.each {
                                using unsafe;
                                
                                ZVALUE*% var_value = clone it;
                                
                                append_var(name:"it".to_wstring(), value: var_value);
                                
                                sInfo info2;
                                
                                info2.p = null;
                                info2.command = null;
                                info2.codes = clone codes;
                                info2.nodes = null;
                                info2.op = (int*)info2.codes.buf;
                                info2.head = (char*)info2.op;
                                info2.stack = new list<ZVALUE*%>();
                                info2.loop_head = 0;
                                info2.breaks = null;
                                info2.result_value = null;
                                info2.stack_num = 0;
                                
                                while(*info2.op) {
                                    if(!vm(&info2)) {
                                        exit(1);
                                    }
                                }
                            }
                            
                            result = new ZVALUE(kind:kListValue, list_value:clone obj.listValue);
                        }
                    }
                    else if(fun_name === "add") {
                        if(params.length() == 1) {
                            ZVALUE* param0 = params[0];
                            
                            list<ZVALUE*%>* list1 = obj.listValue;
                            
                            list1.push_back(clone param0);
                            
                            result = new ZVALUE(kind:kListValue, list_value:list1);
                        }
                    }
                    else if(fun_name === "insert") {
                        if(params.length() == 2 && params[0].kind == kIntValue) {
                            int param0 = params[0].intValue;
                            ZVALUE* param1 = params[1];
                            
                            list<ZVALUE*%>* list1 = obj.listValue;
                            
                            list1.insert(param0, clone param1);
                            
                            result = new ZVALUE(kind:kListValue, list_value:list1);
                        }
                    }
                    else if(fun_name === "delete") {
                        if(params.length() == 2 && params[0].kind == kIntValue && params[1].kind == kIntValue) {
                            int param0 = params[0].intValue;
                            int param1 = params[1].intValue;
                            
                            list<ZVALUE*%>* list1 = obj.listValue;
                            
                            list1.delete(param0, param1);
                            
                            result = new ZVALUE(kind:kListValue, list_value:list1);
                        }
                    }
                    else if(fun_name === "replace") {
                        if(params.length() == 2 && params[0].kind == kIntValue) {
                            int param0 = params[0].intValue;
                            ZVALUE* param1 = params[1];
                            
                            list<ZVALUE*%>* list1 = obj.listValue;
                            
                            list1.replace(param0, clone param1);
                            
                            result = new ZVALUE(kind:kListValue, list_value:list1);
                        }
                    }
                    }
                    break;
                    
                case kMapValue: {
                    if(fun_name === "length") {
                        if(params.length() == 0) {
                            map<ZVALUE*%, ZVALUE*%>* map1 = obj.mapValue;
                            
                            int n = map1.length();
                            
                            result = new ZVALUE(kind:kIntValue, int_value:n);
                        }
                    }
                    else if(fun_name === "find") {
                        if(params.length() == 1) {
                            ZVALUE* param0 = params[0];
                            
                            map<ZVALUE*%, ZVALUE*%>* map1 = obj.mapValue;
                            
                            bool n = map1.find(param0);
                            
                            result = new ZVALUE(kind:kBoolValue, bool_value:n);
                        }
                    }
                    else if(fun_name === "keys") {
                        if(params.length() == 0) {
                            map<ZVALUE*%, ZVALUE*%>* map1 = obj.mapValue;
                            
                            list<ZVALUE*%>*% l = map1.keys();
                            
                            result = new ZVALUE(kind:kListValue, list_value:l);
                        }
                    }
                    else if(fun_name === "values") {
                        if(params.length() == 0) {
                            map<ZVALUE*%, ZVALUE*%>* map1 = obj.mapValue;
                            
                            list<ZVALUE*%>*% l = map1.values();
                            
                            result = new ZVALUE(kind:kListValue, list_value:l);
                        }
                    }
                    }
                    break;
                    
                case kFileValue: {
                    if(fun_name === "read") {
                        if(params.length() == 0) {
                            string str = obj.fileValue.read();
                            
                            result = new ZVALUE(kind:kStrValue, str_value:str.to_wstring());
                        }
                    }
                    else if(fun_name === "sub_block") {
puts("LLL");
                        if(params.length() == 1 && params[0].kind == kRegexValue) {
                            come_regex* param0 = params[0].regexValue;
                            
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
                                info2.codes = clone codes;
                                info2.nodes = null;
                                info2.op = (int*)info2.codes.buf;
                                info2.head = (char*)info.op;
                                info2.stack = new list<ZVALUE*%>();
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
                            
                            result = new ZVALUE(kind:kStrValue, str_value:str.to_wstring());
                        }
                    }
                    }
                    break;
                    
            }
            
            if(result == null) {
                fprintf(stderr, "method not found(%s)\n", fun_name);
                exit(1);
            }
            
            info.stack.push_back(clone result);
            }
            break;
    }
    
    return true;
}
