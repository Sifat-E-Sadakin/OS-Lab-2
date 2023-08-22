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
	int k=0;
	
	for(int f=1; f<as; f++){
		for (int g=1; g<as; g++){
			if (array[g-1]<array[f]){
			int temp = array[f];
			array[f] = array[g-1];
			array[g-1] = temp;
			}
		}
	}
	for(int n=0; n<as; n++){
		printf("%d ", array[n]);
	}
	printf("\n");
	
	return 0;
}
