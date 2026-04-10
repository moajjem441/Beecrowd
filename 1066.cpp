#include <iostream>
using namespace std;

int main() {
    int e = 0, o = 0, p = 0, n = 0;
    int a[5];
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 == 0)
            e++;
        else
            o++;
    }
    for (int i = 0; i < 5; i++) {
        if (a[i] >= 0) {
            p++;
            if (a[i] == 0)
                p--;
        }
        else
            n++;
    }

    cout <<e<< " valor(es) par(es)" << endl;
    cout << o << " valor(es) impar(es)" << endl;
    cout << p << " valor(es) positivo(s)" << endl;
    cout << n << " valor(es) negativo(s)" << endl;

    return 0;
}
