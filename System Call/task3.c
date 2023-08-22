#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main(){
	int count;
	
	pid_t a;
	pid_t b;
	pid_t c;
	
	int p = getpid(); // parent process ID
	
	a=fork();
	b=fork();
	c=fork();
	
	int c1 = getpid(); // child process ID
	
	if (c1%2 != 0){
		fork(); // create child process
		count++; // count number of process
	}
	
	int p1=getpid(); // parent process ID
	
	if (p1==p){ // "p1" and "p" matched with the parent process ID
		printf("Total number of process: %d\n", count);
	}
	return 0;
	
}

