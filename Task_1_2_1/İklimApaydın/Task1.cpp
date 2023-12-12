#include <stdio.h>
#include <math.h>
//math.h kütüphanesini nerede kullandın?

double calcPointer(double a, double b, double c) {
   
    return (2 * (a)) * (2 * (c) / ((a) + (b)));
   //fazla parantez kullanımı var değişkenleri tek tek paranteze almana gerek yok
}

void calcReference(double *A, double *B, double *C,double calculation) {  
       printf(" The Result is : %lf\n",calculation );
    
}

int main() {

    double a,b,c;
    
    double A,B,C;
    //6 tane değişkene ihtiyacın yok
    
    
     
    printf("Please enter a value for a:");
    scanf("%lf",&a);
    
    printf("Please enter a value for b: ");
    scanf("%lf",&b);
    
    printf("Please enter a value for c: ");
    scanf("%lf",&c);
    
    double calculation=calcPointer(a,b,c);
    calcReference(&A,&B,&C,calculation);
    //bu iki satırda büyük bir mantık hatası var
    //soruyu doğru anlamamışsın bence
    //calcReference içerisinde abc değerlerini kullanmayacaksan neden oraya yolladın?

    return 0;
}

//bu kodun çalıştığından emin ol düzenle ve tekrar yolla
//çalıştırdıktan sonra kodunu bana normal bir insanın anlayacağı şekilde aşağıda anlat
//













