#include<iostream>
using namespace std;
int main ()
{
    int N;
    cin>>N;
    if(N > 2 && N < 10000)
    {
    for(int i=1;i<=10;i++)
    {
        int a=i*N;
        
        cout<<i<<' '<<"x"<<' '<<N<<' '<<"="<<' '<<a<<endl;
    }
    }
    return 0;
}