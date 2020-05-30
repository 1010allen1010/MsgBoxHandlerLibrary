#pragma once

// Includes
#include "DLL.h"
#include <windows.h>

// Buttons That are able to be pressed
#define IS_CANCEL_PRESSED   IDCANCEL
#define IS_ABORT_PRESSED    IDABORT
#define IS_OK_PRESSED	    IDOK
#define IS_YES_PRESSED	    IDYES
#define IS_NO_PRESSED	    IDNO
#define IS_RETRY_PRESSED    IDRETRY
#define IS_TRYAGAIN_PRESSED IDTRYAGAIN
#define IS_IGNORE_PRESSED	IDIGNORE

// Button Configs
#define OK				    MB_OK
#define OK_CANCEL		    MB_OKCANCEL
#define YES_NO			    MB_YESNO
#define YES_NO_CANCEL	    MB_YESNOCANCEL
#define ABORT_RETRY_IGNORE  MB_ABORTRETRYIGNORE
#define CANCEL_TRY_CONTINUE MB_CANCELTRYCONTINUE
#define HELP				MB_HELP
#define RETRY_CANCEL		MB_RETRYCANCEL

class DLL_API MsgBoxHandler
{
public:
	MsgBoxHandler(HWND hwnd);
	~MsgBoxHandler();

	// Main Function
	int InfoDialog(const char* title, const char* msg, UINT Buttons);
	int QuestionDialog(const char* title, const char* msg, UINT Buttons);
	int WarningDialog(const char* title, const char* msg, UINT Buttons);
	int ErrorDialog(const char* title, const char* msg, UINT Buttons);
private:
	HWND owner = NULL;
};

