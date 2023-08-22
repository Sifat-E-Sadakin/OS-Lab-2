#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main(){
	pid_t id;
	
	char *a[]={"./sort",NULL};
	char *b[]={"./oddeven",NULL};
	
	id = fork();
	if(id<0){
		printf("fork failed");
	}
	else if(id==0){
		execv(a[0],a);
	}
	else{
		wait(NULL);
		execv(b[0],b);
	}

	return 0;
}
