
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>



int main(){
	pid_t id;
	pid_t id2;
	id=fork();
	
	if (id<0){
		printf("fork failed\n");
	}
	else if (id==0){
		printf("Child process ID: %d\n", getpid());
		
		id2=fork();
		if (id2<0){
			printf("fork failed\n");
		}
	
		else if (id2==0){
			wait(NULL);
			printf("Grand Child process ID: %d\n", getpid());
		}
		else{
			id2=fork();
			if (id2<0){
				printf("fork failed\n");
			}
		
			else if (id2==0){
				printf("Grand Child process ID: %d\n", getpid());
			}
			else {
				id2=fork();
				if (id2<0){
					printf("fork failed\n");
				}
			
				else if (id2==0){
					printf("Grand Child process ID: %d\n", getpid());
				}
			}	
		}
	}
	else{
		printf("Parent process ID: 0\n");
	}
	return 0;
}

