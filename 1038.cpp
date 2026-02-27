#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    cout<<fixed<<setprecision(2);
    switch(n)
    {
        case 1:
        cout<<"Total: R$"<<' '<<m*4.00<<endl;
        break;
        case 2:
        cout<<"Total: R$"<<' '<<m*4.50<<endl;
        break;
        case 3:
        cout<<"Total: R$"<<' '<<m*5.00<<endl;
        break;
        case 4:
        cout<<"Total: R$"<<' '<<m*2.00<<endl;
        break;
        case 5:
        cout<<"Total: R$"<<' '<<m*1.50<<endl;
        break;
        default:
        break;
        
    }
    return 0;
    
}