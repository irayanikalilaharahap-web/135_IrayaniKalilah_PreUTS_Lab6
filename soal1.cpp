#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system ("cls");  
    int angka[5];   
    int i = 0;
    
    cout << "Masukkan 5 angka: ";
    while (i < 5) {
        cin >> angka[i];
         i = i + 1;
    }
    
    cout << "Output: ";
    i = 4;  
    while (i >= 0) {
        cout << angka[i] << " ";
        i = i - 1;  
    }
    
    cout << endl;
    return 0;
}