//5620551563 sophon uthairungratsamee
#include <iostream>
#include <Cmath>
using namespace std;
int main ()
{
    float a,b,c,x1,x2,i;
    cout<<"Enter coefficients a,b and c : ";
    cin>>a>>b>>c;
    if(a>0&&b>0&&c>0)
    {
                 cout<<"Roots are real and different ."<<endl;
                 x1=(-b+sqrt((pow(b,2))-(4*a*c)))/(2*a);
                 x2=(-b-sqrt((pow(b,2))-(4*a*c)))/(2*a);
                 cout<<"x1 = "<<x1<<endl;
                 cout<<"x2 = "<<x2<<endl;
    }
    else if(a==b&&a==c
    &&b==c)
    {
                  cout<<"Roots are real and same"<<endl;
                  x1=x2=(-b+sqrt((pow(b,2))-4*a*c))/(2*a);
                  cout<<"x1 = x2 ="<<x1<<endl;
    }
    else if(a<0&&b<0&&c<0)
    {
                     cout<<"Roots are complex and different."<<endl;
                     x1=((-b)/(2*a))+((sqrt(-((pow(b,2))-(4*a*c))))/(2*a));i;
                     x2=((-b)/(2*a))-((sqrt(-((pow(b,2))-(4*a*c))))/(2*a));i;
                     cout<<"x1 = "<<x1<<endl;
                     cout<<"x2 = "<<x2<<endl;
    }
    system ("pause");
    return 0;
}
    
    
