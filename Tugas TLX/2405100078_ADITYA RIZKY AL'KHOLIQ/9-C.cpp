// Perbaikilah fungsi cetak_menurun() di sebelah kanan dengan melengkapi kasus dasarnya. Lalu, gunakan fungsi tersebut untuk mencetak seluruh bilangan bulat positif dari 
// 10
// 10 hingga 
// 1
// 1, satu bilangan setiap barisnya.

#include <iostream>
using namespace std;

void cetak_menurun(int n) {
    
    if (n <= 0){
        return;
    }
    cout << n << endl;
    
    
    cetak_menurun(n - 1);
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cetak_menurun(10);
}

// Fungsi cetak_menurun(int n) mencetak angka secara menurun dari n hingga 1 menggunakan rekursi. Setiap kali dipanggil, fungsi mencetak nilai n dan kemudian memanggil dirinya sendiri dengan n - 1. Ketika n <= 0, fungsi berhenti (base case).

// Alur eksekusi:
// main() memanggil cetak_menurun(10).
// Fungsi mencetak 10, lalu memanggil cetak_menurun(9).
// Ini berlanjut hingga cetak_menurun(1) memanggil cetak_menurun(0), lalu fungsi berhenti.
