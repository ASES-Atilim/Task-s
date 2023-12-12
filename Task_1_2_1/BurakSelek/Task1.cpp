#include <stdio.h>

void getValue(float *ptra,float *ptrb,float *ptrc){			//Input function
	
	printf("Please enter value of 'a': \n");
	scanf("%f",ptra);
	
	printf("Please enter value of 'b': \n");
	scanf("%f",ptrb);
	
	printf("Please enter value of 'c': \n");
	scanf("%f",ptrc);
}

float calculator(float a,float b,float c){			//Calculate function
	
	float tempResult,result;
	
	tempResult= (2*c / (a+b));
	
	result= 2*a*(tempResult);
	return result;
}
//ekstra tempResult değişkenine neden gerek duydun? (yanlış olduğu için değil açıklamanı istiyorum)
//

int main(){
	
	float a,b,c, result;
	getValue(&a,&b,&c);
	result=calculator(a,b,c);
	
	
	printf("Result of the calculation is: %.3f \n",result);
	//.3f ne işe yarıyor?
	//

	//bu satırda bir şeyler eksik
}

// değerleri alırken neden böyle bir yol izledin?
// bu kodu normal bir insanın anlayacağı şekilde açıklayabilir misin?