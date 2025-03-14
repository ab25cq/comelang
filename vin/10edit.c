#include "common.h"

ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 10
{
    auto result = inherit(self, y, x, width, height, vi);
    
    result.mRepeatFowardNextCharacterKind = kRFNCNone;
    result.mRepeatFowardNextCharacter = 0;

    return result;
}

void ViWin*::modifyCursorOnDeleting(ViWin* self) 
{
    self.modifyOverCursorYValue();
    self.modifyOverCursorXValue2();
}

void ViWin*::deleteOneLine(ViWin* self, Vi* nvi) version 10
{
    if(self.digitInput > 0 && !gBinaryMode) {
        self.pushUndo();
        
        nvi.yank.reset();
        nvi.yankKind = kYankKindLine;
        
        for(int i=0; i<self.digitInput+1; i++) {
            auto line = self.texts.item(self.scroll+self.cursorY, null);
            
            if(line != null) {
                nvi.yank.push_back(clone line);
                
                self.texts.delete(self.scroll+self.cursorY, self.scroll+self.cursorY+1);
                self.texts_length.delete(self.scroll+self.cursorY, self.scroll+self.cursorY+1);
        
                self.modifyCursorOnDeleting();
            }
            
            if(self.pollCancel()) {
                break;
            }
        }
        
        self.saveYankToFile(nvi);
        self.digitInput = 0;
    }
    else {
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        if(line != null) {
            self.pushUndo();
            nvi.yank.reset();
            nvi.yank.push_back(clone line);
            nvi.yankKind = kYankKindLine;
            self.saveYankToFile(nvi);
            self.texts.delete(self.scroll+self.cursorY, self.scroll+self.cursorY+1);
            self.texts_length.delete(self.scroll+self.cursorY, self.scroll+self.cursorY+1);
    
            self.modifyCursorOnDeleting();
        }
    }
}

void ViWin*::deleteOneLine2(ViWin* self, Vi* nvi) 
{
    if(self.digitInput > 0) {
        self.pushUndo();
        
        nvi.yank.reset();
        nvi.yankKind = kYankKindLine;
        
        for(int i=0; i<self.digitInput+1; i++) {
            auto line = self.texts.item(self.scroll+self.cursorY, null);
            
            if(line != null) {
                nvi.yank.push_back(clone line);
                
                self.texts.delete(self.scroll+self.cursorY, self.scroll+self.cursorY+1);
                self.texts_length.delete(self.scroll+self.cursorY, self.scroll+self.cursorY+1);
        
                self.modifyCursorOnDeleting();
            }
            if(self.pollCancel()) {
                break;
            }
        }
        
        self.digitInput = 0;
        self.saveYankToFile(nvi);
    }
    else {
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        if(line != null) {
            self.pushUndo();
            self.texts.delete(self.scroll+self.cursorY, self.scroll+self.cursorY+1);
            self.texts_length.delete(self.scroll+self.cursorY, self.scroll+self.cursorY+1);
            self.texts.insert(self.scroll+self.cursorY, wstring(""));
            self.texts_length.insert(self.scroll+self.cursorY, 0);
    
            self.modifyCursorOnDeleting();
        }
    }
}

void ViWin*::deleteWord(ViWin* self, Vi* nvi) 
{
    self.pushUndo();
    
    if(self.digitInput > 0) {
        auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
        if(wcslen(line) == 0) {
            self.deleteOneLine(nvi);
        }
        else {
            int count = self.digitInput + 1;
            
            int x = self.cursorX;
    
            for(int i=0; i<count; i++) {
                wchar_t* p = line + x;
        
                if((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ))
                {
                    while((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ))
                    {
                        p++;
                        x++;
        
                        if(x >= line.length())
                        {
                            break;
                        }
                    }
                }
                else if(xiswalnum(*p) || *p == '_') {
                    while(xiswalnum(*p) || *p == '_') {
                        p++;
                        x++;
        
                        if(x >= line.length())
                        {
                            break;
                        }
                    }
                }
                else if(xiswblank(*p)) {
                    while(xiswblank(*p)) {
                        p++;
                        x++;
        
                        if(x >= line.length())
                        {
                            break;
                        }
                    }
                }
                else if(xiswdigit(*p)) {
                    while(xiswdigit(*p)) {
                        p++;
                        x++;
        
                        if(x >= line.length())
                        {
                            break;
                        }
                    }
                }
                
                if(self.pollCancel()) {
                    break;
                }
            }
    
            nvi.yank.reset();
            nvi.yank.push_back(line.substring(self.cursorX, x));
            nvi.yankKind = kYankKindNoLine;
            self.saveYankToFile(nvi);
            line.delete(self.cursorX, x);
    
            self.modifyCursorOnDeleting();
        }
        
        self.digitInput = 0;
    }
    else {
        auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
        if(wcslen(line) == 0) {
            self.deleteOneLine(nvi);
        }
        else {
            int x = self.cursorX;
    
            wchar_t* p = line + x;
    
            if((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ))
            {
                while((*p >= '!' && *p <= '/') || (*p >= ':' && *p <= '@') || (*p >= '{' && *p <= '~' ))
                {
                    p++;
                    x++;
    
                    if(x >= line.length())
                    {
                        break;
                    }
                }
            }
            else if(xiswalnum(*p) || *p == '_') {
                while(xiswalnum(*p) || *p == '_') {
                    p++;
                    x++;
    
                    if(x >= line.length())
                    {
                        break;
                    }
                }
            }
            else if(xiswblank(*p)) {
                while(xiswblank(*p)) {
                    p++;
                    x++;
    
                    if(x >= line.length())
                    {
                        break;
                    }
                }
            }
            else if(xiswdigit(*p)) {
                while(xiswdigit(*p)) {
                    p++;
                    x++;
    
                    if(x >= line.length())
                    {
                        break;
                    }
                }
            }
    
            nvi.yank.reset();
            nvi.yank.push_back(line.substring(self.cursorX, x));
            nvi.yankKind = kYankKindNoLine;
            self.saveYankToFile(nvi);
            line.delete(self.cursorX, x);
    
            self.modifyCursorOnDeleting();
        }
    }
}

void ViWin*::deleteForNextCharacter(ViWin* self) 
{
    self.pushUndo();
    
    if(self.digitInput > 0) {
        auto key = self.getKey(false);
    
        auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
        if(wcslen(line) > 0) {
            int x = self.cursorX;
            
            int count = self.digitInput + 1;
            
            wchar_t* p;
    
            for(int i=0; i<count; i++) {
                p = line + x;
        
                while(*p != key) {
                    p++;
                    x++;
        
                    if(x >= line.length())
                    {
                        break;
                    }
                }
                
                if(i != count -1) {
                    x++;
                }
                
                if(self.pollCancel()) {
                    break;
                }
            }
            
            if(*p == key) {
                line.delete(self.cursorX, x+1);
            }
        }
        
        self.digitInput = 0;
    }
    else {
        auto key = self.getKey(false);
    
        auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
        if(wcslen(line) > 0) {
            int x = self.cursorX;
    
            wchar_t* p = line + x;
    
            while(*p != key) {
                p++;
                x++;
    
                if(x >= line.length())
                {
                    break;
                }
            }
            
            if(*p == key) {
                line.delete(self.cursorX, x+1);
            }
        }
    }
}

void ViWin*::deleteForNextCharacter2(ViWin* self) 
{
    self.pushUndo();
    
    if(self.digitInput > 0) {
        auto key = self.getKey(false);
    
        auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
        if(wcslen(line) > 0) {
            int x = self.cursorX;
            
            int count = self.digitInput + 1;
            
            wchar_t* p;
    
            for(int i=0; i<count; i++) {
                p = line + x;
        
                while(*p != key) {
                    p++;
                    x++;
        
                    if(x >= line.length())
                    {
                        break;
                    }
                }
                
                if(i != count -1) {
                    x++;
                }
                
                if(self.pollCancel()) {
                    break;
                }
            }
            
            if(*p == key) {
                line.delete(self.cursorX, x);
            }
        }
        
        self.digitInput = 0;
    }
    else {
        auto key = self.getKey(false);
    
        auto line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    
        if(wcslen(line) > 0) {
            int x = self.cursorX;
    
            wchar_t* p = line + x;
    
            while(*p != key) {
                p++;
                x++;
    
                if(x >= line.length())
                {
                    break;
                }
            }
            
            if(*p == key) {
                line.delete(self.cursorX, x);
            }
        }
    }
}

void ViWin*::deleteCursorCharactor(ViWin* self) 
{
    self.pushUndo();
    
    if(self.digitInput > 0 && !gBinaryMode) {
        int num = self.digitInput + 1;
        
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        
        for(int i= 0; i<num; i++) {
            line.delete(self.cursorX, self.cursorX+1);
            
            if(self.pollCancel()) {
                break;
            }
        }
    
        self.modifyOverCursorXValue();
        
        self.digitInput = 0;
    }
    else {
        if(gBinaryMode) {
            auto line = self.texts.item(self.scroll+self.cursorY, null);
            
            int len = self.texts_length.item(self.scroll+self.cursorY, -1);
            len--;
            self.texts_length.replace(self.scroll+self.cursorY, len);
            
            if(len >= 1) {
                wchar_t*% new_line = new wchar_t[len+1];
                
                memcpy(new_line, line, sizeof(wchar_t)*self.cursorX);
                memcpy(new_line + self.cursorX, line + self.cursorX+1, sizeof(wchar_t)*(len - self.cursorX));
                self.texts.replace(self.scroll+self.cursorY, new_line);
            
                self.modifyOverCursorXValue();
            }
        }
        else {
            auto line = self.texts.item(self.scroll+self.cursorY, null);
            line.delete(self.cursorX, self.cursorX+1);
            
            int len = self.texts_length.item(self.scroll+self.cursorY, -1);
            len--;
            self.texts_length.replace(self.scroll+self.cursorY, len);
        
            self.modifyOverCursorXValue();
        }
    }
}

void ViWin*::deleteBack(ViWin* self) 
{
    self.pushUndo();
    
    if(self.digitInput > 0) {
        int num = self.digitInput + 1;
        
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        
        for(int i= 0; i<num; i++) {
            if(self.cursorX > 0) {
                self.cursorX--;
                line.delete(self.cursorX, self.cursorX+1);
            }
            
            if(self.pollCancel()) {
                break;
            }
        }
    
        self.modifyOverCursorXValue();
        
        self.digitInput = 0;
    }
    else {
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        
        if(self.cursorX > 0) {
            self.cursorX--;
            line.delete(self.cursorX, self.cursorX+1);
        }
    
        self.modifyOverCursorXValue();
    }
}

void ViWin*::getCursorNumber(ViWin* self, int* head, int* tail) 
{
    auto line = self.texts.item(self.scroll+self.cursorY, null);
    
    auto c = line[self.cursorX];

    if(xiswdigit(c)) {
        /// back ///
        *head = self.cursorX;

        if(*head > 0) {
            while(true) {
                if(*head < 0) {
                    break;
                }

                auto c = line[*head];
                
                if(xiswdigit(c)) {
                    (*head)--;
                }
                else {
                    (*head)++;
                    break;
                }
            }
        }
        
        if(*head < 0) {
            *head = 0;
        };

        *tail = self.cursorX;
        
        while(true) {
            auto c = line[*tail];
            
            if(xiswdigit(c)) {
                (*tail)++;
            }
            else {
                break;
            }
        }
    }
    else {
        *head = -1;
        *tail = -1;
    }
}

void ViWin*::incrementNumber(ViWin* self) 
{
    self.pushUndo();
    
    if(self.digitInput > 0) {
        int num = self.digitInput + 1;
        
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        
        int head;
        int tail;
        self.getCursorNumber(&head, &tail);
        
        if(head != -1 && tail != -1) {
            string number_string = line.substring(head, tail).to_string();
            
            int n = atoi(number_string);
            
            n += num;
            
            auto new_line = xsprintf("%ls%d%ls", line.substring(0, head), n, line.substring(tail, -1)).to_wstring();
            
            self.texts.replace(self.scroll+self.cursorY, new_line);
            self.texts_length.replace(self.scroll+self.cursorY, wcslen(new_line));
        }
    
        self.modifyOverCursorXValue();
        
        self.digitInput = 0;
    }
    else {
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        
        int head;
        int tail;
        self.getCursorNumber(&head, &tail);
        
        if(head != -1 && tail != -1) {
            string number_string = line.substring(head, tail).to_string();
            
            int n = atoi(number_string);
            
            n++;
            
            auto new_line = xsprintf("%ls%d%ls", line.substring(0, head), n, line.substring(tail, -1)).to_wstring();
            
            self.texts.replace(self.scroll+self.cursorY, new_line);
            self.texts_length.replace(self.scroll+self.cursorY, wcslen(new_line));
        }

        self.modifyOverCursorXValue();
    }
}

void ViWin*::replaceCursorCharactor(ViWin* self) 
{
    self.pushUndo();
    
    auto key = self.getKey(false);
    
/*
    if(self.digitInput > 0) {
        int num = self.digitInput + 1;
        
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        
        for(int i= 0; i<num; i++) {
            line.replace(self.cursorX+i, (wchar_t)key);
        }
        
        self.digitInput = 0;
    }
    else {
*/
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        line[self.cursorX] = (wchar_t)key;
//    }
}

void ViWin*::deleteUntilTail(ViWin* self) 
{
    self.pushUndo();
    
    if(self.digitInput > 0) {
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        
        line.delete(self.cursorX, -1);
        
        int num = self.digitInput + 1;
        
        for(int i=1; i<num; i++) {
            auto line = self.texts.item(self.scroll+self.cursorY+1, null);
            
            if(line != null) {
                self.texts.delete(self.scroll+self.cursorY+1, self.scroll+self.cursorY+1+1);
                self.texts_length.delete(self.scroll+self.cursorY+1, self.scroll+self.cursorY+1+1);
        
                self.modifyCursorOnDeleting();
            }
            
            if(self.pollCancel()) {
                break;
            }
        }
        
        self.modifyOverCursorXValue();
        
        self.digitInput = 0;
    }
    else {
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        line.delete(self.cursorX, -1);
        
        self.modifyOverCursorXValue();
    }
}

void ViWin*::joinLines(ViWin* self) 
{
    self.pushUndo();

    if(self.scroll+self.cursorY+1 < self.texts.length()) {
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        auto next_line = self.texts.item(self.scroll+self.cursorY+1, null);

        auto line2 = xsprintf("%ls %ls", line, next_line).to_wstring();

        self.texts.replace(self.scroll+self.cursorY, line2);
        self.texts_length.replace(self.scroll+self.cursorY, wcslen(line2));
        self.texts.delete(self.scroll+self.cursorY+1, self.scroll+self.cursorY+1+1);
        self.texts_length.delete(self.scroll+self.cursorY+1, self.scroll+self.cursorY+1+1);
        self.texts_length.delete(self.scroll+self.cursorY+1, self.scroll+self.cursorY+1+1);
    }

    self.modifyOverCursorXValue();
}

void ViWin*::yankOneLine(ViWin* self, Vi* nvi) 
{
    if(self.digitInput > 0) {
        self.pushUndo();
        
        nvi.yank.reset();
        nvi.yankKind = kYankKindLine;
        
        for(int i=0; i<self.digitInput+1; i++) {
            auto line = self.texts.item(self.scroll+self.cursorY+i, null);
            
            if(line != null) {
                nvi.yank.push_back(clone line);
            }
            
            if(self.pollCancel()) {
                break;
            }
        }
        
        self.digitInput = 0;
        self.saveYankToFile(nvi);
    }
    else {
        auto line = self.texts.item(self.scroll+self.cursorY, null);

        if(line != null) {
            self.pushUndo();
            nvi.yank.reset();
            nvi.yank.push_back(clone line);
            nvi.yankKind = kYankKindLine;
            self.saveYankToFile(nvi);
        }
    }
}

void ViWin*::joinLines2(ViWin* self) version 10
{
    self.pushUndo();

    if(self.scroll+self.cursorY+1 < self.texts.length()) {
        auto line = self.texts.item(self.scroll+self.cursorY, null);
        auto next_line = clone self.texts.item(self.scroll+self.cursorY+1, null);

        self.texts.replace(self.scroll+self.cursorY, xsprintf("%ls%ls", line, next_line).to_wstring());
        self.texts_length.replace(self.scroll+self.cursorY, wcslen(xsprintf("%ls%ls", line, next_line).to_wstring()));
        self.texts.delete(self.scroll+self.cursorY+1, self.scroll+self.cursorY+1+1);
        self.texts_length.delete(self.scroll+self.cursorY+1, self.scroll+self.cursorY+1+1);
    }

    self.modifyOverCursorXValue();
}

void ViWin*::forwardToNextCharacter1(ViWin* self, int key) 
{
    self.mRepeatFowardNextCharacterKind = kRFNC1;
    self.mRepeatFowardNextCharacter = key;
    
    auto line = self.texts.item(self.scroll+self.cursorY, null);
    
    if(self.digitInput > 0) {
        for(int i=0; i<self.digitInput+1; i++) {
            auto cursor_x = line.substring(self.cursorX+1, -1).index(xsprintf("%c", key).to_wstring(), -1);
            
            if(cursor_x != -1) {
                self.cursorX += cursor_x + 1;
            }
            else {
                break;
            }
            
            if(self.pollCancel()) {
                break;
            }
        }
        
        self.digitInput = 0;
    }
    else {
        auto cursor_x = line.substring(self.cursorX + 1, -1).index(xsprintf("%c", key).to_wstring(), -1);
        
        if(cursor_x != -1) {
            self.cursorX += cursor_x + 1;
        }
    }
}

void ViWin*::forwardToNextCharacter2(ViWin* self, int key) 
{
    self.mRepeatFowardNextCharacterKind = kRFNC2;
    self.mRepeatFowardNextCharacter = key;
    
    auto line = self.texts.item(self.scroll+self.cursorY, null);
    
    if(self.digitInput > 0) {
        for(int i=0; i<self.digitInput+1; i++) {
            auto cursor_x = line.substring(self.cursorX + 2, -1).index(xsprintf("%c", key).to_wstring(), -1);
            
            if(cursor_x != -1) {
                self.cursorX += cursor_x + 1;
            }
            else {
                break;
            }
            
            if(self.pollCancel()) {
                break;
            }
        }
        
        self.digitInput = 0;
    }
    else {
        auto cursor_x = line.substring(self.cursorX+1, -1).index(xsprintf("%c", key).to_wstring(), -1);
        
        if(cursor_x != -1) {
            self.cursorX += cursor_x;
        }
    }
}

void ViWin*::repeatForwardNextCharacter(ViWin* self) 
{
    switch(self.mRepeatFowardNextCharacterKind) {
        case kRFNC1:
            self.forwardToNextCharacter1(self.mRepeatFowardNextCharacter);
            break;
            
        case kRFNC2:
            self.cursorX++;
            self.forwardToNextCharacter2(self.mRepeatFowardNextCharacter);
            break;
    }
}

void ViWin*::backwardToNextCharacter1(ViWin* self) 
{
    auto key = self.getKey(false);
    
    auto line = self.texts.item(self.scroll+self.cursorY, null);
    
    if(self.digitInput > 0) {
        for(int i=0; i<self.digitInput+1; i++) {
            auto cursor_x = line.substring(0, self.cursorX).rindex(xsprintf("%c", key).to_wstring(), -1);
            
            if(cursor_x != -1) {
                self.cursorX = cursor_x;
            }
            else {
                break;
            }
            
            if(self.pollCancel()) {
                break;
            }
        }
        
        self.digitInput = 0;
    }
    else {
        auto cursor_x = line.substring(0, self.cursorX).rindex(xsprintf("%c", key).to_wstring(), -1);
        
        if(cursor_x != -1) {
            self.cursorX = cursor_x;
        }
    }
}

void ViWin*::backwardToNextCharacter2(ViWin* self) 
{
    auto key = self.getKey(false);
    
    auto line = self.texts.item(self.scroll+self.cursorY, null);
    
    if(self.digitInput > 0) {
        for(int i=0; i<self.digitInput+1; i++) {
            auto cursor_x = line.substring(0, self.cursorX-1).rindex(xsprintf("%c", key).to_wstring(), -1);
            
            if(cursor_x != -1) {
                self.cursorX = cursor_x + 1;
            }
            else {
                break;
            }
            
            if(self.pollCancel()) {
                break;
            }
        }
        
        self.digitInput = 0;
    }
    else {
        auto cursor_x = line.substring(0, self.cursorX).rindex(xsprintf("%c", key).to_wstring(), -1);
        
        if(cursor_x != -1) {
            self.cursorX = cursor_x + 1;
        }
    }
}

void ViWin*::changeCase(ViWin* self) 
{
    self.pushUndo();

    auto line = self.texts.item(self.scroll+self.cursorY, null);
    
    if(self.digitInput > 0) {
        for(int i=0; i<self.digitInput+1; i++) {
            wchar_t c = line[self.cursorX + i];
            
            if(c != -1) {
                if(c >= 'a' && c <= 'z') {
                    wchar_t c2 = c - 'a' + 'A';
                    
                    line[self.cursorX + i] = c2;
                }
                else if(c >= 'A' && c <= 'Z') {
                    wchar_t c2 = c - 'A' + 'a';
                    
                    line[self.cursorX + i] = c2;
                }
            }
            else {
                break;
            }
            
            if(self.pollCancel()) {
                break;
            }
        }
        
        self.digitInput = 0;
    }
    else {
        wchar_t c = line[self.cursorX];
            
        if(c != -1) {
            if(c >= 'a' && c <= 'z') {
                wchar_t c2 = c - 'a' + 'A';
                
                line[self.cursorX] = c2;
            }
            else if(c >= 'A' && c <= 'Z') {
                wchar_t c2 = c - 'A' + 'a';
                
                line[self.cursorX] = c2;
            }
        }
    }
}

void ViWin*::moveToHead(ViWin* self) 
{
    auto line = self.texts.item(self.scroll+self.cursorY, null);
    
    int i;
    for(i=0; i<line.length(); i++) {
        if(!(line[i] == ' ' && line[i] == '\t')) {
            break;
        }
    }

    self.cursorX = i;
}

Vi*% Vi*::initialize(Vi*% self) version 10
{
    auto result = inherit(self);

    result.events.replace('d', void lambda(Vi* self, int key) {
        auto key2 = self.activeWin.getKey(true);

        switch(key2) {
            case 'd':
                self.activeWin.deleteOneLine(self);
                self.activeWin.writed = true;
                break;
            
            case 'w':
            case 'e':
                self.activeWin.deleteWord(self);
                self.activeWin.writed = true;
                break;
            
            case 'f':
                self.activeWin.deleteForNextCharacter();
                self.activeWin.writed = true;
                break;
                
            case 't':
                self.activeWin.deleteForNextCharacter2();
                self.activeWin.writed = true;
                break;
                
            case '$':
                self.activeWin.deleteUntilTail();
                self.activeWin.writed = true;
                break;
        }

        self.activeWin.saveInputedKey();
    });

    result.events.replace('c', void lambda(Vi* self, int key) {
        auto key2 = self.activeWin.getKey(true);

        switch(key2) {
            case '$':
                self.activeWin.deleteUntilTail();
                self.enterInsertMode();
                if(self.activeWin.texts.length() != 0) {
                    self.activeWin.cursorX++;
                }
                self.activeWin.writed = true;
                break;
                
            case 'c':
                self.activeWin.deleteOneLine2(self);
                self.enterInsertMode();
                if(self.activeWin.texts.length() != 0) {
                    self.activeWin.cursorX = 0;
                }
                self.activeWin.writed = true;
                break;
                
                
            case 'w':
            case 'e':
                self.activeWin.deleteWord(self);
                self.enterInsertMode2();
                self.activeWin.writed = true;
                break;
                
            case 't':
                self.activeWin.deleteForNextCharacter2();
                self.enterInsertMode();
                self.activeWin.writed = true;
                break;
                
            case 'f':
                self.activeWin.deleteForNextCharacter();
                self.enterInsertMode();
                self.activeWin.writed = true;
                break;
        }
    });
    result.events.replace('y', void lambda(Vi* self, int key) {
        auto key2 = self.activeWin.getKey(true);

        switch(key2) {
            case 'y':
                self.activeWin.yankOneLine(self);
                break;
        }
    });
    result.events.replace('Y', void lambda(Vi* self, int key) {
        self.activeWin.yankOneLine(self);
    });
    result.events.replace('D', void lambda(Vi* self, int key) {
        self.activeWin.deleteUntilTail();
        self.activeWin.writed = true;

        self.activeWin.saveInputedKey();
    });

    result.events.replace('C', void lambda(Vi* self, int key) {
        self.activeWin.deleteUntilTail();
        self.enterInsertMode();
        if(self.activeWin.texts.length() != 0) {
            self.activeWin.cursorX++;
        }
        self.activeWin.writed = true;
    });
    result.events.replace('x', void lambda(Vi* self, int key) {
        self.activeWin.deleteCursorCharactor();
        self.activeWin.writed = true;

        self.activeWin.saveInputedKey();
    });
    result.events.replace('X', void lambda(Vi* self, int key) {
        self.activeWin.deleteBack();
        self.activeWin.writed = true;

        self.activeWin.saveInputedKey();
    });
/*
    result.events.replace('A'-'A'+1, void lambda(Vi* self, int key) {
        self.activeWin.incrementNumber();
        self.activeWin.writed = true;

        self.activeWin.saveInputedKey();
    });
*/
    result.events.replace('r', void lambda(Vi* self, int key) {
        self.activeWin.replaceCursorCharactor();
        self.activeWin.writed = true;

        self.activeWin.saveInputedKey();
    });
    result.events.replace('s', void lambda(Vi* self, int key) {
        self.activeWin.replaceCursorCharactor();
        self.activeWin.writed = true;
        self.enterInsertMode();
    });
    result.events.replace('S', void lambda(Vi* self, int key) {
        self.activeWin.moveToHead();
        self.activeWin.deleteUntilTail();
        self.activeWin.writed = true;
        self.enterInsertMode();
        if(self.activeWin.cursorX != 0) {
            self.activeWin.cursorX++;
        }
    });
    result.events.replace('J', void lambda(Vi* self, int key) {
        self.activeWin.joinLines();
        self.activeWin.writed = true;

        self.activeWin.saveInputedKey();
    });
    result.events.replace('~', void lambda(Vi* self, int key) {
        self.activeWin.changeCase();

        self.activeWin.saveInputedKey();
    });
    result.events.replace('f', void lambda(Vi* self, int key) {
        auto key2 = self.activeWin.getKey(false);
        
        self.activeWin.forwardToNextCharacter1(key2);

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('t', void lambda(Vi* self, int key) {
        auto key2 = self.activeWin.getKey(false);

        self.activeWin.forwardToNextCharacter2(key2);

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace(';', void lambda(Vi* self, int key) {
        self.activeWin.repeatForwardNextCharacter();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('F', void lambda(Vi* self, int key) {
        self.activeWin.backwardToNextCharacter1();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('T', void lambda(Vi* self, int key) {
        self.activeWin.backwardToNextCharacter2();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
/*
    result.events.replace('^', void lambda(Vi* self, int key) {
        self.activeWin.moveToHead();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
*/
    result.events.replace('-', void lambda(Vi* self, int key) {
        self.activeWin.moveToHead();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('_', void lambda(Vi* self, int key) {
        self.activeWin.moveToHead();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('H', void lambda(Vi* self, int key) {
        self.activeWin.cursorX = 0;
        self.activeWin.cursorY = 0;

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('L', void lambda(Vi* self, int key) {
        self.activeWin.cursorY = self.activeWin.height-2;
        self.activeWin.modifyOverCursorYValue();
        
        self.activeWin.moveToHead();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('+', void lambda(Vi* self, int key) {
        self.activeWin.cursorY++;
        self.activeWin.modifyOverCursorYValue();
        self.activeWin.moveToHead();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    result.events.replace('Y'-'A'+1, void lambda(Vi* self, int key) {
        self.activeWin.scroll--;
        if(self.activeWin.scroll < 0) {
            self.activeWin.scroll = 0;
        }

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
/*
    result.events.replace('E'-'A'+1, void lambda(Vi* self, int key) {
        self.activeWin.scroll++;
        if(self.activeWin.scroll >= self.activeWin.texts.length()) {
            self.activeWin.scroll = self.activeWin.texts.length()-1;
        }
        self.activeWin.modifyOverCursorYValue();
        self.activeWin.modifyUnderCursorYValue();

        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
*/
    self.events.replace('E'-'A'+1, void lambda(Vi* self, int key) 
    {
        if(self.activeWin.digitInput > 0) {
            self.activeWin.cursorY += self.activeWin.digitInput;
            self.activeWin.modifyOverCursorYValue();
            
            self.activeWin.digitInput = 0;
            self.activeWin.moveAtTail();
        }
        else {
            self.activeWin.moveAtTail();
        }
        
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });

    return result;
}
