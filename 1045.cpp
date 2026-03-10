#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double sides[] = { a, b, c };
    sort(begin(sides), end(sides), greater<double>());

    double m, n, o;
    m = sides[0];
    n = sides[1];
    o = sides[2];

    if (m >= n + o) {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else if (m * m == n * n + o * o)
    {
        cout << "TRIANGULO RETANGULO" << endl;
    }
    else if (m * m > n * n + o * o) 
    {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    else if (m * m < n * n + o * o) 
    {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

     if (m == n && n == o) 
    {
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if (m == n || m == o || n == o)
    {
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}
