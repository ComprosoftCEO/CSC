// C System Calls (CSC)
// (C) Comprosoft 2018 - All Rights Reserved
//
//  CSC_Set_TLS.c - Set the data stored in Thread-Local Storage
#include <csc_tls_p.h>

bool CSC_Set_TLS(pCSC_TLS_t t, void* data) {

    pTLS_Key_t tls = (pTLS_Key_t) t;
    if (!t) {return false;}

    if (!SET_TLS(*tls,data)) {return false;}
    return true;
}
