#include <stdio.h>

void getValue(float *ptra,float *ptrb,float *ptrc){			//Input function
	
	printf("Please enter value of 'a': \n");
	scanf("%f",ptra);
	
	printf("Please enter value of 'b': \n");
	scanf("%f",ptrb);
	
	printf("Please enter value of 'c': \n");
	scanf("%f",ptrc);
}

float calculator(float a,float b,float c){				//Calculate function
	
	float tempResult,result;
	
	tempResult= (2*c / (a+b));
	
	result= 2*a*(tempResult);
	return result;
}
//ekstra tempResult değişkenine neden gerek duydun? (yanlış olduğu için değil açıklamanı istiyorum)
/*Kodu ilk yazdığımda sonucu bastıramıyordum, işlemlerden dolayı mı yoksa return bölümü mü yanlış olduğunu anlayamamıştım 
  düzeltmeyi denerken de en son bu şekilde çalıştığını görünce değiştirmedim.*/

int main(){
	
	float a,b,c, result;
	getValue(&a,&b,&c);
	result=calculator(a,b,c);
	
	printf("Result of the calculation is: %.3f \n",result);
	//.3f ne işe yarıyor?
	//Sonucu bastırırken .'dan sonra 3 basamak olması için yazdım.

	//bu satırda bir şeyler eksik
	return 0;
}

// değerleri alırken neden böyle bir yol izledin?
// Alternatif bir yol aklıma gelmedi ben de en basit ve bildiğim şekilde aldım değerleri.
// bu kodu normal bir insanın anlayacağı şekilde açıklayabilir misin?
/* getValue Fonksiyonu ile girdi alan, calculator Fonksiyonu ile verilen formüle göre hesap yapan,
main Fonksiyonunda da her iki fonksiyonu kullanıp kullanıcıdan değer alan ve hesaplama yapıp hesaplama sonucunu ekrana bastıran bir kod. */
