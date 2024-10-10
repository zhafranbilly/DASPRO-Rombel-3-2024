/* Soal
Soal
Sama seperti soal sebelumnya, Pak Dengklek ingin menghitung luas dan keliling dari kandang bebeknya yang berukuran panjang 
364 cm dan lebar 79 cm. Lengkapilah program di sebelah kanan, dengan memanfaatkan variabel panjang dan lebar.
*/

#include <iostream>
using namespace std;

int main() {
    int panjang = 364;
    int lebar = 79;

    // cetak luas kandang
    cout << panjang * lebar << endl;

    // cetak keliling kandang
    cout << (panjang + lebar) * 2  << endl;
}
