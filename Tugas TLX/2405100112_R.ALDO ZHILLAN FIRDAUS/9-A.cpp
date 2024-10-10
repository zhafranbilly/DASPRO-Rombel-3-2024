// Faktorial dari sebuah bilangan bulat positif nn, dinotasikan dengan n!n!, didefinisikan sebagai hasil perkalian seluruh bilangan bulat positif dari 11 hingga nn. Dengan kata lain,

// n!=1×2×⋯×n−1×n
// n!=1×2×⋯×n−1×n

// Fungai faktorial ini dapat diimplementasikan pada C++ sebagai berikut:

// int faktorial(int n) {
//     int hasil = 1;
//     for (int i = 2; i <= n; i++) {
//         hasil *= i;
//     }
//     return hasil;
// }

// Sekarang, dapatkah Anda mengimplementasikannya tanpa menggunakan struktur perulangan apapun? Lalu, cetaklah nilai dari 12!12!

#include <iostream>
using namespace std;

int faktorial(int n) {
    // Kondisi dasar
    if (n == 1) {
        return 1; // 1! = 1
    } else {
        // Kasus rekursif
        return faktorial(n - 1) * n; // n! = (n-1)! * n
    }
}

int main() {
    cout << faktorial(12) << endl; // Menghitung dan mencetak 12!
    return 0;
}

//jawaban
//     Fungsi faktorial(n): Menggunakan rekursi untuk menghitung faktorial. Jika n == 1, mengembalikan 1 (kondisi dasar). Jika n > 1, memanggil dirinya sendiri dengan n-1 dan mengalikan hasilnya dengan n.

//     Fungsi main: Memanggil faktorial(12) dan mencetak hasilnya, yaitu 479001600.

// Program ini menghitung faktorial 12 dengan cara memecah perhitungan secara berulang hingga mencapai kondisi dasar.
