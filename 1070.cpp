#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
  int m=0;
    for(int x=n;x>=n;x++)
    {
   if(x%2!=0)
   {
    m++;
     cout<<x<<endl;
    if(m==6)
    {
         break;
    }
   }
    }
    return 0;
}
