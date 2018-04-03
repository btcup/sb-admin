//5920502789 Narumon  Chongklang
#include <iostream>
#include<cmath>
using namespace std;
int main ()
{
    float a,b,c,d,e,f,g,h,i,k;
    cout<<"Enter coefficients a,b and c: ";
    cin>>a>>b>>c;
    
    d=(pow(b,2))-4*a*c;
    
    if(d>0)
         {
         e = (-b+(sqrt(d)))/(2*a);
         f = (-b-(sqrt(d)))/(2*a);
         
         cout<<"Roots are real and different."<<endl;
         cout<<"x1 = "<<e<<endl;
         cout<<"x2 = "<<f<<endl;
         }
   
    else if(d==0)
         {
         g = ((-b+(sqrt(d)))/(2*a));
         
         cout<<"Roots are real and same."<<endl;
         cout<<"x1 = x2 = "<<g<<endl;
         }
         
   else 
         { 
         h  = ((-b)/(2*a));
         i  = ((-b)/(2*a));
         k  = (sqrt(-d))/(2*a); 
         
         cout<<"Roots are complex and different."<<endl;
         cout<<"x1 = "<<h<<" + "<<k<<"i"<<endl;
         cout<<"x2 = "<<i<<" - "<<k<<"i"<<endl;
         }
  
 
    system ("pause");
    return 0;
}
 
