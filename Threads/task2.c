#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


void *func(int *arg);

int main(){
	pthread_t t[5];
	int fg=1;
	int f=1;
	int c=0;
	int array[2];
	while(fg){
		if (c<5){
			array[0]=c; //thread number
			array[1]=f; //integer number
			
			pthread_create(&t[c],NULL,func,(void* )array);
			pthread_join(t[c],NULL);
		}
		else{
			fg=0;
			break;
		}
		f=f+5;
		c++;
		
	}
	
	return 0;
}

void *func(int *arg){
	int *index=arg;
	int n=index[0]; // thread number
	int j=index[1]; //int number
	
	for (int i=j; i<j+5; i++){
		printf("Thread %d prints %d\n", n, i);
	}
}
