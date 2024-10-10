1. Manakah ekspresi boolean yang ekuivalen dengan: n (sebuah variabel bertipe int) memiliki tepat 4 digit?
a. n % 1000 == 0
b. n >= 1000
c. n <= 10000 || n >= 1000
d. 1000 <= n && n <= 10000
e. 1000 <= n && n < 10000
//Pada soal no. 1, perhatikan bahwa kita tidak bisa menuliskan 1000 <= n < 10000. Pada C++, kode tersebut ekuivalen dengan (1000 <= n) < 10000; yang tidak bermakna seperti yang kita inginkan.

2. Sebuah tahun dikatakan tahun kabisat apabila salah satu dari dua kondisi berikut berlaku:
tahun tersebut kelipatan 400
tahun tersebut kelipatan 4, tetapi bukan kelipatan 100
Ekspresi boolean manakah yang ekuivalen dengan: variabel tahun (bertipe int) adalah tahun kabisat?
a. tahun % 400 == 0 || tahun % 4 == 0 || tahun % 100 != 0
b. (tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0
c. tahun % 400 == 0 && (tahun % 4 == 0 || tahun % 100 != 0)
d. tahun % 400 == 0 || tahun % 4 != 100
//Pada soal no. 2, perhatikan bahwa operator logika bersifat komutatif, sehingga semua ekspresi di bawah ini ekuivalen:
/*(tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0
/*tahun % 400 == 0 || (tahun % 4 == 0 && tahun % 100 != 0)
/*tahun % 400 == 0 || (tahun % 100 != 0 && tahun % 4 == 0)
... dst.
