#include "MsgBoxHandler.h"

MsgBoxHandler::MsgBoxHandler(HWND hwnd) {
	owner = hwnd;
}

MsgBoxHandler::~MsgBoxHandler() {
	delete(owner);
}

int MsgBoxHandler::InfoDialog(const char* title, const char* msg, UINT Buttons) {
	return MessageBoxA(owner, msg, title, MB_ICONINFORMATION | MB_DEFBUTTON1 | Buttons);
}

int MsgBoxHandler::QuestionDialog(const char* title, const char* msg, UINT Buttons) {
	return MessageBoxA(owner, msg, title, MB_ICONQUESTION | MB_DEFBUTTON1 | Buttons);
}

int MsgBoxHandler::WarningDialog(const char* title, const char* msg, UINT Buttons) {
	return MessageBoxA(owner, msg, title, MB_ICONWARNING | MB_DEFBUTTON1 | Buttons);
}

int MsgBoxHandler::ErrorDialog(const char* title, const char* msg, UINT Buttons) {
	return MessageBoxA(owner, msg, title, MB_ICONERROR | MB_DEFBUTTON1 | Buttons);
}