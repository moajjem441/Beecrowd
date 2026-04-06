#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int m=0,o=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=10 && a[i]<=20)
        m++;
        else 
        o++;
    }
 cout<<m<<' '<<"in"<<endl;
 cout<<o<<' '<<"out"<<endl;
 return 0;
}