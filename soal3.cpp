#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system ("cls");
    int n;
    cout << "Masukkan jumlah baris: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        int angka = 1;

        for(int j = 0; j <= i; j++) {
            cout << angka << " ";
            angka = angka * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}