#include <iostream>
#include <conio.h>  // kalau pakai Turbo C, kalau nggak pakai bisa dihapus

using namespace std;

// Prototype fungsi
void tambah(int *c, int *d);

// Program utama
int main() {
    int a, b;

    a = 4;
    b = 6;

    cout << "Nilai Sebelum Pemanggilan Fungsi" << endl;
    cout << "a = " << a << " b = " << b << endl;

    // Pemanggilan fungsi dengan Call by Reference
    tambah(&a, &b);

    cout << "\nNilai Setelah Pemanggilan Fungsi" << endl;
    cout << "a = " << a << " b = " << b << endl;

    getch(); // kalau di luar Turbo C++ bisa diganti system("pause");
    return 0;
}

// Definisi fungsi tambah
void tambah(int *c, int *d) {
    *c += 7;
    *d += 5;

    cout << "\nNilai di Akhir Fungsi Tambah()" << endl;
    cout << "c = " << *c << " d = " << *d << endl;
}
