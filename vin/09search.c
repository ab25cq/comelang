#include "common.h"

void ViWin*::searchModeView(ViWin* self, Vi* nvi)
{
    werase(self.win);

    self.textsView(nvi);

    wattron(self.win, A_REVERSE);
    if(nvi.searchReverse) {
        mvwprintw(self.win, self.height-1, 0, "?%ls", nvi.searchString);
    }
    else {
        mvwprintw(self.win, self.height-1, 0, "/%ls", nvi.searchString);
    }
    wattroff(self.win, A_REVERSE);

    wrefresh(self.win);
}

void ViWin*::view(ViWin* self, Vi* nvi) version 9
{
    if(nvi.mode == kSearchMode && self.equals(nvi.activeWin)) {
        self.searchModeView(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void ViWin*::search(ViWin* self, Vi* nvi) 
{
    if(wcscmp(nvi.searchString, wstring("")) == 0) 
    {
        return;
    }
    
    auto cursor_line = self.texts.item(self.scroll+self.cursorY, null);

    int x = cursor_line.substring(self.cursorX+1, -1).index(nvi.searchString, -1);

    if(x != -1) {
        self.saveReturnPoint();

        x += self.cursorX + 1;
        self.cursorX = x;
    }
    else {
        int it2 = 0;
        foreach(it, self.texts.sublist(self.scroll+self.cursorY+1, -1)) {
            int x;
            
            if(nvi.regexSearch) {
                nvi.searchString.to_string().to_regex().if {
                    x = it.to_string().index_regex(Value, -1);
                }
            }
            else {
                x = it.index(nvi.searchString, -1);
            }

            if(x != -1) {
                self.saveReturnPoint();

                self.cursorY += it2 + 1;
                self.modifyOverCursorYValue();
                self.cursorX = x;
                break;
            }
            it2++;
        }
    }
}

void ViWin*::searchReverse(ViWin* self, Vi* nvi) 
{
    if(wcscmp(nvi.searchString, wstring("")) == 0) 
    {
        return;
    }
    
    auto cursor_line = self.texts.item(self.scroll+self.cursorY, null);

    int x;
    if(self.cursorX < nvi.searchString.length())
    {
        x = -1;
    }
    else {
        x = cursor_line.substring(0, self.cursorX-1).rindex(nvi.searchString, -1)
    }

    if(x != -1) {
        self.saveReturnPoint();

        self.cursorX = x;
    }
    else {
        int it2 = 0;
        foreach(it, self.texts.sublist(0, self.scroll+self.cursorY).reverse()) {
            int x;
            if(nvi.regexSearch) {
                nvi.searchString.to_string().to_regex().if {
                    x = it.to_string().index_regex(Value, -1);
                }
            }
            else {
                x = it.rindex(nvi.searchString, -1);
            }

            if(x != -1) {
                self.saveReturnPoint();

                self.cursorY = self.cursorY - it2 -1;
                self.modifyUnderCursorYValue();
                self.cursorX = x;
                break;
            }

            it2++;
        }
    }
}

void ViWin*::searchWordOnCursor(ViWin* self, Vi* nvi)
{
    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    if(self.cursorX < line.length()) {
        int cursor_x_before = self.cursorX;
        wchar_t* p = line + self.cursorX;

        if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || (*p >= '0' && *p <= '9') || *p == '_')
        {
            while((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || (*p >= '0' && *p <= '9') || *p == '_')
            {
                p--;
                self.cursorX--;
            }
            
            if(self.cursorX < 0) {
                self.cursorX = 0;
                p = line;
            }
            else {
                self.cursorX++;
                p++;
            }
        }
        
        int word_head = self.cursorX;
        
        if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || (*p >= '0' && *p <= '9') || *p == '_')
        {
            while((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || (*p >= '0' && *p <= '9') || *p == '_')
            {
                p++;
                self.cursorX++;
            }
        }

        auto search_word = line.substring(word_head, self.cursorX);
        wcsncpy(nvi.searchString, search_word, 128);
        
        self.cursorX = cursor_x_before;

        nvi.searchReverse = false;
        self.search(nvi);
    }
}

void ViWin*::searchWordOnCursorReverse(ViWin* self, Vi* nvi)
{
    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    if(self.cursorX < line.length()) {
        int cursor_x_before = self.cursorX;
        wchar_t* p = line + self.cursorX;

        if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || (*p >= '0' && *p <= '9') || *p == '_')
        {
            while((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || (*p >= '0' && *p <= '9') || *p == '_')
            {
                p--;
                self.cursorX--;
            }
            
            if(self.cursorX < 0) {
                self.cursorX = 0;
                p = line;
            }
            else {
                self.cursorX++;
                p++;
            }
        }
        
        int word_head = self.cursorX;
        
        if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || (*p >= '0' && *p <= '9') || *p == '_')
        {
            while((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || (*p >= '0' && *p <= '9') || *p == '_')
            {
                p++;
                self.cursorX++;
            }
        }

        auto search_word = line.substring(word_head, self.cursorX);
        wcsncpy(nvi.searchString, search_word, 128);
        
        self.cursorX = cursor_x_before;
        nvi.searchReverse = true;
        self.searchReverse(nvi);
    }
}

void ViWin*::inputSearchlMode(ViWin* self, Vi* nvi)
{
    auto key = self.getKey(false);
    
    switch(key) {
        case 27:
            nvi.exitFromSearchMode();
            break;

        case 'C'-'A'+1:
            nvi.exitFromSearchMode();
            break;
            
        case 'V'-'A'+1: {
            key = self.getKey(false);
            char a[2];
            a[0] = key;
            a[1] = '\0';
            wcsncat(nvi.searchString, a.to_wstring(), 128);
            }
            break;

        case 'W'-'A'+1: {
            while(true) {
                wchar_t c = nvi.searchString[wcslen(nvi.searchString)-1];
                
                if(c == null) {
                    break;
                }
                else if(xiswalnum(c)) {
                    nvi.searchString[wcslen(nvi.searchString)-1] = '\0';
                }
                else {
                    break;
                }
            }
            
            }
            break;

        case 10:
            if(nvi.searchReverse) {
                self.searchReverse(nvi);
            }
            else {
                self.search(nvi);
            }
            nvi.exitFromSearchMode();
            break;
            
        case 8:
        case 127:
        case KEY_BACKSPACE:
            nvi.searchString[wcslen(nvi.searchString)-1] = '\0';
            break;

        default:
            wcsncat(nvi.searchString, xsprintf("%c", key).to_wstring(), 128);
            break;
    }
    self.saveInputedKey();
}

void ViWin*::input(ViWin* self, Vi* nvi) version 9
{
    if(nvi.mode == kSearchMode) {
        self.inputSearchlMode(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void Vi*::saveSearchString(Vi* self, char* file_name) 
{
    char* home = getenv("HOME");
    
    if(home == null) {
        return;
    }
    
    string file_name2 = xsprintf("%s/.vin", home);
    
    system(xsprintf("mkdir -p '%s'", file_name2));
    
    file_name2 = xsprintf("%s/.vin/%s", home, file_name);
    
    FILE* f = fopen(file_name2, "w");

    if(f == null) {
        return;
    }
    
    if(wcscmp(self.searchString, wstring("")) != 0) 
    {
        fprintf(f, "%ls\n", self.searchString);
    }
    
    fclose(f);
}

void Vi*::readSearchString(Vi* self, char* file_name) 
{
    char* home = getenv("HOME");
    
    if(home == null) {
        wcsncpy(self.searchString, wstring(""), 128);
        return;
    }
    
    string file_name2 = xsprintf("%s/.vin/%s", home, file_name);
    
    FILE* f = fopen(file_name2, "r");

    if(f == null) {
        wcsncpy(self.searchString, wstring(""), 128);
        return;
    }
    
    wchar_t line[4096];

    wchar_t* result = fgetws(line, 4096, f);
    
    if(result) {
        int len = wcslen(line);
        line[len-1] = 0;
        wcsncpy(self.searchString, line, 128);
    }

    fclose(f);
}

void Vi*::enterSearchMode(Vi* self, bool regex_search, bool reverse) version 9
{
    self.mode = kSearchMode;
    wcsncpy(self.searchString, wstring(""), 128);
    self.regexSearch = regex_search;
    self.searchReverse = reverse;
}

void Vi*::exitFromSearchMode(Vi* self) 
{
    self.mode = kEditMode;
}

Vi*% Vi*::initialize(Vi*% self) version 9
{
    auto result = inherit(self);
    
    result.readSearchString("searchString.vin");

    result.events.replace('/', void lambda(Vi* self, int key) 
    {
        self.enterSearchMode(false, false);
        self.activeWin.saveInputedKey();
    });

    result.events.replace('?', void lambda(Vi* self, int key) 
    {
        self.enterSearchMode(false, true);
        self.activeWin.saveInputedKey();
    });

    result.events.replace('n', void lambda(Vi* self, int key) 
    {
        if(self.searchReverse) {
            self.activeWin.searchReverse(self);
        }
        else {
            self.activeWin.search(self);
        }
        self.activeWin.saveInputedKeyOnTheMovingCursor();
        //self.activeWin.saveInputedKey();
    });
    result.events.replace('N', void lambda(Vi* self, int key) 
    {
        if(self.searchReverse) {
            self.activeWin.search(self);
        }
        else {
            self.activeWin.searchReverse(self);
        }
        self.activeWin.saveInputedKeyOnTheMovingCursor();
        //self.activeWin.saveInputedKey();
    });
    result.events.replace('*', void lambda(Vi* self, int key) 
    {
        self.activeWin.searchWordOnCursor(self);
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('#', void lambda(Vi* self, int key) 
    {
        self.activeWin.searchWordOnCursorReverse(self);
        self.activeWin.saveInputedKeyOnTheMovingCursor();
        self.activeWin.saveInputedKey();
    });

    return result;
}

