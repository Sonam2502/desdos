#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
 
 int count = 0;

void* thread(void *arg)
{
    count++;
    printf("Thread\n");
}
int main(int argc, int argv[])
{
    
    pthread_t tid;
    count++;
    printf("Before thread creation\n"); 
    pthread_create(&tid,NULL,thread, NULL);
    

    return 0;
}