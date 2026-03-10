#include<iostream>
using namespace std;
int main ()
{
    int x,a,y,b;
    cin>>x>>a>>y>>b;
    
    if(x>y && a>b)
    {
        int e=23-(x-y);
        int f=60-(a-b);
        cout<<"O JOGO DUROU"<<' '<<e<<' '<<"HORA(S) E"<<' '<<f<<' '<<"MINUTO(S)"<<endl;
        
    }
    else if(x>y && a<b)
    {
        int e=24-(x-y);
        int f=b-a;
        cout<<"O JOGO DUROU"<<' '<<e<<' '<<"HORA(S) E"<<' '<<f<<' '<<"MINUTO(S)"<<endl;
    }
    else if(x<y && a>b)
    {
        int e=(y-x)-1;
        int f=60-(a-b);
        cout<<"O JOGO DUROU"<<' '<<e<<' '<<"HORA(S) E"<<' '<<f<<' '<<"MINUTO(S)"<<endl;
    }
    else if(x<y && a<b)
    {
        int e=(y-x);
        int f=(b-a);
        cout<<"O JOGO DUROU"<<' '<<e<<' '<<"HORA(S) E"<<' '<<f<<' '<<"MINUTO(S)"<<endl;
    }
    else if(x==y && a==b)
    {
        int e=24;
        int f=(a-b);
        cout<<"O JOGO DUROU"<<' '<<e<<' '<<"HORA(S) E"<<' '<<f<<' '<<"MINUTO(S)"<<endl;
    }
    else if(x==y && a<b)
    {
        int e=0;
        int f=(b-a);
        cout<<"O JOGO DUROU"<<' '<<e<<' '<<"HORA(S) E"<<' '<<f<<' '<<"MINUTO(S)"<<endl;
        
    }
    else if(x==y && a>b)
    {
        int e=23;
        int f=60-(a-b);
        cout<<"O JOGO DUROU"<<' '<<e<<' '<<"HORA(S) E"<<' '<<f<<' '<<"MINUTO(S)"<<endl;
    }
    else if(x>y && a==b)
    {
        int e=24-(x-y);
        int f=(a-b);
        cout<<"O JOGO DUROU"<<' '<<e<<' '<<"HORA(S) E"<<' '<<f<<' '<<"MINUTO(S)"<<endl;
    }
    else if(x<y && a==b)
    {
        int e=(y-x);
        int f=(a-b);
        cout<<"O JOGO DUROU"<<' '<<e<<' '<<"HORA(S) E"<<' '<<f<<' '<<"MINUTO(S)"<<endl;
    }
    return 0;
}