
#include <stdio.h>
#include <math.h>
void func1(float *a,float *b,float *c,float *result){
    *result= ((2 * *a))*(2* *c)/(*a+ *b);
    
}
void func2(float a,float b,float c,float *result ){
    *result= ((2 * a))*(2* c)/(a+ b);
    
   
}
int main(){
    float a,b,c,result;
    printf("Enter tha values of a b and c:");
    scanf("%f%f%f",&a,&b,&c);
    func2(a,b,c,&result);
    printf("The result is %.2f\n",result);
    
}
