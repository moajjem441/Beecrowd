#include<iostream>
using namespace std;
int main ()
{
    int i, size=10;
    int X[size];
    for(i =0;i<size;i++)
    {
        cin>>X[i];
    }
    for(i=0;i<size;i++)
    {
        if(X[i]<=0)
        {
            X[i]=1;
        }
    }
    for(i=0;i<size;i++)
    {
        cout<<"X["<<i<<"] ="<<' '<<X[i]<<endl;
    }
    return 0;
}