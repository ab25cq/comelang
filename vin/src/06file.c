#include "common.h"

ViWin*% ViWin*::initialize(ViWin*% self, int y, int x, int width, int height, Vi* vi) version 6
{
    auto result = inherit(self, y, x, width, height, vi);

    strncpy(result.fileName, "a.txt", PATH_MAX);

    return result;
}

void ViWin*::statusBarView(ViWin* self, Vi* nvi) version 6
{
    int maxy = getmaxy(self.win);
    int maxx = getmaxx(self.win);

    wattron(self.win, A_REVERSE);
    mvwprintw(self.win, self.height-1, 0, "x %d y %d scroll %d file %s writed %d", self.cursorX, self.cursorY, self.scroll, self.fileName, (self.writed ? 1:0));
    wattroff(self.win, A_REVERSE);

    wrefresh(self.win);
}

void ViWin*::saveCursorPosition(ViWin* self, char* file_name) 
{
    char* home = getenv("HOME");
    
    if(home == null) {
        return;
    }
    
    char file_name2[PATH_MAX];
    
    snprintf(file_name2, PATH_MAX, "%s/.vin", home);
    
    (void)mkdir(file_name2, 0755);
    
    auto bname = xbasename(file_name);  

    snprintf(file_name2, PATH_MAX, "%s/.vin/%s.pos", home, bname);
    
    FILE* f = fopen(file_name2, "w");

    if(f == NULL) {
        return;
    }
    
    fprintf(f, "%d %d\n", self.scroll, self.cursorY);
    
    fclose(f);
}

void ViWin*::readCursorPosition(ViWin* self, char* file_name) 
{
    char* home = getenv("HOME");
    
    if(home == null) {
        self.scroll = 0;
        self.cursorY = 0;
        return;
    }
    
    char file_name2[PATH_MAX];
    
    auto bname = xbasename(file_name); 
    snprintf(file_name2, PATH_MAX, "%s/.vin/%s.pos", home, bname);
    
    FILE* f = fopen(file_name2, "r");

    if(f == null) {
        self.cursorY = 0;
        return;
    }
    
    char line[4096];

    int scroll = 0;
    int cursor_y = 0;
    fscanf(f, "%d %d", &scroll, &cursor_y);
    
    fclose(f);
    
    self.scroll = scroll;
    self.cursorY = cursor_y;
    
    if(self.scroll >= self.texts.length()) {
        self.scroll = self.texts.length() - 1;
        self.cursorY = 0;
    }
    
    self.modifyUnderCursorYValue();
    self.modifyOverCursorYValue();
}

void ViWin*::openFile(ViWin* self, char* file_name, int line_num) version 6
{
    FILE* f = fopen(file_name, "r");
    
    if(f == null) {
        char cmd[PATH_MAX+128];
        
        snprintf(cmd, PATH_MAX+128, "echo \"\" > %s", file_name);

        self.texts.push_back(wstring(""));
        
        int rc = system(cmd);
        
        if(rc != 0) {
            endwin();
            fprintf(stderr, "can't open file %s\n", file_name);
            exit(2);
        }

        strncpy(self.fileName, file_name, PATH_MAX);
        
        self.cursorY = 0;
        self.cursorX = 0;
        self.scroll = 0;
    }
    else {
        char line[4096];

        while(fgets(line, 4096, f) != NULL)
        {
            line[strlen(line)-1] = '\0';
            self.texts.push_back(wstring(line))
        }

        fclose(f);

        if(self.texts.length() == 0) {
            self.texts.push_back(wstring(""))
        }

        strncpy(self.fileName, file_name, PATH_MAX);

        if(line_num == -1) {
            self.readCursorPosition(file_name);
        }
        else {
            self.cursorY = line_num;
            
            self.modifyUnderCursorYValue();
            self.modifyOverCursorYValue();
            self.centeringCursor();
        }
    }
}

void ViWin*::makeTmpFile(ViWin* self)
{
    FILE* f = fopen(self.fileName + ".tmp", "w");

    if(f != null) {
        foreach(it, self.texts) {
            fprintf(f, "%ls\n", it);
        }

        fclose(f);
    }
}

void ViWin*::deleteTmpFile(ViWin* self)
{
    unlink(self.fileName + ".tmp");
}

void ViWin*::writeFile(ViWin* self) 
{
    /// back up /// 
    char* home = getenv("HOME");
    
    if(home == null) {
        return;
    }
    
    char path[PATH_MAX];
    
    snprintf(path, PATH_MAX, "%s/.vin", home);
    
    (void)mkdir(path, 0755);
    
    snprintf(path, PATH_MAX, "%s/.vin/backup", home);
    
    (void)mkdir(path, 0755);
    
    char cmd[BUFSIZ];
    
    snprintf(cmd, BUFSIZ, "cp %s %s/.vin/backup", self.fileName, home);
    
    (void)system(cmd);
    
    /// write ///
    FILE* f = fopen(self.fileName, "w");

    if(f != null) {
        foreach(it, self.texts) {
            fprintf(f, "%ls\n", it);
        }

        fclose(f);

        self.writed = false;
        self.saveCursorPosition(self.fileName);
        self.saveDotToFile(self.vi);
        //self.deleteTmpFile();
    }
}

void ViWin*::writedFlagOn(ViWin* self) version 6
{
    self.writed = true;
}

bool ViWin*::saveDotToFile(ViWin* self, Vi* nvi) version 6
{
    /// implementad after layer
}

void Vi*::openNewFile(Vi* self, char* file_name) 
{
    int maxy = xgetmaxy();
    int maxx = xgetmaxx();

    int height = maxy / (self.wins.length() + 1);

    auto win = new ViWin.initialize(0,0, maxx-1, height, self);
    
    win.openFile(file_name, -1);

    self.wins.push_back(win);

    self.activeWin = self.wins[-1];

    self.repositionWindows();

    int it2 = 0;
    foreach(it, self.wins) {
        if(!it.equals(self.activeWin)) {
            self.toggleWin = it2;
        }
        it2++;
    }
}

void Vi*::closeActiveWin(Vi* self) 
{
    self.activeWin.saveCursorPosition(self.activeWin.fileName);
    int active_pos = self.wins.find(self.activeWin, -1);
    
    self.wins.delete(active_pos, active_pos+1);

    self.repositionWindows();

    self.activeWin = self.wins.item(0, null);
}

void Vi*::exitFromApp(Vi* self) version 6
{
    foreach(it, self.wins) {
        it.writeFile();
    }
    self.appEnd = true;
}

void Vi*::toggleWin(Vi* self) {
    if(self.toggleWin >= 0 && self.toggleWin < self.wins.length()) {
        int toggle_win = self.wins.find(self.activeWin, -1);
        self.activeWin = self.wins.item(self.toggleWin, null);
        self.toggleWin = toggle_win;
    }
}
void Vi*::nextWin(Vi* self) {
    int next_win = self.wins.find(self.activeWin, -1) + 1;
    if(next_win >= 0 && next_win < self.wins.length()) 
    {
        int toggle_win = self.wins.find(self.activeWin, -1);
        self.activeWin = self.wins.item(next_win, null);
        self.toggleWin = toggle_win;
    }
}

void Vi*::prevWin(Vi* self) {
    int prev_win = self.wins.find(self.activeWin, -1) - 1;
    if(self.toggleWin >= 0 && self.toggleWin < self.wins.length()) {
        int toggle_win = self.wins.find(self.activeWin, -1);
        self.activeWin = self.wins.item(prev_win, null);
        self.toggleWin = toggle_win;
    }
}

Vi*% Vi*::initialize(Vi*% self) version 6
{
    auto result = inherit(self);

    result.events.replace('W'-'A'+1, void lambda(Vi* self, int key) 
    {
        auto key2 = self.activeWin.getKey(false);

        switch(key2) {
            case 'W'-'A'+1:
            case 'w':
                self.toggleWin();
                break;
            case 'j':
                self.nextWin();
                break;
            case 'k':
                self.prevWin();
                break;
        }
    });

    return result;
}

void Vi*::repositionWindows(Vi* self) version 6
{
    int maxy = xgetmaxy();
    int maxx = xgetmaxx();

    int height = maxy / self.wins.length();

    /// determine the position ///
    int it2 = 0;
    foreach(it, self.wins) {
        it.height = height;
        it.y = height * it2;

        delwin(it.win);
        auto win = newwin(it.height, it.width, it.y, it.x);
        keypad(win, true);
        it.win = win;

        it.centeringCursor();
        it.cursorX = 0;

        it2++;
    }
}

void Vi*::saveLastOpenFile(Vi* self, char* file_name) 
{
    char* home = getenv("HOME");
    
    if(home == null) {
        return;
    }
    
    char file_name2[PATH_MAX];
    
    snprintf(file_name2, PATH_MAX, "%s/.vin", home);
    
    (void)mkdir(file_name2, 0755);
    
    snprintf(file_name2, PATH_MAX, "%s/.vin/last_open_file", home, file_name);
    
    FILE* f = fopen(file_name2, "w");

    if(f == null) {
        return;
    }
    
    fprintf(f, "%s\n", file_name);
    
    fclose(f);
}

string Vi*::readLastOpenFile(Vi* self) 
{
    char* home = getenv("HOME");
    
    if(home == null) {
        return null;
    }
    
    char file_name2[PATH_MAX];
    
    snprintf(file_name2, PATH_MAX, "%s/.vin/last_open_file", home);
    
    FILE* f = fopen(file_name2, "r");

    if(f == null) {
        return null;
    }

    char file_name[PATH_MAX];

    if(fgets(file_name, PATH_MAX, f) == NULL) {
        fclose(f);

        return string("");
    }
    
    file_name[strlen(file_name)-1] = '\0';
    
    fclose(f);

    return string(file_name);
}

void Vi*::openFile(Vi* self, char* file_name, int line_num) version 6
{
    if(file_name == null) {
        auto file_name = self.readLastOpenFile();
        
        if(access(file_name, R_OK) == 0) {
            int active_pos = self.wins.find(self.activeWin, -1);
            self.wins.delete(active_pos, active_pos+1);
    
            auto maxx = xgetmaxx();
            auto maxy = xgetmaxy();
            
            auto win = new ViWin.initialize(0,0, maxx-1, maxy, self);
    
            self.wins.push_back(win);
            self.activeWin = self.wins[-1];
            
            self.activeWin.openFile(file_name, -1);
            
            self.repositionWindows();
        }
    }
    else {
        if(access(file_name, R_OK) == 0) {
            int active_pos = self.wins.find(self.activeWin, -1);
            self.wins.delete(active_pos, active_pos+1);
    
            auto maxx = xgetmaxx();
            auto maxy = xgetmaxy();
            
            auto win = new ViWin.initialize(0,0, maxx-1, maxy, self);
    
            self.wins.push_back(win);
            self.activeWin = self.wins[-1];
            
            self.activeWin.openFile(file_name, line_num);
            self.saveLastOpenFile(file_name);
            
            self.repositionWindows();
        }
        else {
/*
            char cmd[PATH_MAX+128];
            
            snprintf(cmd, PATH_MAX+128, "echo \"\" > %s", file_name);

            int rc = system(cmd);
            
            if(rc != 0) {
                endwin();
                fprintf(stderr, "can't open file %s\n", file_name);
                exit(2);
            }
*/

            strncpy(self.activeWin.fileName, file_name, PATH_MAX);
            
            self.activeWin.cursorY = 0;
            self.activeWin.cursorX = 0;
            self.activeWin.scroll = 0;
        }
    }
}
