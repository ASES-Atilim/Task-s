#include <iostream>

using namespace std;

int main() {

  int total_yol = 120;
  int gidilen_yol;
  int hız;

  double toplam_süre = 0;
  double ortalama_hız;

  do {
    cout << "Kaç km yol gittin? ";
    cin >> gidilen_yol;

    if (gidilen_yol > total_yol) {
      gidilen_yol = total_yol;
    }

    cout << "O yoldaki hıznz kaç km/sa? ";
    cin >> hız;

    toplam_süre += static_cast<double>(gidilen_yol) / hız;
    total_yol -= gidilen_yol;
  } while (total_yol > 0);

  ortalama_hız = 120.0 / toplam_süre;
  cout << "Ortalama hızın: " << ortalama_hız << " km/sa" << endl;

  return 0;
}