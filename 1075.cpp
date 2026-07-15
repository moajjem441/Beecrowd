#include<iostream>
using namespace std;
int main() {
    const int size = 20; 
    int N[size];
    int i, temp;
    for(i = 0; i < size; i++) {
        cin >> N[i];
    }
    for(i = 0; i < size / 2; i++) {
        temp = N[i];
        N[i] = N[size - 1 - i];
        N[size - 1 - i] = temp;
    }
    for(i = 0; i < size; i++) {
        cout << "N[" << i << "] =" << ' ' << N[i] << endl;
    }

    return 0;
}

