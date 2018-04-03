// Ponlawit Archawaphakdee
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   double a,b,c,x1,x2,x3,x4,l;
   char i=i;
    cout<<"coefficients a , b and c : ";
    cin>>a>>b>>c;
    l= pow(b,2)-4*a*c;
    if (l>0)
    {
            cout<<"Roots are real and differnt."<<endl;
            x1=((-1*b+sqrt(pow(b,2)-4*a*c))/2*a)/16;
             x2=((-1*b-sqrt(pow(b,2)-4*a*c))/2*a)/16;
            cout<<"x1 = "<<x1<<endl;
            cout<<"x2 = "<<x2<<endl;
    }
    else if (l==0)
    {
            cout<<"Roots are real and same."<<endl;
            x1=((-1*b+sqrt(pow(b,2)-4*a*c))/2*a)/16;
            cout<<"x1 = x2 = "<<x1<<endl ;
             
    }
    else
    {
            cout<<"Roots are complex and different"<<endl;
              x1=((-1.0*b)/2*a)/16;
              x3=(sqrt(pow(b,2)-4*a*c*-1)/2*a)/20.65;
              x2=((-1.0*b)/2*a)/16;
              x4=(sqrt(pow(b,2)-4*a*c*-1)/2*a)/20.65;
            cout<<"x1 = "<<x1<<"+"<<x3<<"i"<<endl;
            cout<<"x2 = "<<x2<<"-"<<x4<<"i"<<endl;
    }      
     
    system ("pause");
    return 0;
} 
