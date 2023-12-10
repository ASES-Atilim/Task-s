#include <stdio.h>
#include <math.h>

double calcPointer(double a, double b, double c) {
   
    return (2 * (a)) * (2 * (c) / ((a) + (b)));
   
}

void calcReference(double *A, double *B, double *C,double calculation) {  
       printf(" The Result is : %lf\n",calculation );
    
}

int main() {

    double a,b,c;
    
    double A,B,C;
    
    
     
    printf("Please enter a value for a:");
    scanf("%lf",&a);
    
    printf("Please enter a value for b: ");
    scanf("%lf",&b);
    
    printf("Please enter a value for c: ");
    scanf("%lf",&c);
    
    double calculation=calcPointer(a,b,c);
    calcReference(&A,&B,&C,calculation);
    
    return 0;
}















