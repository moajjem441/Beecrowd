#include<iostream>
#include<iomanip>
using namespace std;

int main () {
    int count = 0;
    for (int i = 0; i < 6; i++) {
        cout<<fixed<<setprecision(1);
        float value;
        cin >> value;  
        
        if (value > 0) {
            count++; 
        }
    }
    
    cout << count << " valores positivos" << endl;
    
    return 0;
}
