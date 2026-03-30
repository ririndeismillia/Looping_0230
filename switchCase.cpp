#include <iostream>
using namespace std;

int kodeJurusan;
string namaJurusan;
string statusKuota;

void input(){
    cout << "===PENDAFTARAN JURUSAN KAMPUS ===" << endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "----------------------------------" << endl;
    cin >> kodeJurusan;
}

void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
        namaJurusan = "Teknologi informasi";
        statusKuota = "Tersedia (15 Kursi)";
        break;
        case 2:
        namaJurusan = "Teknologi Elektro";
        statusKuota = "Kuota Penuh";
        break;
    }
}