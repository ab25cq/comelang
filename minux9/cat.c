#include "minux.h"
#include <stdarg.h>

void cat_with_number(int fd) {
    char buf[32];
    int n;
    int line_num = 1;
    int at_line_start = 1;

    while ((n = read(fd, buf, sizeof(buf))) > 0) {
        for (int i = 0; i < n; i++) {
            if (at_line_start) {
                printf("%6d  ", line_num);
                at_line_start = 0;
            }
            write(1, &buf[i], 1);
            if (buf[i] == '\n') {
                line_num++;
                at_line_start = 1;
            }
        }
    }
}

void cat_without_number(int fd) {
    char buf[32];
    int n;
    while ((n = read(fd, buf, sizeof(buf))) > 0) {
        write(1, buf, n);
    }
}

int main(int argc, char** argv) {
    int show_line_number = 0;
    int file_start_index = 1;

    // Parse -n option
    if (argc > 1 && argv[1][0] == '-' && argv[1][1] == 'n' && argv[1][2] == '\0') {
        show_line_number = 1;
        file_start_index = 2;
    }

    if (argc == file_start_index) {
        // Read from stdin
        if (show_line_number) {
            cat_with_number(0);
        } else {
            cat_without_number(0);
        }
    } else {
        // Read from files
        for (int i = file_start_index; i < argc; i++) {
            int fd = open(argv[i], 0, 0);
            if (fd < 0) {
                printf("cat: cannot open %s\n", argv[i]);
                continue;
            }

            if (show_line_number) {
                cat_with_number(fd);
            } else {
                cat_without_number(fd);
            }

            if (fd != 0) {
                close(fd);
            }
        }
    }
    exit(0);
}
