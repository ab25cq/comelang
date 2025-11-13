#include <neo-c.h>
#include "common.h"

int xgetmaxx()
{
/*
    auto ws = new winsize;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, ws);
    
    int result = ws.ws_col;
//Raspberry PI return -1
    if(result == -1 || result == 0) {
*/
        return getmaxx(stdscr);
/*
    }
    else {
        return result;
    }
    
    return result;
*/
}

int xgetmaxy()
{
/*
    auto ws = new winsize;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, ws);
    
    int result = ws.ws_row;
//Raspberry PI return -1
    if(result == -1 || result == 0) {
*/
        return getmaxy(stdscr);
/*
    }
    else {
        return result;
    }
    
    return result;
*/
}

int gBinaryMode = 0;

int main(int argc, char** argv)
{
    int line_num = -1;
    char* file_names[128];
    int num_file_names = 0;
    
    bool binary_mode = false;
    for(int i=1; i<argc; i++) {
        if(argv[i][0] == '+') {
            char* p = argv[i];
            p++;
            line_num = 0;
            while(xisdigit(*p)) {
                line_num = line_num * 10 + *p - '0';
                p++;
            }
            line_num--;

            if(line_num < 0) {
                line_num = 0;
            }
        }
        else if(argv[i] === "-b") {
            binary_mode = true;
        }
        else if(strcmp(argv[i], "-v") == 0 || strcmp(argv[i], "-V") == 0 || strcmp(argv[i], "--version") == 0) {
            puts("vin version 1.0.4");
            exit(0);
        }
        else {
            file_names[num_file_names] = argv[i];
            num_file_names++;
            
            if(num_file_names >= 128) {
                printf("overflow file names\n");
                exit(2);
            }
        }
    }
    
    gBinaryMode = binary_mode;
    
    auto vi = new Vi.initialize();
    
    if(num_file_names > 0) {
        vi.openFile(string(file_names[0]), line_num, binary_mode);
    }
    else {
        vi.openFile(null, -1, binary_mode);
    }
    
    int result = vi.main_loop();
    
    vi.saveSearchString("searchString.vin");

    endwin();
    return result;
}

