#include <iostream>
using namespace std;

int main() {
    system ("CLS");
    // Deklarasi variabel
    string nama;
    int nim;
    int nilaialgoritma, nilaiprobabilitas, nilaisistemoperasi;
    int rataRata;

    // Masukan nama dan nilai
    cout << "Nama Mahasiswa: ";               
    cin >> nama;       

    cout << "NIM: ";
    cin >> nim;

    cout << "Nilai Mata Kuliah:" << endl;
    cout << "Algoritma dan Pemrograman: ";
    cin >> nilaialgoritma;
    cout << "Probabilitas dan Statistik: ";
    cin >> nilaiprobabilitas;
    cout << "Sistem Operasi: ";
    cin >> nilaisistemoperasi;

    // Menghitung rata-rata
    rataRata = (nilaialgoritma + nilaiprobabilitas + nilaisistemoperasi) / 3;

    // Keluaran
    if (nilaialgoritma >= 60) {
        cout << "Algoritma dan Pemrograman: Lulus." << endl;
    } else {
        cout << "Algoritma dan Pemrograman: Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;
    }

    if (nilaiprobabilitas >= 60) {
        cout << "Probabilitas dan Statistik: Lulus." << endl;
    } else {
        cout << "Probabilitas dan Statistik: Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;
    }

    if (nilaisistemoperasi >= 60) {
        cout << "Sistem Operasi: Lulus." << endl;
    } else {
        cout << "Sistem Operasi: Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;
    }

    cout << "Nilai Rata-rata Semester ini: " << rataRata << endl;

    return 0;
}
