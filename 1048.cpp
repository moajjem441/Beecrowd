#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    float n;
    cin >> n;

    if (n >= 0 && n <= 400.00)
    {
        double m = 0.15;
        double o = n * m;
        cout << "Novo salario: " << o + n << endl;
        cout << "Reajuste ganho: " << o << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if (n >= 400.01 && n <= 800.00)
    {
        double m = 0.12;
        double o = n * m;
        cout << "Novo salario: " << o + n << endl;
        cout << "Reajuste ganho: " << o << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if (n >= 800.01 && n <= 1200.00)
    {
        double m = 0.10;
        double o = n * m;
        cout << "Novo salario: " << o + n << endl;
        cout << "Reajuste ganho: " << o << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if (n >= 1200.01 && n <= 2000.00)
    {
        double m = 0.07;
        double o = n * m;
        cout << "Novo salario: " << o + n << endl;
        cout << "Reajuste ganho: " << o << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else if (n > 2000.00)
    {
        double m = 0.04;
        double o = n * m;
        cout << "Novo salario: " << o + n << endl;
        cout << "Reajuste ganho: " << o << endl;
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}
