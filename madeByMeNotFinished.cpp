#include <iostream>
using namespace std;

int main(){
    
    int nilaiSatu, nilaiDua, nilaiTiga, nilaiEmpat, nilaiLima, nilaiEnam, nilaiTujuh, nilaiDelapan, nilaiSembilan, nilaiSepuluh, n;
    char namaSatu[100], namaDua[100], namaTiga[100], namaEmpat[100], namaLima[100], namaEnam[100], namaTujuh[100], namaDelapan[100], namaSembilan[100], namaSepuluh[100];
    
    cout << "----------------------------" << endl;
    cout << "Nama: Akbar Ihsanul Ahadin" << endl;
    cout << "NIM : 32021110004" << endl;
    cout << "----------------------------" << endl;
    
    cout << "Masukkan Nama: ";
    cin >> namaSatu;
    cout << "Masukkan Nilai: ";
    cin >> n;
    
    cout << namaSatu;
    cout << "Grade mu adalah " ;
    if(n >= 90)
        cout << "A";
    else if (n >= 80)
        cout << "B";
    else if (n >= 70)
        cout << "C";
    else if (n >= 60)
        cout << "D";
    else if (n >= 50)
        cout << "E";
    else
        cout << "F";
    
    
    return 0;
}
