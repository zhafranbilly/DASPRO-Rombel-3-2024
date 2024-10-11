// Berapa buah bintang yang dicetak oleh potongan program berikut?
// Operator / pada bilangan bulat (int) bermakna pembagian yang dibulatkan ke bawah. Sebagai contoh, 47 / 10 menghasilkan 4. (Sisa 7 diabaikan.)

int n = 47;
while (true) {
    if (n == 0) {
        break;
    }
    cout << "*";
    n = n / 10;
}


// Program ini menggunakan loop while (true) yang terus berjalan sampai kondisi break terpenuhi. Berikut adalah langkah-langkah eksekusi program:

// Inisialisasi:
// int n = 47; mendeklarasikan variabel n dengan nilai awal 47.

// Iterasi Loop:
// Iterasi Pertama:
// if (n == 0) memeriksa apakah n bernilai 0. Kondisi ini tidak terpenuhi karena n adalah 47.
// cout << "*"; mencetak satu bintang: *.
// n = n / 10; menghitung 47 / 10, yang dibulatkan ke bawah menjadi 4. Sekarang, n adalah 4.

// Iterasi Kedua:
// if (n == 0) memeriksa apakah n bernilai 0. Kondisi ini tidak terpenuhi karena n adalah 4.
// cout << "*"; mencetak satu bintang: *.
// n = n / 10; menghitung 4 / 10, yang dibulatkan ke bawah menjadi 0. Sekarang, n adalah 0.

// Iterasi Ketiga:
// if (n == 0) memeriksa apakah n bernilai 0. Kondisi ini terpenuhi, sehingga loop berhenti dengan break.

// Jadi, total bintang yang dicetak adalah: 1 (dari iterasi pertama) + 1 (dari iterasi kedua) = 2 bintang

// Program ini mencetak 2 bintang. 
