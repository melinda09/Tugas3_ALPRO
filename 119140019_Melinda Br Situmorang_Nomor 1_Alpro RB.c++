#include <iostream>
using namespace std;

int main() {
    int N;

    // Meminta pengguna untuk memasukkan nilai N
    cout << "Masukkan nilai N: ";
    cin >> N;

    // Menampilkan tabel perkalian
    for (int i = 1; i <= 10; i++) {
        int hasil = i * N;
        cout << i << " * " << N << " = " << hasil << endl;
    }

    return 0;
}
