#include <iostream>
using namespace std;

int main() {
    int pilihan;

    do {
        cout << "=== FIBONACCI GENERATOR ===" << endl;
        cout << "1) n suku" << endl;
        cout << "2) sampai <= m"<< endl;
       	cout << "3) exit" << endl;
        cout << "Pilih: ";
		cin >> pilihan;

        if (pilihan == 1) {
            int n;
            cout << "Masukkan n: "; 
			cin >> n;
            if (n <= 0) {
                cout << "Input tidak valid!" << endl; 
            } else {
                double a = 0, b = 1;
                cout << "Hasil (" << n << " suku):" << endl;
                for (int i = 0; i < n; i++) {
                    cout << a << " ";
                    double sementara = a + b;
                    a = b;
                    b = sementara;
                }
                cout << endl;
            }
        } else if (pilihan == 2) {
            int m;
            cout << "Masukkan m: "; 
			cin >> m;
            if (m < 0) {
                cout << "Input tidak valid!" << endl; 
            } else {
                double a = 0, b = 1;
                cout << "Hasil (<= " << m << "):" << endl;
                while (a <= m) {
                    cout << a << " ";
                    double sementara = a + b;
                    a = b;
                    b = sementara;
                }
                cout << endl;
            }
        }
    } while (pilihan != 3); 

    return 0;
}
