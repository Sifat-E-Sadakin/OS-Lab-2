#include<stdio.h>


int sum(int p, int v, int w);

struct shop {
	int paratha;
	int p_price;
	int vegetable;
	int v_price;
	int water;
	int w_price;
	int people;
};


int main(){

	struct shop s;
	
	printf("Quantity Of Paratha: ");
	scanf("%d", &s.paratha);
	printf("Unit Price: ");
	scanf("%d", &s.p_price);
	int p_cal = s.paratha * s.p_price;
	
	printf("Quantity Of Vegetable: ");
	scanf("%d", &s.vegetable);
	printf("Unit Price: ");
	scanf("%d", &s.v_price);
	int v_cal = s.vegetable * s.v_price;
	
	printf("Quantity Of Mineral Water: ");
	scanf("%d", &s.water);
	printf("Unit Price: ");
	scanf("%d", &s.w_price);
	int w_cal = s.water * s.w_price;
	
	printf("Number Of People: ");
	scanf("%d", &s.people);
	
	
	int total = sum(p_cal, v_cal, w_cal);
	
	float result = total/s.people;
	
	printf("Individual people will pay: %f tk\n", result);
	
	return 0;
	
}

int sum(int p, int v, int w){
	int total = p+v+w;
	return total;

}









