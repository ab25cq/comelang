#include <neo-c.h>
#include "common.h"

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

int main(int argc, char** argv)
{
    int line_num = -1;
    char* file_names[128];
    int num_file_names = 0;
    
    for(int i=1; i<argc; i++) {
        if(argv[i][0] == '+') {
            sscanf(argv[i], "+%d", &line_num);
            line_num--;

            if(line_num < 0) {
                line_num = 0;
            }
        }
        else if(strcmp(argv[i], "-v") == 0 || strcmp(argv[i], "-V") == 0 || strcmp(argv[i], "--version") == 0) {
            puts("vin version 1.0.4");
            exit(0);
        }
        else {
            file_names[num_file_names] = argv[i];
            num_file_names++;
            
            if(num_file_names >= 128) {
                fprintf(stderr, "overflow file names\n");
                exit(2);
            }
        }
    }
    
    auto vi = new Vi.initialize();
    
    if(num_file_names > 0) {
        vi.openFile(file_names[0], line_num);
    }
    else {
        vi.openFile(null, -1);
    }
    
    int result = vi.main_loop();
    
    vi.saveSearchString("searchString.vin");

    endwin();
    return result;
}

