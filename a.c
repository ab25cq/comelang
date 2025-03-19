#include <comelang.h>
#include <dirent.h>

void fileCompetion() 
{
    auto words = new list<string>.initialize();
    
    string dir_name = s"vin";

    DIR* dir = opendir(dir_name);

    if(dir == null) {
        return;
    }

    while(true) {
        struct dirent* entry = readdir(dir);

        if(entry == null) {
            break;
        }
        
        string path = xsprintf("%s", entry->d_name);
        
        words.push_back(path);
    }
    
    string word = s"03";

    closedir(dir);

    auto words2 = new list<string>.initialize();
    
    foreach(it, words) {
        if(strcmp(word, "") == 0 || strstr(it, word) == it) {
            words2.push_back(clone it);
        }
    }
    auto words3 = words2.sort();
}

int main(int argc, char** argv) {
    fileCompetion();
    return 0;
}

