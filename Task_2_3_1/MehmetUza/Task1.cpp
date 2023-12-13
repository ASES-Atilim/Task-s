#include <iostream>
#include <cmath>
#include <iomanip>

const int road_length = 120;
//neden constant? aşağı satırda açıkla
//verilen problemde gidilecek toplam yol 120km sabit olarak verildiği için.
float total_time = 0, avg_speed = 0;


//namepace kullanımı istiyorum bütün fonksiyonda
void calculate_time() {
	using namespace std; //belirtildiği üzere namespace kullandım
	int segment_length = 0, segment_speed = 0, total_distance = 0;
	float segment_time;

	std::cout << "Enter data: " << std::endl;

	while (total_distance < road_length) {
		cin >> segment_length >> segment_speed;
		if (segment_speed == 0) {
			cout << "Speed can't be zero!" << endl;
			continue;
		}
		total_distance += segment_length;
		if (total_distance <= road_length)
			segment_time = float(segment_length) / float(segment_speed);
		else
			segment_time = float((segment_length - (total_distance - road_length))) / float(segment_speed);
		total_time += segment_time;

		//while içerisindeki mantığı açıkla
		//kullanıcının girdiği yol segmentleri toplamı, yol uzunluğundan küçük olduğu halde (hala girdi lazım olduğu halde)
		//segment uzunluğu ve segmenti gittiği hızı girdi olarak alıyor
		//ilk if ile segment hızının sıfır olup olmadığını kontrol ediyor
		//kullanıcının şimdiye kadar girdiği segmentler toplamı olan total_distance'ı güncelliyor
		//eğer girilen segmentler toplamı yol uzunluğundan küçük veya eşit ise segment süresini direkt hesaplıyor
		//eğer büyük ise son girilen girdi ile segmentler toplamı yol uzunluğunu aşmış demektir, bu durumda yol uzunluğunu aşan kısmı hesaba dahil etmiyor
		//segment süresini düzenlenen segment uzunluğuna göre hesaplıyor
		//son olarak toplam süreye segment süresini ekliyoruz
	}
	avg_speed = road_length / total_time; //print fonksiyonunda hesaplamamak için hesaplama kısmını buraya taşıdım.
}

void print_result() {
	using namespace std; //belirtildiği üzere namespace kullandım
	cout << road_length << " km / " << fixed << setprecision(2) << total_time << " h = " //fazla uzun satırı ikiye böldüm fakat doğru şekilde mi yaptım emin deiğilim.
		 << avg_speed << " km/h" << endl;

	//namespace kullanmadığın için kod karmaşık gözüküyor bu kodu basit hale getir ve her şeyi tek satıra toplama
	//setprecision neden kullanıldı? açıkla
	//daha derli toplu gözükmesi için noktadan sonra 2 basamağı çıktı olarak veriyor.
	//print yaptığımız kısımda sadece print olmasını isteriz genelde matematiksel hesaplamaları calculate_time fonksiyonu içerisinde yapıp sonra print et
}

int main() {
	calculate_time();
	print_result();

	return 0;
}


//bütün kodun yapısını bir insanın anlayabileceği şekilde aşağıda anlatmanı istiyorum
//temel olarak iki fonksiyonumuz var. birinci fonksiyonumuz olan calculate_time fonksiyonu problemde belirtildiği üzere toplam gidilen yol segmentleri
//120 km'ye ulaşana kadar girdi istiyor. bunu içindeki önerme yanlış olana kadar çalışan while döngüsü ile kontrol ediyoruz. segment uzunluğu ve segment hızı
//bilgilerini cin fonksiyonu ile girdi olarak alıyoruz. eğer segment hızı sıfır girildiyse hatanın sebebini bastırıp girdi istemeye devam ediyoruz.
//devamında gidilen toplam yol değişkenini(total_distance) elimizdeki girdiyle güncelliyoruz. eğer girilmiş olan toplam yol değeri yol uzunluğundan küçükse
//son girilen yol segmenti için zaman hesaplıyoruz, değilse yol uzunluğunu aşan kısmı yok sayıyoruz ve son girilen yol segmenti için zaman hesaplıyoruz.
//döngünün son adımı olarak toplam zamanı hesapladığımız segment zamanı ile güncelliyoruz.
//döngü bittiğinde yani girilen toplam yol 120km'yi aştığında, ortalama hız (avg_speed) değişkenini hesaplıyoruz.
//ikinci fonksiyonumuz olan print_result fonksiyonu ise bu hesapladığımız ortalama hız değerini belirli bir formatta çıktı olarak gösteriyor.
//bu fonksiyonları kullanmak için ana programımızda yani main kısmında çağırmamız gerekiyor. fonksiyonlarımızı çağırıyoruz ve programı bitiriyoruz.

//açıkladıktan sonra bu kodu dediğim şeylere göre düzenleyip tekrar yollamanı istiyorum fakat bu sefer ai'dan uzak durarak
//öncesinde kodu tamamen kendim yazmıştım. bazı değişkenleri float yerine int olarak tanımlamak gibi basit bir hata yaptığım için çıktı 0 oluyordu.
//mantık hatası olduğundan compiler hata kodu vermediği için uzun süre neyin yanlış olduğunu arayıp bulamadım. bu hatayı tespit etmek için ai kullandım.
//sonrasında ise bazı kısımları buna göre değiştirdim. orijinalinde de kodumda sadece bahsettiğim hata vardı kalanı çalışıyordu.
//kendi işimi ai'a yaptırmak, direkt kopyala yapıştır yapmak gibi bir niyetim yok. kendimi geliştirmek için bu ekibe katıldım. 
//kusura bakmayın daha dikkatli olacağım.