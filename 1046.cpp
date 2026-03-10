#include<iostream>
using namespace std;
int main ()
{
    int x,y;
    cin>>x>>y;
    //int m=24;
    if(x>y)
    {
        int n=24-(x-y);
        cout<<"O JOGO DUROU"<<' '<<n<<' '<<"HORA(S)"<<endl;
    }
    else if(x<y)
    {
        int o=y-x;
        cout<<"O JOGO DUROU"<<' '<<o<<' '<<"HORA(S)"<<endl;
    }
    else if(x==y)
    {
        cout<<"O JOGO DUROU"<<' '<<24<<' '<<"HORA(S)"<<endl;
    }
    return 0;
}