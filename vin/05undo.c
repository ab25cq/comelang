#include "common.h"

ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 5
{
    auto result = inherit(self, y, x, width, height, vi);

    result.undo = new list<list<wstring>*%>.initialize();
    result.undoScroll = new list<int>.initialize();
    result.undoCursorX = new list<int>.initialize();
    result.undoCursorY = new list<int>.initialize();
    result.undoIndex = 0;

    return result;
}

void ViWin*::pushUndo(ViWin* self) version 5
{
    self.undo.delete(self.undoIndex, -1);
    self.undoScroll.delete(self.undoIndex, -1);
    self.undoCursorX.delete(self.undoIndex, -1);
    self.undoCursorY.delete(self.undoIndex, -1);

    auto undo = clone self.texts;

    self.undo.push_back(undo);

    self.undoCursorX.push_back(self.cursorX);
    self.undoScroll.push_back(self.scroll);
    self.undoCursorY.push_back(self.cursorY);
    self.undoIndex++;
}

void ViWin*::redo(ViWin* self) 
{
    if(self.undoIndex < self.undo.length()-1) 
    {
        self.undoIndex++;

        auto undo = clone self.undo.item(self.undoIndex, null);
        auto cursor_x = self.undoCursorX.item(self.undoIndex, -1);
        auto scroll = self.undoScroll.item(self.undoIndex, -1);
        auto cursor_y = self.undoCursorY.item(self.undoIndex, -1);

        if(undo != null && cursor_x != -1 && cursor_y != -1 && scroll != -1) 
        {
            self.texts = undo;
            self.cursorX = cursor_x;
            self.cursorY = cursor_y;
            self.scroll = scroll;
        }
    }
}

void ViWin*::undo(ViWin* self) 
{
    if(self.undoIndex == self.undo.length())
    {
        self.pushUndo();
        self.undoIndex--;
    }

    if(self.undoIndex > 0) {
        self.undoIndex--;

        auto undo = clone self.undo.item(self.undoIndex, null);
        auto cursor_x = self.undoCursorX.item(self.undoIndex, -1);
        auto cursor_y = self.undoCursorY.item(self.undoIndex, -1);
        auto scroll = self.undoScroll.item(self.undoIndex, -1);

        if(undo != null && cursor_x != -1 && cursor_y != -1 && scroll != -1) 
        {
            self.texts = undo;
            self.cursorX = cursor_x;
            self.cursorY = cursor_y;
            self.scroll = scroll;
        }
    }
}

Vi*% Vi*::initialize(Vi*% self) version 5
{
    auto result = inherit(self);

    result.events.replace('u', void lambda(Vi* self, int key) 
    {
        self.activeWin.undo();
    });

    result.events.replace('r'-'a'+1, void lambda(Vi* self, int key) 
    {
        self.activeWin.redo();
    });

    return result;
}

void Vi*::enterInsertMode(Vi* self) version 5
{
    inherit(self);

    self.activeWin.pushUndo();
}
