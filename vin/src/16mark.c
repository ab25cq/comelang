#include "common.h"

ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 16
{
    auto result = inherit(self, y, x, width, height, vi);
    
    result.mark = new map<wchar_t, tuple3<int,int, int>*%>.initialize();

    return result;
}

void ViWin*::finalize(ViWin* self) version 16
{
    inherit(self);

    delete self.mark;

    if(self.returnPoint) {
        delete self.returnPoint;
    }
}

void ViWin*::markAtCurrentPoint(ViWin* self, wchar_t c) 
{
    auto point = new tuple3<int, int, int>;

    point.v1 = self.scroll;
    point.v2 = self.cursorY;
    point.v3 = self.cursorX;
    
    self.mark.insert(c, point);
}

void ViWin*::returnAtMarkedPoint(ViWin* self, wchar_t c) 
{
    auto point = self.mark.at(c, null);
    
    if(point != null) {
        self.saveReturnPoint();

        self.scroll = point.v1;
        self.cursorY = point.v2;
        self.cursorX = point.v3;
        
        self.modifyUnderCursorYValue();
        self.modifyOverCursorYValue();
        self.modifyOverCursorXValue();
    }
}

void ViWin*::returnBack(ViWin* self) 
{
    auto point = self.returnPoint;
    
    if(point != null) {
        int cursor_y = self.cursorY;
        int cursor_x = self.cursorX;
        int scroll = self.scroll;
        
        self.cursorY = point.v1;
        self.cursorX = point.v2;
        self.scroll = point.v3;
        
        self.modifyUnderCursorYValue();
        self.modifyOverCursorYValue();
        self.modifyOverCursorXValue();
        
        auto return_point = new tuple3<int,int,int>;

        return_point.v1 = cursor_y;
        return_point.v2 = cursor_x;
        return_point.v3 = scroll;

        self.returnPoint = return_point;
    }
}

void ViWin*::returnBackOfStack(ViWin* self) 
{
    auto point = self.returnPointStack.item(-1, null);
    
    if(point != null) {
        self.cursorY = point.v1;
        self.cursorX = point.v2;
        self.scroll = point.v3;
        
        self.modifyUnderCursorYValue();
        self.modifyOverCursorYValue();
        self.modifyOverCursorXValue();

        self.returnPointStack.delete(-1, -1);
    }
}

Vi*% Vi*::initialize(Vi*% self) version 16
{
    auto result = inherit(self);

    result.events.replace('.', void lambda(Vi* self, int key) 
    {
        self.activeWin.autoInput = true;
        self.activeWin.pressedDot = true;
    });

    result.events.replace('m', void lambda(Vi* self, int key) 
    {
        auto key2 = self.activeWin.getKey(false);
        
        self.activeWin.markAtCurrentPoint(key2);
    });
    
    result.events.replace('O'-'A'+1, void lambda(Vi* self, int key)
    {
        self.activeWin.returnBackOfStack();
    });

    result.events.replace('`', void lambda(Vi* self, int key) 
    {
        auto key2 = self.activeWin.getKey(false);
        
        if(key2 == '`') {
            self.activeWin.returnBack();
        }
        else {
            self.activeWin.returnAtMarkedPoint(key2);
        }
    });

    return result;
}
