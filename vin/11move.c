#include "common.h"

void ViWin*::toggleBraceForward(ViWin* self, wchar_t head, wchar_t tail) 
{
    int cursor_y = self.scroll + self.cursorY;
    int cursor_x = -1;

    int nest = 0;

    auto line = self.texts.item(cursor_y, null);

    wchar_t* p = line + self.cursorX+1;

    while(p < line + line.length()) {
        if(*p == tail) {
            if(nest == 0) {
                self.saveReturnPoint();

                cursor_x = (p - line);
                self.cursorX = cursor_x;
                break;
            }

            p++;
            nest--;
        }
        else if(*p == head) {
            p++;

            nest++;
        }
        else {
            p++;
        }
    }
    
    if(cursor_x == -1) {
        cursor_y++;

        int it2 = 0;
        foreach(it, self.texts.sublist(self.scroll+self.cursorY+1, -1)) {
            wchar_t* p = it;

            while(p < it + it.length()) {
                if(*p == tail) {
                    if(nest == 0) {
                        self.saveReturnPoint();

                        self.scroll = self.scroll + self.cursorY +1+ it2;
                        self.cursorY = 0;
                        self.cursorX = p - it;
                        self.centeringCursor();
                        return;
                    }

                    p++;
                    nest--;
                }
                else if(*p == head) {
                    p++;

                    nest++;
                }
                else {
                    p++;
                }
            }

            cursor_y++;
            it2++;
        }
    }
}

void ViWin*::toggleBraceBack(ViWin* self, wchar_t head, wchar_t tail) 
{
    int cursor_y = self.scroll + self.cursorY;
    int cursor_x = -1;

    int nest = 0;

    auto line = self.texts.item(cursor_y, null);

    wchar_t* p = line + self.cursorX-1;

    while(p >= line) {
        if(*p == head) {
            if(nest == 0) {
                self.saveReturnPoint();
                cursor_x = (p - line);
                self.cursorX = cursor_x;
                break;
            }

            p--;
            nest--;
        }
        else if(*p == tail) {
            p--;

            nest++;
        }
        else {
            p--;
        }
    }

    if(cursor_x == -1) {
        cursor_y--;
        
        int it2 = 0;
        foreach(it, self.texts.sublist(0, self.scroll+self.cursorY).reverse()) {
            wchar_t* p = it + it.length();
            
            while(p >= it) {
                if(*p == head) {
                    if(nest == 0) {
                        self.saveReturnPoint();

                        cursor_x = (p - it);
                        self.scroll = self.cursorY + self.scroll - it2 -1;
                        self.cursorY = 0;
                        self.cursorX = cursor_x;
                        self.centeringCursor();
                        return;
                    }

                    p--;
                    nest--;
                }
                else if(*p == tail) {
                    p--;

                    nest++;
                }
                else {
                    p--;
                }
            }

            cursor_y--;
            it2++;
        }
    }
}

void ViWin*::toggleCommentForward(ViWin* self)
{
    int head = self.scroll + self.cursorY;
    int tail = -1;
    
    int nest = 0;
    
    int it2 = 0;
    foreach(it, self.texts.sublist(head, tail)) {
        int index = it.to_string().index("*/", -1);
        
        int index2 = it.to_string().index("/*", -1);
        
        if(index2 != -1) {
            nest++;
        }
        
        if(index != -1) {
            nest--;
            
            if(nest <= 0) {
                self.saveReturnPoint();
                self.cursorX = index;
                self.scroll = 0;
                self.cursorY = it2 + head;
                self.modifyOverCursorYValue();
                self.centeringCursor();
                break;
            }
        }

        it2++;
    }
}

void ViWin*::toggleCommentBackward(ViWin* self)
{
    int head = 0;
    int tail = self.scroll + self.cursorY + 1;
    
    int nest = 0;
    
    int it2 = 0;
    foreach(it, self.texts.sublist(head, tail).reverse()) {
        int index = it.to_string().index("/*", -1);
        
        int index2 = it.to_string().index("*/", -1);
        
        if(index2 != -1) {
            nest++;
        }
        
        if(index != -1) {
            nest--;
            
            if(nest == 0) {
                self.saveReturnPoint();
                self.cursorX = index;
                self.scroll = 0;
                self.cursorY = tail - it2 -1;
                self.modifyOverCursorYValue();
                self.centeringCursor();
                break;
            }
        }

        it2++;
    }
}

void ViWin*::gotoBraceEnd(ViWin* self, Vi* nvi) version 11
{
    auto line = self.texts.item(self.scroll+self.cursorY, null);

    auto c = line[self.cursorX];
    wchar_t c1 = 0;
    wchar_t c2 = 0;
    if(self.cursorX - 1 >= 0) {
        c1 = line[self.cursorX-1];
    }
    if(self.cursorX + 1 < line.length()) {
        c2 = line[self.cursorX+1];
    }
    
    switch(c) {
        case '*':
            if(c1 == '/') {
                self.toggleCommentForward();
            }
            if(c2 == '/') {
                self.toggleCommentBackward();
            }
            break;
            
        case '/':
            if(c1 == '*') {
                self.toggleCommentBackward();
            }
            if(c2 == '*') {
                self.toggleCommentForward();
            }
            break;
            
        case '(':
            self.toggleBraceForward('(', ')');
            break;

        case '{':
            self.toggleBraceForward('{', '}');
            break;

        case '[':
            self.toggleBraceForward('[', ']');
            break;

        case '<':
            self.toggleBraceForward('<', '>');
            break;

        case ')':
            self.toggleBraceBack('(', ')');
            break;

        case '}':
            self.toggleBraceBack('{', '}');
            break;

        case ']':
            self.toggleBraceBack('[', ']');

        case '>':
            self.toggleBraceBack('<', '>');
            break;
    }
}

void ViWin*::gotoFunctionTop(ViWin* self, Vi* nvi) 
{
    int it2 = 0;
    foreach(it, self.texts.sublist(0, self.scroll+self.cursorY).reverse()) {
        come_regex*% reg = /^{/;
        come_regex*% reg2 = /^[a-zA-Z].*{$/;
        
        if(it.to_string().match(reg)
            || it.to_string().match(reg2))
        {
            self.saveReturnPoint();

            self.cursorX = 0;
            self.cursorY = self.cursorY - it2 -1;
            self.modifyUnderCursorYValue();
            self.modifyOverCursorYValue();
            break;
        }

        it2++;
    }
}

void ViWin*::gotoMethodTop(ViWin* self, Vi* nvi) 
{
    int it2 = 0;
    foreach(it, self.texts.sublist(0, self.scroll+self.cursorY).reverse()) {
        come_regex*% reg = /^ +{/;
        come_regex*% reg2 = /^ +[a-zA-Z].*{$/;
        come_regex*% reg3 = /^{/;
        come_regex*% reg4 = /^[a-zA-Z].*{$/;
        
        if(reg && reg2 && reg3 && reg4 && 
            ((it.to_string().match(reg))
            || (it.to_string().match(reg2))
            || (it.to_string().match(reg3))
            || (it.to_string().match(reg4))))
        {
            self.saveReturnPoint();

            self.cursorX = 0;
            self.cursorY = self.cursorY - it2 -1;
            self.modifyUnderCursorYValue();
            self.modifyOverCursorYValue();
            break;
        }

        it2++;
    }
}

void ViWin*::gotoFunctionBottom(ViWin* self, Vi* nvi)  
{
    int cursor_y = self.scroll+self.cursorY + 1;

    int it2 = 0;
    foreach(it, self.texts.sublist(self.scroll+self.cursorY+1, -1)) {
        if(it.to_string().match(r"^}")) 
        {
            self.saveReturnPoint();

            self.cursorY += it2 + 1;
            self.cursorX = 0;
            self.modifyOverCursorYValue();
            break;
        }

        cursor_y++;
        it2++;
    }
}

Vi*% Vi*::initialize(Vi*% self) version 11
{
    auto result = inherit(self);

    result.events.replace('%', void lambda(Vi* self, int key) {
        self.activeWin.gotoBraceEnd(self);
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });

    result.events.replace('[', void lambda(Vi* self, int key) {
        auto key2 = self.activeWin.getKey(false);

        switch(key2) {
            case '[':
                self.activeWin.gotoFunctionTop(self);
                self.activeWin.centeringCursor();
                self.activeWin.saveInputedKeyOnTheMovingCursor();
                break;
                
            case 'm':
            case 'M':
                self.activeWin.gotoMethodTop(self);
                self.activeWin.saveInputedKeyOnTheMovingCursor();
                break;
        }
    });

    result.events.replace(']', void lambda(Vi* self, int key) {
        auto key2 = self.activeWin.getKey(false);

        switch(key2) {
            case ']':
                self.activeWin.gotoFunctionBottom(self);
                self.activeWin.centeringCursor();
                self.activeWin.saveInputedKeyOnTheMovingCursor();
                break;
        }
    });

    return result;
}
