#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int a,b,c,d;
    cin>>a>>b;
    float f,g;
    cin>>f;
    float s=b*f;
    cin>>c>>d;
    cin>>g;
    float ss=d*g;
    float sss=s+ss;
    int p=2;
    cout<<fixed<<setprecision(p);
    cout<<"VALOR A PAGAR: R$"<<' '<<sss<<endl;
    return 0;
}