#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk memasukkan bilangan bulat N
    int N;
    
    // Meminta input 
    cout << "kode: ";
    cin >> N;

    // Memastikan N adalah bilangan bulat positif
    if (N <= 0) {
        cout << "bukan" << endl;
        return 0;
    }

    // Cek jika N adalah bilangan pangkat dua menggunakan bitwise
    if ((N & (N - 1)) == 0) { 
        cout << "ya" << endl; 
    } else {
        cout << "bukan" << endl; 
    }

    return 0;
}