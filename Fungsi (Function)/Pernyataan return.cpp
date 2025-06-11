#include <iostream>
#include <conio.h>  // kalau pakai Turbo C++, kalau nggak perlu dihapus

using namespace std;

// Fungsi untuk menghitung luas lingkaran
float luas(int r) {
    return 3.14 * r * r;
}

// Fungsi untuk menghitung keliling lingkaran
float kel(int r) {
    return 2 * 3.14 * r;
}

int main() {
    int jari;

    // clrscr(); // hanya kalau pakai Turbo C++, bisa dihapus kalau modern compiler

    cout << "Masukkan Jari-jari = ";
    cin >> jari;

    cout << "Luas Lingkaran = " << luas(jari) << endl;
    cout << "Keliling Lingkaran = " << kel(jari) << endl;

    getch(); // kalau di luar Turbo C++ bisa diganti system("pause");
    return 0;
}
