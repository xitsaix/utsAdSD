#include <iostream>
using namespace std;

int main(){
    
    cout << "----------------------------" << endl;
    cout << "Nama: Akbar Ihsanul Ahadin" << endl;
    cout << "NIM : 32021110004" << endl;
    cout << "----------------------------" << endl;
    
    int n;
    cout << "Masukkan Nilai: " << endl;
    cin >> n;
    if(n >= 80){
        cout << "A+";
    }else if (n >= 70){
        cout << "A";
    }else if (n >= 60){
        cout << "B";
    }else if (n >= 50){
        cout << "C";
    }else if (n >= 40){
        cout << "D";
    }else if (n >= 33){
        cout << "E";
    }else{
        cout << "F";
    }
    
    return 0;
}

//njirs gajelas
