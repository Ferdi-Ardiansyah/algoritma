#include <iostream>
using namespace std;

// Fungsi garis
void garis() {
    cout << "\n-------------------\n";
}

int main() {
    // Bersihkan layar (hanya di Windows)
    system("cls");

    garis(); // Memanggil fungsi garis
    cout << "AMIK BSI - produk labu" << endl;
    garis(); // Memanggil fungsi garis lagi

    // Menunggu input dari pengguna sebelum program selesai
    cin.get();
    return 0;
}
