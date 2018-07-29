// C System Calls (CSC)
// (C) Comprosoft 2018 - All Rights Reserved
//
//  dll.h - Functions for Dynamic Linking on Windows and Linux
#ifndef DLL_HEADER
#define DLL_HEADER

#ifdef BUILD_DLL    /* Only on Windows platforms */
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT
#endif

#endif // DLL_HEADER Included
