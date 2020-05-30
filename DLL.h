#pragma once

// BUILD_DLL is required for projects that is DLLs.
// This Header file is to make it easier to create DLLs
// For it to work you need to include the header file In your
// DLL project to the project you want to use the DLL on This
// will make everything easier.

// put this file in the same dir as the MsgBoxHandler.h

#ifdef BUILD_DLL
	#define DLL_API __declspec(dllexport)
#else
	#define DLL_API __declspec(dllimport)
#endif