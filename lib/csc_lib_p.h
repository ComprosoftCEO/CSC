// C System Calls (CSC)
// (C) Comprosoft 2018 - All Rights Reserved
//
//  csc_lib_p.h - Private header for dynamic shared library loading
#ifndef CSC_LIB_PRIVATE_HEADER
#define CSC_LIB_PRIVATE_HEADER

#include <csc_lib.h>

typedef void* pCSC_Lib_t;

//All errors for dynamic shared libraries
typedef enum {


} csc_liberr;


pCSC_Lib_t CSC_Load_Library(const char* lib);
csc_liberr CSC_Unload_Library(pCSC_Lib_t);

void* CSC_Get_Function(pCSC_Lib_t, const char* func);


#endif // CSC_LIB_PRIVATE_HEADER Included
