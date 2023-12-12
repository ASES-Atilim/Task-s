#include<stdio.h>

//fonksiyon isimleri anlamsız
double function_1(double a,double b,double c){
	return (4.0 * (a * c)) / (a + b);
	//4.0?
}

void function_2(double a,double b,double c,double*value){
	 *value =(4.0 * (a * c)) / (a + b);
	//4.0?
}
//matematiksel işlemin sonucu yanlış 4.0 ne anlamadım

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
	//üstteki son iki satırda büyük bir mantık hatası var bunu düzeltmeni istiyorum
	//soruyu anlamamışsın bence
	printf("value: %.lf",value);
	return 0;
	//kodun bütün satırları bitişik ve düzensiz gözüküyor bu kadar bitişik kod yapısı anlamayı zorlaştırır
}

//bu kodu çalışır hale getir ve söylediğim değişikliklerle tekrar yolla
//kodun çalışır hale gelince bütün kodu normal bir insanın anlayacağı şekilde aşağıda açıkla
//