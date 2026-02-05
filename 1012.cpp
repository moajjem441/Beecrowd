#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    double pi=3.14159;
    double a,b,c;
    cin>>a>>b>>c;
    int p=3;
    cout<<fixed<<setprecision(p);
    double tri=0.5*a*c;
    cout<<"TRIANGULO:"<<' '<<tri<<endl;
    double cir=pi*c*c;
    cout<<"CIRCULO:"<<' '<<cir<<endl;
    double s=a+b;
    double tra=0.5*s*c;
    cout<<"TRAPEZIO:"<<' '<<tra<<endl;
    double sq=b*b;
    cout<<"QUADRADO:"<<' '<<sq<<endl;
    double rec=a*b;
    cout<<"RETANGULO:"<<' '<<rec<<endl;
    return 0;
}