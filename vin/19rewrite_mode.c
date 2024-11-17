#include "common.h"
#include <limits.h>

void ViWin*::rewriteModeView(ViWin* self, Vi* nvi)
{
    self.textsView(nvi);

    wattron(self.win, A_REVERSE);
    mvwprintw(self.win, self.height-1, 0, "REWITEMODE MODE x %d y %d scroll %d", self.cursorX, self.scroll+self.cursorY, self.scroll);
    wattroff(self.win, A_REVERSE);
}

void ViWin*::view(ViWin* self, Vi* nvi) version 19
{
    if(nvi.mode == kRewriteMode && self.equals(nvi.activeWin)) {
        self.rewriteModeView(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void ViWin*::insertText2(ViWin* self, wstring text) 
{
    if(self.texts.length() == 0) {
        self.texts.push_back(clone text);
        self.texts_length.push_back(wcslen(text));
        self.cursorX += text.length();
    }
    else {
        auto old_line = self.texts.item(self.scroll+self.cursorY, wstring(""));

        auto new_line = xsprintf("%ls%ls%ls"
                ,old_line.substring(0, self.cursorX)
                , text
                ,old_line.substring(self.cursorX+text.length(), -1)).to_wstring();

        self.texts.replace(self.scroll+self.cursorY, clone new_line);
        self.texts_length.replace(self.scroll+self.cursorY, wcslen(new_line));
        self.cursorX += text.length();
    }
}

void ViWin*::inputRewritetMode(ViWin* self, Vi* nvi)
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

        new come_regex("^$|^[ ]+$").rescue { null }.if {
            if(str.to_string().match(Value)) {
                self.insertText2(wstring("    "));
            }
            else {
                self.completion(nvi);
            }
        }
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

        self.insertText2(wstring(keys));
    }
    else if(key == '(') {
        self.blinkBraceFoward('(', ')', nvi);
        self.insertText2(wstring(xsprintf("%c", key)));
    }
    else if(key == '{') {
        self.blinkBraceFoward('{', '}', nvi);
        self.insertText2(wstring(xsprintf("%c", key)));
    }
    else if(key == '[') {
        self.blinkBraceFoward('<', '>', nvi);
        self.insertText2(wstring(xsprintf("%c", key)));
    }
    else if(key == ')') {
        self.blinkBraceEnd('(', ')', nvi);
        self.insertText2(wstring(xsprintf("%c", key)));
    }
    else if(key == '}') {
        self.blinkBraceEnd('{', '}', nvi);
        self.insertText2(wstring(xsprintf("%c", key)));
    }
    else if(key == ']') {
        self.blinkBraceEnd('[', ']', nvi);
        self.insertText2(wstring(xsprintf("%c", key)));
    }
    else if(key == '>') {
        self.blinkBraceEnd('<', '>', nvi);
        self.insertText2(wstring(xsprintf("%c", key)));
    }
    else if(key == 'W'-'A'+1) {
        int cursor_x = self.cursorX;
        int cursor_y = self.cursorY;
        
        self.backwardWord();
        
        if(cursor_y == self.cursorY) {
            auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));
            line.delete(self.cursorX, cursor_x+1);
         
            self.texts.replace(self.scroll+self.cursorY, clone line);
            self.texts_length.replace(self.scroll+self.cursorY, wcslen(line));
            self.modifyOverCursorXValue();
            self.cursorX++;
        }
        else {
            self.cursorY = cursor_y;
            auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));
            
            line.delete(0, cursor_x+1);
            
            self.texts.replace(self.scroll+self.cursorY, clone line);
            self.texts_length.replace(self.scroll+self.cursorY, wcslen(line));
                            
            self.cursorX = 0;
            self.cursorY = cursor_y;
        }
    }
    else if(key == 'V'-'A'+1) {
        auto key2 = self.getKey(false);
        
        char str[2];
        
        str[0] = key2;
        str[1] = '\0';
        
        self.insertText2(wstring(str));
    }
    else {
        self.insertText2(wstring(xsprintf("%c", key)));
    }
}

void ViWin*::input(ViWin* self, Vi* nvi) version 19
{
    if(nvi.mode == kRewriteMode) {
        self.inputRewritetMode(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void Vi*::enterRewriteMode(Vi* self) 
{
    self.mode = kRewriteMode;
    self.activeWin.writedFlagOn();
    self.activeWin.modifyOverCursorXValue();
}

void Vi*::exitFromRewiteMode(Vi* self) 
{
    self.mode = kEditMode;
    self.activeWin.saveInputedKey();
}

Vi*% Vi*::initialize(Vi*% self) version 19
{
    auto result = inherit(self);

    result.mode = kEditMode;

    result.events.replace('R', void lambda(Vi* self, int key) 
    {
        self.activeWin.pushUndo();
        self.enterRewriteMode();
    });

    return result;
}

int Vi*::main_loop(Vi* self) version 19
{
    while(!self.appEnd) {
        self.view();

        if(self.mode != kInsertMode)
        {
            self.activeWin.clearInputedKey();
        }

//        self.activeWin.makeTmpFile();
//        self.wins.each {
//            it.makeTmpFile();
//        }
        self.activeWin.input(self);
    }
    
//    self.wins.each {
//        it.deleteTmpFile();
//    }
//    self.activeWin.saveCursorPosition(self.activeWin.fileName);

    return 0;
}
