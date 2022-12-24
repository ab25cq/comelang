#include "common.h"

ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 2
{
    auto result = inherit(self, y, x, width, height, vi);
    
    result.returnPointStack = new list<tuple3<int, int, int>*%>();

    return result;
}

void ViWin*::finalize(ViWin* self) version 2
{
    inherit(self);
    delete self.returnPointStack;
}

void ViWin*::textsView(ViWin* self, Vi* nvi)
{
    int maxy = getmaxy(self.win);
    int maxx = getmaxx(self.win);

    if(self.texts.length() > 0) {
        auto cursor_line = self.texts.item(self.scroll + self.cursorY, null).printable();
            
        int cursor_height = (wcswidth(cursor_line, cursor_line.length()) / (maxx-1));

        int it2 = 0;
        foreach(it, self.texts.sublist(self.scroll, self.scroll+maxy-1))
        {
            auto printable_line = it.printable();

            if(it2 > self.cursorY 
                && it2 <= self.cursorY + cursor_height)
            {
            }
            else if(self.cursorY == it2 && nvi.activeWin.equals(self)) 
            {
                if(printable_line.length() == 0) {
                    wattron(self.win, A_REVERSE);
                    mvwprintw(self.win, it2, 0, "$");
                    wattroff(self.win, A_REVERSE);
                }
                else if(wcswidth(printable_line, wcslen(printable_line)) > maxx-2)
                {
                    int x = 0;
                    int cursor_y = it2;
                    int cursor_x = 0;
                    int terminal_width = 0;
                    while(x < it.length()) {
                        auto c = it.substring(x, x+1).printable();

                        if(x == self.cursorX) {
                            wmove(self.win, cursor_y, cursor_x);
                            wattron(self.win, A_REVERSE);
                            wprintw(self.win, "%ls", c);
                            wattroff(self.win, A_REVERSE);
                        }
                        else {
                            wmove(self.win, cursor_y, cursor_x);
                            wprintw(self.win, "%ls", c);
                        }

                        x++;
                        cursor_x += wcswidth(c, c.length());
                        terminal_width += wcswidth(c, c.length());
                        
                        if(terminal_width >= maxx-2) {
                            cursor_x = 0;
                            terminal_width = 0;
                            cursor_y++;
                            wprintw(self.win, "~");
                        }
                    }
                    if(self.cursorX == it.length()) {
                        wattron(self.win, A_REVERSE);
                        wprintw(self.win, "$");
                        wattroff(self.win, A_REVERSE);
                    }
                    else {
                        wprintw(self.win, "$");
                    }
                }
                else {
                    int cursor_x = self.cursorX;
                    int x = 0;
                    wstring head_string = it.substring(0, cursor_x);
                    wstring printable_head_string = head_string.printable();

                    mvwprintw(self.win, it2, 0, "%ls", printable_head_string);

                    x += wcswidth(printable_head_string, printable_head_string.length());

                    wstring cursor_string = it.substring(cursor_x, cursor_x+1);
                    wstring printable_cursor_string = cursor_string.printable();

                    if(printable_cursor_string[0] == '\0') {
                        wattron(self.win, A_REVERSE);
                        mvwprintw(self.win, it2, x, " ", printable_cursor_string);
                        wattroff(self.win, A_REVERSE);
                    }
                    else {
                        wattron(self.win, A_REVERSE);
                        mvwprintw(self.win, it2, x, "%ls", printable_cursor_string);
                        wattroff(self.win, A_REVERSE);
                    }

                    x += wcswidth(printable_cursor_string, printable_cursor_string.length());

                    wstring tail_string = it.substring(cursor_x+1, -1);
                    wstring printable_tail_string = tail_string.printable();

                    mvwprintw(self.win, it2, x, "%ls", printable_tail_string);
                    
                    if(self.cursorX == it.length()) {
                        wattron(self.win, A_REVERSE);
                        wprintw(self.win, "$");
                        wattroff(self.win, A_REVERSE);
                    }
                    else {
                        wprintw(self.win, "$");
                    }
                }
            }
            else {
                if(wcswidth(printable_line, wcslen(printable_line)) > maxx-2)
                {
                    int x = 0;
                    int visible_x = 0;
                    while(visible_x < maxx-2 && x < printable_line.length()) {
                        wstring c = printable_line.substring(x, x+1);
                        mvwprintw(self.win, it2, visible_x, "%ls", c);
                        
                        visible_x += wcswidth(c, wcslen(c));
                        x++;
                    }
                    wprintw(self.win, "~");
                }
                else {
                    mvwprintw(self.win, it2, 0, "%ls$", printable_line);
                }
            }

            it2++;
        }
    }
}

/*
void ViWin*::textsView(ViWin* self, Vi* nvi)
{
    int maxy = getmaxy(self.win);
    int maxx = getmaxx(self.win);

    int it2 = 0;
    foreach(it, self.texts.sublist(self.scroll, self.scroll+maxy-1))
    {
        auto line = it.substring(0, maxx-1);

        if(self.cursorY == it2 && nvi.activeWin.equals(self)) {
            if(line.length() == 0) {
                wattron(self.win, A_REVERSE);
                mvwprintw(self.win, it2, 0, " ");
                wattroff(self.win, A_REVERSE);
            }
            else if(self.cursorX == line.length())
            {
                mvwprintw(self.win, it2, 0, "%ls", line);
                wstring line2 = line.printable();

                wattron(self.win, A_REVERSE);
                mvwprintw(self.win, it2, wcswidth(line2, line2.length()), " ");
                wattroff(self.win, A_REVERSE);
            }
            else {
                int x = 0;
                wstring head_string = line.substring(0, self.cursorX);
                wstring printable_head_string = head_string.printable();

                mvwprintw(self.win, it2, 0, "%ls", printable_head_string);

                x += wcswidth(printable_head_string, printable_head_string.length());

                wstring cursor_string = line.substring(self.cursorX, self.cursorX+1);
                wstring printable_cursor_string = cursor_string.printable();

                wattron(self.win, A_REVERSE);
                mvwprintw(self.win, it2, x, "%ls", printable_cursor_string);
                wattroff(self.win, A_REVERSE);

                x += wcswidth(printable_cursor_string, printable_cursor_string.length());

                wstring tail_string = line.substring(self.cursorX+1, -1);

                mvwprintw(self.win, it2, x, "%ls", tail_string);
            }
        }
        else {
            mvwprintw(self.win, it2, 0, "%ls", line);
        }

        it2++;
    }
}
*/

void ViWin*::statusBarView(ViWin* self, Vi* nvi) version 2
{
    int maxy = getmaxy(self.win);
    int maxx = getmaxx(self.win);

    wattron(self.win, A_REVERSE);
    mvwprintw(self.win, self.height-1, 0, "x %d y %d scroll %d", self.cursorX, self.cursorY, self.scroll);
    wattroff(self.win, A_REVERSE);

    wrefresh(self.win);
}

void ViWin*::view(ViWin* self, Vi* nvi) version 2
{
    werase(self.win);

    self.textsView(nvi);

    self.statusBarView(nvi);

    wrefresh(self.win);
}

int ViWin*::getKey(ViWin* self, bool head) version 2
{
    return wgetch(self.win);        
}

void ViWin*::input(ViWin* self, Vi* nvi) version 2
{
    auto key = self.getKey(true);

    auto event = nvi.events.item(key, null);

    if(event != null) {
        event(nvi, key);
    }
}

void ViWin*::modifyUnderCursorYValue(ViWin* self)
{
    if(self.cursorY < 0) {
        self.scroll += self.cursorY;

        if(self.scroll < 0) {
            self.scroll = 0;
        }

        self.cursorY = 0;
    }
}

void ViWin*::modifyOverCursorYValue(ViWin* self)
{
    if(self.texts.length() == 0) {
        self.scroll = 0;
        self.cursorY = 0;
        self.cursorX = 0;
    }
    else {
        int maxy = getmaxy(self.win);

        if(self.cursorY >= maxy-2)
        {
            self.scroll += self.cursorY - (maxy-2);

            if(self.scroll >= self.texts.length()-1) {
                self.scroll = self.texts.length()-1;
            }

            self.cursorY = maxy-2;
        }

        if(self.cursorY + self.scroll >= self.texts.length()-1) {
            self.cursorY = self.texts.length()-self.scroll-1;
        }
    }
}

void ViWin*::modifyOverCursorXValue(ViWin* self)
{
    if(self.texts.length() == 0) {
        self.scroll = 0;
        self.cursorY = 0;
        self.cursorX = 0;
    }
    else {
        auto cursor_line = self.texts.item(self.scroll+self.cursorY, null);

        if(cursor_line) {
            if(self.cursorX >= cursor_line.length())
            {
                self.cursorX = cursor_line.length()-1;

                if(self.cursorX < 0) {
                    self.cursorX = 0;
                }
            }
        }
    }
}

void ViWin*::modifyOverCursorXValue2(ViWin* self)
{
    if(self.texts.length() == 0) {
        self.scroll = 0;
        self.cursorY = 0;
        self.cursorX = 0;
    }
    else {
        auto cursor_line = self.texts.item(self.scroll+self.cursorY, null);

        if(cursor_line) {
            if(self.cursorX >= cursor_line.length())
            {
                self.cursorX = cursor_line.length()+1;

                if(self.cursorX < 0) {
                    self.cursorX = 0;
                }
            }
        }
    }
}

void ViWin*::modifyUnderCursorXValue(ViWin* self)
{
    if(self.cursorX < 0) {
        self.cursorX = 0;
    }
}

void ViWin*::forward(ViWin* self) version 2
{
    self.cursorX++;
    self.modifyOverCursorXValue();
}

void ViWin*::backward(ViWin* self) version 2
{
    self.cursorX--;
    self.modifyUnderCursorXValue();
}

void ViWin*::prevLine(ViWin* self) 
{
    self.cursorY--;

    self.modifyUnderCursorYValue();
    self.modifyOverCursorXValue();
}

void ViWin*::nextLine(ViWin* self) 
{
    self.cursorY++;

    self.modifyOverCursorYValue();
    self.modifyOverCursorXValue();
}

void ViWin*::halfScrollUp(ViWin* self) 
{
    int maxy = getmaxy(self.win);

    self.cursorY -= maxy/2;

    self.modifyUnderCursorYValue();
    self.modifyOverCursorXValue();
}

void ViWin*::halfScrollDown(ViWin* self) 
{
    int maxy = getmaxy(self.win);

    self.cursorY += maxy/2;

    self.modifyOverCursorYValue();
    self.modifyOverCursorXValue();
}

void ViWin*::centeringCursor(ViWin* self) 
{
    int maxy = getmaxy(self.win);
    
    int n = self.scroll + self.cursorY;

    if(n > maxy / 2) {
        self.scroll = n - maxy / 2; 
        self.cursorY = maxy / 2;
        
        if(self.scroll >= self.texts.length()) {
            self.scroll = self.texts.length() - 1;
            self.cursorY = 0;
        }
        if(self.scroll < 0) {
            self.scroll = 0;
            self.cursorY = 0;
        }
    }
}

void ViWin*::topCursor(ViWin* self) 
{
    self.scroll = self.scroll + self.cursorY;
    self.cursorY = 0;
}

void ViWin*::moveAtHead(ViWin* self) 
{
    self.cursorX = 0;
}

void ViWin*::moveAtTail(ViWin* self) 
{
    auto cursor_line = self.texts.item(self.scroll+self.cursorY, wstring(""));
    auto line_max = cursor_line.length();

    self.cursorX = line_max-1;

    if(self.cursorX < 0) {
        self.cursorX = 0;
    }
}

void ViWin*::moveTop(ViWin* self) 
{
    self.saveReturnPoint();

    self.scroll = 0;
    self.cursorY = 0;
    self.cursorX = 0;

    self.modifyOverCursorXValue();
}

void ViWin*::restoreVisualMode(ViWin* self, Vi* nvi) version 2
{
}

void ViWin*::keyG(ViWin* self, Vi* nvi) 
{
    auto key2 = self.getKey(false);

    switch(key2) {
        case 'g':
            self.moveTop();
            break;

        case 'v':
            self.restoreVisualMode(nvi);
            break;
            
        case '/':
            nvi.enterSearchMode(true, false);
            break;
            
        case '?':
            nvi.enterSearchMode(true, true);
            break;
            
        case 'J':
            self.joinLines2();
            break;
    }
}

void ViWin*::moveBottom(ViWin* self) 
{
    self.saveReturnPoint();
    
    if(self.digitInput > 0) {
        self.scroll = 0;
        self.cursorY = self.digitInput;
        self.digitInput = 0;
    }
    else {
        self.cursorY = self.texts.length()-1;
    }

    self.modifyOverCursorXValue();
    self.modifyOverCursorYValue();
    self.centeringCursor();
}

void ViWin*::openFile(ViWin* self, char* file_name, int line_num) version 2
{
}

void ViWin*::saveReturnPoint(ViWin* self)
{
    auto return_point = new tuple3<int,int,int>;

    return_point.v1 = self.cursorY;
    return_point.v2 = self.cursorX;
    return_point.v3 = self.scroll;

    self.returnPoint = clone return_point;
    self.returnPointStack.push_back(clone return_point);
}

void ViWin*::saveInputedKeyOnTheMovingCursor(ViWin* self) version 2
{
}

void ViWin*::joinLines2(ViWin* self)  version 2
{
}


// Vi

Vi*% Vi*::initialize(Vi*% self) version 2
{
    setlocale(LC_ALL, "");
    
    self.init_curses();

    self.wins = new list<ViWin*%>.initialize();

    auto maxx = xgetmaxx();
    auto maxy = xgetmaxy();

    auto win = new ViWin.initialize(0,0, maxx-1, maxy, self);

    win.texts.push_back(wstring(""));

    self.wins.push_back(win);

    self.activeWin = self.wins[-1];

    self.appEnd = false;

    self.events = new vector<void (*lambda)(Vi*, int)>.initialize();
    
    for(int i=0; i<KEY_MAX; i++) {
        self.events.push_back(null);
    }

    self.events.replace('l', void lambda(Vi* self, int key) 
    {
        self.activeWin.forward();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace(KEY_RIGHT, void lambda(Vi* self, int key) 
    {
        self.activeWin.forward();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('h', void lambda(Vi* self, int key) 
    {
        self.activeWin.backward();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace(KEY_LEFT, void lambda(Vi* self, int key) 
    {
        self.activeWin.backward();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('j', void lambda(Vi* self, int key) 
    {
        self.activeWin.nextLine();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace(KEY_DOWN, void lambda(Vi* self, int key) 
    {
        self.activeWin.nextLine();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('k', void lambda(Vi* self, int key) 
    {
        self.activeWin.prevLine();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace(KEY_UP, void lambda(Vi* self, int key) 
    {
        self.activeWin.prevLine();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('0', void lambda(Vi* self, int key) 
    {
        self.activeWin.moveAtHead();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('|', void lambda(Vi* self, int key) 
    {
        self.activeWin.moveAtHead();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('$', void lambda(Vi* self, int key) 
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
    self.events.replace('D'-'A'+1, void lambda(Vi* self, int key) 
    {
        self.activeWin.halfScrollDown();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('U'-'A'+1, void lambda(Vi* self, int key) 
    {
        self.activeWin.halfScrollUp();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('L'-'A'+1, void lambda(Vi* self, int key) 
    {
        self.clearView();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('g', void lambda(Vi* self, int key) 
    {
        self.activeWin.keyG(self);
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('G', void lambda(Vi* self, int key) 
    {
        self.activeWin.moveBottom();
        self.activeWin.saveInputedKeyOnTheMovingCursor();
    });
    self.events.replace('z', void lambda(Vi* self, int key) 
    {
        auto key2 = self.activeWin.getKey(false);

        switch(key2) {
            case 'z':
            case '.':
                self.activeWin.centeringCursor();
                self.activeWin.saveInputedKeyOnTheMovingCursor();
                break;
                
            case '\n':
            case 't':
                self.activeWin.topCursor();
                self.activeWin.saveInputedKeyOnTheMovingCursor();
                break;
        }
    });
    self.events.replace('Z', void lambda(Vi* self, int key) 
    {
        auto key2 = self.activeWin.getKey(false);

        switch(key2) {
            case 'Z':
                self.exitFromApp();
                break;
        }
    });

    return self;
}

void Vi*::finalize(Vi* self) version 2
{
    inherit(self);
    
    delete self.events;
}

void Vi*::exitFromApp(Vi* self) version 2
{
    self.appEnd = true;
}

void Vi*::view(Vi* self) 
{
    erase();

    foreach(it, self.wins) {
        it.view(self);
        wrefresh(it.win);
    }
}

void Vi*::clearView(Vi* self)
{
    clearok(stdscr, true);
    clear();
    clearok(stdscr, false);
    foreach(it, self.wins) {
        clearok(it.win, true);
        wclear(it.win);
        clearok(it.win, false);
        it.view(self);
    }
    refresh();
}

int Vi*::main_loop(Vi* self) version 2
{
    while(!self.appEnd) {
        self.view();
        
        self.activeWin.input(self);
    }

    0
}

void Vi*::openFile(Vi* self, char* file_name, int line_num) version 2
{
    /// implemented by the after layer
}

void Vi*::repositionWindows(Vi* self)  version 2
{
    /// implemented by the after layer
}

void Vi*::enterSearchMode(Vi* self, bool regex_search, bool search_reverse) version 2
{
    /// implemented by the after layer
}
