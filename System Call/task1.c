#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// System call library
#include<unistd.h>
#include<sys/types.h>
// file operation library
#include<fcntl.h>




int main(){
	int fd;
	int n=1;
	char LN[100];
	int size;
	fd=open("a.txt", O_WRONLY | O_CREAT, 0644); //0664 u=rw, g=r, o=r
	
	if (fd != -1){
		while (n==1){
			scanf("%[^\n]%*c", LN); // [^\n] read string till it reaches EOF(\n), %*c means read next character and discarded
			size = strlen(LN);
			if (strcmp(LN, "-1")==0){
				n=0;
				break;
				}
			write(fd, LN, size);
			write(fd, "\n", 1);
		}	
	}
	close(fd);
	return 0;
}

