#include <iostream>
using namespace std;

int main() {
    int harga;
    int jumlahBarang = 0;
    long totalSebelumDiskon = 0;

    cout << "Belanja Minimarket" << endl;
    cout << "Masukkan harga barang (0 untuk selesai):" << endl;
    
    while (true) {
        cout << "Harga: ";
        cin >> harga;

        if (harga == 0) {
            break; 
        }

        totalSebelumDiskon += harga;
        jumlahBarang++;
    }

    long besarDiskon = 0;
    if (totalSebelumDiskon >= 100000) {
        besarDiskon = totalSebelumDiskon * 0.1;
    }

    long totalBayar = totalSebelumDiskon - besarDiskon;

    cout << "Jumlah barang: " << jumlahBarang << endl;
    cout << "Total sebelum diskon: " << totalSebelumDiskon << endl;
    cout << "Diskon: " << besarDiskon << endl;
    cout << "Total bayar: " << totalBayar << endl;

    return 0;
}
