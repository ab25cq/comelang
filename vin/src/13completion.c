#include "common.h"

wchar_t*? ViWin*::selector2(ViWin* self, list<wstring>* lines) 
{
    wchar_t*? result = null;

    bool end_of_select = false;
    bool canceled = false;

    int maxx = getmaxx(self.win);
    int maxy = getmaxy(self.win);

    int scrolltop = 0;
    int cursor = 0;

    while(!end_of_select) {
        clear();
        int maxy2 = lines.length() - scrolltop;

        /// view ///
        for(int y=0; y<maxy && y < maxy2; y++) {
            auto it = lines.item(scrolltop+y, null);

            auto line = it.substring(0, maxx-1);

            if(cursor == y) {
                attron(A_REVERSE);
                mvprintw(y, 0, "%ls", line);
                attroff(A_REVERSE);
            }
            else {
                mvprintw(y, 0, "%ls", line);
            }
        }
        refresh();

        /// input ///
        auto key = getch();

        switch(key) {
            case KEY_UP:
            case 'k':
            case 'P'-'A'+1:
                cursor--;
                break;

            case KEY_DOWN:
            case 'j':
            case 'N'-'A'+1:
            case (('I'-'A')+1):
                cursor++;
                break;

            case 'D'-'A'+1:
                cursor+=10;
                break;
           
            case (('U'-'A')+1):
                cursor-=10;
                break;

            case ('C'-'A')+1:
            case 'q':
            case ('['-'A')+1:
                canceled = true;
                end_of_select = true;
                break;

            case KEY_ENTER:
            case ('J'-'A')+1:
                end_of_select = true;
                break;
        }
        
        /// modification ///
        if(cursor < 0) {
            int scroll_size = -cursor +1;
            
            cursor = 0;
            scrolltop-=scroll_size;

            if(scrolltop < 0) {
                scrolltop = 0;
                cursor = 0;
            }
        }

        if(maxy2 < maxy) {
            if(cursor >= maxy2) {
                cursor = maxy2 - 1;
            }
        }
        else {
            if(cursor >= maxy) {
                int scroll_size = cursor - maxy + 1;

                scrolltop += scroll_size;
                cursor -= scroll_size;
            }
        }
    }

    if(!canceled) {
        result = nullable lines.item(scrolltop+cursor, null);
    }

    return result;
}

void ViWin*::completion(ViWin* self, Vi* nvi) version 13
{
    auto line = self.texts.item(self.scroll+self.cursorY, null);

    wchar_t* p = line + self.cursorX;
    p--;

    while(p >= line) {
        if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || (*p >= '0' && *p <= '9') || *p == '_')
        {
            p--;
        }
        else {
            break;
        }
    }
    p++;
    
    int len = (line + self.cursorX - p);

    auto word = line.substring(self.cursorX-len, self.cursorX);

    auto candidates = new list<wstring>.initialize();

    foreach(it, self.texts) {
        auto li = it.to_string().scan(/[a-zA-Z0-9_]+/)

        foreach(it2, li) {
            if(it2.index(word.to_string(), -1) == 0 && strcmp(it2, word.to_string()) != 0)
            {
                candidates.push_back(it2.to_wstring());
            }
        }
    }

    auto candidates2 = candidates.sort_with_lambda(int lambda(wchar_t* left, wchar_t* right) { return wcscmp(left, right); }).uniq();

    auto candidate = nonullable self.selector2(candidates2);

    auto append = candidate.substring(len, -1);
    self.insertText(append);
}
