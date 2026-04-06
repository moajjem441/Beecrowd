#include <iostream>
using namespace std;

int main()
{
    int o,n;
    cin>>o>>n;
    int m=0;
    if(o<n)
    {
        for(int x=o+1;x<n;x++)
        {
            if(x%2!=0)
   {
       m+=x;
    
   }
    }
    }
         
    else if(n<o)
    {
        for(int x=n+1;x<o;x++)
        {
            if(x%2!=0)
   {
       m+=x;
     
   }
    }
    }
     cout<<m<<endl;
     
     if(o==n)
    cout<<(o-n);
   
     return 0;
  }