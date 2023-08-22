#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


void *func(int *arg);

int main(){
	pthread_t t[5];
	
	for(int i=0;i<5;i++){ // serial execution
		pthread_create(&t[i],NULL,func,NULL);
		printf("thread-%d running\n",(i+1));
		pthread_join(t[i],NULL);
		printf("thread-%d closed\n",(i+1));
	}
	
	return 0;
}
void *func(int *arg){
	// func block of code has been executed;
}
