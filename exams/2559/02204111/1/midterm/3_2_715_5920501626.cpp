//5920501626  Ponpimon  Nopparatnitiphong
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    
    double a,b,c,d,v,w;
    float x,y,;
    cout<<"Enter coefficients a,b and c: ";
    cin>>a>>b>>c;
    d=(pow(b,2)-(4*a*c));
    if(d>0)
    {
           x=((-b)+sqrt(pow(b,2)-(4*a*c)))/(2*a);
           y=((-b)-sqrt(pow(b,2)-(4*a*c)))/(2*a);
           cout<<endl<<"Root are real and different."<<endl;
           cout<<"x1 = "<<x<<endl;
           cout<<"x2 = "<<y<<endl;
    }
    else if(d==0)
    {
           x=((-b)+sqrt(pow(b,2)-(4*a*c)))/(2*a);
           cout<<endl<<"Root are real and same."<<endl;
           cout<<"x1 = x2 = "<<x<<endl;
    }
    else
    {
        x=(-b/(2*a)); 
        v=((sqrt(-(pow(b,2)-4*a*c))/(2*a)));
        y=(-b/(2*a));
        w=((sqrt(-(pow(b,2)-4*a*c)))/(2*a));
        cout<<"x1 = "<<x<<"+"<<v<<endl;
        cout<<"x2 = "<<y<<"-"<<w<<endl;
    }
    
    system("pause");
    return 0;
}
