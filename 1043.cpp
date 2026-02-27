#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    float a,b,c;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(1);
    float m=a+b;
    if(m>c&&a+c>b&&b+c>a)
    {
        cout<<"Perimetro ="<<' '<<m+c<<endl;
    }
   
    else 
    {
        float n=0.5*m*c;
        cout<<"Area ="<<' '<<n<<endl;
    }
    return 0;
}