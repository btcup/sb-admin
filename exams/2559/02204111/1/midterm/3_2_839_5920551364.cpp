//5920551364 Chittavon Chaisatapakorn
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    double a,b,c,x1,x2,d;    
    cout<<"Enter coefficients a, b and c : ";
    cin>>a>>b>>c;
    cout<<"                  "<<endl;
    d = ((pow(b,2))-(4*a*c));
    {
    if(d > 0)
{
    cout<<"Roots are real and different . "<<endl;
    x1 = (-b+sqrt(d))/(2*a);
    x2 = (-b-sqrt(d))/(2*a);
     cout<<"x1 = "<<x1<<endl;
     cout<<"x2 = "<<x2<<endl;
}
    else if(d < 0)
{
    cout<<"Roots are Conplex and different . "<<endl;
    x1 = (-b+(sqrt(-1*d)))/(2*a);
    x2 = (-b-(sqrt(-1*d)))/(2*a);
    cout<<"x1 = "<<x1<<endl;
     cout<<"x2 = "<<x2<<endl;
}
     else 
    {
                          cout<<"Roots are real and same . "<<endl;
                          x1 = (-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
     cout<<"x1 = x2 = "<<x1<<endl;
}
}
    system ("pause");
    return 0;
}
