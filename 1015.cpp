#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main ()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    int p=4;
    cout<<fixed<<setprecision(p);
    double x=c-a;
    double x1=x*x;
    double y=d-b;
    double y1=y*y;
    double dis =x1+y1;
    double g=sqrt(dis);
    cout<<g<<endl;
    return 0;
    
    
}