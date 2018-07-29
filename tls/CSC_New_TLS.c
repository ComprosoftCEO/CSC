// C System Calls (CSC)
// (C) Comprosoft 2018 - All Rights Reserved
//
//  CSC_New_TLS.c - Allocate and initialize a new TLS Key
#include <csc_tls_p.h>

pCSC_TLS_t CSC_New_TLS(void) {

    pTLS_Key_t tls = (pTLS_Key_t) malloc(sizeof(TLS_Key_t));
    if (!tls) {return NULL;}

    if (!INIT_TLS(*tls)) {free(tls); return NULL;}
    return (pCSC_TLS_t) tls;
}
