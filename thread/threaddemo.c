#include<stdio.h>
#include<pthread.h>
#include<unistd.h>


void* thread(void *arg)
{
    printf("Thread\n");
}
int main(int argc, int argv[])
{
    
    pthread_t tid;
    peintf("Before thread creation\n"); 
    pthread_create(&tid,NULL,thread, NULL);
    printf("After thread creation\n");
    sleep(1);
    printf("After sleep creation\n");
    return 0;
}