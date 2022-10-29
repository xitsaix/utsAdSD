#include <iostream>
using namespace std;

int main(){
    
    int totalSub, sum = 0;
    
    cout << "----------------------------" << endl;
    cout << "Nama: Akbar Ihsanul Ahadin" << endl;
    cout << "NIM : 32021110004" << endl;
    cout << "----------------------------" << endl;
    
    cout << "Masukkan total subject: " << endl;
    cin >> totalSub;
    
    int array[totalSub];
    for(int i = 0; i < totalSub; i++){
        cout << "Masukkan Subject " << i+1 << "Marks" << endl;
        cin >> array[i];
        sum += array[i];
    }
    
    cout << "The sum: " << sum << endl;
    float average;
    
    average = sum/totalSub;
    cout << "The average is " << average << endl;
    
    
    
}
