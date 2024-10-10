/* Soal
Lengkapilah fungsi hitung_vokal() di sebelah kanan secara rekursif sesuai materi di atas, lalu gunakanlah untuk mencetak 
banyaknya huruf vokal pada string berikut:

"lorem ipsum dolor sit amet fermentum egestas luctus praesent torquent justo"
  */

#include <iostream>
#include <string>
using namespace std;

int hitung_vokal(string s) {
    if (s.empty()) { // Basis rekursi
        return 0;
    }

    char c = tolower(s[0]); // Ubah karakter ke huruf kecil untuk memudahkan pengecekan vokal
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') { // Periksa apakah karakter vokal
        return 1 + hitung_vokal(s.substr(1)); // Tambahkan 1 jika vokal dan lanjutkan ke karakter berikutnya
    } else {
        return hitung_vokal(s.substr(1)); // Lanjutkan ke karakter berikutnya tanpa menambah jumlah vokal
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << hitung_vokal("lorem ipsum dolor sit amet fermentum egestas luctus praesent torquent justo.") << endl;
}

+=================+
/*Materi
Kali ini, kita akan merancang sebuah fungsi rekursif hitung_vokal() yang menerima sebuah string, dan mengembalikan banyaknya huruf vokal pada string tersebut. Sebagai contoh:

hitung_vokal("congklak") mengembalikan 2
hitung_vokal("pak dengklek") mengembalikan 3
hitung_vokal("tlx") mengembalikan 0
Pertama-tama, kita coba tuliskan dulu fungsinya:


int hitung_vokal(string s) {
    ...
}


Bagaimanakah intuisi rekursinya?

Bisakah fungsi tersebut memanfaatkan hasil dari pemanggilan fungsi itu sendiri, namun dengan argumen yang lebih kecil?
Apa yang "lebih kecil" dari string argumen s? Misalnya, kita bisa membagi s menjadi dua bagian:

karakter pertama, yakni s[0]
string sisanya, yakni s.substr(1) (dokumentasi: substr)
Lalu, kita lihat bahwa hitung_vokal(s) bisa memanfaatkan hasil dari hitung_vokal(s.substr(1)) sebagai berikut:

Banyaknya huruf vokal dari string s adalah:

1 (jika s[0] vokal), atau 
0 (jika s[0] bukan vokal), ditambah
banyaknya huruf vokal dari string s.substr(1).
Dengan kata lain,

jika s[0] adalah huruf vokal, maka hitung_vokal(s) = 
1 + hitung_vokal(s.substr(1))
jika s[0] bukan huruf vokal, maka hitung_vokal(s) = hitung_vokal(s.substr(1))
Tentu saja, kasus dasarnya adalah jika s merupakan string kosong, maka hitung_vokal(s) = 0.
*/
