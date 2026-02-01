#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int a,b;
    float c;
    cin>>a>>b>>c;
    cout<<"NUMBER ="<<' '<<a<<endl;
    cout<<fixed<<setprecision(2);
    float sal=b*c;
    cout<<"SALARY = U$"<<' '<<sal<<endl;
    return 0;
}