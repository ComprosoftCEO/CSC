// C System Calls (CSC)
// (C) Comprosoft 2018 - All Rights Reserved
//
//  csc_socket_p.h - Private header for Socket calls
#ifndef CSC_SOCKET_PRIVATE_HEADER
#define CSC_SOCKET_PRIVATE_HEADER

#include <csc_socket.h>

#ifdef _WINDOWS
  #include <windows.h>
  #include <winsock2.h>
  #include <ws2tcpip.h>

  //Private socket object
  typedef struct {
    SOCKET sock;

  } CSC_SockObj_t, *pCSC_SockObj_t;

#elifdef _LINUX
  //TODO: Add Linux headers
  #include <sys/types.h>          /* See NOTES */
  #include <sys/socket.h>



  typedef int socket_t;
#else
  #error "Sockets are not supported on this platform"
#endif






#endif // CSC_SOCKET_PRIVATE_HEADER Included
