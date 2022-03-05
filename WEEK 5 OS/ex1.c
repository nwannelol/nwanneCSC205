#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *myFirstThread()
{
    sleep(1);
    printf("I am the Thread\n");
    return NULL;
}

int main()
{
    pthread_t thread_id;
    printf("Before Thread Execution\n");
    pthread_create(&thread_id, NULL, myFirstThread, NULL);
    pthread_join(thread_id, NULL);
    printf("After Thread Execution\n");
    exit(0);
}