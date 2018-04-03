//5920502819  Pongsakorn yodrak
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,x1,x2,e,f,g,h,i;
    cout<<"Enter coefficients a,b and c:";
    cin>>a>>b>>c;
    e=(b*b)-(4*a*c);
    f=sqrt(e);
    x1=((-1*b)+f)/(2*a);
    x2=((-1*b)-f)/(2*a);
    if(e<0)
    {
           cout<<"Root are complex and different."<<endl;
           g=(-1*e);
           h=(sqrt(g))/(2*a);
           i=-b/(2*a);
           cout<<"x1 ="<<i<<"+"<<h<<"i"<<endl;
           cout<<"x2 ="<<i<<"-"<<h<<"i"<<endl;
    }
    else if(x1!=x2)
    {
    cout<<"Root are real and different."<<endl;
    cout<<"x1 = "<<x1<<endl;
    cout<<"x2 = "<<x2<<endl;
    }
    else if(x1=x2)
    {
         cout<<"Roots are real and same."<<endl;
         cout<<"x1 = x2 = "<<x1<<endl;
    }     
    
    
system("pause");
return 0;
}

    
