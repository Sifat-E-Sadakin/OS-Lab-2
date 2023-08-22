#include<stdio.h>

int main(){
	int as;
	int v;
	printf("Enter array size: ");
	scanf("%d", &as);
	
	int array[as];
	int rev[as];
	
	for(int i=0; i<as; i++){
		printf("Enter number: ");
		scanf("%d", &v);
		array[i] = v;
		}
	

	for(int n=0; n<as; n++){
		if (array[n]%2==0){
			printf("[%d] = Even\n", array[n]);
		}
		else{
			printf("[%d] = Odd\n", array[n]);
		}
	}
	return 0;
}
