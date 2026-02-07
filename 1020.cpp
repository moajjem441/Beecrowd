#include<iostream>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int b=365,c=30;
    int d,e,f,g;
    d=a/b;
    cout<<d<<' '<<"ano(s)"<<endl;
    e=a-b*d;
    f=e/c;
    cout<<f<<' '<<"mes(es)"<<endl;
    g=e-c*f;
    cout<<g<<' '<<"dia(s)"<<endl;
    return 0;
}
