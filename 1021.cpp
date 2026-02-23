#include<iostream>
#include<iomanip>
#include<cstring>
#include<cmath>
using namespace std;
int main ()
{
    float a;
    cin>>a;
    int b=100,c=50,d=20,e=10,f=5,g=2;
    int h,i,j,k,l,m,n,o,p,q,r;
    string z;
    cout<<"NOTAS:"<<endl;
    h=a/b;
    cout<<h<<' '<<"nota(s) de R$ 100.00"<<endl;
    i=a-b*h;
    if(i>=c)
    {
        j=i/c;
        cout<<j<<' '<<"nota(s) de R$ 50.00"<<endl;
    }
    else
    {
         z="0 nota(s) de R$ 50.00";
        cout<<z<<endl;
    }
    j=i/c;
    k=i-c*j;
    if(k>=d)
    {
        l=k/d;
        cout<<l<<' '<<"nota(s) de R$ 20.00"<<endl;
    }
    else
    {
        z="0 nota(s) de R$ 20.00";
        cout<<z<<endl;
    }
    l=k/d;
    m=k-d*l;
    if(m>=e)
    {
        n=m/e;
        cout<<n<<' '<<"nota(s) de R$ 10.00"<<endl;
    }
    else
    {
     z="0 nota(s) de R$ 10.00";
     cout<<z<<endl;
    }
    n=m/e;
    o=m-e*n;
    if(o>=f)
    {
        p=o/f;
        cout<<p<<' '<<"nota(s) de R$ 5.00"<<endl;
    }
    else
    {
        z="0 nota(s) de R$ 5.00";
        cout<<z<<endl;
    }
    p=o/f;
    q=o-f*p;
    if(q>=g)
    {
        r=q/g;
        cout<<r<<' '<<"nota(s) de R$ 2.00"<<endl;
    }
    else
    {
        z="0 nota(s) de R$ 2.00";
        cout<<z<<endl;
    }
    r=q/g;
    int M=q-g*r;
    cout<<"MOEDAS:"<<endl;
    int Y,X,A,B,C,D,E,F,G,H,I;
    int P=2;
    cout<<fixed<<setprecision(P);
    int s=b*h+c*j+d*l+e*n+f*p+g*r;
    float t=(a-s);
    int L=round (t*100);
    int u=1.00*100; int v=.50*100;  int w=.25*100; int x=.10*100; int y=.05*100; int Z=.01*100;
    Y=L/u;
    cout<<Y<<' '<<"moeda(s) de R$ 1.00"<<endl;
    X=L-u*Y;
    if(X>=v)
    {
        A=X/v;
        cout<<A<<' '<<"moeda(s) de R$ 0.50"<<endl;
    }
    else
    {
        z="0 moeda(s) de R$ 0.50";
        cout<<z<<endl;
    }
    A=X/v;
    B=X-v*A;
    if(B>=w)
    {
        C=B/w;
        cout<<C<<' '<<"moeda(s) de R$ 0.25"<<endl;
    }
    else
    {
        z="0 moeda(s) de R$ 0.25";
        cout<<z<<endl;
    }
    C=B/w;
    D=B-w*C;
    if(D>=x)
    {
        E=D/x;
        cout<<E<<' '<<"moeda(s) de R$ 0.10"<<endl;
    }
    else
    {
        z="0 moeda(s) de R$ 0.10";
        cout<<z<<endl;
    }
    E=D/x;
    F=D-x*E;
    if(F>=y)
    {
        G=F/y;
        cout<<G<<' '<<"moeda(s) de R$ 0.05"<<endl;
    }
    else
    {
        z="0 moeda(s) de R$ 0.05";
        cout<<z<<endl;
    }
    G=F/y;
    H=F-y*G;
    if(H>=Z)
    {
        I=H/Z;
        cout<<I<<' '<<"moeda(s) de R$ 0.01"<<endl;
    }
    else
    {
        z="0 moeda(s) de R$ 0.01";
        cout<<z<<endl;
    }

   }

