#include <iostream>
#include <cmath>
#include <iomanip>

const int road_length = 120;
//neden constant? aşağı satırda açıkla
//
float total_time = 0;


//namepace kullanımı istiyorum bütün fonksiyonda
void calculate_time() {
	int segment_length = 0, segment_speed = 0, total_distance = 0;
	float segment_time;
	
	std::cout << "Enter data: " << std::endl;

	while (total_distance < road_length) {
		std::cin >> segment_length >> segment_speed;
		if (segment_speed == 0) {
			std::cout << "Speed can't be zero!" << std::endl;
			continue;
		}
		total_distance += segment_length;
		if (total_distance <= road_length)
			segment_time = float(segment_length) / float(segment_speed);
		else
			segment_time = float((segment_length - (total_distance - road_length))) / float(segment_speed);
		total_time += segment_time;

		//while içerisindeki mantığı açıkla
		//
	}
}

void print_result() {
	std::cout << road_length << " km / " << std::fixed << std::setprecision(2) << total_time << " h = "  << (road_length / total_time) << " km/h" << std::endl;

	//namespace kullanmadığın için kod karmaşık gözüküyor bu kodu basit hale getir ve her şeyi tek satıra toplama
	//setprecision neden kullanıldı? açıkla
	//
	//print yaptığımız kısımda sadece print olmasını isteriz genelde matematiksel hesaplamaları calculate_time fonksiyonu içerisinde yapıp sonra print et
}

int main() {
	calculate_time();
	print_result();

	return 0;
} 


//bütün kodun yapısını bir insanın anlayabileceği şekilde aşağıda anlatmanı istiyorum
//


//açıkladıktan sonra bu kodu dediğim şeylere göre düzenleyip tekrar yollamanı istiyorum fakat bu sefer ai'dan uzak durarak