public {#include "config.h" }
public {#include <neo-c.h> }
public {#define SAVE_INPUT_KEY_MAX 256}

#include "common.h"

public {
enum eMode { kEditMode, kInsertMode, kVisualMode, kCommandMode, kSearchMode, kHorizonVisualMode, kVerticalVisualMode, kVerticalVisualMode, kRewriteMode };

struct ViWin 
{
/// layer 1 ///
    WINDOW* win;
    list<wstring>*% texts;
    int y;
    int x;
    int width;
    int height;
    int scroll;
    void* vi;
    int id;

/// layer 2 ///
    int cursorY;
    int cursorX;
    int scroll;
    int digitInput;

    tuple3<int,int,int>*% returnPoint;
    list<tuple3<int, int, int>*%>*% returnPointStack;

/// layer 5 ///
    list<list<wstring>*%>%* undo;
    list<int>%* undoScroll;
    list<int>%* undoCursorX;
    list<int>%* undoCursorY;
    int undoIndex;

/// layer 6 ///
    char fileName[PATH_MAX];
    bool writed;

/// layer 8 ///
    int visualModeHead;
    int visualModeHeadX;
    
    int visualModeHeadHorizonScroll;
    int visualModeHeadHorizonX;
    int visualModeHeadHorizonY;

    int visualModeHeadBefore;
    int visualModeTailCursorYBefore;
    int visualModeTailScrollBefore;

/// layer 10 ///
    int mRepeatFowardNextCharacterKind;
    wchar_t mRepeatFowardNextCharacter;

/// layer 12 ///
    char commandString[128];

/// layer 14 ///
    vector<int>*% inputedKeys;
    vector<int>*% savedInputedKeys;
    bool autoInput;
    int digitInput;
    int autoInputIndex;
    bool pressedDot;

    map<int, vector<vector<int>*%>*%>*% macro;
    int recordingMacroKey;
    vector<vector<int>*%>*% recordingMacro;
    vector<vector<int>*%>*% runningMacro;
    int runningMacroIndex1;
    int runningMacroIndex2;

/// layer 16 ///
    map<wchar_t, tuple3<int,int, int>*%>*% mark;

/// layer 17 ///
    int visualModeHorizonHeadScroll;
    int visualModeHorizonHeadX;
    int visualModeHorizonHeadY;

/// layer 18 ///
    int visualModeVerticalHeadX;
    int visualModeVerticalHeadY;
    int visualModeVerticalLen;
    
    int visualModeVerticalStartY;
    int visualModeVerticalStartScroll;
    int visualModeVerticalStartX;
    bool visualModeVerticalInserting;
};

struct Vi 
{
/// layer 1 ///
    list<ViWin*%>*% wins;
    ViWin* activeWin;

/// layer 2 ///
    vector<void (*lambda)(Vi*, int)>*% events;
    bool appEnd;

/// layer 3 ///
    int mode;

/// layer 6 ///
    int toggleWin;

/// layer 7 ///
    list<wstring>*% yank;
    list<wstring>*% fileYank;
    int yankKind;

/// layer 9 ///
    wchar_t searchString[128];
    bool searchReverse;
    bool regexSearch;
};
}

ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 1
{
    self.texts = new list<wstring>();

    self.y = y;
    self.x = x;
    self.width = width;
    self.height = height;

    self.scroll = 0;
    self.vi = vi;

    static int id = 0;
    self.id = id;
    id++;

    id++;

    WINDOW* win = newwin(height, width, y, x);

    self.win = win;

    keypad(self.win, true);

    return self;
}

void ViWin*::finalize(ViWin* self) version 1
{
    delete self.texts;
    delwin(self.win);
}

void ViWin*::view(ViWin* self, Vi* nvi) version 1
{
    werase(self.win);

    int it2 = 0;
    foreach(it, self.texts) {
        mvwprintw(self.win, it2, 0, "%ls", it);
        it2++;
    }

    wrefresh(self.win);
}

void ViWin*::input(ViWin* self, Vi* nvi) version 1
{
    int key = wgetch(self.win);
}

Vi*% Vi*::initialize(Vi*% self) version 1
{
    self.init_curses();

    int maxx = xgetmaxx();
    int maxy = xgetmaxy();

    self.wins = new list<ViWin*%>();

    ViWin*% win = new ViWin(0, 0, maxx-1, maxy, self);

    win.texts.push_back(wstring("aaa"));
    win.texts.push_back(wstring("bbb"));
    win.texts.push_back(wstring("ccc"));

    self.wins.push_back(win);

    self.activeWin = self.wins[-1];

    return self;
}

bool ViWin*::equals(ViWin* left, ViWin* right) 
{
    return left.id == right.id;
}

void Vi*::finalize(Vi* self) version 1
{
    delete self.wins;

//    endwin();
}

int Vi::main_loop(Vi* self) version 1
{
    foreach(it, self.wins) {
        it.view(self);
    }

    self.activeWin.input(self);

    return 0;
}

void Vi*::init_curses(Vi* self) 
{
    initscr();
    noecho();
    keypad(stdscr, true);
    raw();
    curs_set(0);
}
