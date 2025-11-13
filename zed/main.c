
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "");
    
    string command = null;
    for(int i=1; i<argc; i++) {
        if(argv[i][0] == '-') {
        }
        else {
            if(command == null) {
                command = string(argv[i]);
            }
        }
    }
    
    sInfo info;
    
    if(command == null) {
        fprintf(stderr, "require command\n");
        return 1;
    }
    
    info.command = command;
    
    info.nodes = new list<sNode*%>();
    info.codes = new buffer();
    
    info.stack = new list<ZVALUE*%>();
    
    initialize_modules();
    
    /// parse ///
    buffer*% command_buffer = info.command.to_buffer();
    info.p = command_buffer.buf;
    
    while(*info.p) {
        if(!parse(&info)) {
            fprintf(stderr, "parse error\n");
            return 1;
        }
        
        if(*info.p == ';') {
            info.p++;
            skip_spaces(&info);
        }
    }
    
    /// compile ///
    foreach(it, info.nodes) {
        if(!it.compile(&info)) {
            fprintf(stderr, "compile error\n");
            return 1;
        }
        
        if(info.stack_num > 0) {
            arrange_stack(&info);
        }
    }
    
    info.codes.append_int(0);  /// terminator
    
    /// vm ///
    info.op = (int*)info.codes.buf;
    info.head = (char*)info.op;
    
    while(*info.op) {
        if(!vm(&info)) {
            fprintf(stderr, "vm error\n");
            return 1;
        }
    }
    
    /// output ///
    if(info->result_value) {
        puts(info->result_value.to_string());
    }
    
    finalize_modules();
    
    return 0;
}
