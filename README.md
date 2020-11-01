* program and process
* compile and link
* build process
* Definition and vs declration of function
* make / Makeile
* git
    * git init, git status, git log, git add, git comit

Section 
    * .text
    * .data
    * .bass
    * .heap 
* Modular programimg
    *Libraries
        * standrd libraries (linux - libc.a and lic.so)
        *user libraries /3rd party library
    *two type
        *static => *.a
        *Dynamic (hared object) => *.so
* static livrary
    * ar x (exrtact)
    * ar crv libname.a 1.o 2.o......n.o =>(*.o)
*Dynamic Library
    *gcc -o libname.so -shared -fPIC 
    *lib function diference definition embedded in binary
    *single copy of library function loaded in the memory 
    *less memory               

*PID, PPId, UID
* getpid() ge: ia()
*man pages

* ltrace
* strace
* program using system call -> write a string inside a file

*Library
    *user space
    *May be buffered I/o
    formated I/o
    *System
        *Kernel space
        *not buffered I/o
        *no formatted I/o
    * open - o CREAT
    * int - file descriptor
    * fd - represents an open file in the kernel
    * 0 - standard input
    * 1 - standard output
    * 2 - standard error

*process stats:
    *Creat
    *Ready (multiple processes)
    *running (one process -> uniprocess)
    *waiting (multiple process)
    *Destroy



    *scheduling  algorithm-> chose  the next process that has to excute 
    *context switch -> contex saving (current process)+ scheduling (choose the new process)+ contex restoring (new process)
    *context => sp,  pc, gpr, flags -> hardware rigister -> uniprocess( 1 copy)


    *Blocking -> process may go into a waiting state 
    *non blocking call never block -> immediately return back after doing functionality

*inter process communication
 p1 -> p2

 *pipes 
    *IPC
    *unidirection 
    *Related process (parent and child)
    *pipe -> two intergers (file descriptors)
    0 -> reading
    1 -> writing
    * childwil inherit file descriptors
    

  *FIFOs
    *IPC
    *unidirectional
    *unrelated process
    *fifo aka name pipes 


  *write a program which does the fallowing 
    *p1: get two intger input s
    p1: send it to p2
    *p2 : recv two intgers
    p2: addtwo intgers
    p2:send to p1

   *p1: printf the result


   *Batch
   *multi programing
   *multi tasking
   *multi processing 
   *multi threading
   multi user


   *Design
    *monolithic approach
     * eg. Linux
     *single address space
   *micro kernel approach
   *eg .QNX, Minix
   *multi address space
        *system process -> priviledge eg. networking stack , Do
         *user process -> non -priv -> mp3 player , editor
    *message queues used for information aharing




    *Thread 
      *POSIX
      *library pthread
      *thread_t
      *pthread_attr_t ->Attributes
        *joinable - detacheable
        *Schedyling
        *priority

     *each thread has its own stack
     *thread share -> .text, .data, .bass, heap

 *Race condition
  *shared data
  *thread accessing shared data -> race condition    

*Mutual Exclusion (pthread_mutex_t)
  *Mutex
    *Futex
    *Recursive
    *Adaptive Mutex
    Error checking Mutex (Assigment)


*Semphore (sem_t)
  *Binary
    **mutual Exclusion -> initial value -> 1
    * Signalling -> initialvalue -> 0/1
  *Counting      
  * initial ->N





Case 1:
*creat - webinterface - repo
*Add address of the repo
*git add
*git commit
*git push


Case 2:
*Exising repo - webinterface
*git  clone GITRepoURL
*Copy your source code to thie directory
*git add
* git commit
  *git push

Case 3:
git pull
**git  add 
 **git  commit
 *git push




















































