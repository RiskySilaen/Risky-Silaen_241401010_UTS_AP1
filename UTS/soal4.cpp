#include <iostream>
using namespace std;

int main() {
    string mantra;
    int vokal = 0;
    int i = 0;

    // Meminta untuk memasukkan mantra
    cout << "Masukkan Mantra: ";
    getline(cin, mantra);

    // Menggunakan while untuk memeriksa huruf vokal
    while (mantra[i] != '\0')  {
        char h = mantra[i];
        if (h == 'A' || h == 'I' || h == 'U' || h == 'E' || h == 'O' ||
            h == 'a' || h == 'i' || h == 'u' || h == 'e' || h == 'o') {
            vokal++;
        }
        i++;
    }

    // Menampilkan hasil
    if (vokal > 0) {
        cout << "Kekuatan mantra: " << vokal << " vokal" << endl;
    } else {
        cout << "Mantra tidak valid! Tidak mengandung vokal." << endl;
    }

    return 0;
}
