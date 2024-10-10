/*Pak Dengklek memiliki kandang-kandang persegi, dengan panjang sisinya adalah setiap bilangan bulat antara 121 sampai dengan 125 (inklusif). Ia ingin mengetahui luas setiap kandangnya. Dengan perulangan while, kodenya adalah:

int sisi = 121;
while (sisi <= 125) {
    cout << sisi * sisi << endl;
    sisi += 1;
}
Untuk pembelajaran kita, coba ubahlah perulangan di atas menjadi perulangan for!*/
#include <iostream>
using namespace std;

int main() {
    for (int sisi = 121; sisi <= 125; sisi++) {
        cout << sisi * sisi << endl;
    }
}
