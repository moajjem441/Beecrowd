#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int a;
    float b;
    cin>>a>>b;
    int p=3;
    cout<<fixed<<setprecision(p);
    float av=a/b;
    cout<<av<<' '<<"km/l"<<endl;
    return 0;
    
    
}