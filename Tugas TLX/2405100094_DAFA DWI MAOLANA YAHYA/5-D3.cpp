// Berapa buah bintang yang dicetak oleh potongan program berikut?

for (int i = 1; i <= 4; i++) {
    if (i % 2 == 0) {
        continue;
    }
    for (int j = 1; j <= i; j++) {
        if ((i + j) % 2 == 0) {
            cout << "*";
        }
    }
}


// Program ini menggunakan dua loop for bersarang. Loop luar berjalan dari 1 hingga 4. Jika i adalah bilangan genap (i % 2 == 0), program melanjutkan ke iterasi berikutnya dengan continue. Jika i adalah bilangan ganjil, loop dalam berjalan dari 1 hingga nilai i. Di dalam loop dalam, terdapat kondisi if yang memeriksa apakah (i + j) % 2 == 0. Jika iya, program mencetak satu bintang *.

// Mari kita lihat setiap iterasi dari loop luar:

// Saat i = 1:
// Loop dalam berjalan dari j = 1
// (1 + 1) % 2 == 0 → 2 % 2 == 0 (True), jadi mencetak satu bintang.

// Saat i = 2:
// i adalah bilangan genap, jadi iterasi dilanjutkan (continue), tidak ada bintang yang dicetak.

// Saat i = 3:
// Loop dalam berjalan dari j = 1 hingga j = 3
// (3 + 1) % 2 == 0 → 4 % 2 == 0 (True), mencetak satu bintang.
// (3 + 2) % 2 == 0 → 5 % 2 == 0 (False), tidak mencetak bintang.
// (3 + 3) % 2 == 0 → 6 % 2 == 0 (True), mencetak satu bintang.

// Saat i = 4:
// i adalah bilangan genap, jadi iterasi dilanjutkan (continue), tidak ada bintang yang dicetak.

// Total bintang yang dicetak: 1 (untuk i = 1) + 2 (untuk i = 3) = 3 bintang

// Jadi, potongan program tersebut mencetak 3 bintang. 
