#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int N;
    cin>>N;
    float a,b,c;
    cout<<fixed<<setprecision(1);
    for(int i=1;i<=N;i++)
    {
        cin>>a>>b>>c;
        float x=a*2+b*3+c*5;
        float
        y=x/10;
        cout<<y<<endl;
    }
    
    return 0;
}