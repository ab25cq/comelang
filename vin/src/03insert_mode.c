#include "common.h"

void ViWin*::insertModeView(ViWin* self, Vi* nvi)
{
    werase(self.win);

    self.textsView(nvi);

    wattron(self.win, A_REVERSE);
    mvwprintw(self.win, self.height-1, 0, "INSERT MODE x %d y %d scroll %d", self.cursorX, self.scroll+self.cursorY, self.scroll);
    wattroff(self.win, A_REVERSE);

    wrefresh(self.win);
}

void ViWin*::view(ViWin* self, Vi* nvi) version 3
{
    if(nvi.mode == kInsertMode && self.equals(nvi.activeWin)) {
        self.insertModeView(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void ViWin*::insertText(ViWin* self, wstring text) {
    if(self.texts.length() == 0) {
        self.texts.push_back(clone text);
        self.cursorX += text.length();
    }
    else {
        auto old_line = self.texts.item(self.scroll+self.cursorY, wstring(""));

        auto new_line = wstring(xsprintf("%ls%ls%ls", old_line.substring(0, self.cursorX), text, old_line.substring(self.cursorX, -1)));

        self.texts.replace(self.scroll+self.cursorY, new_line);
        self.cursorX += text.length();
    }
}

void ViWin*::enterNewLine(ViWin* self)
{
    auto old_line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    int num_spaces = 0;
    for(int i=0; i<old_line.length(); i++)
    {
        if(old_line[i] == ' ') {
            num_spaces++;
        }
        else {
            break;
        }
    }

    auto head_new_line = new wchar_t[num_spaces+1];

    wcsncpy(head_new_line, wstring(""), num_spaces+1);

    for(int i=0; i<num_spaces; i++) {
        wcsncat(head_new_line, wstring(" "), num_spaces+1);
    }

    auto new_line1 = old_line.substring(0, self.cursorX);
    auto new_line2 = wstring(xsprintf("%ls%ls", head_new_line, old_line.substring(self.cursorX, -1)));

    self.texts.replace(self.scroll+self.cursorY, new_line1);
    self.texts.insert(self.scroll+self.cursorY+1, new_line2);
    self.cursorY++;
    self.cursorX = num_spaces;

    self.modifyOverCursorYValue();
}

void ViWin*::enterNewLine2(ViWin* self)
{
    auto line = self.texts.item(self.scroll+self.cursorY, null);
    int num_spaces = 0;
    for(int i=0; i<line.length(); i++)
    {
        if(line[i] == ' ') {
            num_spaces++;
        }
        else {
            break;
        }
    }

    auto new_line = new wchar_t[num_spaces+1];

    wcsncpy(new_line, wstring(""), num_spaces+1);

    for(int i=0; i<num_spaces; i++) {
        wcsncat(new_line, wstring(" "), num_spaces+1);
    }

    self.texts.insert(self.scroll+self.cursorY+1, new_line);
    self.cursorY++;
    self.cursorX = num_spaces;

    self.modifyOverCursorYValue();
}

void ViWin*::backSpace(ViWin* self) 
{
    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    if(line.length() > 0 && self.cursorX > 0) {
        line.delete(self.cursorX-1, self.cursorX);
        self.cursorX--;
    }
}

void ViWin*::backIndent(ViWin* self) 
{
    self.pushUndo();

    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    if(line.length() >= 4) {
        if(line.index(wstring("    "), -1) == 0) {
            for(int i=0; i<4; i++) {
                line.delete(0, 1);
                self.cursorX--;
                
                if(self.cursorX < 0) {
                    self.cursorX = 0;
                }
            }
        }
    }
}

void ViWin*::blinkBraceFoward(ViWin* self, wchar_t head, wchar_t tail, Vi* nvi) 
{
}

void ViWin*::blinkBraceEnd(ViWin* self, wchar_t head, wchar_t tail, Vi* nvi) 
{
}

void ViWin*::inputInsertMode(ViWin* self, Vi* nvi)
{
    auto key = self.getKey(false);
    
    if(key == 3 || key == 27) {
        nvi.exitFromInsertMode();
    }
    else if(key == 4) {
        self.backIndent();
    }
    else if(key == 10) {
        self.enterNewLine();
    }
    else if(key == 8 || key == 127 || key == KEY_BACKSPACE) {
        self.backSpace();
    }
    else if(key == 9) {
        auto str = self.texts.item(self.scroll+self.cursorY, null).substring(0, self.cursorX);
        bool all_space = true;
        for(int i=0; i<str.length(); i++) {
            if(str[i] != ' ' && str[i] != '\t') {
                all_space = false;
            }
        }
        if(str[0] == '\0' || all_space) {
            self.insertText(wstring("    "));
        }
        else {
            if(xiswalpha(str.substring(-1, -1)[0])) {
                self.completion(nvi);
            }
        }
    }
    else if(key == 'X' - 'A' +1) {
        self.completion_neo_c2(nvi);
    }
    else if(key > 127) {
        auto size = ((key & 0x80) >> 7) + ((key & 0x40) >> 6) + ((key & 0x20) >> 5) + ((key & 0x10) >> 4);

        char keys[MB_LEN_MAX];

        keys[0] = key;

        int i;
        for(i = 1; i<size; i++)
        {
            keys[i] = self.getKey(false);
        }
        keys[i] = '\0';

        self.insertText(wstring(keys));
    }
    else if(key == '(') {
        self.blinkBraceFoward('(', ')', nvi);
        self.insertText(wstring(xsprintf("%c", key)));
    }
    else if(key == '{') {
        self.blinkBraceFoward('{', '}', nvi);
        self.insertText(wstring(xsprintf("%c", key)));
    }
    else if(key == '[') {
        self.blinkBraceFoward('<', '>', nvi);
        self.insertText(wstring(xsprintf("%c", key)));
    }
    else if(key == ')') {
        self.blinkBraceEnd('(', ')', nvi);
        self.insertText(wstring(xsprintf("%c", key)));
    }
    else if(key == '}') {
        self.blinkBraceEnd('{', '}', nvi);
        self.insertText(wstring(xsprintf("%c", key)));
    }
    else if(key == ']') {
        self.blinkBraceEnd('[', ']', nvi);
        self.insertText(wstring(xsprintf("%c", key)));
    }
    else if(key == '>') {
        self.blinkBraceEnd('<', '>', nvi);
        self.insertText(wstring(xsprintf("%c", key)));
    }
    else if(key == 'W'-'A'+1) {
        int cursor_x = self.cursorX;
        int cursor_y = self.cursorY;
        
        self.backwardWord();
        
        if(cursor_y == self.cursorY) {
            auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));
            line.delete(self.cursorX, cursor_x+1);
         
            self.texts.replace(self.scroll+self.cursorY, clone line);
            self.modifyOverCursorXValue();
            self.cursorX++;
        }
        else {
            self.cursorY = cursor_y;
            auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));
            
            line.delete(0, cursor_x+1);
            
            self.texts.replace(self.scroll+self.cursorY, clone line);
                            
            self.cursorX = 0;
            self.cursorY = cursor_y;
        }
    }
    else if(key == 'V'-'A'+1) {
        auto key2 = self.getKey(false);
        
        char str[2];
        
        str[0] = key2;
        str[1] = '\0';
        
        self.insertText(wstring(str));
    }
    else {
        char buf[128];
        snprintf(buf, 128, "%c", key);
        self.insertText(wstring(buf));
    }
}

void ViWin*::input(ViWin* self, Vi* nvi) version 3
{
    if(nvi.mode == kInsertMode) {
        self.inputInsertMode(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void ViWin*::pushUndo(ViWin* self) version 3
{
    /// implemented by the after layer
}

void ViWin*::writedFlagOn(ViWin* self) version 3
{
    /// implemented by the after layer
}

void ViWin*::completion(ViWin* self, Vi* nvi) version 3
{
    /// implemented by the after layer
}

void ViWin*::completion_neo_c2(ViWin* self, Vi* nvi) version 3
{
    /// implemented by the after layer
}

void ViWin*::clearInputedKey(ViWin* self) version 3
{
    /// implemented by the after layer
}

void ViWin*::saveInputedKey(ViWin* self) version 3
{
    /// implemented by the after layer
}

void ViWin*::backwardWord(ViWin* self) version 3
{
    /// implemented by the after layer
}

void Vi*::enterInsertMode(Vi* self) version 3
{
    self.mode = kInsertMode;
    self.activeWin.writedFlagOn();
    self.activeWin.modifyOverCursorXValue();
    clear();
    self.activeWin.view(self);
    refresh();
}

void Vi*::enterInsertMode2(Vi* self) version 3
{
    self.mode = kInsertMode;
    self.activeWin.writedFlagOn();
    self.activeWin.modifyOverCursorXValue2();
    clear();
    self.activeWin.view(self);
    refresh();
}

void Vi*::exitFromInsertMode(Vi* self) version 3
{
    self.mode = kEditMode;
    self.activeWin.saveInputedKey();
}

Vi*% Vi*::initialize(Vi*% self) version 3
{
    auto result = inherit(self);

    result.mode = kEditMode;

    result.events.replace('i', void lambda(Vi* self, int key) 
    {
        self.enterInsertMode();
    });
    result.events.replace('I', void lambda(Vi* self, int key) 
    {
        if(self.activeWin.texts.length() != 0) {
            self.activeWin.moveAtHead();
        }
        self.enterInsertMode();
    });
    result.events.replace('a', void lambda(Vi* self, int key) 
    {
        self.enterInsertMode();
        if(self.activeWin.texts.length() != 0) {
            self.activeWin.cursorX++;
        }
    });
    result.events.replace('A', void lambda(Vi* self, int key) 
    {
        if(self.activeWin.texts.length() != 0) {
            self.activeWin.moveAtTail();
        }
        self.enterInsertMode();
        if(self.activeWin.texts.length() != 0) {
            self.activeWin.cursorX++;
        }
    });
    result.events.replace('o', void lambda(Vi* self, int key) 
    {
        self.enterInsertMode();
        if(self.activeWin.texts.length() != 0) {
            self.activeWin.enterNewLine2();
        }
    });

    return result;
}

int Vi*::main_loop(Vi* self) version 3
{
    while(!self.appEnd) {
        erase();

        foreach(it, self.wins) {
            it.view(self);
        }

        if(self.mode != kInsertMode) {
            self.activeWin.clearInputedKey();
        }
        self.activeWin.input(self);
    }

    return 0;
}

