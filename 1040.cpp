#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=2,y=3,z=4,o=1;
    cout<<fixed<<setprecision(1);
    float m=a*x+b*y+c*z+d*o;
    int n=x+y+z+o;
    float p =m/n;
    if(p>=7.0)
    {
        cout<<"Media:"<<' '<<p<<endl;
        cout<<"Aluno aprovado."<<endl;
    }
    else if(p<5.0)
    {
        cout<<"Media:"<<' '<<p<<endl;
        cout<<"Aluno reprovado."<<endl;
    }
    else if (p>=5.0&&p<=6.9)
    {
        cout<<"Media:"<<' '<<p<<endl;
        cout<<"Aluno em exame."<<endl;
        float q;
        cin>>q;
        float g=p+q;
        float h=g/2;
        cout<<"Nota do exame:"<<' '<<q<<endl;
        if(h>=5.0)
        {
            cout<<"Aluno aprovado."<<endl;
            cout<<"Media final:"<<' '<<h<<endl;
        }
        else if (h<=4.9)
        {
            cout<<"Aluno reprovado."<<endl;
            cout<<"Media final:"<<' '<<h<<endl;
        }
        
    }
    return 0;
    
    
}