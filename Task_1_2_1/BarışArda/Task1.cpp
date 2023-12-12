#include <iostream>
using namespace std;

//kodun düzensiz gözüküyor
//boşluklara dikkat et

double calculate(double *ptra,double *ptrb,double *ptrc){
 double compute;
    compute = ((2 * *ptra)*(*ptra + *ptrb)+(2* *ptrc))/(*ptra+ *ptrb);		
	return compute;
	}
double calc(double &RefA,double &RefB,double &RefC)	
	{
		return ((2 *RefA)*(RefA + RefB)+(2* RefC))/(RefA + RefB);
	}
//değişkenlerin ilk harflerini küçük kullanmaya çalış
//fonksiyon isimleri anlamsız okuyan kişinin bu fonksiyonun nasıl çalıştığını
//ya da ne için çalıştığını anlaması gerekiyor

int main(){
	double num1;
	double num2;
	double num3;

	//değişkenleri tek satırda tanımlayabilirsin

	cout<<"Enter the values of a,b,c:"<<endl;
	cin>>num1>>num2>>num3;
	double result = calculate(&num1,&num2,&num3);
	//result'u da yukarıda tek satır içerisinde tanımlayabilirsin
	cout<<"The result is:"<<result<<endl;
	
	double n1;
	double n2;
	double n3;
	cout<<"Enter the values of a,b,c"<<endl;
	cin>>n1>>n2>>n3;
	cout<<"The result is (with reference):"<<""<<calc(n1,n2,n3)<<endl;
	
	
	//6 tane değişkene ihtiyacın yok
	//cout içerisinde matematiksel hesaplama yerine yukarıda yaptığın gibi yapmalısın
	return 0;
}


//bu kodu normal bir insanın açıklayacağı şekilde aşağıda açıkla
//