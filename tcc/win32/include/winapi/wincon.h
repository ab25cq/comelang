#ifndef _WINCON_H
#define _WINCON_H
#if __GNUC__ >=3
#pragma GCC system_header
#endif


#ifdef __cplusplus
extern "C" {
#endif

#define FOREGROUND_BLUE	1
#define FOREGROUND_GREEN	2
#define FOREGROUND_RED	4
#define FOREGROUND_INTENSITY	8
#define BACKGROUND_BLUE	16
#define BACKGROUND_GREEN	32
#define BACKGROUND_RED	64
#define BACKGROUND_INTENSITY	128
#define CTRL_C_EVENT 0
#define CTRL_BREAK_EVENT 1
#define CTRL_CLOSE_EVENT 2
#define CTRL_LOGOFF_EVENT 5
#define CTRL_SHUTDOWN_EVENT 6
#define ENABLE_LINE_INPUT 2
#define ENABLE_ECHO_INPUT 4
#define ENABLE_PROCESSED_INPUT 1
#define ENABLE_WINDOW_INPUT 8
#define ENABLE_MOUSE_INPUT 16
#define ENABLE_PROCESSED_OUTPUT 1
#define ENABLE_WRAP_AT_EOL_OUTPUT 2
#define KEY_EVENT 1
#define MOUSE_EVENT 2
#define WINDOW_BUFFER_SIZE_EVENT 4
#define MENU_EVENT 8
#define FOCUS_EVENT 16
#define CAPSLOCK_ON 128
#define ENHANCED_KEY 256
#define RIGHT_ALT_PRESSED 1
#define LEFT_ALT_PRESSED 2
#define RIGHT_CTRL_PRESSED 4
#define LEFT_CTRL_PRESSED 8
#define SHIFT_PRESSED 16
#define NUMLOCK_ON 32
#define SCROLLLOCK_ON 64
#define FROM_LEFT_1ST_BUTTON_PRESSED 1
#define RIGHTMOST_BUTTON_PRESSED 2
#define FROM_LEFT_2ND_BUTTON_PRESSED 4
#define FROM_LEFT_3RD_BUTTON_PRESSED 8
#define FROM_LEFT_4TH_BUTTON_PRESSED 16
#define MOUSE_MOVED	1
#define DOUBLE_CLICK	2
#define MOUSE_WHEELED	4

typedef struct _CHAR_INFO {
	union {
		WCHAR UnicodeChar;
		CHAR AsciiChar;
	} Char;
	WORD Attributes;
} CHAR_INFO,*PCHAR_INFO;
typedef struct _SMALL_RECT {
	SHORT Left;
	SHORT Top;
	SHORT Right;
	SHORT Bottom;
} SMALL_RECT,*PSMALL_RECT;
typedef struct _CONSOLE_CURSOR_INFO {
	DWORD	dwSize;
	BOOL	bVisible;
} CONSOLE_CURSOR_INFO,*PCONSOLE_CURSOR_INFO;
typedef struct _COORD {
	SHORT X;
	SHORT Y;
} COORD;
typedef struct _CONSOLE_SCREEN_BUFFER_INFO {
	COORD	dwSize;
	COORD	dwCursorPosition;
	WORD	wAttributes;
	SMALL_RECT srWindow;
	COORD	dwMaximumWindowSize;
} CONSOLE_SCREEN_BUFFER_INFO,*PCONSOLE_SCREEN_BUFFER_INFO;
typedef BOOL(CALLBACK *PHANDLER_ROUTINE)(DWORD);
typedef struct _KEY_EVENT_RECORD {
	BOOL bKeyDown;
	WORD wRepeatCount;
	WORD wVirtualKeyCode;
	WORD wVirtualScanCode;
	union {
		WCHAR UnicodeChar;
		CHAR AsciiChar;
	} uChar;
	DWORD dwControlKeyState;
} 
#ifdef __GNUC__
/* gcc's alignment is not what win32 expects */
 PACKED
#endif
KEY_EVENT_RECORD;

typedef struct _MOUSE_EVENT_RECORD {
	COORD dwMousePosition;
	DWORD dwButtonState;
	DWORD dwControlKeyState;
	DWORD dwEventFlags;
} MOUSE_EVENT_RECORD;
typedef struct _WINDOW_BUFFER_SIZE_RECORD {	COORD dwSize; } WINDOW_BUFFER_SIZE_RECORD;
typedef struct _MENU_EVENT_RECORD {	UINT dwCommandId; } MENU_EVENT_RECORD,*PMENU_EVENT_RECORD;
typedef struct _FOCUS_EVENT_RECORD { BOOL bSetFocus; } FOCUS_EVENT_RECORD;
typedef struct _INPUT_RECORD {
	WORD EventType;
	union {
		KEY_EVENT_RECORD KeyEvent;
		MOUSE_EVENT_RECORD MouseEvent;
		WINDOW_BUFFER_SIZE_RECORD WindowBufferSizeEvent;
		MENU_EVENT_RECORD MenuEvent;
		FOCUS_EVENT_RECORD FocusEvent;
	} Event;
} INPUT_RECORD,*PINPUT_RECORD;

BOOL WINAPI AllocConsole(void);
HANDLE WINAPI CreateConsoleScreenBuffer(DWORD,DWORD,LPSECURITY_ATTRIBUTES,DWORD,PVOID);
BOOL WINAPI FillConsoleOutputAttribute(HANDLE,WORD,DWORD,COORD,PDWORD);
BOOL WINAPI FillConsoleOutputCharacterA(HANDLE,CHAR,DWORD,COORD,PDWORD);
BOOL WINAPI FillConsoleOutputCharacterW(HANDLE,WCHAR,DWORD,COORD,PDWORD);
BOOL WINAPI FlushConsoleInputBuffer(HANDLE);
BOOL WINAPI FreeConsole(void);
BOOL WINAPI GenerateConsoleCtrlEvent(DWORD,DWORD);
UINT WINAPI GetConsoleCP(void);
BOOL WINAPI GetConsoleCursorInfo(HANDLE,PCONSOLE_CURSOR_INFO);
BOOL WINAPI GetConsoleMode(HANDLE,PDWORD);
UINT WINAPI GetConsoleOutputCP(void);
BOOL WINAPI GetConsoleScreenBufferInfo(HANDLE,PCONSOLE_SCREEN_BUFFER_INFO);
DWORD WINAPI GetConsoleTitleA(LPSTR,DWORD);
DWORD WINAPI GetConsoleTitleW(LPWSTR,DWORD);
COORD WINAPI GetLargestConsoleWindowSize(HANDLE);
BOOL WINAPI GetNumberOfConsoleInputEvents(HANDLE,PDWORD);
BOOL WINAPI GetNumberOfConsoleMouseButtons(PDWORD);
BOOL WINAPI PeekConsoleInputA(HANDLE,PINPUT_RECORD,DWORD,PDWORD);
BOOL WINAPI PeekConsoleInputW(HANDLE,PINPUT_RECORD,DWORD,PDWORD);
BOOL WINAPI ReadConsoleA(HANDLE,PVOID,DWORD,PDWORD,PVOID);
BOOL WINAPI ReadConsoleW(HANDLE,PVOID,DWORD,PDWORD,PVOID);
BOOL WINAPI ReadConsoleInputA(HANDLE,PINPUT_RECORD,DWORD,PDWORD);
BOOL WINAPI ReadConsoleInputW(HANDLE,PINPUT_RECORD,DWORD,PDWORD);
BOOL WINAPI ReadConsoleOutputAttribute(HANDLE,LPWORD,DWORD,COORD,LPDWORD);
BOOL WINAPI ReadConsoleOutputCharacterA(HANDLE,LPSTR,DWORD,COORD,PDWORD);
BOOL WINAPI ReadConsoleOutputCharacterW(HANDLE,LPWSTR,DWORD,COORD,PDWORD);
BOOL WINAPI ReadConsoleOutputA(HANDLE,PCHAR_INFO,COORD,COORD,PSMALL_RECT);
BOOL WINAPI ReadConsoleOutputW(HANDLE,PCHAR_INFO,COORD,COORD,PSMALL_RECT);
BOOL WINAPI ScrollConsoleScreenBufferA(HANDLE,const SMALL_RECT*,const SMALL_RECT*,COORD,const CHAR_INFO*);
BOOL WINAPI ScrollConsoleScreenBufferW(HANDLE,const SMALL_RECT*,const SMALL_RECT*,COORD,const CHAR_INFO*);
BOOL WINAPI SetConsoleActiveScreenBuffer(HANDLE);
BOOL WINAPI SetConsoleCP(UINT);
BOOL WINAPI SetConsoleCtrlHandler(PHANDLER_ROUTINE,BOOL);
BOOL WINAPI SetConsoleCursorInfo(HANDLE,const CONSOLE_CURSOR_INFO*);
BOOL WINAPI SetConsoleCursorPosition(HANDLE,COORD);
BOOL WINAPI SetConsoleMode(HANDLE,DWORD);
BOOL WINAPI SetConsoleOutputCP(UINT);
BOOL WINAPI SetConsoleScreenBufferSize(HANDLE,COORD);
BOOL WINAPI SetConsoleTextAttribute(HANDLE,WORD);
BOOL WINAPI SetConsoleTitleA(LPCSTR);
BOOL WINAPI SetConsoleTitleW(LPCWSTR);
BOOL WINAPI SetConsoleWindowInfo(HANDLE,BOOL,const SMALL_RECT*);
BOOL WINAPI WriteConsoleA(HANDLE,PCVOID,DWORD,PDWORD,PVOID);
BOOL WINAPI WriteConsoleW(HANDLE,PCVOID,DWORD,PDWORD,PVOID);
BOOL WINAPI WriteConsoleInputA(HANDLE,const INPUT_RECORD*,DWORD,PDWORD);
BOOL WINAPI WriteConsoleInputW(HANDLE,const INPUT_RECORD*,DWORD,PDWORD);
BOOL WINAPI WriteConsoleOutputA(HANDLE,const CHAR_INFO*,COORD,COORD,PSMALL_RECT);
BOOL WINAPI WriteConsoleOutputW(HANDLE,const CHAR_INFO*,COORD,COORD,PSMALL_RECT);
BOOL WINAPI WriteConsoleOutputAttribute(HANDLE,const WORD*,DWORD,COORD,PDWORD);
BOOL WINAPI WriteConsoleOutputCharacterA(HANDLE,LPCSTR,DWORD,COORD,PDWORD);
BOOL WINAPI WriteConsoleOutputCharacterW(HANDLE,LPCWSTR,DWORD,COORD,PDWORD);

#ifdef UNICODE
#define FillConsoleOutputCharacter FillConsoleOutputCharacterW
#define GetConsoleTitle GetConsoleTitleW
#define PeekConsoleInput PeekConsoleInputW
#define ReadConsole ReadConsoleW
#define ReadConsoleInput ReadConsoleInputW
#define ReadConsoleOutput ReadConsoleOutputW
#define ReadConsoleOutputCharacter ReadConsoleOutputCharacterW
#define ScrollConsoleScreenBuffer ScrollConsoleScreenBufferW
#define SetConsoleTitle SetConsoleTitleW
#define WriteConsole WriteConsoleW
#define WriteConsoleInput WriteConsoleInputW
#define WriteConsoleOutput WriteConsoleOutputW
#define WriteConsoleOutputCharacter WriteConsoleOutputCharacterW
#else
#define FillConsoleOutputCharacter FillConsoleOutputCharacterA
#define GetConsoleTitle GetConsoleTitleA
#define PeekConsoleInput PeekConsoleInputA
#define ReadConsole ReadConsoleA
#define ReadConsoleInput ReadConsoleInputA
#define ReadConsoleOutput ReadConsoleOutputA
#define ReadConsoleOutputCharacter ReadConsoleOutputCharacterA
#define ScrollConsoleScreenBuffer ScrollConsoleScreenBufferA
#define SetConsoleTitle SetConsoleTitleA
#define WriteConsole WriteConsoleA
#define WriteConsoleInput WriteConsoleInputA
#define WriteConsoleOutput WriteConsoleOutputA
#define WriteConsoleOutputCharacter WriteConsoleOutputCharacterA
#endif

#ifdef __cplusplus
}
#endif
#endif
