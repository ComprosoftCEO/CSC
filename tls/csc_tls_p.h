// C System Calls (CSC)
// (C) Comprosoft 2018 - All Rights Reserved
//
//  csc_tls_p.h - Private header for Thread-Local Storage
#ifndef CSC_TLS_PRIVATE_HEADER
#define CSC_TLS_PRIVATE_HEADER

#include <csc_tls.h>
#include <stdlib.h>     /* For malloc and free */

#if defined(_WINDOWS)
  #include <windows.h>
  typedef DWORD TLS_Key_t, *pTLS_Key_t;

  #define INIT_TLS(tls)     (((tls) = TlsAlloc()) != TLS_OUT_OF_INDEXES)
  #define SET_TLS(tls,val)  (TlsSetValue((tls),(val)) != 0)
  #define GET_TLS(tls)      TlsGetValue((tls))
  #define FREE_TLS(tls)     (TlsFree((tls)) != 0)

#elif defined(_LINUX)
  #include <pthread.h>
  typedef pthread_key_t TLS_Key_t, *pTLS_Key_t;

  #define INIT_TLS(tls)    (pthread_key_create(&(tls), NULL) == 0)
  #define SET_TLS(tls,val) (pthread_setspecific((tls),(val)) == 0)
  #define GET_TLS(tls)     pthread_getspecific((tls))
  #define FREE_TLS(tls)    (pthread_key_delete((tls)) == 0)

#else
  #error "Platform does not support Thread-Local Storage"
#endif


#endif // CSC_TLS_PRIVATE_HEADER Included
