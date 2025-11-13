#include <neo-c.h>

#include <ncurses.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <locale.h>
#include <limits.h>

#define COLS 3

struct sInfo
{
    int cursor;
    int page;
    string path;
    bool app_end;
    
    list<string>*% files;
    list<string>*% selected_files;
    string searching_str;
};

int xgetmaxx()
{
    auto ws = new winsize;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, ws);
    
    int result = ws.ws_col;
//Raspberry PI return -1
    if(result == -1 || result == 0) {
        return getmaxx(stdscr);
    }
    else {
        return result;
    }
    
    return result;
}

int xgetmaxy()
{
    auto ws = new winsize;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, ws);
    
    int result = ws.ws_row;
//Raspberry PI return -1
    if(result == -1 || result == 0) {
        return getmaxy(stdscr);
    }
    else {
        return result;
    }
    
    return result;
}

void read_dir(sInfo* info)
{
    info.files = new list<string>();
    info.selected_files = new list<string>();

    DIR* dir = opendir(info.path);

    if(dir == null) {
        info.cursor = 0;
        info.page = 0;
        info.files.push_back(string("NO FILES"));
        return;
    }
    
    struct dirent* entry;
    while(entry = readdir(dir)) {
        info.files.push_back(string(entry->d_name));
    }

    closedir(dir);

    info.files = info.files.sort_with_lambda(int lambda(char* left, char* right) { return strcmp(left, right); });
}

void vd(sInfo* info)
{
    string history_fname = getenv("HOME") + "/mf_history";
    
    read_history(history_fname);
    
    char* line = readline(getenv("PWD") + " > ");
    
    if(line == null) {
        return;
    }
    
    add_history(line);
    write_history(history_fname);

    string cmdline = string(line);
    
    free(line);
    
    char buf[BUFSIZ];
    
    FILE* f = popen(cmdline, "r");
    if(f == NULL) {
        return;
    }
    info.files.push_back(string("."));
    info.files.push_back(string(".."));

    while(1) {
        char file[PATH_MAX];
        char* result = fgets(file, PATH_MAX, f);
        
        if(result == null) {
            break;
        }
        
        info.files.push_back(string(result).chomp());
    }
    if(pclose(f) < 0) {
        return;
    }

    info.files = info.files.sort_with_lambda(int lambda(char* left, char* right) { return strcmp(left, right); });
}

void fix_cursor(sInfo* info);

bool change_directory(sInfo* info, char* path, char* cursor_file)
{
    auto absolute_path = realpath(path, NULL);
    
    auto absolute_path2 = string(absolute_path);
    
    free(absolute_path);

    info.path = absolute_path2;
    read_dir(info);

    chdir(info.path);
    setenv("PWD", info.path, 1);

    if(cursor_file) {
        int i = 0;
        foreach(it, info.files) {
            if(strcmp(it, cursor_file) == 0) {
                info.cursor = i;
                fix_cursor(info);
                break;
            }
            
            i++;
        }
    }
    else {
        info.cursor = 0;
        info.page = 0;
    }
    
    return true;
}


void fix_cursor(sInfo* info)
{
    int maxx = xgetmaxx();
    int maxy = xgetmaxy()-1;

    if(info.cursor >= info.files.length()) {
        info.cursor = info.files.length() - 1;
    }
    if(info.cursor < 0) {
        info.cursor = 0;
    }

    info.page = info.cursor / (COLS*maxy);
}

void view(sInfo* info)
{
    int maxx = xgetmaxx();
    int maxy = xgetmaxy()-1;

    erase();
    
    int files_in_one_page = maxy * COLS;

    int head = info.page * files_in_one_page;
    int tail = (info.page+1) * files_in_one_page;

    info.files.sublist(head, tail).each {
        string path = info.path + string("/") + it;

        struct stat stat_;
        (void)stat(path, &stat_);

        bool is_dir = S_ISDIR(stat_.st_mode);
        bool selected = info.selected_files.contained(it);

        int index = it2;
        int cols = maxx/COLS;
        int x = (index / maxy) * cols;
        int y = index % maxy;
        if(it2+head == info.cursor) {
            attron(A_REVERSE);
            if(selected) {
                if(is_dir) {
                    mvprintw(y, x, "* %s/", it.substring(0, cols-3));
                }
                else {
                    mvprintw(y, x, "* %s", it.substring(0, cols-2));
                }
            }
            else {
                if(is_dir) {
                    mvprintw(y, x, "%s/", it.substring(0, cols-1));
                }
                else {
                    mvprintw(y, x, "%s", it.substring(0, cols));
                }
            }
            attroff(A_REVERSE);
        }
        else {
            if(selected) {
                if(is_dir) {
                    mvprintw(y, x, "* %s/", it.substring(0, cols-3));
                }
                else {
                    mvprintw(y, x, "* %s", it.substring(0, cols-2));
                }
            }
            else {
                if(is_dir) {
                    mvprintw(y, x, "%s/", it.substring(0, cols-1));
                }
                else {
                    mvprintw(y, x, "%s", it.substring(0, cols));
                }
            }
        }
    }

    attron(A_REVERSE);
    mvprintw(maxy, 0, "%s page %d files %d head %d tail %d press ? for manual", info.path, info.page, info.files.length(), head, tail);
    attroff(A_REVERSE);

    refresh();
}


string cursor_path(sInfo* info)
{
    char* file_name = info.files.item(info.cursor, null);
    return xsprintf("%s/%s", info.path, file_name);
}

string cursor_file(sInfo* info)
{
    return string(info.files.item(info.cursor, null));
}

string selected_files(sInfo* info)
{
    var buf = new buffer();
    foreach(it, info.selected_files) {
        buf.append_str("\"");
        buf.append_str(it);
        buf.append_str("\"");
        buf.append_str(" ");
    }
    return buf.to_string();
}

void search_file(sInfo* info)
{
    string str = string("");
    while(true) {
        int key = getch();
        
        if(key >= ' ' && key <= '~') {
            str = xsprintf("%s%c", str, key);
            int n = 0;
            foreach(it, info.files) {
                if(strcasestr(it, str)) {
                    info.cursor = n;
                    info.searching_str = string(str);
                    break;
                }
                n++;
            }
        }
        else {
            break;
        }
    }
}

void search_next_file(sInfo* info)
{
    if(info.searching_str == null) {
        return;
    }
    int n = info.cursor+1;
    foreach(it, info.files.sublist(n, -1)) {
        if(strcasestr(it, info.searching_str)) {
            info.cursor = n;
            break;
        }
        n++;
    }
}

void search_prev_file(sInfo* info)
{
    if(info.searching_str == null) {
        return;
    }
    int n = info.cursor-1;
    foreach(it, info.files.sublist(0, n+1).reverse()) {
        if(strcasestr(it, info.searching_str)) {
            info.cursor = n;
            break;
        }
        n--;
    }
}

void select_files(sInfo* info)
{
    string cursor_file_ = cursor_file(info);
    
    if(info.selected_files.contained(cursor_file_)) {
        info.selected_files.remove(cursor_file_);
    }
    else {
        info.selected_files.add(cursor_file_);
    }
}

void manual(sInfo* info)
{
    clear();
    mvprintw(0,0, "q --> quit");
    mvprintw(1,0, "* --> virtual directory(type shell command, and the result of the command is file list");
    mvprintw(2,0, "ENTER --> run command(type shell command) or insert directory");
    mvprintw(3,0, "~ --> move to home directory");
    mvprintw(4,0, "BACK SPACE ^H --> move to the parent directory");
    mvprintw(5,0, "d --> delete file");
    mvprintw(6,0, "c --> copy file");
    mvprintw(7,0, "m --> move file");
    mvprintw(8,0, "n --> next searching file");
    mvprintw(9,0, "N --> prev searching file");
    mvprintw(10,0, "x --> excute file");
    mvprintw(11,0, "e --> edit file");
    mvprintw(12,0, "LEFT h --> move cursor left");
    mvprintw(13,0, "RIGHT l --> move cursor right");
    mvprintw(14,0, "DOWN j --> move cursor down");
    mvprintw(15,0, "UP k --> move cursor up");
    mvprintw(16,0, "CTRL-L --> reread directory and refresh the window");
    mvprintw(17,0, "/ --> move cursor with searching file (n --> next, N --> prev)");
    mvprintw(18,0, "? --> this manual");
    mvprintw(19,0, ": --> run shell");
    mvprintw(20,0, "SPACE --> select files");
    
    refresh();
    getch();
}

void recursive_unlink(string path)
{
    struct stat stat_;
    (void)stat(path, &stat_);

    bool is_dir = S_ISDIR(stat_.st_mode);

    if(is_dir) {
        DIR* dir = opendir(path);
    
        if(dir == null) {
            return;
        }
        
        struct dirent* entry;
        while(entry = readdir(dir)) {
            if(entry->d_name !== "." && entry->d_name !== "..") {
                recursive_unlink(path + string("/") + string(entry->d_name));
            }
        }
    
        closedir(dir);
        
        remove(path);
    }
    else {
        unlink(path);
    }
}

void handmade_delete_file(char* path, sInfo* info=info)
{
    erase();
    mvprintw(0, 0, "Is %s delete OK? (y,Y,ENTER/other", path);
    refresh();
    
    while(true) {
        var key = getch();
        
        if(key == 'y' || key == 'Y' || key == 10) {
            string path = info.path + string("/") + cursor_file(info);
            recursive_unlink(path);
            break;
        }
        else {
            break;
        }
    }
}

void handmade_selected_delete_file(sInfo* info)
{
    erase();
    mvprintw(0, 0, "Are %s delete OK? (y,Y,ENTER/other", selected_files(info));
    refresh();
    
    while(true) {
        var key = getch();
        
        if(key == 'y' || key == 'Y' || key == 10) {
            foreach(it, info.selected_files) {
                unlink(it);
            }
            break;
        }
        else {
            break;
        }
    }
}

void input(sInfo* info)
{
    int maxx = xgetmaxx();
    int maxy = xgetmaxy()-1;

    auto key = getch();

    switch(key) {
        case 'q':
            info.app_end = true;
            break;
            
        case '*':
            endwin();
            info.files.reset();
            vd(info);
            initscr();
            keypad(stdscr, true);
            raw();
            noecho();
            break;

        case KEY_ENTER:
        case '\n': {
            string path = info.path + string("/") + cursor_file(info);

            struct stat stat_;
            (void)stat(path, &stat_);

            bool is_dir = S_ISDIR(stat_.st_mode);

            if(is_dir) {
                change_directory(info, path, null);
            }
            else {
                endwin();
                if(info.selected_files.length() > 0) {
                    system(xsprintf("shsh -i ' %s' -n 0 -o", selected_files(info)));
                }
                else {
                    system(xsprintf("shsh -i ' %s' -n 0 -o", cursor_file(info)));
                }
                read_dir(info);
                puts("HIT ANY KEY");
                initscr();
                keypad(stdscr, true);
                raw();
                noecho();
                getchar();
            }
            }
            break;
            
        case '~': {
            string path = string(getenv("HOME"));

            change_directory(info, path, null);
            }
            break;

        case KEY_BACKSPACE:
        case 8:
        case 127: {
            string current_directory_name = xbasename(info.path);
            string path = info.path + string("/..");
            change_directory(info, path, current_directory_name);
            }
            break;

        case 'd': {
            endwin();
            if(info.selected_files.length() > 0) {
                handmade_selected_delete_file(info);
            }
            else {
                handmade_delete_file(cursor_file(info));
            }
            read_dir(info);
            initscr();
            keypad(stdscr, true);
            raw();
            noecho();
            }
            break;

        case 'c': {
            endwin();
            if(info.selected_files.length() > 0) {
                system(xsprintf("shsh -i 'cp -r %s ' -o", selected_files(info)));
            }
            else {
                system(xsprintf("shsh -i 'cp -r %s ' -o", cursor_file(info)));
            }
            read_dir(info);
            puts("HIT ANY KEY");
            initscr();
            keypad(stdscr, true);
            raw();
            noecho();
            getchar();
            }
            break;

        case 'm': {
            endwin();
            if(info.selected_files.length() > 0) {
                system(xsprintf("shsh -i 'mv %s ' -o", selected_files(info)));
            }
            else {
                system(xsprintf("shsh -i 'mv %s ' -o", cursor_file(info)));
            }
            read_dir(info);
            puts("HIT ANY KEY");
            initscr();
            keypad(stdscr, true);
            raw();
            noecho();
            getchar();
            }
            break;

        case 'n': {
            search_next_file(info);
            }
            break;

        case 'N': {
            search_prev_file(info)
            }
            break;

        case 'x': {
            endwin();
            if(info.selected_files.length() > 0) {
                system(xsprintf("shsh -i ' %s' -n 0 -o", selected_files(info)));
            }
            else {
                system(xsprintf("shsh -i ' ./%s' -n 0 -o", cursor_file(info)));
            }
            read_dir(info);
            puts("HIT ANY KEY");
            initscr();
            keypad(stdscr, true);
            raw();
            noecho();
            getchar();
            }
            break;

        case 'e': {
            endwin();
            system(xsprintf("vin %s", cursor_file(info)));
            initscr();
            keypad(stdscr, true);
            raw();
            noecho();
            }
            break;

        case KEY_LEFT:
        case 'h':
        case 'B'-'A'+1:
            if(info.cursor >= maxy) {
                info.cursor-=maxy;
            }
            break;

        case KEY_RIGHT:
        case 'l':
        case 'F'-'A'+1:
            if(info.cursor + maxy < info.files.length()) {
                info.cursor+=maxy;
            }
            break;

        case KEY_DOWN:
        case 'j':
        case 'N'-'A'+1:
            info.cursor++;
            break;

        case KEY_UP:
        case 'k':
        case 'P'-'A'+1:
            info.cursor--;

            break;

        case 'L'-'A'+1:
            clear();
            read_dir(info);
            view(info);
            refresh();
            break;

        case '/':
            search_file(info);
            view(info);
            refresh();
            break;
            
        case '?':
            manual(info);
            break;

        case ':': {
            endwin();
            system("shsh -o");
            read_dir(info);
            puts("HIT ANY KEY");
            initscr();
            keypad(stdscr, true);
            raw();
            noecho();
            getchar();
            }
            break;

        case 0x04: {   // C-d
            info.cursor+=10;
            }
            break;

        case ' ': {   // C-d
            select_files(info);
            }
            break;

        case 0x15: {   // C-u
            info.cursor-=10;
            }
            break;
            
    }

    fix_cursor(info);
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "");
    setenv("EDITOR", "vin", 1);
    
    sInfo info;
    
    memset(&info, 0, sizeof(sInfo));
    
    char* cwd = getenv("PWD");
    
    info.path = string(cwd);
    
    read_dir(&info);
    
    initscr();
    keypad(stdscr, 1);
    raw();
    noecho();
    
    while(!info.app_end) {
        view(&info);
        input(&info);
    }
    
    endwin();
    
    return 0;
}
