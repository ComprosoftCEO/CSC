// C System Calls (CSC)
// (C) Comprosoft 2018 - All Rights Reserved
//
//  DLL-Main.c - Startup functions for Windows DLL
#include <dll.h>

#if defined(_WINDOWS)
  #include <windows.h>

  DLL_EXPORT BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    switch (fdwReason) {
        case DLL_PROCESS_ATTACH:
            // attach to process
            // return FALSE to fail DLL load
            break;

        case DLL_PROCESS_DETACH:
            // detach from process
            break;

        case DLL_THREAD_ATTACH:
            // attach to thread
            break;

        case DLL_THREAD_DETACH:
            // detach from thread
            break;
    }
    return TRUE; // succesful
  }

#endif
