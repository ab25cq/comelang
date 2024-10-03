#include "common.h"
#include <limits.h>

void ViWin*::binaryModeView(ViWin* self, Vi* nvi)
{
    werase(self.win);
    
    int maxy = getmaxy(self.win);
    int maxx = getmaxx(self.win);

    if(self.texts.length() > 0) {
        int it2 = 0;
        foreach(it, self.texts.sublist(self.scroll, self.scroll+maxy-1))
        {
            int len = self.texts_length.item(self.scroll + it2, -1);
            wchar_t* line = self.texts.item(self.scroll + it2, null);
            
            if(line != null && len != -1) {
                if(self.cursorY == it2 && nvi.activeWin.equals(self)) 
                {
                    for(int i=0; i<len; i++) {
                        if(i == self.cursorX) {
                            wattron(self.win, A_REVERSE);
                            mvwprintw(self.win, it2, i*3, "%02x", line[i]);
                            wattroff(self.win, A_REVERSE);
                        }
                        else {
                            mvwprintw(self.win, it2, i*3, "%02x", line[i]);
                        }
                    }
                }
                else {
                    for(int i=0; i<len; i++) {
                        mvwprintw(self.win, it2, i*3, "%02x", line[i]);
                    }
                }
            }

            it2++;
        }
    }

    wattron(self.win, A_REVERSE);
    mvwprintw(self.win, self.height-1, 0, "BINARY MODE x %d y %d scroll %d", self.cursorX, self.scroll+self.cursorY, self.scroll);
    wattroff(self.win, A_REVERSE);

    wrefresh(self.win);
}

void ViWin*::view(ViWin* self, Vi* nvi) version 21
{
    if(((gBinaryMode && nvi.mode == kEditMode) || (gBinaryMode && nvi.mode == kBinaryMode)) && self.equals(nvi.activeWin)) 
    {
        self.binaryModeView(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void ViWin*::insertBinary(ViWin* self, wchar_t c) 
{
//    self.pushUndo();
    
    int len = self.texts_length.item(self.scroll+self.cursorY, -1);
    wchar_t* line = self.texts.item(self.scroll+self.cursorY, null);
    
    if(line == null || len == -1) {
        wchar_t*% new_line = new wchar_t[2];
        memcpy(new_line, &c, sizeof(wchar_t));
        wchar_t sentinel = L'\0';
        memcpy(new_line + sizeof(wchar_t), &sentinel, sizeof(wchar_t));
        self.texts.push_back(new_line);
        self.texts_length.push_back(1);
        self.cursorX++;
    }
    else if(self.cursorX == 16 && len >= 16) {
        wchar_t*% new_line = new wchar_t[2];
        memcpy(new_line, &c, sizeof(wchar_t));
        wchar_t sentinel = L'\0';
        memcpy(new_line + 1, &sentinel, sizeof(wchar_t));
        self.texts.insert(self.scroll+self.cursorY+1, new_line);
        self.texts_length.insert(self.scroll+self.cursorY+1, 1);
        self.cursorX=1;
        self.cursorY++;
    }
    else if(self.cursorX >= len) {
        wchar_t*% new_line = new wchar_t[len+2];
        memcpy(new_line, line, sizeof(wchar_t)*len);
        memcpy(new_line + len, &c, sizeof(wchar_t));
        wchar_t sentinel = L'\0';
        memcpy(new_line + len+1, &sentinel, sizeof(wchar_t));
        self.texts.replace(self.scroll+self.cursorY, new_line);
        self.texts_length.replace(self.scroll+self.cursorY, len+1);
        self.cursorX++;
    }
    else {
        wchar_t*% new_line = new wchar_t[len+2];
        
        memcpy(new_line, line, sizeof(wchar_t)*self.cursorX);
        memcpy(new_line + self.cursorX, &c, sizeof(wchar_t));
        memcpy(new_line + self.cursorX + 1, line + self.cursorX + 1, sizeof(wchar_t)*(len-self.cursorX-1));
        
        wchar_t sentinel = L'\0';
        memcpy(new_line + len+1, &sentinel, sizeof(wchar_t));
        
        self.texts.replace(self.scroll+self.cursorY, new_line);
        self.texts_length.replace(self.scroll+self.cursorY, len);
    }
}

void ViWin*::inputBinaryMode(ViWin* self, Vi* nvi)
{
    auto key = self.getKey(false);
    
    if(key >= '0' && key <= '9') {
        key = key - '0';
        
        auto key2 = self.getKey(false);
        
        if(key2 >= 'a' && key2 <= 'f') {
            key2 = key2 - 'a' + 10;
            
            self.insertBinary(key * 16 + key2);
        }
        else if(key2 >= 'A' && key2 <= 'F') {
            key2 = key2 - 'A' + 10;
            
            self.insertBinary(key * 16 + key2);
        }
        else if(key2 >= '0' && key2 <= '9') {
            key2 = key2 - '0';
            
            self.insertBinary(key * 16 + key2);
        }
    }
    else if(key >= 'a' && key <= 'f') {
        key = key - 'a' + 10;
        
        auto key2 = self.getKey(false);
        
        if(key2 >= 'a' && key2 <= 'f') {
            key2 = key2 - 'a' + 10;
            
            self.insertBinary(key * 16 + key2);
        }
        else if(key2 >= 'A' && key2 <= 'F') {
            key2 = key2 - 'A' + 10;
            
            self.insertBinary(key * 16 + key2);
        }
        else if(key2 >= '0' && key2 <= '9') {
            key2 = key2 - '0';
            
            self.insertBinary(key * 16 + key2);
        }
    }
    else if(key >= 'A' && key <= 'F') {
        key = key - 'A' + 10;
        
        auto key2 = self.getKey(false);
        
        if(key2 >= 'a' && key2 <= 'f') {
            key2 = key2 - 'a' + 10;
            
            self.insertBinary(key * 16 + key2);
        }
        else if(key2 >= 'A' && key2 <= 'F') {
            key2 = key2 - 'A' + 10;
            
            self.insertBinary(key * 16 + key2);
        }
        else if(key2 >= '0' && key2 <= '9') {
            key2 = key2 - '0';
            
            self.insertBinary(key * 16 + key2);
        }
    }
    else if(key == 3 || key == 27) {
        nvi.exitFromBinaryMode();
    }
    else if(key == 10) {
        self.nextLine();
    }
    else if(key == 8 || key == 127 || key == KEY_BACKSPACE) {
        self.backSpace();
    }
    else if(key == KEY_LEFT) {
        self.backward();
        self.saveInputedKeyOnTheMovingCursor();
    }
    else if(key == KEY_RIGHT) {
        wchar_t* line = self.texts.item(self.scroll + self.cursorY, null);
        if(line) {
            if(wcslen(line)-1 == self.cursorX) {
                self.cursorX++;
                self.saveInputedKeyOnTheMovingCursor();
            }
            else {
                self.forward();
                self.saveInputedKeyOnTheMovingCursor();
            }
        }
    }
    else if(key == KEY_UP) {
        self.prevLine();
        self.saveInputedKeyOnTheMovingCursor();
    }
    else if(key == KEY_DOWN) {
        self.nextLine();
        self.saveInputedKeyOnTheMovingCursor();
    }
}

void ViWin*::input(ViWin* self, Vi* nvi) version 21
{
    if((gBinaryMode && nvi.mode == kBinaryMode) && self.equals(nvi.activeWin)) 
    {
        self.inputBinaryMode(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void Vi*::enterBinaryMode(Vi* self)
{
    self.mode = kBinaryMode;
    self.activeWin.writedFlagOn();
    self.activeWin.modifyOverCursorXValue();
    clear();
    self.activeWin.view(self);
    refresh();
}

void Vi*::enterBinaryMode2(Vi* self)
{
    self.mode = kBinaryMode;
    self.activeWin.writedFlagOn();
    self.activeWin.modifyOverCursorXValue();
    clear();
    self.activeWin.view(self);
    refresh();
    self.activeWin.cursorX++;
}

void Vi*::enterBinaryMode3(Vi* self)
{
    self.mode = kBinaryMode;
    self.activeWin.writedFlagOn();
    self.activeWin.modifyOverCursorXValue();
    clear();
    self.activeWin.view(self);
    refresh();
    
    ViWin* win = self.activeWin;
    
    int len = win.texts_length.item(win.scroll+win.cursorY, -1);
    if(len != -1) {
        win.cursorX = len;
    }
}


void Vi*::exitFromBinaryMode(Vi* self)
{
    self.mode = kEditMode;
    self.activeWin.saveInputedKey();
}

Vi*% Vi*::initialize(Vi*% self) version 21
{
    auto result = inherit(self);

    result.mode = kEditMode;
    
    if(gBinaryMode) {
        result.events.replace('i', void lambda(Vi* self, int key) 
        {
            self.enterBinaryMode();
        });
        result.events.replace('a', void lambda(Vi* self, int key) 
        {
            self.enterBinaryMode2();
        });
        result.events.replace('A', void lambda(Vi* self, int key) 
        {
            self.enterBinaryMode3();
        });
    }

    return result;
}

