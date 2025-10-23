#include "minux.h"

int main(int argc, char** argv){
    const char* argpath="";
    
    for(int i=1;i<argc;i++){
        if(argv[i] && argv[i][0]=='-' && argv[i][1]){
        }
        else if(argv[i] && argv[i][0]) argpath=argv[i];
    }

    // 引数がファイル（= 非ディレクトリ）ならここで終わり
    if(argpath[0]) {
        struct stat stf;
        stat(argpath, &stf);
        
        printf("%s %d\r\n", argpath, stf.size);
        exit(0);
    }

    // それ以外はディレクトリを列挙
    int dfd = opendir(argpath);
    if(dfd<0) { 
        printf("opendir failed\n"); 
        exit(1); 
    }
    struct dirent ents[32];
    for(;;){
        int n = readdir(dfd, ents, 32);
        if(n<0){ printf("readdir error\n"); break; }
        if(n==0) break;
        for(int i=0;i<n;i++){
            char name[DIRSIZ+1]; for(int j=0;j<DIRSIZ;j++) name[j]=ents[i].name[j]; name[DIRSIZ]='\0';
            int len=DIRSIZ; while(len>0 && name[len-1]=='\0') len--; if(len==0) continue;
            write(1,name,len); write(1,"\n",1);
        }
    }
    closedir(dfd); exit(0);
}

