#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    int m=a*b;
    int p=3;
    cout<<fixed <<setprecision(p);
    float v=(float)m/12;
    cout<<v<<endl;
    return 0;
}