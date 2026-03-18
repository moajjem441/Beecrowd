#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    cout<<fixed<<setprecision(2);
    float N;
    cin>>N;
    if(N>=0.00 && N<=2000.00)
    {
        cout<<"Isento"<<endl;
    }
    else if(N>= 2000.01 && N<=3000.00)
    {
        float a=(N-2000)*.08;
        cout<<"R$"<<' '<<a<<endl;
    }
    else if (N>=3000.01 && N<= 4500.00)
    {
        float a=1000*.08;
        float b=(N-3000.00);//(o=N-2000),p=(o-1000)*.18;
        float c=(b*.18)+a;
        cout<<"R$"<<' '<<c<<endl;
    }
    else if (N>4500)
    {
        float a=1000*.08;
        float b=1500*.18;
        float c=(N-4500)*.28;
        float d=a+b+c;
        cout<<"R$"<< ' '<<d<<endl;
    }
    return 0;
}