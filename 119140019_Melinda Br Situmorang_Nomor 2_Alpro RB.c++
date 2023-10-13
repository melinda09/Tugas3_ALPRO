#include <iostream>
#include <climits> // Untuk menggunakan INT_MAX dan INT_MIN
using namespace std;

int main() {
    int N;
    
    // Meminta pengguna untuk memasukkan jumlah bilangan (N)
    cout << "Masukkan jumlah bilangan (N): ";
    cin >> N;
    
    if (N <= 0) {
        cout << "N harus lebih besar dari 0." << endl;
        return 1; // Keluar dari program dengan kode kesalahan
    }

    int bilangan;
    int minBilangan = INT_MAX; // Inisialisasi nilai minimal dengan nilai maksimum int
    int maxBilangan = INT_MIN; // Inisialisasi nilai maksimal dengan nilai minimum int

    for (int i = 1; i <= N; i++) {
        cout << "Masukkan bilangan ke-" << i << ": ";
        cin >> bilangan;
        
        if (bilangan < minBilangan) {
            minBilangan = bilangan; // Mengupdate nilai minimal
        }
        
        if (bilangan > maxBilangan) {
            maxBilangan = bilangan; // Mengupdate nilai maksimal
        }
    }

    // Menampilkan nilai minimal dan maksimal
    cout << "Bilangan minimal: " << minBilangan << endl;
    cout << "Bilangan maksimal: " << maxBilangan << endl;

    return 0;
}
