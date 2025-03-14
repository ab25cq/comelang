#include "common.h"
#ifndef __MAC__
#ifndef _POSIX_C_SOURCE
#define _POSIX_C_SOURCE
#endif
#endif
#include <signal.h>

void mreset_tty()
{
    system("tset");
}

ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 14
{
    auto result = inherit(self, y, x, width, height, vi);

    result.inputedKeys = new list<int>.initialize();
    result.autoInput = false;
    result.digitInput = 0;
    result.autoInputIndex = 0;
    
    result.macro = new map<int, list<list<int>*%>*%>.initialize();
    result.recordingMacroKey = -1;
    result.recordingMacro = null;
    
    result.runningMacro = null;
    
    (void)result.loadDotFromFile(vi);

    return result;
}

bool ViWin*::saveDotToFile(ViWin* self, Vi* nvi) version 14
{
    char* home = getenv("HOME");
    if(home == null) {
        return false;
    }

    string path0 = xsprintf("%s/.vin", home);
    system(xsprintf("mkdir -p '%s'", path0));

    string path = xsprintf("%s/.vin/dot.txt", home);
    FILE* f = fopen(path, "w");

    if(f == null) {
        return false;
    }

    if(self.savedInputedKeys) {
        foreach(it, self.savedInputedKeys) {
            if(fputc(it, f) < 0) {
                break;
            }
        }
    }

    fclose(f);

    return true;
}

bool ViWin*::loadDotFromFile(ViWin* self, Vi* nvi)
{
    char* home = getenv("HOME");
    if(home == null) {
        return false;
    }

    string path = xsprintf("%s/.vin/dot.txt", home);
    FILE* f = fopen(path, "r");

    if(f == null) {
        return false;
    }

    self.savedInputedKeys = new list<int>.initialize();
    
    while(true) {
        char c;
        if(fread(&c, sizeof(char), 1, f) == 0) {
            break;
        }

        self.savedInputedKeys.push_back(c);
    }

    fclose(f);

    return true;
}

bool ViWin*::pollCancel(ViWin* self)
{
    struct pollfd fds[1];
    
    fds[0].fd = STDIN_FILENO;
    fds[0].events = POLLIN;
    
    int timeout = 1;
    
    int ret = poll(fds, 1, timeout);
    
    if (ret > 0) {
        if (fds[0].revents & POLLIN) {
            int key = self.getKey(head:false);
            
            if(key == 27 || key == 'C' - 'A' +1) {
                return true;
            }
        }
    } 
    else if (ret == 0) {
    } 
    else {
    }
    
    return false;
}

int ViWin*::getKey(ViWin* self, bool head) version 14
{
    if(self.runningMacro) {
        if(self.runningMacroIndex1 >= self.runningMacro.length())
        {
            self.runningMacro = null;
            self.runningMacroIndex1 = 0;
            self.runningMacroIndex2 = 0;
        }
        else {
            auto inputed_key_vec = self.runningMacro.item(self.runningMacroIndex1, null);
            
            if(self.runningMacroIndex2 < inputed_key_vec.length())
            {
                int inputed_key_vec2 = inputed_key_vec.item(self.runningMacroIndex2, -1);
                self.runningMacroIndex2++;
                
                return inputed_key_vec2;
            }
            else {
                self.runningMacroIndex1++;
                self.runningMacroIndex2 = 0;
                
                return self.getKey(head);
            }
        }
    }
    
    if(self.autoInput && self.savedInputedKeys) 
    {
        if(self.autoInputIndex < self.savedInputedKeys.length()) {
            int key = self.savedInputedKeys.item(self.autoInputIndex, -1);
            self.autoInputIndex++;

            return key;
        }
        else {
            if(self.pressedDot) {
                self.autoInputIndex = 0;
                self.autoInput = false;
                self.pressedDot = false;

                int key = wgetch(self.win);
                
                if(self.inputedKeys.length() < SAVE_INPUT_KEY_MAX) {
                    self.inputedKeys.push_back(key);
                }
                return key;
            }
            else {
                self.savedInputedKeys.reset();
                self.autoInput = false;
                self.autoInputIndex = 0;
                self.pressedDot = false;

                int key = wgetch(self.win);
                self.inputedKeys.push_back(key);
                return key;
            }
        }
    }
    else {
        self.pressedDot = false;
        
        int key = wgetch(self.win);
        
        if(key == 26) {
            endwin();
            mreset_tty();
            kill(getpid(), SIGSTOP);
            Vi* vi = self.vi;
            vi.init_curses();
        }
        else if(head && key >= '1' && key <= '9' && ((Vi*)self.vi).mode != kInsertMode) {
            int num = key - '0';
            
            key = wgetch(self.win);
            
            while(key >= '0' && key <= '9') {
                num = num * 10 + key - '0';
                
                key = wgetch(self.win);
            }
            
            self.digitInput = num-1;
            
            if(self.inputedKeys.length() < SAVE_INPUT_KEY_MAX) {
                self.inputedKeys.push_back(key);
            }

            return key;
        }
        else {
            if(self.inputedKeys.length() < SAVE_INPUT_KEY_MAX) {
                self.inputedKeys.push_back(key);
            }

            return key;
        }
        
        return key;
    }

    return 0;
}

void ViWin*::clearInputedKey(ViWin* self) version 14
{
    self.inputedKeys.reset();
}

void ViWin*::saveInputedKeyOnTheMovingCursor(ViWin* self) version 14
{
    if(self.recordingMacro) {
        self.saveInputedKey();
    }
}

void ViWin*::saveInputedKey(ViWin* self) version 14
{
    if(!self.autoInput && !self.pressedDot) {
        if(self.digitInput > 0) {
            self.autoInput = true;
            self.autoInputIndex = 0;
            self.savedInputedKeys = new list<int>.initialize();
            for(int i=0; i<self.digitInput; i++) {
                foreach(it, self.inputedKeys) {
                    self.savedInputedKeys.push_back(it);
                }
                
                if(self.pollCancel()) {
                    break;
                }
            }
            self.digitInput = 0;
        }
        else {
            self.savedInputedKeys = clone self.inputedKeys;
        }
    }
    
    if(self.recordingMacroKey != -1) {
        self.recordingMacro.push_back(clone self.savedInputedKeys);
    }
}

void ViWin*::makeInputedKeyGVIndent(ViWin* self, Vi* nvi) version 14
{
    self.inputedKeys = new list<int>.initialize();
    
    self.inputedKeys.push_back('g');
    self.inputedKeys.push_back('v');
    self.inputedKeys.push_back('>');
    
    self.saveInputedKey();
}

void ViWin*::makeInputedKeyGVDeIndent(ViWin* self, Vi* nvi) version 14
{
    self.inputedKeys = new list<int>.initialize();
    
    self.inputedKeys.push_back('g');
    self.inputedKeys.push_back('v');
    self.inputedKeys.push_back('<');
    
    self.saveInputedKey();
}

void ViWin*::recordMacro(ViWin* self) 
{
    if(self.recordingMacroKey == -1) {
        int key = self.getKey(false);
        
        self.recordingMacroKey = key;
        self.recordingMacro = new list<list<int>*%>.initialize();
    }
    else {
        auto macro_ = clone self.recordingMacro;
        self.macro.insert(self.recordingMacroKey, clone macro_);
        
        self.recordingMacroKey = -1;
        self.recordingMacro = null;
    }
}

void ViWin*::runMacro(ViWin* self) 
{
    int key = self.getKey(false);
    
    auto macro_ = self.macro.at(key, null);
    
    if(macro_) {
        self.runningMacro = clone macro_;
        self.runningMacroIndex1 = 0;
        self.runningMacroIndex2 = 0;
    }
}

Vi*% Vi*::initialize(Vi*% self) version 14
{
    auto result = inherit(self);
    
    result.events.replace('.', void lambda(Vi* self, int key) 
    {
        self.activeWin.autoInput = true;
        self.activeWin.pressedDot = true;
    });

    result.events.replace('q', void lambda(Vi* self, int key) 
    {
        self.activeWin.recordMacro();
    });
    result.events.replace('@', void lambda(Vi* self, int key) 
    {
        self.activeWin.runMacro();
    });

    return result;
}
