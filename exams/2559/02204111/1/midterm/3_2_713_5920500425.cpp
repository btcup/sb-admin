//5920500425 Narit Chunnoi 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"Enter coefficients a,b and c: ";
    cin>>a>>b>>c;
    
    if(a==b&&b==c&&a==c) 
    {
         cout<<"Roots are complex and different."<<endl;
         cout<<"x1 = "<<(-b/(2*a))<<" + "<<((sqrt((4*a*c)-pow(b,2)))/(2*a))<<"i"<<endl;
         cout<<"x2 = "<<(-b/(2*a))<<" - "<<((sqrt((4*a*c)-pow(b,2)))/(2*a))<<"i"<<endl;
         
    }     
    
    
    else if(a==b||b==c||a==c)
    { 
      cout<<"Roots are real and same."<<endl;
      cout<<"x1 = x2 = "<<(-b+(sqrt((pow(b,2))-(4*a*c))))/(2*a)<<endl;
    }
    
    
    else if(a!=b||b!=c||a!=c)
    {
      
      cout<<"Roots are real and different."<<endl;
      cout<<"x1 = "<<(-b+(sqrt((pow(b,2))-(4*a*c))))/(2*a)<<endl;
      cout<<"x2 = "<<(-b-(sqrt((pow(b,2))-(4*a*c))))/(2*a)<<endl;
    }
    
    
         
system ("pause");
return 0;
}
    
