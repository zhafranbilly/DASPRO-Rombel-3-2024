// Soal
// Pak Dengklek ingin membuat sebuah kolam berbentuk persegi untuk bebek-bebeknya, dengan ketentuan berikut:

// Luas kolamnya antara 100.000 sampai dengan 200.000 cm persegi.
// Luas kolam (dalam cm persegi) adalah bilangan genap.
// Luas kolam (dalam cm persegi) adalah bilangan kuadrat sempurna.
// Berapakah luas kolam terkecil yang memenuhi seluruh syarat tersebut? Lengkapilah program di sebelah kanan agar mengeluarkan luas yang diminta.

#include <iostream>
using namespace std;

int main() {
    for (int luas = 100000; luas <= 200000; luas++) {
        // Jika luas ini bukan bilangan genap, iterasi ini bisa dihentikan
        // (dilewati), karena luas ini pasti tidak memenuhi syarat.
        if (luas % 2 != 0) {
            continue;
        }

        // Sekarang, kita akan cek apakah luas ini merupakan bilangan kuadrat sempurna.
        bool kuadrat_sempurna = false;

        for (int k = 1; k * k <= luas; k++) {
            // Jika luas adalah tepat k * k,
            // maka luas ini merupakan bilangan kuadrat sempurna.
            if (k * k == luas) {
                kuadrat_sempurna = true;
                break;
            }
        }

        if (kuadrat_sempurna) {
            // Kita telah menemukan luas terkecil yang memenuhi seluruh syarat.

            // Cetak luas ini.
            cout << luas << endl;

            // Kita tidak perlu lagi melanjutkan perulangan.
            break;
        }
    }
}


// Program C++ ini mencari luas terkecil (luas) dalam rentang 100.000 hingga 200.000 yang memenuhi dua syarat: harus merupakan bilangan genap dan bilangan kuadrat sempurna.
// Berikut adalah penjelasannya:

// 1. Perulangan melalui rentang yang diberikan: Program dimulai dengan luas yang diatur ke 100.000 dan meningkat hingga mencapai 200.000.
// 2. Memeriksa apakah luas genap: Jika luas bukan bilangan genap (luas % 2 /= 0), maka iterasi berikutnya dilanjutkan.
// 3. Memeriksa apakah luas adalah bilangan kuadrat sempurna: Awalnya, diasumsikan kuadrat_sempurna adalah false, kemudian diperiksa semua nilai k dari 1 hingga akar kuadrat dari luas. Jika k * k sama dengan luas, maka luas merupakan bilangan kuadrat sempurna.
// 4. Mencetak dan berhenti: Ketika kedua syarat tersebut terpenuhi, program mencetak luas dan menghentikan perulangan.

// Jadi, program ini bertujuan untuk menemukan bilangan yang memenuhi kedua syarat tersebut dan kemudian mencetaknya.
