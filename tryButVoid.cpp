#include <iostream>
using namespace std;

void printGrade(double);

int main(){
    
    double n;
    
    cout << "----------------------------" << endl;
    cout << "Nama: Akbar Ihsanul Ahadin" << endl;
    cout << "NIM : 32021110004" << endl;
    cout << "----------------------------" << endl;
    
    cout << "Masukkan Nilai: ";
    cin >> n;
    
    cout << "Grade mu adalah " ;
    printGrade(n);
    
    return 0;
    
}
    
    void printGrade(double n){
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
    }
