#include<stdio.h>

double function(double a,double b,double c){
	return 4*a*c/(a+b);
}

int main (void){
	
	double a,b,c;
	
	printf("enter a value : ");
	scanf("%lf",&a);
	
	printf("enter b value : ");
	scanf("%lf",&b);
	
	while (a+b == 0){
		printf("enter a value : ");
		scanf("%lf",&a);
	
		printf("enter b value : ");
		scanf("%lf",&b);
	}
	
	
	printf("enter c value : ");
	scanf("%lf",&c);

	printf("result = %lf",function(a,b,c));
	
	
	return (0);
	
}
