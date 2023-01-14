#include <libgen.h>
#include "common.h"

static bool get_command_result2(buffer* command_result, char* cmdline)
{
    char buf[BUFSIZ];

    FILE* f = popen(cmdline, "r");
    if(f == NULL) {
        perror("popen");
        fprintf(stderr, "popen(2) is failed at %s\n", cmdline);
        return false;
    }

    while(1) {
        int size = fread(buf, 1, BUFSIZ, f);
        command_result.append(buf, size);

        if(size < BUFSIZ) {
            break;
        }
    }
    if(pclose(f) < 0) {
        fprintf(stderr, "pclose(2) is failed at %s\n", cmdline);
        return false;
    }

    return true;
}

void ViWin*::completion_neo_c2(ViWin* self, Vi* nvi) version 20
{
    auto line = self.texts.item(self.scroll+self.cursorY, null);

    wchar_t* p = line + self.cursorX;
    p--;

    while(p >= line) {
        if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || (*p >= '0' && *p <= '9') || *p == '_')
        {
            p--;
        }
        else {
            break;
        }
    }

    bool method_completion = false;
    if(*p == '.') {
        method_completion = true;
    }

    p++;
    
    int len = (line + self.cursorX - p);
    int len2 = (p-line-1);

    auto word = line.substring(self.cursorX-len, self.cursorX);

    FILE* f = fopen("neo_c2_completion.tmp", "w");
    
    int i = 0;
    foreach(it, self.texts) {
        auto line = self.texts.item(i, null);
        
        if(i < self.cursorY+self.scroll) {
            fprintf(f, "%ls\n", line);
        }
        else {
            break;
        }
        
        i++;
    }
    
    fclose(f);

    if(method_completion) {
        FILE* f = fopen("neo_c2_completion2.tmp", "w");
        
        int i = 0;
        foreach(it, self.texts) {
            auto line = self.texts.item(i, null);
            
            if(i < self.cursorY+self.scroll) {
                fprintf(f, "%ls\n", line);
            }
            else if(i == self.cursorY+self.scroll) {
                fprintf(f, "%ls\n", line.substring(0, len2));
            }
            else {
                break;
            }
            
            i++;
        }
        
        fclose(f);

        char cmdline[128];
        snprintf(cmdline, 128, "neo-c2 -I. type neo_c2_completion2.tmp");
        
        auto command_result = new buffer.initialize();
        
        if(get_command_result2(command_result, cmdline)) {
            auto li = command_result.to_string().scan("^[a-zA-Z0-9_]+".to_regex());
            if(li.length() > 0) {
                auto type_name = li.item(0, null);

                char header_name[512];

                snprintf(header_name, 512, "%s_", type_name);

                char cmdline[128];

                char dname[PATH_MAX];
                strncpy(dname, self.fileName, PATH_MAX);

                char* dname2 = dirname(dname);

                snprintf(cmdline, 128, "neo-c2 -I. -I%s function neo_c2_completion.tmp | egrep '^[a-zA-Z0-9_]+'", dname2);
                
                auto candidates = new list<wstring>.initialize();
                
                auto command_result2 = new buffer.initialize();
                
                if(get_command_result2(command_result2, cmdline)) {
                    auto candidates3 = new list<wstring>.initialize();
                    auto candidates2 = command_result2.to_string().split_char('\n');
                    
                    foreach(it, candidates2) {
                        char fun_name[512];

                        snprintf(fun_name, 512, "%s%s", header_name, word.to_string());

                        if(it.index(fun_name, -1) == 0)
                        {
                            char* p = strstr(it, ") extern ");

                            if(p) {
                                auto it2 = it.substring(0, p - it+1);
                                candidates3.push_back(it2.to_wstring());
                            }
                        }
                    }
                
                    
                    /// field ///
                    auto name_fields = new list<wstring>.initialize();
                    auto type_fields = new list<wstring>.initialize();
                    auto fields = command_result.to_string().scan("[0-9]+[ ]+\([a-zA-Z0-9_]+)[ ]+\([a-zA-Z0-9_]+)".to_regex());
                    
                    int i = 0;
                    foreach(it, fields) {
                        if(i % 3 == 1) {
                            type_fields.push_back(it.to_wstring());
                        }
                        else if(i % 3 == 2) {
                            name_fields.push_back(it.to_wstring());
                        }
                        
                        i++;
                    }
                    
                    i = 0;
                    foreach(it, name_fields) {
                        auto type = type_fields.item(i, null);

                        char field_candidate[256];
                        snprintf(field_candidate, 256, "%ls %ls", it, type);
                        if(it.to_string().index(word.to_string(), -1) == 0) {
                            candidates3.push_back(field_candidate.to_wstring());
                        }
                        
                        i++;
                    }
                    
                    /// sort //
                    auto candidates4 = candidates3.sort_with_lambda(int lambda(wchar_t* left, wchar_t* right) { return wcscmp(left, right); }).uniq();
                
                    /// go ///
                    auto candidate = nonullable self.selector2(candidates4);
                    
                    if(candidate) {
                        if(candidate.to_string().match("^[a-zA-Z0-9_]+ [a-zA-Z0-9_]+$".to_regex())) {
                            auto li = candidate.to_string().scan("[a-zA-Z0-9_]+".to_regex());

                            if(li.length() > 0) {
                                int len2 = li.item(0, null).length();
                    
                                auto append = candidate.substring(len, len2);
                                self.insertText(append);
                            }
                        }
                        else {
                            auto li = candidate.to_string().scan("[a-zA-Z0-9_]+".to_regex());
                            
                            if(li.length() > 0) {
                                int len2 = li.item(0, null).length();
                    
                                auto append = candidate.substring(0, len2+1).substring(strlen(header_name), -1).substring(len, -1);
                            
                                self.insertText(append);
                            }
                        }
                    }
                }
            }
        }
    
        system("rm -f neo_c2_completion2.tmp");
        system("rm -f neo_c2_completion2.tmp.i");
    }
    else {
        char dname[PATH_MAX];
        strncpy(dname, self.fileName, PATH_MAX);

        char* dname2 = dirname(dname);

        char cmdline[128];
        snprintf(cmdline, 128, "neo-c2 -I. -I%s function neo_c2_completion.tmp | egrep '^[a-zA-Z0-9_]+'", dname2);
        
        auto candidates = new list<wstring>.initialize();
        
        auto command_result = new buffer.initialize();
        
        if(get_command_result2(command_result, cmdline)) {
            auto candidates3 = new list<wstring>.initialize();
            auto candidates2 = command_result.to_string().split_char('\n');
            
            foreach(it, candidates2) {
                if(it.index(word.to_string(), -1) == 0)
                {
                    char* p = strstr(it, ") extern ");

                    if(p) {
                        auto it2 = it.substring(0, p - it+1);
                        candidates3.push_back(it2.to_wstring());
                    }
                }
            }
        
            auto candidates4 = candidates3.sort_with_lambda(int lambda(wchar_t* left, wchar_t* right) { return wcscmp(left, right); }).uniq();
        
            auto candidate = nonullable self.selector2(candidates4);
            
            if(candidate) {
                
                auto li = candidate.to_string().scan("[a-zA-Z0-9_]+".to_regex());
                
                if(li.length() > 0) {
                    int len2 = li.item(0, null).length();
                
                    auto append = candidate.substring(0, len2+1).substring(len, -1);
                    self.insertText(append);
                }
            }
        }
    }
    
    system("rm -f neo_c2_completion.tmp");
    system("rm -f neo_c2_completion.tmp.i");
}
