#include <iostream>
using namespace std;

int main() {
    int jumlahHari;
    long nominalHarian;
    long totalUangSaku = 0;

    cout << "Uang Saku" << endl;
    cout << "Masukkan jumlah hari: ";
    cin >> jumlahHari;

    for (int i = 1; i <= jumlahHari; i++) {
        cout << "Uang saku hari ke-" << i << ": ";
        cin >> nominalHarian;
        totalUangSaku += nominalHarian;
    }
    cout << "Total: " << totalUangSaku << endl;

    return 0;
}
