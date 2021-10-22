#include <stdio.h>
#include <pthread.h>
void *func1 (void *arg){
int x = *((int*)arg);
printf("The integer passed in is %d\n", x); printf("Thread: Process id is %d\n", (int)getpid()); pthread_exit(NULL);
}
int main() {
   pthread_t thread_id;
int x = 1;
printf("Main process: Process id is %d\n", (int)getpid());
pthread_create(&thread_id, NULL, func1,(void*)&x); pthread_join(thread_id, NULL);
return 0;
}