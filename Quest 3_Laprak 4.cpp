#include <iostream>
using namespace std;

int main() {
    int JumlahMahasiswa, status, TotalHadir = 0;
    
	cout << "=== PROGRAM CEK KEHADIRAN KELAS ===" << endl;
	
    cout << "Kehadiran Kelas" << endl; 
    cout << "Masukkan jumlah mahasiswa: "; 
    cin >> JumlahMahasiswa; 
    
    for (int i = 1; i <= JumlahMahasiswa; i++) {
        cout << "Mahasiswa " << i << " (1=hadir, 0=tidak): "; 
        cin >> status; 
        
        if (status == 1) {
            TotalHadir++; 
        }
    }

    int tidakHadir = JumlahMahasiswa - TotalHadir; 
    double persentase = (double)TotalHadir / JumlahMahasiswa * 100; 

    cout << "Hadir: " << TotalHadir << endl; 
    cout << "Tidak hadir: " << tidakHadir << endl; 
    
    cout.precision(2); 
    cout << fixed; 
    cout << "Persentase hadir: " << persentase << "%" << endl; 
    return 0;
}
