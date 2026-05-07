#include <iostream>    
#include <stdlib.h>     
using namespace std;

int main() {
    system("cls");     
    
    int a, b;          
    
    cout << "Masukkan dua angka: ";
    cin >> a >> b;      

    while (b != 0) {  
        int sisa = a % b;   
        a = b;              
        b = sisa;           
    }

    cout << "FPB = " << a << endl; 

    return 0;
}