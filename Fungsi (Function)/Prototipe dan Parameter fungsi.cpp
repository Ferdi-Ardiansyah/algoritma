#include <iostream>
#include <string.h>  // untuk strcpy
#include <conio.h>   // untuk getch() kalau di Turbo C

using namespace std;

// Prototype fungsi
void coment(char ket[30], int n);

// Program utama
int main() {
    char lagi, c[30];
    int i;

    do {
        cout << "Masukkan nilai = ";
        cin >> i;

        coment(c, i); // panggil fungsi coment
        cout << c;

        cout << "\n\nIngin input lagi [Y/T]: ";
        cin >> lagi;

    } while (lagi == 'Y' || lagi == 'y');

    getch();
    return 0;
}

// Definisi fungsi coment
void coment(char ket[30], int n) {
    if (n % 2 == 1)
        strcpy(ket, "---Bilangan Ganjil---");
    else
        strcpy(ket, "---Bilangan Genap---");
}
