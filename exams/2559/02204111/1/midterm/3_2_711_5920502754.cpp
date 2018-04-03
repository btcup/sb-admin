//5920502754 Thanakorn Kaewhiransap
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float a,b,c,d,e,f;
    cout<<"Enter coefficients a,b and c : ";
    cin>>a>>b>>c;
    d=(pow(b,2)-(4*a*c));
    if (d>0)
    {
            cout<<"Roots are real and different"<<endl;
            cout<<"x1 = "<<(-1*(b)+sqrt(pow(b,2)-4*a*c))/(2*a)<<endl;
            cout<<"x2 = "<<(-1*(b)-sqrt(pow(b,2)-4*a*c))/(2*a)<<endl;
    }
    if (d==0)
    {
             cout<<"Roots are real and same"<<endl;
             cout<<"x1 = x2 = "<<(-1*(b)+sqrt(pow(b,2)-4*a*c))/(2*a)<<endl;
    }
    if (d<0)
    {
            cout<<"Roots are complex and different"<<endl;
            cout<<"x1 = "<<(-1*(b)/(2*a))<<"+"<<((sqrt(-1*(pow(b,2)-4*a*c)))/(2*a))<<"i"<<endl;
            cout<<"x2 = "<<(-1*(b)/(2*a))<<"-"<<((sqrt(-1*(pow(b,2)-4*a*c)))/(2*a))<<"i"<<endl;
    }
    system ("pause");
    return 0;
}
