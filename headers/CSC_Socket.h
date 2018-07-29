// C System Calls (CSC)
// (C) Comprosoft 2018 - All Rights Reserved
//
//  CSC_Socket.h - Public header for socket calls
#ifndef CSC_SOCKET_HEADER
#define CSC_SOCKET_HEADER

#include <stddef.h> /* For size_t */

// Socket error codes:
typedef enum {
    SERR_NO_ERROR,
    SERR_BAD_SOCKET

} csc_sockerr;

//Opaque pointer for the socket
typedef void* pCSC_Socket_t;

pCSC_Socket_t CSC_New_Socket(const char* ip, const char* port);

csc_sockerr CSC_Socket_Bind(pCSC_Socket_t);
csc_sockerr CSC_Socket_Listen(pCSC_Socket_t);
csc_sockerr CSC_Socket_Accept(pCSC_Socket_t);
csc_sockerr CSC_Socket_Connect(pCSC_Socket_t);

csc_sockerr CSC_Socket_Write(pCSC_Socket_t, void* data, size_t len);

csc_sockerr CSC_Socket_Read(pCSC_Socket_t, void* buf, size_t len,
csc_sockerr CSC_Socket_ReadUntil(pCSC_Socket_t, void* buf, size_t len, size_t* read, int timeout);

void CSC_Socket_Close(pCSC_Socket_t);



#endif // CSC_SOCKET_HEADER Included
