#include <iostream>

using namespace std;


//bütün değişkenler ingilizce olmalı
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

    //hız ve gidilen yol aynı satırda alınmalı çıktıdaki gibi
    //ekstra uğraş istenmiyor çıktıyı birebir kopyala

    toplam_süre += static_cast<double>(gidilen_yol) / hız; //static_cast? gerek yok düzeltilmeli
    total_yol -= gidilen_yol;

  } while (total_yol > 0);

  ortalama_hız = 120.0 / toplam_süre;
  cout << "Ortalama hızın: " << ortalama_hız << " km/sa" << endl;

  return 0;
}

  //bu koddaki kurduğun mantığı aşağıda hiç yazılım bilmeyen bir insana anlatır gibi anlat
  //
  //