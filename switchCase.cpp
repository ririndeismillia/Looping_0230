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
        case 3:
        namaJurusan = "Sistem Informasi";
        statusKuota = "Tersedia (5 Kursi)";
        default:
        namaJurusan = "Tidak Diketahui";
        statusKuota = "Error: Kode Tidak Valid";

    }
}
void output(){
    cout << "\n=== HASIL SELEKSI ===" << endl;
    cout << "Jurusan Pilihan : "<< namaJurusan << endl;
    cout << "-----------------------------------" << endl;

}
int main(){
    input();
    pilihanJurusan();
    output();

    return 0;
}