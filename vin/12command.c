#include "common.h"
#include <libgen.h>
#include <dirent.h>

static bool is_directory_path(char* path)
{
    DIR* dir = opendir(path);
    if(dir) {
        closedir(dir);
        return true;
    }
    else {
        return false;
    }
}

void ViWin*::commandModeView(ViWin* self, Vi* nvi) 
{
    werase(self.win);

    self.textsView(nvi);

    wattron(self.win, A_REVERSE);
    mvwprintw(self.win, self.height-1, 0, ":%s", nvi.commandString.printable());
    wattroff(self.win, A_REVERSE);

    wrefresh(self.win);
}

string ViWin*::selector(ViWin* self, list<string>* lines) 
{
    bool end_of_select = false;
    bool canceled = false;

    int maxx = getmaxx(self.win);
    int maxy = getmaxy(self.win);

    int scrolltop = 0;
    int cursor = 0;

    while(!end_of_select) {
        clear();
        int maxy2 = lines.length() - scrolltop;

        /// view ///
        for(int y=0; y<maxy && y < maxy2; y++) {
            auto it = lines.item(scrolltop+y, null);

            auto line = it.substring(0, maxx-1);

            if(cursor == y) {
                attron(A_REVERSE);
                mvprintw(y, 0, "%s", line);
                attroff(A_REVERSE);
            }
            else {
                mvprintw(y, 0, "%s", line);
            }
        }
        refresh();

        /// input ///
        auto key = getch();


        switch(key) {
            case KEY_UP:
            case 'k':
            case 'P'-'A'+1:
                cursor--;
                break;

            case KEY_DOWN:
            case 'j':
            case 'N'-'A'+1:
            case (('I'-'A')+1):
                cursor++;
                break;

            case 'D'-'A'+1:
                cursor+=10;
                break;
           
            case (('U'-'A')+1):
                cursor-=10;
                break;

            case ('C'-'A')+1:
            case 'q':
            case ('['-'A')+1:
                canceled = true;
                end_of_select = true;
                break;

            case KEY_ENTER:
            case ('J'-'A')+1:
                end_of_select = true;
                break;
        }
        
        /// modification ///
        if(cursor < 0) {
            int scroll_size = -cursor +1;
            
            cursor = 0;
            scrolltop-=scroll_size;

            if(scrolltop < 0) {
                scrolltop = 0;
                cursor = 0;
            }
        }

        if(maxy2 < maxy) {
            if(cursor >= maxy2) {
                cursor = maxy2 - 1;
            }
        }
        else {
            if(cursor >= maxy) {
                int scroll_size = cursor - maxy + 1;

                scrolltop += scroll_size;
                cursor -= scroll_size;
            }
        }
    }

    if(canceled) {
        return string("");
    }
    return string(lines.item(scrolltop+cursor, string("")));
}

void ViWin*::fileCompetion(ViWin* self, Vi* nvi) 
{
    char* line = nvi.commandString;

    char* p = line + strlen(line) -1;
    
    while(p >= line) {
        if(*p == ' ' || *p == '\t') {
            p++;
            break;
        }
        else {
            p--;
        }
    }
    
    auto word = string(p);

    string dir_name = null;
    if(strlen(word) == 0) {
        dir_name = string("");
    }
    else if(word[strlen(word)-1] == '/') {
        dir_name = string(word);
    }
    else {
        string tmp = clone word;
        char* dname = dirname(tmp);

        if(strcmp(dname, "/") == 0) {
            dir_name = string("/");
        }
        else {
            dir_name = xsprintf("%s/", dname);
        }
    }

    auto words = new list<string>.initialize();

    if(dir_name.equals("./")) {
        char* cwd = getenv("PWD");
        
        if(cwd == null) {
            return;
        }
    
        DIR* dir = opendir(cwd);
    
        if(dir == null) {
            return;
        }
    
        while(true) {
            struct dirent* entry = readdir(dir);
    
            if(entry == null) {
                break;
            }
            
            string path = xsprintf("%s/%s", cwd, entry->d_name);
            
            if(is_directory_path(path)) {
                auto item = xsprintf("%s/", entry->d_name);
                words.push_back(item);
            }
            else {
                words.push_back(string(entry->d_name));
            }
        }
    
        closedir(dir);
    }
    else if(dir_name[0] == '/') {
        DIR* dir;
        if(strcmp(word, "/") != 0 && word[strlen(word)-1] == '/') {
            dir = opendir(word.substring(0, -2));
        }
        else {
            dir = opendir(dir_name);
        }
    
        if(dir == null) {
            return;
        }
    
        while(true) {
            struct dirent* entry = readdir(dir);
    
            if(entry == null) {
                break;
            }
            
            string path = xsprintf("%s%s", dir_name, entry->d_name);
            
            if(is_directory_path(path)) {
                auto item = xsprintf("%s%s/", dir_name, entry->d_name);
                words.push_back(item);
            }
            else {
                words.push_back(xsprintf("%s%s", dir_name, string(entry->d_name)));
            }
        }
    
        closedir(dir);
    }
    else {
        DIR* dir;
        if(word[strlen(word)-1] == '/') {
            dir = opendir(word.substring(0, -2));
        }
        else {
            dir = opendir(dir_name);
        }
    
        if(dir == null) {
            return;
        }
    
        while(true) {
            struct dirent* entry = readdir(dir);
    
            if(entry == null) {
                break;
            }
            
            string path = xsprintf("%s%s", dir_name, entry->d_name);
            
            if(is_directory_path(path)) {
                auto item = xsprintf("%s%s/", dir_name, entry->d_name);
                words.push_back(item);
            }
            else {
                words.push_back(xsprintf("%s%s", dir_name, entry->d_name));
            }
        }
    
        closedir(dir);
    }

    auto words2 = new list<string>.initialize();
    
    foreach(it, words) {
        if(strcmp(word, "") != 0 && strstr(it, word) == it) {
            words2.push_back(clone it);
        }
    }
    auto words3 = words2.sort_with_lambda(int lambda(char* left, char* right) { return strcmp(left, right);} );
    
    auto file_name = self.selector(words3).substring(strlen(word), -1);
    
    strncat(nvi.commandString, file_name, 128);
}

void ViWin*::commandModeInput(ViWin* self, Vi* nvi) 
{
    auto key = self.getKey(false);

    char a[128];
    snprintf(a, 128, "%c", key);

    switch(key) {
        case '\n':
            nvi.exitFromComandMode();
            break;

        case 3:
        case 27:
            nvi.mode = kEditMode;
            break;
            
        case 'V'-'A'+1: {
            auto key2 = self.getKey(false);
            
            if(key2 == 10) {
                char a[128];
                a[0] = 13;
                a[1] = '\0';
                strncat(nvi.commandString, a, 128);
            }
            else {
                char a[128];
                a[0] = key2;
                a[1] = '\0';
                strncat(nvi.commandString, a, 128);
            }
            }
            break;
            
        case '\t':
            self.fileCompetion(nvi);
            break;

        case 8:
        case 127:
        case KEY_BACKSPACE: {
            int len = strlen(nvi.commandString);
            if(len > 0) {
                nvi.commandString[len-1] = '\0';
            }
            }
            break;

        default: {
            strncat(nvi.commandString, a, 128);
            }
            break;
    }
}

void ViWin*::view(ViWin* self, Vi* nvi) version 12
{
    if(nvi.mode == kCommandMode && self == nvi.activeWin) {
        self.commandModeView(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void ViWin*::input(ViWin* self, Vi* nvi) version 12
{
    if(nvi.mode == kCommandMode) {
        self.commandModeInput(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void ViWin*::subAllTextsFromCommandMode(ViWin* self, Vi* nvi) 
{
    var p = strstr(nvi.commandString, "%s/") + strlen("%s/");
    
    var p2 = strstr(p, "/") + strlen("/");
    var p3 = strstr(p2, "/");
    
    if(p && p2 && p3) {
        auto str = p.substring(0, p2 -p -1);
        auto replace = p2.substring(0, p3 - p2);
        
        if(str != null && replace != null) {
            self.pushUndo();
            int it2 = 0;
            foreach(it, self.texts) {
                wstring new_line = it.to_string().sub_plain(str, replace).to_wstring();
                
                self.texts.replace(it2, new_line);
                self.texts_length.replace(it2, wcslen(new_line));
    
                it2++;
            }
        }
    }
}

void Vi*::enterComandMode(Vi* self) 
{
    self.mode = kCommandMode;
    strncpy(self.commandString, "", 128);
}

void Vi*::exitFromComandMode(Vi* self) 
{
    if(string(self.commandString).index("sp", -1) == 0) {
        string file_name = string(self.commandString).scan(/sp \(.+\)/).item(1, null).to_string();

        if(file_name != null) {
            self.openNewFile(file_name);
        }
    }
    else if(string(self.commandString).index("paste", -1) == 0) {
        self.activeWin.pasteMode = !self.activeWin.pasteMode;
    }
    else {
        if(string(self.commandString).index("%", -1) != -1) {
            self.activeWin.subAllTextsFromCommandMode(self);
            self.mode = kEditMode;
        }
        if(string(self.commandString).index("w", -1) != -1) {
            self.activeWin.writeFile(gBinaryMode);
        }
        if(string(self.commandString).index("q", -1) != -1) {
            bool writed = self.activeWin.writed;
            
            if(!writed || string(self.commandString).index("!", -1) != -1) {
                if(self.wins.length() == 1) {
                    self.appEnd = true;
                }
                else {
                    self.closeActiveWin();
                }
            }
        }
        if(string(self.commandString).index("shell", -1) != -1) {
            endwin();
            
            (void)system("bash");

            self.init_curses();
        }
    }

    if(string(self.commandString).index("paste", -1) == 0) {
        self.enterInsertMode();
    }
    else {
        self.mode = kEditMode;
    }
}

Vi*% Vi*::initialize(Vi*% self) version 12
{
    auto result = inherit(self);

    strncpy(result.commandString, "", 128);

    result.events.replace(':', void lambda(Vi* self, int key) {
        self.enterComandMode();
    });

    return result;
}

