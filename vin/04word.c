#include "common.h"

void ViWin*::forwardWord(ViWin* self) 
{
    using unsafe;
    
    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    wchar_t* p = line + self.cursorX;

    if(self.cursorX == wcslen(line)) 
    {
        self.cursorY++;

        self.modifyOverCursorYValue();

        line = self.texts.item(self.scroll+self.cursorY, wstring(""));

        self.cursorX = 0;
    }

    if(wcslen(line) == 0) {
        while(wcslen(line) == 0) {
            self.cursorY++;

            self.modifyOverCursorYValue();

            if(self.scroll+self.cursorY >= self.texts.length()-1)
            {
                break;
            }

            line = self.texts.item(self.scroll+self.cursorY, wstring(""));
        }
        
        self.cursorX = 0;
    }
    else if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || *p == '_' || (*p >= '0' && *p <= '9'))
    {
        while((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || *p == '_' || (*p >= '0' && *p <= '9'))
        {
            p++;
            self.cursorX++;

            if(self.cursorX >= line.length())
            {
                self.cursorY++;

                if(self.scroll+self.cursorY > self.texts.length()-1)
                {
                    self.cursorY--;
                    self.modifyUnderCursorYValue();
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    self.cursorX = line.length()-1;
                    break;
                }

                self.modifyOverCursorYValue();

                line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                p = line;
                self.cursorX = 0;
            }
        }
    }
    else if((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ) || (*p >= '[' && *p <= '`'))
    {
        while((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ) || (*p >= '[' && *p <= '`'))
        {
            p++;
            self.cursorX++;

            if(self.cursorX >= line.length())
            {
                self.cursorY++;

                if(self.scroll+self.cursorY > self.texts.length()-1)
                {
                    self.cursorY--;
                    self.modifyUnderCursorYValue();
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    self.cursorX = line.length()-1;
                    break;
                }

                self.modifyOverCursorYValue();

                line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                p = line;
                self.cursorX = 0;
            }
        }
    }
    else if(xiswalpha(*p)) {
        while(xiswalpha(*p)) {
            p++;
            self.cursorX++;

            if(self.cursorX >= line.length())
            {
                self.cursorY++;

                if(self.scroll+self.cursorY > self.texts.length()-1)
                {
                    self.cursorY--;
                    self.modifyUnderCursorYValue();
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    self.cursorX = line.length()-1;
                    break;
                }

                self.modifyOverCursorYValue();

                line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                p = line;
                self.cursorX = 0;
            }
        }
    }
    else if(xiswblank(*p)) {
        while(xiswblank(*p)) {
            p++;
            self.cursorX++;

            if(self.cursorX >= line.length())
            {
                self.cursorY++;

                if(self.scroll+self.cursorY > self.texts.length()-1)
                {
                    self.cursorY--;
                    self.modifyUnderCursorYValue();
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    self.cursorX = line.length()-1;
                    break;
                }

                self.modifyOverCursorYValue();

                line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                p = line;
                self.cursorX = 0;
            }
        }
    }
    else if(xiswdigit(*p)) {
        while(xiswdigit(*p)) {
            p++;
            self.cursorX++;

            if(self.cursorX >= line.length())
            {
                self.cursorY++;

                if(self.scroll+self.cursorY > self.texts.length()-1)
                {
                    self.cursorY--;
                    self.modifyUnderCursorYValue();
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    self.cursorX = line.length()-1;
                    break;
                }

                self.modifyOverCursorYValue();

                line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                p = line;
                self.cursorX = 0;
            }
        }
    }
    
    if(xiswblank(*p)) {
        while(xiswblank(*p)) {
            p++;
            self.cursorX++;

            if(self.cursorX >= line.length())
            {
                self.cursorY++;

                if(self.scroll+self.cursorY > self.texts.length()-1)
                {
                    self.cursorY--;
                    self.modifyUnderCursorYValue();
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    self.cursorX = line.length()-1;
                    break;
                }

                self.modifyOverCursorYValue();

                line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                p = line;
                self.cursorX = 0;
            }
        }
    }
}

void ViWin*::forwardWord2(ViWin* self) 
{
    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    wchar_t* p = line + self.cursorX;

    if(self.cursorX == wcslen(line)) 
    {
        self.cursorY++;

        self.modifyOverCursorYValue();

        line = self.texts.item(self.scroll+self.cursorY, wstring(""));

        self.cursorX = 0;
    }

    if(wcslen(line) == 0) {
        while(wcslen(line) == 0) {
            self.cursorY++;

            self.modifyOverCursorYValue();

            if(self.scroll+self.cursorY >= self.texts.length()-1)
            {
                break;
            }

            line = self.texts.item(self.scroll+self.cursorY, wstring(""));
        }

        self.cursorX = 0;
    }
    else {
        p++;
        self.cursorX++;
        
        if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || *p == '_' || (*p >= '0' && *p <= '9'))
        {
        
            while((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || *p == '_' || (*p >= '0' && *p <= '9'))
            {
                p++;
                self.cursorX++;
    
                if(self.cursorX >= line.length())
                {
                    self.cursorY++;
    
                    if(self.scroll+self.cursorY > self.texts.length()-1)
                    {
                        self.cursorY--;
                        self.modifyUnderCursorYValue();
                        line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                        self.cursorX = line.length()-1;
                        break;
                    }
    
                    self.modifyOverCursorYValue();
    
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    p = line;
                    self.cursorX = 0;
                }
            }
            self.cursorX--;
            
            if(self.cursorX < 0) {
                self.cursorX = 0;
            }
        }
        else if((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ) || (*p >= '[' && *p <= '`'))
        {
            while((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ) || (*p >= '[' && *p <= '`'))
            {
                p++;
                self.cursorX++;
    
                if(self.cursorX >= line.length())
                {
                    self.cursorY++;
    
                    if(self.scroll+self.cursorY > self.texts.length()-1)
                    {
                        self.cursorY--;
                        self.modifyUnderCursorYValue();
                        line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                        self.cursorX = line.length()-1;
                        break;
                    }
    
                    self.modifyOverCursorYValue();
    
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    p = line;
                    self.cursorX = 0;
                }
            }
            self.cursorX--;
            
            if(self.cursorX < 0) {
                self.cursorX = 0;
            }
        }
        else if(xiswblank(*p)) {
            while(xiswblank(*p)) {
                p++;
                self.cursorX++;
    
                if(self.cursorX >= line.length())
                {
                    self.cursorY++;
    
                    if(self.scroll+self.cursorY > self.texts.length()-1)
                    {
                        self.cursorY--;
                        self.modifyUnderCursorYValue();
                        line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                        self.cursorX = line.length()-1;
                        break;
                    }
    
                    self.modifyOverCursorYValue();
    
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    p = line;
                    self.cursorX = 0;
                }
            }
        }
        else if(xiswdigit(*p)) {
            while(xiswdigit(*p)) {
                p++;
                self.cursorX++;
    
                if(self.cursorX >= line.length())
                {
                    self.cursorY++;
    
                    if(self.scroll+self.cursorY > self.texts.length()-1)
                    {
                        self.cursorY--;
                        self.modifyUnderCursorYValue();
                        line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                        self.cursorX = line.length()-1;
                        break;
                    }
    
                    self.modifyOverCursorYValue();
    
                    line = self.texts.item(self.scroll+self.cursorY, wstring(""));
                    p = line;
                    self.cursorX = 0;
                }
            }
            self.cursorX--;
            
            if(self.cursorX < 0) {
                self.cursorX = 0;
            }
        }
    }
}

void ViWin*::backwardWord(ViWin* self) version 4
{
    auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));

    wchar_t* p = line + self.cursorX;

    if(self.cursorX == wcslen(line)) 
    {
        self.cursorX--;
        p--;

        if(self.cursorX < 0) {
            self.cursorX++;
            p++;
        }
    }

    if(wcslen(line) == 0) {
        while(wcslen(line) == 0) {
            self.cursorY--;

            self.modifyUnderCursorYValue();

            if(self.scroll == 0 && self.cursorY == 0)
            {
                break;
            }

            line = self.texts.item(self.scroll+self.cursorY, wstring(""));
        }

        self.cursorX = wcslen(self.texts.item(self.scroll+self.cursorY, wstring(""))) -1;

        if(self.cursorX < 0) {
            self.cursorX = 0;
        }
    }
    else if(xiswalnum(*p) || *p == '_') {
        int insert_count = 0;
        while(xiswalnum(*p) || *p == '_') {
            p--;
            self.cursorX--;
            
            insert_count++;

            if(self.cursorX < 0)
            {
                insert_count = 0;
                self.cursorX = 0;
                self.cursorY--;

                self.modifyUnderCursorYValue();

                if(self.scroll+self.cursorY <= 0)
                {
                    self.cursorY = 0;
                    self.scroll = 0;
                    break;
                }


                line = self.texts.item(self.scroll+self.cursorY, wstring(""));

                if(wcslen(line) == 0)
                {
                    p = line;
                    self.cursorX = 0;
                }
                else {
                    self.cursorX = wcslen(line) -1;
                    p = line + self.cursorX;
                }
            }
        }
        
        if(insert_count > 3) {
            self.cursorX++;
        }
    }
    else if((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ) || (*p >= '[' && *p <= '`'))
    {
        while((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ) || (*p >= '[' && *p <= '`'))
        {
            p--;
            self.cursorX--;

            if(self.cursorX < 0)
            {
                self.cursorX = 0;
                self.cursorY--;

                self.modifyUnderCursorYValue();

                if(self.scroll+self.cursorY <= 0) 
                {
                    self.cursorY = 0;
                    self.scroll = 0;
                    break;
                }

                line = self.texts.item(self.scroll+self.cursorY, wstring(""));

                if(wcslen(line) == 0)
                {
                    p = line;
                    self.cursorX = 0;
                }
                else {
                    self.cursorX = wcslen(line) -1;
                    p = line + self.cursorX;
                }
            }
        }
    }
    else if(xiswdigit(*p)) {
        while(xiswdigit(*p)) {
            p--;
            self.cursorX--;

            if(self.cursorX < 0)
            {
                self.cursorX = 0;
                self.cursorY--;

                self.modifyUnderCursorYValue();

                if(self.scroll+self.cursorY <= 0)
                {
                    self.cursorY = 0;
                    self.scroll = 0;
                    break;
                }


                line = self.texts.item(self.scroll+self.cursorY, wstring(""));

                if(wcslen(line) == 0)
                {
                    p = line;
                    self.cursorX = 0;
                }
                else {
                    self.cursorX = wcslen(line) -1;
                    p = line + self.cursorX;
                }
            }
        }
    }
    else if(xiswblank(*p)) {
        while(xiswblank(*p)) {
            p--;
            self.cursorX--;

            if(self.cursorX < 0)
            {
                self.cursorX = 0;
                self.cursorY--;

                self.modifyUnderCursorYValue();

                if(self.scroll+self.cursorY <= 0)
                {
                    self.cursorY = 0;
                    self.scroll = 0;
                    break;
                }


                line = self.texts.item(self.scroll+self.cursorY, wstring(""));

                if(wcslen(line) == 0)
                {
                    p = line;
                    self.cursorX = 0;
                }
                else {
                    self.cursorX = wcslen(line) -1;
                    p = line + self.cursorX;
                }
            }
        }
    }
}

Vi*% Vi*::initialize(Vi*% self) version 4
{
    auto result = inherit(self);

    result.events.replace('w', void lambda(Vi* self, int key) 
    {
        if(self.activeWin.digitInput > 0) {
            for(int i=0; i<self.activeWin.digitInput+1; i++) {
                self.activeWin.forwardWord();
                
            }
            self.activeWin.digitInput = 0;
        }
        else {
            self.activeWin.forwardWord();
        }
        
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('e', void lambda(Vi* self, int key) 
    {
        if(self.activeWin.digitInput > 0) {
            for(int i=0; i<self.activeWin.digitInput+1; i++) {
                self.activeWin.forwardWord2();
                
            }
            self.activeWin.digitInput = 0;
        }
        else {
            self.activeWin.forwardWord2();
        }
        
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('b', void lambda(Vi* self, int key) 
    {
        if(self.activeWin.digitInput > 0) {
            for(int i=0; i<self.activeWin.digitInput+1; i++) {
                self.activeWin.backwardWord();
                
            }
            self.activeWin.digitInput = 0;
        }
        else {
            self.activeWin.backwardWord();
        }
        
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });

    return result;
}
