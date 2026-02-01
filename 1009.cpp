#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main ()
{
    string n;
    cin>>n;
    double m,o;
    cin>>m>>o;
    int p=2;
    double f=o*.15;
    double tot=m+f;
    cout<<fixed<<setprecision(p);
    cout<<"TOTAL = R$"<<' '<<tot<<endl;
    return 0;
}