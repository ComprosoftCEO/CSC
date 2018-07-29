// C System Calls (CSC)
// (C) Comprosoft 2018 - All Rights Reserved
//
//  CSC_Free_TLS.c - Release a TLS key from memory
#include <csc_tls_p.h>

bool CSC_Free_TLS(pCSC_TLS_t t) {
    pTLS_Key_t tls = (pTLS_Key_t) t;
    if (!t) {return false;}

    if (!FREE_TLS(*tls)) {return false;}
    free(tls);

    return true;
}
