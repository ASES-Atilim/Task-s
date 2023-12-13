#include <stdio.h>

int main ()
{
int a,b,c;
float function;
printf("Enter value a: ");
scanf("%d",&a);

printf("Enter value b: ");
scanf("%d",&b);

printf("Enter value c: ");
scanf("%d",&c);

function= (((2*a)*(a+b))+(2*c))/(a+b);


printf ("Your result is %.2f",function);



return 0;
}
