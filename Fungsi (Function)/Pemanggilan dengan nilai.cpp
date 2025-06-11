#include <iostream>
#include <conio.h>  // kalau pakai Turbo C, kalau nggak pakai bisa dihapus

using namespace std;

// Prototype fungsi
void tambah(int m, int n);

// Program utama
int main() {
    int a, b;

    a = 5;
    b = 9;

    cout << "Nilai Sebelum Fungsi Digunakan" << endl;
    cout << "a = " << a << " b = " << b << endl;

    // Pemanggilan fungsi dengan Call by Value
    tambah(a, b);

    cout << "\nNilai Setelah Fungsi Digunakan" << endl;
    cout << "a = " << a << " b = " << b << endl;

    getch(); // kalau di luar Turbo C++ bisa diganti system("pause");
    return 0;
}

// Definisi fungsi tambah
void tambah(int m, int n) {
    m += 5;
    n += 7;

    cout << "\nNilai di dalam Fungsi Tambah()" << endl;
    cout << "m = " << m << " n = " << n << endl;
}
