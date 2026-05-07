#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system ("cls");
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    int kuadrat = n * n;
    int jumlah = 0;

    while(kuadrat > 0) {
        jumlah += kuadrat % 10;
        kuadrat /= 10;
    }

    if(jumlah == n) {
        cout << "ANGKA NEON" << endl;
    } else {
        cout << "BUKAN ANGKA NEON" << endl;
    }

    return 0;
}