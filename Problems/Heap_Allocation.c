#include <stdio.h>
#include <pthread.h>
#include <stddef.h>

gcc Problems/Heap_Allocation.c -o Heap_Allocation -pthread && ./Heap_AllocationI am the childvoid *helper (void *arg) {
char *message = (char *) arg;
strcpy (message, "I am the child") ;
return NULL;

int main () {
char *message = malloc(100);
strcpy (message, "I am the parent") ;
pthread_t thread;
pthread_create (&thread, NULL, &helper, message) ;
pthread_join (thread, NULL) ;
printf("ts\n", message);
return 0;

}