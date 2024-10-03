#include "common.h"

class sInterfaceNode extends sNodeBase
{
    new(string name, sClass*% klass, bool output, sInfo* info)
    {
        self.super();
        
        string self.name = string(name);
        sClass*% self.klass = clone klass;
        
        bool self.mOutput = output;
    }
    
    string kind()
    {
        return string("sInterfaceNode");
    }
    
    bool compile(sInfo* info)
    {
        string name = string(self.name);
        sClass* klass = self.klass;
        klass->mProtocol = true;
        
        buffer*% buf = new buffer();
        
        buf.append_str(xsprintf("struct %s\n{\n", klass.mName));
        
    //    klass= info.classes[klass->mName];
        foreach(it, klass.mFields) {
            var name, type = it;
            
            buf.append_str("    ");
            buf.append_str(make_define_var(type, name));
            buf.append_str(";\n");
        }
        
        buf.append_str("};\n");
        
        if(self.mOutput) {
            add_come_code_at_source_head(info, "%s", buf.to_string());
            info.classes.insert(string(name), clone klass);
        }
        
        return true;
    }
};

sType*%, string parse_interface_function(sInfo* info)
{
    var result_type, var_name,err = parse_type();
    if(!err) {
        printf("%s %d: parse_type failed\n", info->sname, info->sline);
        exit(2);
    }
    
    string fun_name = parse_word();
    
    var param_types, param_names, param_default_parametors, var_args = parse_params(info);
    
    param_types.insert(0, new sType("void*"));
    param_names.insert(0, string("self"));
    
    sType*% type = new sType("lambda");
    
    type->mParamTypes = clone param_types;
    type->mParamNames = clone param_names;
    type->mVarArgs = var_args;
    type->mResultType = new tuple1<sType*%>(clone result_type);
    
    return (type, fun_name);
}

sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 92
{
    if(buf === "interface" || buf === "protocol") {
        char* source_head = info.p;
        
        bool output = true;
        
        var type_name = parse_word();
        
        sClass*% klass;
        if(info.classes.at(type_name, null) == null) {
            klass = new sClass(name:type_name, struct_:true, protocol_:true);
        }
        else {
            klass = clone info.classes.at(type_name, null);
            
            if(klass->mFields.length() > 0) {
                output = false;
            }
        }
        
        expected_next_character('{');
    
        sType*% voidp = new sType("void");
        voidp->mPointerNum++;
        
        klass.mFields.push_back((string("_protocol_obj"), voidp));
        
        sType*% finalizer = new sType("lambda");
    
        finalizer->mParamTypes = [clone voidp ];
        finalizer->mParamNames = [string("self")];
        finalizer->mVarArgs = false;
        finalizer->mResultType = new tuple1<sType*%>(new sType("void"));
        
        klass.mFields.push_back((string("finalize"), finalizer));
        
        sType*% cloner = new sType("lambda");
    
        cloner->mParamTypes = [clone voidp ];
        cloner->mParamNames = [string("self")];
        cloner->mVarArgs = false;
        cloner->mResultType = new tuple1<sType*%>(clone voidp);
        
        klass.mFields.push_back((string("clone"), cloner));
        
        while(true) {
            parse_sharp();
            var type2, name = parse_interface_function(info);
            expected_next_character(';');
            
            klass.mFields.push_back((name, type2));
            
            parse_sharp();
            
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
            parse_sharp();
        }
        
        char* source_tail = info.p;
        
        buffer*% header = new buffer();
        header.append_str("interface ");
        header.append(source_head, source_tail - source_head);
        
        add_come_code_at_come_header(info, "%s\n", header.to_string());
        
        return new sInterfaceNode(string(type_name), klass, output, info) implements sNode;
    }
    
    return inherit(buf, head, head_sline, info);
}
