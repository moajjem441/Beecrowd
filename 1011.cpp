#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
   double pi=3.14159;
   double r;
   cin>>r;
   double vol=(double)4/3*pi*r*r*r;
   int p=3;
   cout<<fixed<<setprecision(p);
   cout<<"VOLUME ="<<' '<<vol<<endl;
   return 0;
}