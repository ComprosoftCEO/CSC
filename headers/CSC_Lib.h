// C System Calls (CSC)
// (C) Comprosoft 2018 - All Rights Reserved
//
//  CSC_Lib.h - Public header for dynamic loading and unloading of shared libraries
#ifndef CSC_LIB_HEADER
#define CSC_LIB_HEADER

typedef void* pCSC_Lib_t;

#include <stdbool.h>

pCSC_Lib_t CSC_Load_Library(const char* lib);
bool CSC_Unload_Library(pCSC_Lib_t lib);

void* CSC_Get_Function(pCSC_Lib_t lib, const char* fun);

#endif // CSC_LIB_HEADER Included
