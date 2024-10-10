// Lengkapilah fungsi kalkulator() di sebelah kanan, yang menerima sebuah char op dan vector<string> data, agar mengembalikan:

//     jumlah seluruh elemen data, apabila op adalah +,
//     perkalian seluruh elemen data, apabila op adalah *,
//     sebuah string KESALAHAN, apabila op adalah karakter lainnya.

// Akan tetapi, elemen-elemen data berupa string! Jadi, kita perlu mengubah setiap string menjadi bilangan terlebih dahulu, lalu hasilnya diubah kembali menjadi string sebelum nilainya dikembalikan.


}#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    if (op == '+') {
        long long sum = 0;
        for (string s : data) {
            sum += stoll(s); // Konversi string ke long long untuk menghindari overflow
        }
        return to_string(sum); // Konversi hasil penjumlahan kembali ke string
    } 
    else if (op == '*') {
        long long product = 1;
        for (string s : data) {
            product *= stoll(s); // Konversi string ke long long untuk menghindari overflow
        }
        return to_string(product); // Konversi hasil perkalian kembali ke string
    } 
    else {
        return "KESALAHAN"; // Operator tidak valid
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;                                                                                                      
} 
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    if (op == '+') {
        long long sum = 0;
        for (string s : data) {
            sum += stoll(s); // Konversi string ke long long untuk menghindari overflow
        }
        return to_string(sum); // Konversi hasil penjumlahan kembali ke string
    } 
    else if (op == '*') {
        long long product = 1;
        for (string s : data) {
            product *= stoll(s); // Konversi string ke long long untuk menghindari overflow
        }
        return to_string(product); // Konversi hasil perkalian kembali ke string
    } 
    else {
        return "KESALAHAN"; // Operator tidak valid
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}

// Fungsi Utama:
// Program ini adalah kalkulator sederhana yang bisa melakukan penjumlahan ('+') dan perkalian ('*') pada angka yang disimpan dalam bentuk string di dalam vector<string>

//     Header:
//     cpp

//     #include <iostream>
//     #include <string>
//     #include <vector>
//     using namespace std;

//         iostream: Untuk output ke layar (cout).
//         string: Untuk memanipulasi teks (string).
//         vector: Untuk menyimpan deretan data string.

//     Fungsi kalkulator:
//         Menerima operator (op) dan kumpulan angka dalam bentuk vector<string>.
//         Penjumlahan dilakukan jika op == '+', dan perkalian jika op == '*'.
//         Jika operator tidak valid, mengembalikan "KESALAHAN".

//     Penjumlahan:
//         Setiap string dalam data dikonversi ke long long dengan stoll(), dijumlahkan, lalu hasilnya dikembalikan sebagai string.
//         Contoh: {"123", "456"} -> 579

//     Perkalian:
//         Setiap string dikonversi dan dikalikan satu per satu, hasilnya dikembalikan dalam bentuk string.
//         Contoh: {"2", "3"} -> 6

//     Fungsi main:
//         Menampilkan hasil penjumlahan/perkalian sesuai dengan operator dan data yang diberikan.
//         Jika operator tidak valid, menampilkan "KESALAHAN".

// Contoh Output:

// cpp

// 2536371476
// 1479
// 4873709888
// 264920
// KESALAHAN

