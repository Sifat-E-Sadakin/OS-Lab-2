#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include<string.h>


void *func(char *s);
void *thread_return;

int main(){
	pthread_t t1;
	pthread_t t2;
	pthread_t t3;
	
	
	char st1[100];
	char st2[100];
	char st3[100];
		
	printf("Enter three name: \n");
	scanf("%s",st1);
	scanf("%s",st2);
	scanf("%s",st3);
	
	pthread_create(&t1,NULL,(void*)func,st1);
	pthread_join(t1,&thread_return);
	
	int temp1 = (int*)thread_return;
	
	pthread_create(&t2,NULL,(void*)func,st2);
	pthread_join(t2,&thread_return);
	
	int temp2 = (int*)thread_return;
	
	pthread_create(&t3,NULL,(void*)func,st3);
	pthread_join(t3,&thread_return);
	
	int temp3 = (int*)thread_return;
	
	if ((temp2 ==temp3) && (temp1==temp2) & (temp1==temp3)){
		printf("Youreka\n");
	}
	else if ((temp2 ==temp3) || (temp1==temp2) || (temp1==temp3)){
		printf("Miracle\n");
	}
	else{
		printf("hasta la vista\n");
	}
	
	
	return 0;
}

void *func(char *s){
	int size=strlen(s);
	int add=0;
	for (int i=0; i<size; i++){
		add = add+s[i];
	}
	pthread_exit(add);

}









