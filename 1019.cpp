#include<iostream>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int b=3600,c=60;
    int d,e,f,g;
    d=a/b;
    cout<<d<<":";
    e=a-b*d;
    f=e/c;
    cout<<f<<":";
    g=e-c*f;
    cout<<g<<endl;
    return 0;
}
