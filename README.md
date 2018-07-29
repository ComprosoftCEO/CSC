# C System Calls
Cross-Platform Operating System Calls (for C)

<br>

## Target Platforms
* __Win32__ - 32-bit Windows
* __Win64__ - 64-bit Windows
* __Linux32__ - 32-bit Linux
* __Linux64__ - 64-bit Linux

<br>

## Modules:
* __Shm__ _(CSC_Shm.h)_ - Shared memory (for Windows, you need to install the shared memory service)
* __Socket__ _(CSC_Socket.h)_ - Socket calls
* __IPC Buffer__ _(CSC_IPCBuf.h)_ - Use a shared memory buffer to pass data between two processes
* __Lib__ _(CSC_Lib.h)_ - Dynamically load and unload shared libraries
* __Spinlock__ _(CSC_SpinLock.h)_ - Atomic spinlocks for multithreaded applications
* __Threads__ _(CSC_Threads.h)_ - Create new threads in an application
* __[TLS](#thread-local-storage)__ _(CSC_TLS.h)_ - Thread-Local Storage

<br>

## Thread-Local Storage

Create a new TLS object:
```c
#include <CSC_TLS.h>
pCSC_TLS_t tls = CSC_New_TLS(); /* Returns NULL on failure */
```
<br>

Store data in TLS object:
```c
CSC_Set_TLS(tls,(void*) data);  /* Returns false on failure */
```
<br>

Retrieve data from the TLS object:
```c
void* data = CSC_Get_TLS(tls);  /* Returns NULL on failure */
```
<br>

Release the TLS object from memory:
```c
CSC_Free_TLS(tls);  /* Returns false on failure */
```
