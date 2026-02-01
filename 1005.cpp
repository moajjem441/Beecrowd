#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
   
    float n;
    float R;
    cin>>n>>R;
    cout<<fixed<<setprecision(5);
    float sum = n*3.5+R*7.5;
    float MEDIA =sum/11;
    cout<<"MEDIA ="<<' '<<MEDIA<<endl ;
    return 0;
}