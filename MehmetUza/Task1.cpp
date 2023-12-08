#include <iostream>
#include <cmath>
#include <iomanip>

const int road_length = 120;
float total_time = 0;

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
	}
}

void print_result() {
	std::cout << road_length << " km / " << std::fixed << std::setprecision(2) << total_time << " h = "  << (road_length / total_time) << " km/h" << std::endl;
}

int main() {
	calculate_time();
	print_result();

	return 0;
} 
