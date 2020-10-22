#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int count = 0;

int main( int argc, char const *argv[])
{
    pid_t id;

    printf("Before fork\n");
    id = fork();

    if(0 == id)
    {
        
        printf("count in child %d",count);

    }else
    {
        count++;
        printf("count in child %d\n", count);
    }

    return 0;
}