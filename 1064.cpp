#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    float a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    float x=0;
    int g=0;
    if(a>0)
    {
        g++;
        x+=a;
    }
     if(b>0)
    {
         x+=b;
        g++;
    }
     if(c>0)
    {
          x+=c;
        g++;
    }
    
     if(d>0)
    {
          x+=d;
        g++;
    }
    if(e>0)
    {
        x+=e;
        g++;
    }
   if(f>0)
    
{
       x+=f;
     g++;
}

cout<<g<<' '<<"valores positivos"<<endl;
cout<<fixed<<setprecision(1);
float i=x/g;
cout<<i<<endl;
return 0;


}
