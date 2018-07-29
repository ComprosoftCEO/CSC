// C System Calls (CSC)
// (C) Comprosoft 2018 - All Rights Reserved
//
//  CSC_Get_TLS.c - Get the data stored in Thread-Local Storage
#include <csc_tls_p.h>

void* CSC_Get_TLS(pCSC_TLS_t t) {

    pTLS_Key_t tls = (pTLS_Key_t) t;
    if (!t) {return NULL;}

    return GET_TLS(*tls);
}
