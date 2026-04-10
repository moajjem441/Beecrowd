#include<iostream>
using namespace std;
int main ()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int g=0;
    if(a%2==0)
    {
        g++;
    }
     if(b%2==0)
    {
        g++;
    }
     if(c%2==0)
    {
        g++;
    }
    
     if(d%2==0)
    {
        g++;
    }
    if(e%2==0)
    {
        g++;
    }
  

cout<<g<<' '<<"valores pares"<<endl;
return 0;

}
