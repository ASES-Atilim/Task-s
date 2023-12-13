#include<stdio.h>

int main()
{
	int a,b,c;
	float function;
	
	printf("Enter the a value:");
	scanf("%d",&a);
	
	printf("Enter the b value:");
	scanf("%d",&b);
	
	printf("Enter the c value:");
	scanf("%d",&c);
	
	
	function = (((2*a)*(a+b))+(2*c))/(a+b);
	
	
	printf("The result is %.2f.",function);
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
}
