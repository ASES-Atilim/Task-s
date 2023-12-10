#include<stdio.h>

double function_1(double a,double b,double c){
	return (4.0 * (a * c)) / (a + b);
}
void function_2(double a,double b,double c,double*value){
	 *value =(4.0 * (a * c)) / (a + b);
}



int main(){
	double a,b,c;
	printf("Enter a: \n");
	scanf("%lf",&a);
	printf("Enter b : \n");
	scanf("%lf",&b);
	printf("Enter c : \n");
	scanf("%lf",&c);
	double value= function_1(a,b,c);
	function_2(a,b,c,&value);
	printf("value: %.lf",value);
	return 0;
	
}
