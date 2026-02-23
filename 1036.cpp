#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int p=5;
    cout<<fixed<<setprecision(p);
    double A,B,C,R1,R2;
    cin>>A>>B>>C;
    double m=B*B-4*A*C;
    if(A!=0 && m>=0 )
    {
        double n=sqrt (m);
     R1=(-B+n)/(2*A);
     R2=(-B-n)/(2*A);
        cout<<"R1 ="<<' '<<R1<<endl;
        cout<<"R2 ="<<' '<<R2<<endl;
    }
    else 
    {
        cout<<"Impossivel calcular"<<endl;
    }
    
}