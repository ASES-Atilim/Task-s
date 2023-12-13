#include<stdio.h>

double function(double a,double b,double c){
	return 4*a*c/(a+b);
}
//fonksiyon ismi anlamlı ve fonksiyonun amacına hitab etmeli
//haklısın buna dikkat edicem.
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
	//burada paydada 0 olduguğunda tanımsız olacağı için bu loopu kullandım böylece 0 olduğunda tekrar değer istiyor tabi bir error mesajı da yayınlayabilirmişim şuan fark ettim.

	printf("enter c value : ");
	scanf("%lf",&c);

	printf("result = %lf",function(a,b,c));

	//fonksyionu printf içerisinde çağırmak ne kadar kolay gelse de değişken oluşturup o değişkeni kullanmak daha mantıklı
	//örnek
	//result = function(a,b,c);
	//printf("result = %lf",result);
	//evet burda biraz kolaya kaçmışım daha sonra result'ı kullanıcak olsam patlıyorum :)
	return (0);
	
}


//bu kodu normal bir insanın anlayabileceği şekilde açıklayabilir misin?
//en başta kullanıcağım döngüleri ve kodları içeren kütüphaneyi çağırdım sonrasında da benden istenen fonksiyonu oluşturdum ardından gereken girdileri alıp işleme soktum, paydada 0 olduğu taktirde fonksiyonum tanımsız olacağı için bir döngü oluşturdum, en sonda bunun sonucunu verdim.
//emeğin için teşekkürler Berk. Ben son günü pazar günü sanıyordum bir dahakine daha dikkatli olurum kabul ettiğin için de teşekkür ederim.
