#include <iostream>
using namespace std;

int main() {
    int kodeRahasia = 7;
    int tebakan;
    bool berhasil = false;

    cout << "Pintu Dungeon" << endl;

    for (int i = 1; i <= 3; i++) {
        cout << "Percobaan " << i << "/3 - Tebak: ";
        cin >> tebakan;

        if (tebakan == kodeRahasia) {
            cout << "Benar!" << endl; 
            berhasil = true;
            break;
        } else {
            cout << "Salah!" << endl;
        }
    }

    if (!berhasil) {
        cout << "Kalah! Angka = " << kodeRahasia << endl; 
    }

    return 0;
}
