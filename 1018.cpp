#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    int a=100,b=50,c=20,d=10,e=5,f=2,g=1;
    int i,j,k,l,m,n,o,p,q,r,s,t,u;
    int h;
    cin>>h;
    cout<<h<<endl;
     i=h/a;
    cout<<i<<' '<<"nota(s) de R$ 100,00"<<endl;
     j=h-a*i;
    if(j>=b)
    {
       k=j/b;  
    cout<<k<<' '<<"nota(s) de R$ 50,00"<<endl;
    }
    else
    {
        string z="0 nota(s) de R$ 50,00";
        cout<<z<<endl;
    }
    k=j/b;  
      l=j-b*k;
    if(l>=c)
    {
         m=l/c;
        cout<<m<<' '<<"nota(s) de R$ 20,00"<<endl;
    }
    else
    {
        string z="0 nota(s) de R$ 20,00";
        cout<<z<<endl;
    }
     m=l/c;
    n=l-c*m;
    if(n>=d)
    {
         o=n/d;
        cout<<o<<' '<<"nota(s) de R$ 10,00"<<endl;
    }
    else
    {
        string z="0 nota(s) de R$ 10,00";
        cout<<z<<endl;
    }
    o=n/d;
     p=n-d*o;
    if(p>=e)
    {
         q=p/e;
        cout<<q<<' '<<"nota(s) de R$ 5,00"<<endl;
    }
    else
    {
        string z="0 nota(s) de R$ 5,00";
        cout<<z<<endl;
    }
    q=p/e;
     r=p-e*q;
    if(r>=f)
    {
        s=r/f;
        cout<<s<<' '<<"nota(s) de R$ 2,00"<<endl;
    }
    else
    {
        string z="0 nota(s) de R$ 2,00";
        cout<<z<<endl;
    }
    s=r/f;
     t=r-f*s;
    if(t>=g)
    {
         u=t/g;
        cout<<u<<' '<<"nota(s) de R$ 1,00"<<endl;
    }
    else 
    {
        string z="0 nota(s) de R$ 1,00";
        cout<<z<<endl;
    }
    return 0;
    
}