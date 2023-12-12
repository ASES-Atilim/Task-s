#include<stdio.h>

double function(double a,double b,double c){
	return 4*a*c/(a+b);
}
//fonksiyon ismi anlamlı ve fonksiyonun amacına hitab etmeli

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
	//böyle bir while'a neden ihtiyaç duyduğunu açıklamanı istiyorum
	//

	printf("enter c value : ");
	scanf("%lf",&c);

	printf("result = %lf",function(a,b,c));

	//fonksyionu printf içerisinde çağırmak ne kadar kolay gelse de değişken oluşturup o değişkeni kullanmak daha mantıklı
	//örnek
	//result = function(a,b,c);
	//printf("result = %lf",result);
	return (0);
	
}


//bu kodu normal bir insanın anlayabileceği şekilde açıklayabilir misin?
//