#include "common.h"
#include <limits.h>

void ViWin*::shellModeView(ViWin* self, Vi* nvi)
{
    werase(self.win);

    self.textsView(nvi);

    wattron(self.win, A_REVERSE);
    mvwprintw(self.win, self.height-1, 0, "SHELL MODE x %d y %d scroll %d", self.cursorX, self.scroll+self.cursorY, self.scroll);
    wattroff(self.win, A_REVERSE);

    wrefresh(self.win);
}

void ViWin*::view(ViWin* self, Vi* nvi) version 20
{
    if(nvi.mode == kShellMode && self.equals(nvi.activeWin)) {
        self.shellModeView(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void ViWin*::runCommand(ViWin* self)
{
    auto command_line = self.texts.item(self.scroll+self.cursorY, wstring("")).to_string();
    
    var output = new buffer();
    
    char buf[BUFSIZ];
    
    FILE *fp = popen(command_line, "r");
    while(fgets(buf, BUFSIZ, fp) != NULL) {
        output.append_str(buf);
    }
    fclose(fp);
    
    self.enterNewLine2();
    output.to_string().split("\n").each {
        self.insertText(it.to_wstring());
        self.enterNewLine();
    }
}

void ViWin*::inputShellMode(ViWin* self, Vi* nvi)
{
    auto key = self.getKey(false);
    
    if(key == 3 || key == 27) {
        nvi.exitFromShellMode();
    }
    else if(key == 4) {
        self.backIndent();
    }
    else if(key == 10) {
        self.runCommand();
        nvi.view();
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
        
        self.insertText(wstring(str));
    }
    else {
        char buf[128];
        snprintf(buf, 128, "%c", key);
        self.insertText(wstring(buf));
    }
}

void ViWin*::input(ViWin* self, Vi* nvi) version 20
{
    if(nvi.mode == kShellMode) {
        self.inputShellMode(nvi);
    }
    else {
        inherit(self, nvi);
    }
}

void Vi*::enterShellMode(Vi* self)
{
    self.mode = kShellMode;
    self.activeWin.writedFlagOn();
    self.activeWin.modifyOverCursorXValue();
    clear();
    self.activeWin.view(self);
    refresh();
}


void Vi*::exitFromShellMode(Vi* self)
{
    self.mode = kEditMode;
    self.activeWin.saveInputedKey();
}

Vi*% Vi*::initialize(Vi*% self) version 20
{
    auto result = inherit(self);

    result.mode = kEditMode;

    result.events.replace('!', void lambda(Vi* self, int key) 
    {
        self.enterShellMode();
    });

    return result;
}

