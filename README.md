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
* __Shm__ _(csc_shm.h)_ - Shared memory (for Windows, you need to install the shared memory service)
* __Socket__ _(csc_socket.h)_ - Socket calls
* __IPC Buffer__ _(csc_ipcbuf.h)_ - Use a shared memory buffer to pass data between two processes
* __Lib__ _(csc_lib.h)_ - Dynamically load and unload shared libraries
* __Spinlock__ _(csc_spinlock.h)_ - Atomic spinlocks for multithreaded applications
* __Threads__ _(csc_threads.h)_ - Create new threads in an application
* __TLS__ _(csc_tls.h)_ - Thread-Local Storage