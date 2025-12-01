#include <iostream>
using namespace std;

int main() {
    string nama, benar;

    while (true) {
        system("cls");
        cout << "Masukkan nama: ";
        cin >> nama;
        cout << "Nama benar? (true/false): ";
        cin >> benar;

        if (benar == "true") break;
    }

    int nim;
    cout << "Masukkan NIM (angka saja): ";
    cin >> nim;

    int saldo = nim;

    cout << "====================" << endl;
    cout << "Nama: " << nama << endl;
    cout << "Saldo awal: Rp " << saldo << endl;

    cout << "===== MENU ATM =====" << endl;
    cout << "1. Cek Saldo" << endl;
    cout << "2. Tarik Tunai" << endl;
    cout << "3. Setor Tunai" << endl;
    cout << "4. Transfer" << endl;
    cout << "5. Keluar" << endl;
    cout << "====================" << endl;

    int menu;
    cout << "Pilih menu: ";
    cin >> menu;

    switch (menu) {
        case 1:
            cout << "Saldo: " << saldo << endl;
            break;

        case 2: {
            int tarik;
            cout << "Jumlah tarik: ";
            cin >> tarik;
            cout << "Saldo sekarang: " << saldo - tarik << endl;
            break;
        }

        case 3: {
            int setor;
            cout << "Jumlah setor: ";
            cin >> setor;
            cout << "Saldo sekarang: " << saldo + setor << endl;
            break;
        }

        case 4: {
            int tf;
            cout << "Jumlah transfer: ";
            cin >> tf;
            cout << "Saldo sekarang: " << saldo - tf << endl;
            break;
        }

        case 5:
            cout << "Keluar" << endl;
            break;

        default:
            cout << "Menu tidak valid" << endl;
    }

    return 0;
}
