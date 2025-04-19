#include <iostream>
using namespace std;

int main() {
    string biner;
    cout << "Masukkan bilangan biner: ";
    cin >> biner;

    int desimal = 0;
    int panjang = biner.length();

    // Mengubah bilangan biner ke desimal
    for (int i = 0; i < panjang; i++) {
        char digit = biner[panjang - 1 - i]; 
        
        if (digit == '1') {
            desimal += (1 << i); 
        } else if (digit != '0') {
            cout << "Pesan rusak!" << endl;
            
            return 0; 
        }
    }

    cout << "Bilangan desimal: " << desimal << endl;

    return 0;
}
