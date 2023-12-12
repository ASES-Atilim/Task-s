
#include <stdio.h>
#include <math.h>

//math ? neden kullanıldı

void func1(float *a,float *b,float *c,float *result){
    *result= ((2 * *a))*(2* *c)/(*a+ *b);
}
void func2(float a,float b,float c,float *result ){
    *result= ((2 * a))*(2* c)/(a+ b);
}
//fonksiyon isimleri anlamsız düzgün fonksiyon isimleri kullan
//pointer kullanımlarını tekrar konrol et

int main(){
    float a,b,c,result;
    printf("Enter tha values of a b and c:");
    scanf("%f%f%f",&a,&b,&c);
    func2(a,b,c,&result);
    printf("The result is %.2f\n",result);
    //.2f ne işe yarıyor açıkla?
    //
    //iki tane fonksiyon yazıp sadece birini çağırmışsın
    //kodun mantığını tekrar kontrol et


    //buralarda eksik bir kod satırı var

}


//bu kodun mantığını normal bir insanın anlayabileceği şekilde açıkla
//neden float olarak kullandığını da açıklamanı istiyorum
//