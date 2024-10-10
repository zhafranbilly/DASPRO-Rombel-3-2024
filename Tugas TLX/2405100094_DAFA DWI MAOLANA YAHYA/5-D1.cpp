// 1. Berapa buah bintang yang dicetak oleh potongan program berikut?

for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= i; j++) {
        cout << "*";
    }
}

// Program ini menggunakan dua loop for bersarang. Loop luar berjalan dari 1 hingga 4, dan loop dalam berjalan dari 1 hingga nilai i. Pada setiap iterasi dari loop dalam, program mencetak satu bintang *.

// Untuk menghitung jumlah bintang yang dicetak, kita lihat berapa kali loop dalam dijalankan untuk setiap nilai i:

// Saat i = 1: Loop dalam berjalan 1 kali, mencetak 1 bintang.
// Saat i = 2: Loop dalam berjalan 2 kali, mencetak 2 bintang.
// Saat i = 3: Loop dalam berjalan 3 kali, mencetak 3 bintang.
// Saat i = 4: Loop dalam berjalan 4 kali, mencetak 4 bintang.

// Total bintang yang dicetak adalah jumlah dari semua bintang yang dicetak pada setiap iterasi: 1 + 2 + 3 + 4 = 10

// Jadi, potongan program tersebut mencetak 10 bintang. 
