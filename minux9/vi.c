#include "minux.h"

#define MAX_LINES 512
#define MAX_COLS  256
#define CTRL_D    4
#define CTRL_L    12
#define CTRL_U    21

static char buf[MAX_LINES][MAX_COLS];
static int  nlines = 0;
static int  curx = 0, cury = 0;   // cursor in file (col,row)
static int  rowoff = 0;           // top row of screen
static int  dirty = 0;
static char filename[128];
// screen double-buffering and line numbers
#define MAX_SCREEN_ROWS 64
#define SCREEN_COLS  256
#define LN_WIDTH 6  // 5 digits + space
static char screen_prev[MAX_SCREEN_ROWS][SCREEN_COLS];
static char status_prev[SCREEN_COLS];
static int screen_inited = 0;
static char g_status_msg[64];
// runtime-configured content rows (excludes status line). Default safe for small TTYs.
static int g_scr_rows = 16;
// yank buffer (line-wise)
static char yank_buf[MAX_LINES][MAX_COLS];
static int  yank_count = 0;
static int  yank_linewise = 1;
// visual line selection
static int  visual_active = 0;
static int  visual_start = 0;

// --- tiny helpers ---
static int slen(const char* s){ int n=0; while(s && s[n]) n++; return n; }
static void prints(const char* s){ if(s) write(1,s,slen(s)); }
static void puthex(unsigned x){ char d[]="0123456789abcdef"; char s[9]; s[8]='\0'; for(int i=7;i>=0;i--){ s[i]=d[x&15]; x>>=4;} prints(s);} 
static void clr_line(char* s){ if(s) s[0]='\0'; }
static void term_clear_fallback(){
  // Fallback clear for terminals that ignore ANSI: scroll with CRLFs
  for(int i=0;i<60;i++) prints("\r\n");
}
static void sclear(){
  term_clear_fallback();
  prints("\x1b[2J\x1b[H");
}
static void print_num(int v){
  char s[16]; int n=0; if(v<=0){ s[n++]='1'; }
  else { char t[16]; int k=0; while(v){ t[k++] = '0' + (v%10); v/=10; } if(k==0) t[k++]='1'; while(k--) s[n++]=t[k]; }
  write(1,s,n);
}
static void scup(int r,int c){
  prints("\x1b["); print_num(r<=0?1:r); prints(";"); print_num(c<=0?1:c); prints("H");
}

static int parse_int(const char* s){
  int v=0; int i=0; int any=0;
  while(s && s[i]){ if(s[i]>='0' && s[i]<='9'){ v = v*10 + (s[i]-'0'); any=1; i++; } else break; }
  return any ? v : -1;
}

static void init_screen_rows(char** envp){
  // Try to honor LINES or ROWS env; we assume it gives total rows including status.
  int total = -1;
  for(char** e=envp; e && *e; e++){
    const char* s = *e;
    if(s[0]=='L'&&s[1]=='I'&&s[2]=='N'&&s[3]=='E'&&s[4]=='S'&&s[5]=='='){
      int t = parse_int(s+6); if(t>0) total = t;
    } else if(s[0]=='R'&&s[1]=='O'&&s[2]=='W'&&s[3]=='S'&&s[4]=='='){
      int t = parse_int(s+5); if(t>0) total = t;
    }
  }
  int content;
  if(total > 0) content = total - 1; else content = g_scr_rows; // keep default if unknown
  if(content < 5) content = 5; // minimal usable area
  if(content > MAX_SCREEN_ROWS) content = MAX_SCREEN_ROWS;
  g_scr_rows = content;
}

static void status(const char* msg){
  int i=0; while(msg && msg[i] && i < (int)sizeof(g_status_msg)-1){ g_status_msg[i]=msg[i]; i++; }
  g_status_msg[i]='\0';
}

static void draw_screen(){
  if (!screen_inited){
    for(int r=0;r<g_scr_rows;r++) screen_prev[r][0]='\0';
    status_prev[0]='\0';
    sclear();
    screen_inited = 1;
  }
  // hide cursor during repaint
  prints("\x1b[?25l");
  int sel_lo = -1, sel_hi = -1;
  if (visual_active) {
    sel_lo = (visual_start < cury) ? visual_start : cury;
    sel_hi = (visual_start > cury) ? visual_start : cury;
  }
  for(int r=0; r<g_scr_rows; r++){
    int idx = rowoff + r;
    const char* src = (idx < nlines) ? buf[idx] : "";
    // build line with left gutter line number
    char cur[SCREEN_COLS]; int L=0;
    int ln = idx + 1; char num[8]; int nn=0; int q=ln;
    if(q<=0){ num[nn++]='0'; }
    else { char tmp[8]; int kk=0; while(q){ tmp[kk++]='0'+(q%10); q/=10; } if(kk==0) tmp[kk++]='0'; while(kk--) num[nn++]=tmp[kk]; }
    int pad = LN_WIDTH-1 - nn; if (pad < 0) pad = 0; for(int i=0;i<pad && L<SCREEN_COLS-1;i++) cur[L++]=' ';
    for(int i=0;i<nn && L<SCREEN_COLS-1;i++) cur[L++]=num[i];
    if (L<SCREEN_COLS-1) cur[L++]=' ';
    int maxc = SCREEN_COLS-1 - L;
    for(int i=0; src && src[i] && i<maxc; i++) cur[L++]=src[i];
    cur[L]='\0';
    int disp_len = L;
    int pad_len = SCREEN_COLS-1 - disp_len;
    if (pad_len < 0) pad_len = 0;
    // optionally wrap with reverse-video when in visual line range
    char curhl[SCREEN_COLS + 16];
    const char* emit = cur;
    int EL = L;
    if (visual_active && idx >= sel_lo && idx <= sel_hi) {
      int n2 = 0; const int maxhl = (int)sizeof(curhl) - 1;
      const char *rvon = "\x1b[7m"; const char *rvoff = "\x1b[0m";
      for(int i=0; rvon[i] && n2<maxhl; i++) curhl[n2++] = rvon[i];
      for(int i=0; cur[i] && n2<maxhl; i++) curhl[n2++] = cur[i];
      for(int i=0; rvoff[i] && n2<maxhl; i++) curhl[n2++] = rvoff[i];
      while(pad_len>0 && n2<maxhl){ curhl[n2++] = ' '; pad_len--; }
      curhl[n2] = '\0';
      emit = curhl; EL = n2;
    } else {
      while(pad_len>0 && L<SCREEN_COLS-1){ cur[L++]=' '; pad_len--; }
      cur[L] = '\0';
      EL = L;
    }
    // compare with previous
    int diff=0; for(int i=0; emit[i]||screen_prev[r][i]; i++){ if(emit[i]!=screen_prev[r][i]){ diff=1; break; } }
    if (diff){
      scup(r+1,1);
      prints("\x1b[2K");
      if (EL>0) write(1, emit, EL);
      // store current into prev
      int i=0; while(emit[i]){ screen_prev[r][i]=emit[i]; i++; } screen_prev[r][i]='\0';
    }
  }
  // compose status line
  char stat[SCREEN_COLS]; int n=0;
  const char* prefix = (g_status_msg[0]?"-- ":"vi ");
  for(int i=0; prefix[i] && n<SCREEN_COLS-1; i++) stat[n++]=prefix[i];
  const char* body = (g_status_msg[0]?g_status_msg:"(h j k l, i/a, x, /, n, :w :q :wq :s)");
  for(int i=0; body[i] && n<SCREEN_COLS-1; i++) stat[n++]=body[i];
  if (n<SCREEN_COLS-2) stat[n++]=' ';
  const char* fn = (filename[0]?filename:"[No Name]");
  for(int i=0; fn[i] && n<SCREEN_COLS-1; i++) stat[n++]=fn[i];
  if (dirty && n<SCREEN_COLS-4){ stat[n++]=' '; stat[n++]='['; stat[n++]='+'; stat[n++]=']'; }
  int stat_pad = SCREEN_COLS-1 - n;
  if (stat_pad < 0) stat_pad = 0;
  while(stat_pad>0 && n<SCREEN_COLS-1){ stat[n++]=' '; stat_pad--; }
  stat[n]='\0';
  int sdiff=0; for(int i=0; stat[i]||status_prev[i]; i++){ if(stat[i]!=status_prev[i]){ sdiff=1; break; } }
  if (sdiff){
    scup(g_scr_rows+1,1);
    prints("\x1b[2K");
    if (stat[0]) write(1, stat, slen(stat));
    int i=0; while(stat[i]){ status_prev[i]=stat[i]; i++; } status_prev[i]='\0';
  }
  // restore cursor (offset for line number gutter)
  scup(cury - rowoff + 1, curx + 1 + LN_WIDTH);
  prints("\x1b[?25h");
}

static void ensure_cursor_visible(){
  if(cury < rowoff) rowoff = cury;
  if(cury >= rowoff + g_scr_rows) rowoff = cury - (g_scr_rows - 1);
}

static void clamp_cursor(){
  if(cury < 0) cury = 0; if(cury >= nlines) cury = nlines-1;
  int len = slen(buf[cury]);
  if(curx < 0) curx = 0; if(curx > len) curx = len;
}

static int is_word(char c){
  if ((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')||c=='_') return 1;
  return 0;
}

static void move_word_forward(){
  int y = cury;
  int x = curx;
  while (y < nlines){
    char* s = buf[y];
    int len = slen(s);
    if (x >= len){ y++; x = 0; continue; }
    // if at word, skip to end
    if (is_word(s[x])){ while (x < len && is_word(s[x])) x++; }
    // skip non-word to next word start
    while (y < nlines){
      s = buf[y]; len = slen(s);
      while (x < len && !is_word(s[x])) x++;
      if (x < len && is_word(s[x])){ cury=y; curx=x; return; }
      y++; x = 0;
    }
  }
  // fallback to end of buffer
  cury = nlines-1; curx = slen(buf[cury]);
}

static void move_word_backward(){
  int y = cury;
  int x = curx;
  // move left one position to avoid sticking at same word start
  if (x > 0) x--; else if (y > 0) { y--; x = slen(buf[y]); }
  while (y >= 0){
    char* s = buf[y];
    int len = slen(s);
    if (len == 0){ y--; x = (y>=0)?slen(buf[y]):0; continue; }
    if (x > len) x = len;
    // skip non-word backwards
    while (x > 0 && !is_word(s[x-1])) x--;
    // move to start of previous word
    if (x > 0 && is_word(s[x-1])){
      int start = x-1;
      while (start > 0 && is_word(s[start-1])) start--;
      cury = y; curx = start; return;
    }
    y--; x = (y>=0)?slen(buf[y]):0;
  }
  // fallback to start
  cury = 0; curx = 0;
}

static void insert_char(int y,int x,char ch){
  int len = slen(buf[y]);
  if(len >= MAX_COLS-1) return;
  if(x > len) x = len;
  // shift right
  for(int i=len; i>=x; i--) buf[y][i+1]=buf[y][i];
  buf[y][x]=ch;
  dirty=1;
}

static void delete_char(int y,int x){
  int len = slen(buf[y]);
  if(x >= len) return;
  for(int i=x; i<=len; i++) buf[y][i]=buf[y][i+1];
  dirty=1;
}

static void split_line(int y,int x){
  if(nlines >= MAX_LINES) return;
  // move lines down
  for(int i=nlines; i>y+1; i--){
    for(int j=0;j<MAX_COLS;j++) buf[i][j]=buf[i-1][j];
  }
  // new line becomes tail of current from x
  int len = slen(buf[y]);
  int k=0; for(int i=x;i<=len;i++) buf[y+1][k++]=buf[y][i]; buf[y+1][k]='\0';
  buf[y][x]='\0';
  nlines++;
  dirty=1;
}

static void join_line(int y){
  if(y+1 >= nlines) return;
  int len = slen(buf[y]);
  int len2= slen(buf[y+1]);
  int can = MAX_COLS-1 - len; if(can < 0) can=0; if(can > len2) can=len2;
  for(int i=0;i<can;i++) buf[y][len+i]=buf[y+1][i]; buf[y][len+can]='\0';
  // remove y+1
  for(int i=y+1;i<nlines-1;i++){
    for(int j=0;j<MAX_COLS;j++) buf[i][j]=buf[i+1][j];
  }
  nlines--; dirty=1;
}

static void delete_line(int y){
  if (nlines <= 1) { buf[0][0]='\0'; curx=0; cury=0; dirty=1; return; }
  if (y < 0) y = 0; if (y >= nlines) y = nlines-1;
  for (int i=y; i<nlines-1; i++) {
    for (int j=0;j<MAX_COLS;j++) buf[i][j] = buf[i+1][j];
  }
  nlines--; if (cury >= nlines) cury = nlines-1; if (curx > slen(buf[cury])) curx = slen(buf[cury]);
  dirty = 1;
}

static void yank_range(int y0, int y1){
  if (y0 > y1){ int t=y0; y0=y1; y1=t; }
  if (y0 < 0) y0 = 0; if (y1 >= nlines) y1 = nlines-1;
  int cnt = y1 - y0 + 1; if (cnt > MAX_LINES) cnt = MAX_LINES;
  for (int i=0; i<cnt; i++) {
    int L=0; while (buf[y0+i][L] && L<MAX_COLS-1) { yank_buf[i][L] = buf[y0+i][L]; L++; }
    yank_buf[i][L] = '\0';
  }
  yank_count = cnt; yank_linewise = 1;
}

static void insert_lines_at(int pos){
  if (pos < 0) pos = 0; if (pos > nlines) pos = nlines;
  int can = yank_count; if (nlines + can > MAX_LINES) can = MAX_LINES - nlines;
  if (can <= 0) return;
  // shift down
  for (int i=nlines-1; i>=pos; i--) {
    for (int j=0;j<MAX_COLS;j++) buf[i+can][j] = buf[i][j];
  }
  // copy yanked lines
  for (int i=0; i<can; i++) {
    int L=0; while (yank_buf[i][L] && L<MAX_COLS-1) { buf[pos+i][L] = yank_buf[i][L]; L++; }
    buf[pos+i][L] = '\0';
  }
  nlines += can; dirty = 1;
}

static int read_key(int fd){
  char c; int r = read(fd,&c,1); if(r<=0) return -1; int k=(unsigned char)c; if(k==3) return 27; return k;
}

static int save_file(){
  int fd = open(filename, O_WRONLY|O_TRUNC|O_CREAT, 0644);
  if(fd < 0) return -1;
  for(int i=0;i<nlines;i++){
    int len = slen(buf[i]);
    if(len>0) write(fd, buf[i], len);
    write(fd, "\n", 1);
  }
  close(fd);
  dirty=0; return 0;
}

static void read_file(const char* path){
  int fd = open(path, O_RDONLY, 0);
  if (fd < 0){ nlines = 1; clr_line(buf[0]); return; }
  // reset buffer
  for (int i=0;i<MAX_LINES;i++) buf[i][0]='\0';
  int n; char chunk[256];
  int line = 0; // current line index
  int k = 0;    // column within current line
  while((n = read(fd, chunk, sizeof(chunk))) > 0){
    for (int i=0; i<n; i++){
      char ch = chunk[i];
      if (ch=='\r') continue; // ignore CR
      if (ch=='\n'){
        // finalize current line and move to next if possible
        if (line < MAX_LINES-1){
          line++;
          k = 0;
          buf[line][0] = '\0';
        }
        continue;
      }
      if (k < MAX_COLS-1){ buf[line][k++] = ch; buf[line][k] = '\0'; }
    }
  }
  close(fd);
  nlines = line + 1; // total lines is last index + 1
  if (nlines <= 0){ nlines = 1; clr_line(buf[0]); }
}

static int prompt_colon(char* out,int max, int ttyfd){
  status(":"); scup(g_scr_rows+1,3); prints("\x1b[2K");
  int n=0; while(n<max-1){
    int k = read_key(ttyfd); if(k<0) break;
    if(k=='\r' || k=='\n') break;
    if(k==127 || k=='\b') { if(n>0){ n--; prints("\b \b"); } continue; }
    out[n++]=(char)k; write(1,&out[n-1],1);
  }
  out[n]='\0'; return n;
}

// --- search helpers ---
static char last_pat[64];
static int  have_last_pat = 0;

static int prompt_search(char* out,int max,int ttyfd){
  status("/"); scup(g_scr_rows+1,2); prints("\x1b[2K");
  int n=0; while(n<max-1){
    int k = read_key(ttyfd);
    if(k<0) break;
    if(k=='\r' || k=='\n') break;
    if(k==127 || k=='\b') { if(n>0){ n--; prints("\b \b"); } continue; }
    out[n++]=(char)k; write(1,&out[n-1],1);
  }
  out[n]='\0'; return n;
}

static int find_in_line_from(int y, int x, const char* pat){
  int len = slen(buf[y]); int plen = slen(pat);
  if (plen<=0) return -1;
  for (int i=x; i+plen<=len; i++){
    int j=0; while(j<plen && buf[y][i+j]==pat[j]) j++;
    if (j==plen) return i;
  }
  return -1;
}

static int search_forward(const char* pat){
  if(!pat||!pat[0]) return 0;
  int y = cury, x = curx;
  // start from next char
  if (x < slen(buf[y])) x++;
  int pos = find_in_line_from(y,x,pat);
  if (pos >= 0){ curx = pos; return 1; }
  for (int i=y+1;i<nlines;i++){
    pos = find_in_line_from(i,0,pat);
    if (pos>=0){ cury=i; curx=pos; return 1; }
  }
  return 0;
}

// --- substitute helpers ---
static void memmove_line(char* s,int dst,int src,int n){
  if (dst==src || n<=0) return;
  if (dst < src){ for(int i=0;i<n;i++) s[dst+i]=s[src+i]; }
  else { for(int i=n-1;i>=0;i--) s[dst+i]=s[src+i]; }
}

static int replace_in_line(int y, const char* old, const char* new_, int global){
  int count=0; int oldlen = slen(old), newlen = slen(new_);
  if (oldlen<=0) return 0;
  int i=0; int len = slen(buf[y]);
  while (i <= len - oldlen){
    int j=0; while (j<oldlen && buf[y][i+j]==old[j]) j++;
    if (j==oldlen){
      int nlen = len - oldlen + newlen;
      if (nlen >= MAX_COLS) {
        // cannot grow beyond limit; skip this occurrence
        i++;
        continue;
      }
      if (newlen != oldlen){
        // shift tail
        memmove_line(buf[y], i+newlen, i+oldlen, len - (i+oldlen) + 1); // include NUL
      }
      // copy new
      for (int k=0;k<newlen;k++) buf[y][i+k] = new_[k];
      len = nlen;
      count++; dirty=1;
      if (!global) { i += newlen; break; }
      i += newlen;
    } else {
      i++;
    }
  }
  return count;
}

static int parse_subst(const char* cmd, int* all_lines, char* old, char* repl, int* global_flag){
  // forms: s/old/new/[g]  or  %s/old/new/[g]
  int p=0; *all_lines=0; *global_flag=0; old[0]='\0'; repl[0]='\0';
  if (cmd[p]=='%'){ p++; if (cmd[p]!='s') return 0; *all_lines=1; }
  else if (cmd[p]=='s'){ /* ok */ }
  else return 0;
  p++;
  char delim = cmd[p++]; if (!delim) return 0;
  int i=0; while(cmd[p] && cmd[p]!=delim && i<63){ old[i++]=cmd[p++]; } old[i]='\0'; if (cmd[p]!=delim) return 0; p++;
  i=0; while(cmd[p] && cmd[p]!=delim && i<63){ repl[i++]=cmd[p++]; } repl[i]='\0'; if (cmd[p]==delim) p++;
  // flags
  while(cmd[p]){ if (cmd[p]=='g') *global_flag=1; p++; }
  return 1;
}

int main(int argc, char** argv, char** envp){
  // open tty explicitly for keys
  int ttyfd = isatty(0) ? 0 : open("/dev/tty", O_RDONLY, 0);
  if(argc >= 2){ int i=0; while(argv[1][i] && i< (int)sizeof(filename)-1){ filename[i]=argv[1][i]; i++; } filename[i]='\0'; }
  else { filename[0]='\0'; }

  // init buffer
  for(int i=0;i<MAX_LINES;i++) buf[i][0]='\0';
  nlines=0; 
  if(filename[0]) read_file(filename); else { nlines=1; }
  // detect screen rows from environment (LINES/ROWS)
  init_screen_rows(envp);
  curx=0; cury=0; rowoff=0; dirty=0;

  int insert_mode = 0;
  draw_screen();

  for(;;){
    ensure_cursor_visible(); clamp_cursor(); scup(cury-rowoff+1, curx+1+LN_WIDTH);
    int k = read_key(ttyfd>=0?ttyfd:0); if(k<0) break;
    if(insert_mode){
      if(k==27){ insert_mode=0; status("-- NORMAL --"); }
      else if(k=='\r' || k=='\n'){ split_line(cury,curx); cury++; curx=0; }
      else if(k==127 || k=='\b'){ if(curx>0){ curx--; delete_char(cury,curx);} else if(curx==0 && cury>0){ int prevlen=slen(buf[cury-1]); join_line(cury-1); cury--; curx=prevlen; } }
      else { insert_char(cury,curx,(char)k); curx++; }
      draw_screen();
      continue;
    }
    // normal mode
    if(k=='h'){ if(curx>0) curx--; }
    else if(k=='l'){ if(curx<slen(buf[cury])) curx++; }
    else if(k=='k'){ if(cury>0){ cury--; if(curx>slen(buf[cury])) curx=slen(buf[cury]); } }
    else if(k=='j'){ if(cury<nlines-1){ cury++; if(curx>slen(buf[cury])) curx=slen(buf[cury]); } }
    else if(k==CTRL_D){
      int half = g_scr_rows/2;
      if (half < 1) half = 1;
      int max_rowoff = nlines - g_scr_rows;
      if (max_rowoff < 0) max_rowoff = 0;
      int new_rowoff = rowoff + half;
      if (new_rowoff > max_rowoff) new_rowoff = max_rowoff;
      rowoff = new_rowoff;
      int new_cury = cury + half;
      if (new_cury >= nlines) new_cury = nlines-1;
      if (new_cury < 0) new_cury = 0;
      cury = new_cury;
      if (cury < rowoff) rowoff = cury;
      if (curx > slen(buf[cury])) curx = slen(buf[cury]);
    }
    else if(k==CTRL_U){
      int half = g_scr_rows/2;
      if (half < 1) half = 1;
      int max_rowoff = nlines - g_scr_rows;
      if (max_rowoff < 0) max_rowoff = 0;
      int new_rowoff = rowoff - half;
      if (new_rowoff < 0) new_rowoff = 0;
      if (new_rowoff > max_rowoff) new_rowoff = max_rowoff;
      rowoff = new_rowoff;
      int new_cury = cury - half;
      if (new_cury < 0) new_cury = 0;
      if (new_cury >= nlines) new_cury = nlines-1;
      cury = new_cury;
      if (cury < rowoff) cury = rowoff;
      if (curx > slen(buf[cury])) curx = slen(buf[cury]);
    }
    else if(k=='0'){ curx=0; }
    else if(k=='$'){ curx=slen(buf[cury]); }
    else if(k==CTRL_L){
      screen_inited = 0;
    }
    else if(k=='/'){ char pat[64]; int n = prompt_search(pat,sizeof(pat), ttyfd>=0?ttyfd:0); if(n>0){ for(int i=0;i<n;i++) last_pat[i]=pat[i]; last_pat[n]='\0'; have_last_pat=1; if(!search_forward(last_pat)) status("Pattern not found"); } }
    else if(k=='w'){ move_word_forward(); }
    else if(k=='b'){ move_word_backward(); }
    else if(k=='n'){ if(have_last_pat){ if(!search_forward(last_pat)) status("Pattern not found"); } }
    else if(k=='i'){ insert_mode=1; status("-- INSERT --"); }
    else if(k=='a'){ if(curx<slen(buf[cury])) curx++; insert_mode=1; status("-- INSERT --"); }
    else if(k=='A'){ curx = slen(buf[cury]); insert_mode = 1; status("-- INSERT --"); }
    else if(k=='o'){
      // insert new line below and enter insert mode at column 0
      split_line(cury, slen(buf[cury]));
      cury++; curx=0; insert_mode=1; status("-- INSERT --");
      draw_screen(); continue;
    }
    else if(k=='O'){
      // insert new line above current and enter insert mode
      if (cury == 0) split_line(0, 0);
      else split_line(cury-1, slen(buf[cury-1]));
      // new empty line is now at current cury index
      curx=0; insert_mode=1; status("-- INSERT --");
      draw_screen(); continue;
    }
    else if(k=='x'){ delete_char(cury,curx); }
    else if(k=='d'){
      // support minimal "dd"
      int k2 = read_key(ttyfd>=0?ttyfd:0);
      if (k2=='d') { yank_range(cury, cury); delete_line(cury); status("deleted line"); draw_screen(); continue; }
      else { status("d?"); draw_screen(); continue; }
    }
    else if(k=='V'){
      if (!visual_active){ visual_active = 1; visual_start = cury; status("-- VISUAL LINE --"); }
      else { visual_active = 0; status("-- NORMAL --"); }
    }
    else if(k=='y'){
      if (visual_active){ yank_range(visual_start, cury); visual_active=0; status("yanked"); }
      else { // optional: yy
        int k2 = read_key(ttyfd>=0?ttyfd:0);
        if (k2=='y'){ yank_range(cury, cury); status("yanked line"); }
        else { status("y?"); }
      }
    }
    else if(k=='p'){
      if (yank_count>0){ insert_lines_at(cury+1); cury = cury+1; curx=0; status("put"); }
    }
    else if(k=='P'){
      if (yank_count>0){ insert_lines_at(cury); curx=0; status("Put"); }
    }
    else if(k==':'){
      char cmd[64]; int n = prompt_colon(cmd,sizeof(cmd), ttyfd>=0?ttyfd:0);
      if(n==0){ draw_screen(); continue; }
      if(cmd[0]=='w' && cmd[1]=='\0'){ if(!filename[0]) status("No file name"); else { if(save_file()==0) status("written"); else status("write err"); } }
      else if(cmd[0]=='w' && cmd[1]=='q' && cmd[2]=='\0'){ if(!filename[0]) status("No file name"); else { if(save_file()==0){ prints("\r\n"); exit(0);} else status("write err"); } }
      else if(cmd[0]=='q' && cmd[1]=='\0'){ if(dirty){ status("No write since last change (:q! to quit)"); } else { prints("\r\n"); exit(0);} }
      else if(cmd[0]=='q' && cmd[1]=='!' && cmd[2]=='\0'){ prints("\r\n"); exit(0); }
      else if(cmd[0]=='w' && cmd[1]==' '){ // :w <name>
        // copy new name
        int i=2,j=0; while(cmd[i]==' ') i++; filename[0]='\0'; while(cmd[i] && j<127){ filename[j++]=cmd[i++]; } filename[j]='\0';
        if(filename[0]){ if(save_file()==0) status("written"); else status("write err"); }
        else status("bad name");
      } else if(cmd[0]=='s' || (cmd[0]=='%' && cmd[1]=='s')){
        int all_lines=0, gflag=0; char old[64], repl[64];
        if (parse_subst(cmd, &all_lines, old, repl, &gflag)){
          int total=0;
          if (all_lines){ for(int i=0;i<nlines;i++) total += replace_in_line(i, old, repl, gflag); }
          else { total = replace_in_line(cury, old, repl, gflag); }
          status("replaced "); puthex(total); // cheap numeric
        } else {
          status("bad :s syntax");
        }
      } else {
        status("?");
      }
      draw_screen(); continue;
    }
    draw_screen();
  }
  return 0;
}
