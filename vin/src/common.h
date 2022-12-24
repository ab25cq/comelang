
////////////////////////////
// src/01init.c
////////////////////////////
#include "config.h" 

#include <neo-c.h> 

#define SAVE_INPUT_KEY_MAX 256


enum eMode { kEditMode, kInsertMode, kVisualMode, kCommandMode, kSearchMode, kHorizonVisualMode, kVerticalVisualMode, kVerticalVisualMode, kRewriteMode };

struct ViWin
{

    WINDOW* win;
    list<wstring>*% texts;
    int y;
    int x;
    int width;
    int height;
    int scroll;
    void* vi;
    int id;


    int cursorY;
    int cursorX;
    int scroll;
    int digitInput;

    tuple3<int,int,int>*% returnPoint;
    list<tuple3<int, int, int>*%>*% returnPointStack;


    list<list<wstring>*%>%* undo;
    list<int>%* undoScroll;
    list<int>%* undoCursorX;
    list<int>%* undoCursorY;
    int undoIndex;


    char fileName[PATH_MAX];
    bool writed;


    int visualModeHead;
    int visualModeHeadX;

    int visualModeHeadHorizonScroll;
    int visualModeHeadHorizonX;
    int visualModeHeadHorizonY;

    int visualModeHeadBefore;
    int visualModeTailCursorYBefore;
    int visualModeTailScrollBefore;


    int mRepeatFowardNextCharacterKind;
    wchar_t mRepeatFowardNextCharacter;


    char commandString[128];


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


    map<wchar_t, tuple3<int,int, int>*%>*% mark;


    int visualModeHorizonHeadScroll;
    int visualModeHorizonHeadX;
    int visualModeHorizonHeadY;


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

    list<ViWin*%>*% wins;
    ViWin* activeWin;


    vector<void (*lambda)(Vi*, int)>*% events;
    bool appEnd;


    int mode;


    int toggleWin;


    list<wstring>*% yank;
    list<wstring>*% fileYank;
    int yankKind;


    wchar_t searchString[128];
    bool searchReverse;
    bool regexSearch;
};


ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 1;
void ViWin*::finalize(ViWin* self) version 1;
void ViWin*::view(ViWin* self, Vi* nvi) version 1;
void ViWin*::input(ViWin* self, Vi* nvi) version 1;
Vi*% Vi*::initialize(Vi*% self) version 1;
bool ViWin*::equals(ViWin* left, ViWin* right);
void Vi*::finalize(Vi* self) version 1;
int Vi::main_loop(Vi* self) version 1;
void Vi*::init_curses(Vi* self);

////////////////////////////
// src/02base.c
////////////////////////////
ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 2;
void ViWin*::finalize(ViWin* self) version 2;
void ViWin*::textsView(ViWin* self, Vi* nvi);
void ViWin*::statusBarView(ViWin* self, Vi* nvi) version 2;
void ViWin*::view(ViWin* self, Vi* nvi) version 2;
int ViWin*::getKey(ViWin* self, bool head) version 2;
void ViWin*::input(ViWin* self, Vi* nvi) version 2;
void ViWin*::modifyUnderCursorYValue(ViWin* self);
void ViWin*::modifyOverCursorYValue(ViWin* self);
void ViWin*::modifyOverCursorXValue(ViWin* self);
void ViWin*::modifyOverCursorXValue2(ViWin* self);
void ViWin*::modifyUnderCursorXValue(ViWin* self);
void ViWin*::forward(ViWin* self) version 2;
void ViWin*::backward(ViWin* self) version 2;
void ViWin*::prevLine(ViWin* self);
void ViWin*::nextLine(ViWin* self);
void ViWin*::halfScrollUp(ViWin* self);
void ViWin*::halfScrollDown(ViWin* self);
void ViWin*::centeringCursor(ViWin* self);
void ViWin*::topCursor(ViWin* self);
void ViWin*::moveAtHead(ViWin* self);
void ViWin*::moveAtTail(ViWin* self);
void ViWin*::moveTop(ViWin* self);
void ViWin*::restoreVisualMode(ViWin* self, Vi* nvi) version 2;
void ViWin*::keyG(ViWin* self, Vi* nvi);
void ViWin*::moveBottom(ViWin* self);
void ViWin*::openFile(ViWin* self, char* file_name, int line_num) version 2;
void ViWin*::saveReturnPoint(ViWin* self);
void ViWin*::saveInputedKeyOnTheMovingCursor(ViWin* self) version 2;
void ViWin*::joinLines2(ViWin* self) version 2;
Vi*% Vi*::initialize(Vi*% self) version 2;
void Vi*::finalize(Vi* self) version 2;
void Vi*::exitFromApp(Vi* self) version 2;
void Vi*::view(Vi* self);
void Vi*::clearView(Vi* self);
int Vi*::main_loop(Vi* self) version 2;
void Vi*::openFile(Vi* self, char* file_name, int line_num) version 2;
void Vi*::repositionWindows(Vi* self) version 2;
void Vi*::enterSearchMode(Vi* self, bool regex_search, bool search_reverse) version 2;

////////////////////////////
// src/03insert_mode.c
////////////////////////////
void ViWin*::insertModeView(ViWin* self, Vi* nvi);
void ViWin*::view(ViWin* self, Vi* nvi) version 3;
void ViWin*::insertText(ViWin* self, wstring text);
void ViWin*::enterNewLine(ViWin* self);
void ViWin*::enterNewLine2(ViWin* self);
void ViWin*::backSpace(ViWin* self);
void ViWin*::backIndent(ViWin* self);
void ViWin*::blinkBraceFoward(ViWin* self, wchar_t head, wchar_t tail, Vi* nvi);
void ViWin*::blinkBraceEnd(ViWin* self, wchar_t head, wchar_t tail, Vi* nvi);
void ViWin*::inputInsertMode(ViWin* self, Vi* nvi);
void ViWin*::input(ViWin* self, Vi* nvi) version 3;
void ViWin*::pushUndo(ViWin* self) version 3;
void ViWin*::writedFlagOn(ViWin* self) version 3;
void ViWin*::completion(ViWin* self, Vi* nvi) version 3;
void ViWin*::completion_neo_c2(ViWin* self, Vi* nvi) version 3;
void ViWin*::clearInputedKey(ViWin* self) version 3;
void ViWin*::saveInputedKey(ViWin* self) version 3;
void ViWin*::backwardWord(ViWin* self) version 3;
void Vi*::enterInsertMode(Vi* self) version 3;
void Vi*::enterInsertMode2(Vi* self) version 3;
void Vi*::exitFromInsertMode(Vi* self) version 3;
Vi*% Vi*::initialize(Vi*% self) version 3;
int Vi*::main_loop(Vi* self) version 3;

////////////////////////////
// src/04word.c
////////////////////////////
void ViWin*::forwardWord(ViWin* self);
void ViWin*::forwardWord2(ViWin* self);
void ViWin*::backwardWord(ViWin* self) version 4;
Vi*% Vi*::initialize(Vi*% self) version 4;

////////////////////////////
// src/05undo.c
////////////////////////////
ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 5;
void ViWin*::finalize(ViWin* self) version 5;
void ViWin*::pushUndo(ViWin* self) version 5;
void ViWin*::redo(ViWin* self);
void ViWin*::undo(ViWin* self);
Vi*% Vi*::initialize(Vi*% self) version 5;
void Vi*::enterInsertMode(Vi* self) version 5;

////////////////////////////
// src/06file.c
////////////////////////////
ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 6;
void ViWin*::statusBarView(ViWin* self, Vi* nvi) version 6;
void ViWin*::saveCursorPosition(ViWin* self, char* file_name);
void ViWin*::readCursorPosition(ViWin* self, char* file_name);
void ViWin*::openFile(ViWin* self, char* file_name, int line_num) version 6;
void ViWin*::makeTmpFile(ViWin* self);
void ViWin*::deleteTmpFile(ViWin* self);
void ViWin*::writeFile(ViWin* self);
void ViWin*::writedFlagOn(ViWin* self) version 6;
bool ViWin*::saveDotToFile(ViWin* self, Vi* nvi) version 6;
void Vi*::openNewFile(Vi* self, char* file_name);
void Vi*::closeActiveWin(Vi* self);
void Vi*::exitFromApp(Vi* self) version 6;
void Vi*::toggleWin(Vi* self);
void Vi*::nextWin(Vi* self);
void Vi*::prevWin(Vi* self);
Vi*% Vi*::initialize(Vi*% self) version 6;
void Vi*::repositionWindows(Vi* self) version 6;
void Vi*::saveLastOpenFile(Vi* self, char* file_name);
string Vi*::readLastOpenFile(Vi* self);
void Vi*::openFile(Vi* self, char* file_name, int line_num) version 6;

////////////////////////////
// src/07yank.c
////////////////////////////

enum { kYankKindLine, kYankKindNoLine };


bool ViWin*::saveYankToFile(ViWin* self, Vi* nvi);
bool ViWin*::loadYankFromFile(ViWin* self, Vi* nvi);
bool ViWin*::saveFileYankToFile(ViWin* self, Vi* nvi);
bool ViWin*::loadFileYankFromFile(ViWin* self, Vi* nvi);
void ViWin*::pasteAfterCursor(ViWin* self, Vi* nvi);
void ViWin*::pasteBeforeCursor(ViWin* self, Vi* nvi);
void ViWin*::filePasteAfterCursor(ViWin* self, Vi* nvi);
Vi*% Vi*::initialize(Vi*% self) version 7;
void Vi*::finalize(Vi* self) version 7;

////////////////////////////
// src/08visual.c
////////////////////////////
ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 8;
void ViWin*::visualModeView(ViWin* self, Vi* nvi);
void ViWin*::view(ViWin* self, Vi* nvi) version 8;
void ViWin*::yankOnVisualMode(ViWin* self, Vi* nvi);
void ViWin*::fileYankOnVisualMode(ViWin* self, Vi* nvi);
void ViWin*::indentVisualMode(ViWin* self, Vi* nvi);
void ViWin*::backIndentVisualMode(ViWin* self, Vi* nvi);
void ViWin*::changeCaseVisualMode(ViWin* self, Vi* nvi);
void ViWin*::joinVisualMode(ViWin* self, Vi* nvi);
void ViWin*::equalVisualMode(ViWin* self, Vi* nvi);
void ViWin*::rewriteVisualMode(ViWin* self, Vi* nvi);
void ViWin*::deleteOnVisualMode(ViWin* self, Vi* nvi);
void ViWin*::makeInputedKeyGVIndent(ViWin* self, Vi* nvi) version 8;
void ViWin*::makeInputedKeyGVDeIndent(ViWin* self, Vi* nvi) version 8;
void ViWin*::inputVisualMode(ViWin* self, Vi* nvi);
void ViWin*::input(ViWin* self, Vi* nvi) version 8;
void ViWin*::restoreVisualMode(ViWin* self, Vi* nvi) version 8;
void ViWin*::gotoBraceEnd(ViWin* self, Vi* nvi) version 8;
Vi*% Vi*::initialize(Vi*% self) version 8;
void Vi*::enterVisualMode(Vi* self);
void Vi*::exitFromVisualMode(Vi* self);

////////////////////////////
// src/09search.c
////////////////////////////

enum eRepeatForwardNextCharacter {
    kRFNCNone, kRFNC1, kRFNC2
};


void ViWin*::searchModeView(ViWin* self, Vi* nvi);
void ViWin*::view(ViWin* self, Vi* nvi) version 9;
void ViWin*::search(ViWin* self, Vi* nvi);
void ViWin*::searchReverse(ViWin* self, Vi* nvi);
void ViWin*::searchWordOnCursor(ViWin* self, Vi* nvi);
void ViWin*::searchWordOnCursorReverse(ViWin* self, Vi* nvi);
void ViWin*::inputSearchlMode(ViWin* self, Vi* nvi);
void ViWin*::input(ViWin* self, Vi* nvi) version 9;
void Vi*::saveSearchString(Vi* self, char* file_name);
void Vi*::readSearchString(Vi* self, char* file_name);
void Vi*::enterSearchMode(Vi* self, bool regex_search, bool reverse) version 9;
void Vi*::exitFromSearchMode(Vi* self);
Vi*% Vi*::initialize(Vi*% self) version 9;
void Vi*::finalize(Vi* self) version 9;

////////////////////////////
// src/10edit.c
////////////////////////////
ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 10;
void ViWin*::modifyCursorOnDeleting(ViWin* self);
void ViWin*::deleteOneLine(ViWin* self, Vi* nvi) version 10;
void ViWin*::deleteOneLine2(ViWin* self, Vi* nvi);
void ViWin*::deleteWord(ViWin* self, Vi* nvi);
void ViWin*::deleteForNextCharacter(ViWin* self);
void ViWin*::deleteForNextCharacter2(ViWin* self);
void ViWin*::deleteCursorCharactor(ViWin* self);
void ViWin*::deleteBack(ViWin* self);
void ViWin*::getCursorNumber(ViWin* self, int* head, int* tail);
void ViWin*::incrementNumber(ViWin* self);
void ViWin*::replaceCursorCharactor(ViWin* self);
void ViWin*::deleteUntilTail(ViWin* self);
void ViWin*::joinLines(ViWin* self);
void ViWin*::yankOneLine(ViWin* self, Vi* nvi);
void ViWin*::joinLines2(ViWin* self) version 10;
void ViWin*::forwardToNextCharacter1(ViWin* self, int key);
void ViWin*::forwardToNextCharacter2(ViWin* self, int key);
void ViWin*::repeatForwardNextCharacter(ViWin* self);
void ViWin*::backwardToNextCharacter1(ViWin* self);
void ViWin*::backwardToNextCharacter2(ViWin* self);
void ViWin*::changeCase(ViWin* self);
void ViWin*::moveToHead(ViWin* self);
Vi*% Vi*::initialize(Vi*% self) version 10;

////////////////////////////
// src/11move.c
////////////////////////////
void ViWin*::toggleBraceForward(ViWin* self, wchar_t head, wchar_t tail);
void ViWin*::toggleBraceBack(ViWin* self, wchar_t head, wchar_t tail);
void ViWin*::toggleCommentForward(ViWin* self);
void ViWin*::toggleCommentBackward(ViWin* self);
void ViWin*::gotoBraceEnd(ViWin* self, Vi* nvi) version 11;
void ViWin*::gotoFunctionTop(ViWin* self, Vi* nvi);
void ViWin*::gotoFunctionBottom(ViWin* self, Vi* nvi);
Vi*% Vi*::initialize(Vi*% self) version 11;

////////////////////////////
// src/12command.c
////////////////////////////
void ViWin*::commandModeView(ViWin* self, Vi* nvi);
string ViWin*::selector(ViWin* self, list<string>* lines);
void ViWin*::fileCompetion(ViWin* self, Vi* nvi);
void ViWin*::commandModeInput(ViWin* self, Vi* nvi);
void ViWin*::view(ViWin* self, Vi* nvi) version 12;
void ViWin*::input(ViWin* self, Vi* nvi) version 12;
void ViWin*::subAllTextsFromCommandMode(ViWin* self, Vi* nvi);
void Vi*::enterComandMode(Vi* self);
void Vi*::exitFromComandMode(Vi* self);
Vi*% Vi*::initialize(Vi*% self) version 12;

////////////////////////////
// src/13completion.c
////////////////////////////
wchar_t*? ViWin*::selector2(ViWin* self, list<wstring>* lines);
void ViWin*::completion(ViWin* self, Vi* nvi) version 13;

////////////////////////////
// src/14dot.c
////////////////////////////
void mreset_tty();
ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 14;
void ViWin*::finalize(ViWin* self) version 14;
bool ViWin*::saveDotToFile(ViWin* self, Vi* nvi) version 14;
bool ViWin*::loadDotFromFile(ViWin* self, Vi* nvi);
int ViWin*::getKey(ViWin* self, bool head) version 14;
void ViWin*::clearInputedKey(ViWin* self) version 14;
void ViWin*::saveInputedKeyOnTheMovingCursor(ViWin* self) version 14;
void ViWin*::saveInputedKey(ViWin* self) version 14;
void ViWin*::makeInputedKeyGVIndent(ViWin* self, Vi* nvi) version 14;
void ViWin*::makeInputedKeyGVDeIndent(ViWin* self, Vi* nvi) version 14;
void ViWin*::recordMacro(ViWin* self);
void ViWin*::runMacro(ViWin* self);
Vi*% Vi*::initialize(Vi*% self) version 14;

////////////////////////////
// src/16mark.c
////////////////////////////
ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 16;
void ViWin*::finalize(ViWin* self) version 16;
void ViWin*::markAtCurrentPoint(ViWin* self, wchar_t c);
void ViWin*::returnAtMarkedPoint(ViWin* self, wchar_t c);
void ViWin*::returnBack(ViWin* self);
void ViWin*::returnBackOfStack(ViWin* self);
Vi*% Vi*::initialize(Vi*% self) version 16;

////////////////////////////
// src/17hvisual.c
////////////////////////////
ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 17;
void ViWin*::horizonVisualModeView(ViWin* self, Vi* nvi);
void ViWin*::view(ViWin* self, Vi* nvi) version 17;
void ViWin*::yankOnHorizonVisualMode(ViWin* self, Vi* nvi);
void ViWin*::deleteOnHorizonVisualMode(ViWin* self, Vi* nvi);
void ViWin*::changeCaseHorizonVisualMode(ViWin* self, Vi* nvi);
void ViWin*::rewriteOnHorizonVisualMode(ViWin* self, Vi* nvi);
void ViWin*::inputHorizonVisualMode(ViWin* self, Vi* nvi);
void ViWin*::input(ViWin* self, Vi* nvi) version 17;
void Vi*::enterHorizonVisualMode(Vi* self);
Vi*% Vi*::initialize(Vi*% self) version 17;

////////////////////////////
// src/18vvisual.c
////////////////////////////
ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 18;
void ViWin*::verticalVisualModeView(ViWin* self, Vi* nvi);
void ViWin*::view(ViWin* self, Vi* nvi) version 18;
void ViWin*::deleteOnVerticalVisualMode(ViWin* self, Vi* nvi);
void ViWin*::deleteLinesOnVerticalVisualMode(ViWin* self, Vi* nvi);
void ViWin*::changeCaseVerticalVisualMode(ViWin* self, Vi* nvi);
void ViWin*::rewriteOnVerticalVisualMode(ViWin* self, Vi* nvi);
void ViWin*::insertOnVerticalVisualMode(ViWin* self, Vi* nvi);
void ViWin*::inputVerticalVisualMode(ViWin* self, Vi* nvi);
void ViWin*::input(ViWin* self, Vi* nvi) version 18;
void Vi*::enterVerticalVisualMode(Vi* self);
Vi*% Vi*::initialize(Vi*% self) version 18;

////////////////////////////
// src/19rewrite_mode.c
////////////////////////////
void ViWin*::rewriteModeView(ViWin* self, Vi* nvi);
void ViWin*::view(ViWin* self, Vi* nvi) version 19;
void ViWin*::insertText2(ViWin* self, wstring text);
void ViWin*::inputRewritetMode(ViWin* self, Vi* nvi);
void ViWin*::input(ViWin* self, Vi* nvi) version 19;
void Vi*::enterRewriteMode(Vi* self);
void Vi*::exitFromRewiteMode(Vi* self);
Vi*% Vi*::initialize(Vi*% self) version 19;
int Vi*::main_loop(Vi* self) version 19;

////////////////////////////
// src/20completion-neo-c.c
////////////////////////////
void ViWin*::completion_neo_c2(ViWin* self, Vi* nvi) version 20;

////////////////////////////
// src/main.c
////////////////////////////
int xgetmaxx();
int xgetmaxy();
int main(int argc, char** argv);

