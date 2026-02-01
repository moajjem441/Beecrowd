#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    float a,b,c;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(1);
    float sum=a*2+b*3+c*5;
    float MEDIA = sum/10;
    cout<<"MEDIA ="<<' '<<MEDIA<<endl;
    return 0;
}