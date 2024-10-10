#include <iostream>
using namespace std;

long long faktorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return faktorial(n - 1) * n;
      // Fungsi ini menghitung faktorial dari bilangan bulat positif n menggunakan rekursi.
/*Basis Kasus: Jika n sama dengan 1, fungsi mengembalikan 1.
/*Kasus Rekursif: Jika n lebih besar dari 1, fungsi memanggil dirinya sendiri dengan argumen n - 1 dan mengalikan hasilnya dengan n
    }
}

int main() {
    int n = 10, m = 20;

    cout << faktorial(n) + faktorial(m) << endl;
  //Di dalam main(), dua variabel n dan m dideklarasikan dengan nilai 10 dan 20.
/*cout << faktorial(n) + faktorial(m) << endl;: Menghitung faktorial dari n dan m, menjumlahkan keduanya, dan mencetak hasilnya ke layar.
}

