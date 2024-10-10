1. int x = 0;

if (x == 0) {
    cout << "x adalah 0" << endl;
  //Pernyataan if ini memeriksa apakah nilai x sama dengan 0.
/*Karena x diinisialisasi dengan 0, kondisi ini akan benar (true), sehingga program akan mengeksekusi blok di dalamnya.
/*Hasilnya, akan mencetak: x adalah 0
}
if (x >= 0) {
    cout << "x adalah non-negatif" << endl;
  //Pernyataan if ini memeriksa apakah x lebih besar dari atau sama dengan 0.
/*Karena x adalah 0, kondisi ini juga benar (true).
/*Program akan mengeksekusi blok ini, sehingga akan mencetak: x adalah non-negatif.
}
Keluarannya adalah 
- x adalah 0
- x adalah non-negatif

2. int x = 0;

if (x < 0) {
    cout << "x adalah negatif" << endl;
    //Kondisi Pertama: if (x < 0)
/*Memeriksa apakah x kurang dari 0.
/*Jika benar, program akan mencetak: x adalah negatif.
/*Dalam hal ini, karena x adalah 0, kondisi ini salah (false), dan program tidak akan menjalankan blok ini.
} else if (x >= 0) {
    cout << "x adalah non-negatif" << endl;
    //Kondisi Kedua: else if (x >= 0)
/*Memeriksa apakah x lebih besar dari atau sama dengan 0.
/*Karena x adalah 0, kondisi ini benar (true), sehingga program akan mencetak: x adalah non-negatif.
} else if (x <= 0) {
    cout << "x adalah non-positif" << endl;
    //Kondisi Ketiga: else if (x <= 0)
/*Memeriksa apakah x kurang dari atau sama dengan 0.
/*Meskipun kondisi ini juga benar untuk x yang bernilai 0, karena program sudah mengeksekusi blok else if sebelumnya, blok ini tidak akan dieksekusi.
} else {
    cout << "selesai" << endl;
    //Kondisi Terakhir: else
/*Blok ini akan dijalankan jika semua kondisi sebelumnya adalah salah.
/*Dalam kasus ini, blok ini tidak akan pernah dieksekusi karena salah satu kondisi sebelumnya sudah terpenuhi.
}
Keluarannya adalah non-negatif

3. int x = 5 * 5;
//Variabel x dideklarasikan dengan tipe data int dan diinisialisasi dengan hasil dari perkalian 5 * 5, yang menghasilkan nilai 25. Jadi, x sekarang bernilai 25.
if (x == 10) {
    cout << "kwak" << endl;
} else if (x < 25) {
    cout << "kwek" << endl;
} else if (x > 25) {
    cout << "kwik" << endl;
    //Kondisi Pertama: if (x == 10)
/*Memeriksa apakah x sama dengan 10.
/*Karena x bernilai 25, kondisi ini salah (false), dan blok di dalamnya tidak akan dieksekusi.

//Kondisi Kedua: else if (x < 25)
/*Memeriksa apakah x kurang dari 25.
/*Karena x bernilai 25, kondisi ini juga salah (false), sehingga blok ini tidak akan dieksekusi.

//Kondisi Ketiga: else if (x > 25)
/*Memeriksa apakah x lebih besar dari 25.
/*Karena x adalah 25, kondisi ini salah (false) juga, sehingga blok ini juga tidak akan dieksekusi.
}
Karena semua kondisi yang diperiksa adalah salah, tidak ada output yang dihasilkan dari program ini.
