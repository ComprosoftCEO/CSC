// C System Calls (CSC)
// (C) Comprosoft 2018 - All Rights Reserved
//
//  CSC_TLS.h - Public header for Thread-Local Storage
#ifndef CSC_TLS_HEADER
#define CSC_TLS_HEADER

#include <stdbool.h>

typedef void* pCSC_TLS_t;

pCSC_TLS_t CSC_New_TLS(void);
bool CSC_Free_TLS(pCSC_TLS_t tls);


bool CSC_Set_TLS(pCSC_TLS_t tls, void* data);
void* CSC_Get_TLS(pCSC_TLS_t tls);

#endif // CSC_TLS_HEADER Included
