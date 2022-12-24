#include <neo-c.h>
#include <ncurses.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/ioctl.h>

#define COLS 3

struct sInfo
{
    int cursor;
    int page;
    string path;
    bool app_end;
    
    list<string>* files;
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

        int index = it2;
        int cols = maxx/COLS;
        int x = (index / maxy) * cols;
        int y = index % maxy;
        if(it2+head == info.cursor) {
            attron(A_REVERSE);
            if(is_dir) {
                mvprintw(y, x, "%s/", it.substring(0, cols-1));
            }
            else {
                mvprintw(y, x, "%s", it.substring(0, cols));
            }
            attroff(A_REVERSE);
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

    attron(A_REVERSE);
    mvprintw(maxy, 0, "page %d files %d head %d tail %d", info.page, info.files.length(), head, tail);
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

void input(sInfo* info)
{
    int maxx = xgetmaxx();
    int maxy = xgetmaxy()-1;

    auto key = getch();

    switch(key) {
        case 'q':
            info.app_end = true;
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
                system(xsprintf("shsh -i ' %s' -n 0 -o", cursor_file(info)));
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
            system(xsprintf("shsh -i 'rm -rf %s' -o", cursor_file(info)));
            read_dir(info);
            puts("HIT ANY KEY");
            initscr();
            keypad(stdscr, true);
            raw();
            noecho();
            getchar();
            }
            break;

        case 'c': {
            endwin();
            system(xsprintf("shsh -i 'cp -r %s ' -o", cursor_file(info)));
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
            system(xsprintf("shsh -i 'mv %s ' -o", cursor_file(info)));
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
            endwin();
            system(xsprintf("shsh -i 'touch '"));
            read_dir(info);
            initscr();
            keypad(stdscr, true);
            raw();
            noecho();
            }
            break;

        case 'x': {
            endwin();
            system(xsprintf("shsh -i ' ./%s' -n 0 -o", cursor_file(info)));
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
            if(info.cursor >= maxy) {
                info.cursor-=maxy;
            }
            break;

        case KEY_RIGHT:
        case 'l':
            if(info.cursor + maxy < info.files.length()) {
                info.cursor+=maxy;
            }
            break;

        case KEY_DOWN:
        case 'j':
            info.cursor++;
            break;

        case KEY_UP:
        case 'k':
            info.cursor--;

            break;

        case 'L'-'A'+1:
            clear();
            view(info);
            refresh();
            break;

        case ':': {
            endwin();
            system("shsh");
            read_dir(info);
            puts("HIT ANY KEY");
            initscr();
            keypad(stdscr, true);
            raw();
            noecho();
            getchar();

            }
            break;
    }

    fix_cursor(info);
}

int main(int argc, char** argv)
{
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
