#include <pthread.h> 
#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h> 

void *threadA(void *p){ 
 for(int i=0; i<10; i++){ 
 printf("Thread ID %ld: i=%d\n", pthread_self(), i); 
 usleep(1000);
 
 } 
} 

int main(int argc,char *argv[]){ 
int a = atoi(argv[1]);
pthread_t thrID[a]; 
int i;
for(i=0;i<a;i++){
    pthread_create(&thrID[i], NULL, threadA, NULL); 

 }
for(i=0;i<a;i++){
     pthread_join(thrID[i], NULL);
 }
 
}