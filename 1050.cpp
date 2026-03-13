#include<iostream>
using namespace std;
int main ()
{
    int a=61,b=71,c=11,d=21,e=32,f=19,g=27,h=31;
    int n;
    cin>>n;
    if(a==n)
    {
        cout<<"Brasilia"<<endl;
    }
    else if(b==n)
    {
        cout<<"Salvador"<<endl;
    }
    else if(c==n)
    {
        cout<<"Sao Paulo"<<endl;
    }
    else if(d==n)
    {
        cout<<"Rio de Janeiro"<<endl;
    }
    else if(e==n)
    {
        cout<<"Juiz de Fora"<<endl;
    }
    else if(f==n)
    {
        cout<<"Campinas"<<endl;
    }
    else if(g==n)
    {
        cout<<"Vitoria"<<endl;
    }
    else if(h==n)
    {
        cout<<"Belo Horizonte"<<endl;
    }
    else 
    {
        cout<<"DDD nao cadastrado"<<endl;
    }
    return 0;
}