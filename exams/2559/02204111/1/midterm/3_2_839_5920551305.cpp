#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   double a,b,c,d,x1,x2 ; 
    
 cout<<"Enter coefficients a,b and c : ";
 cin>>a>>b>>c;
 d = (pow(b,2)-(4*a*c));
 
 
      if(d>0)
      {
             x1= (-b+sqrt(pow(b,2)-(4*a*c)))/2*a;
             x2= (-b-sqrt(pow(b,2)-(4*a*c)))/2*a;
             cout<<"Root are real and differrent."<<endl;
         cout<<"x1 = "<<x1<<endl;
                
         cout<<"x2 = "<<x2<<endl;
         }
      else if(d==0)
      {
             x1= (-b+sqrt(pow(b,2)-(4*a*c)))/2*a;
             cout<<"Root are real and same."<<endl;
        cout<<"x1 =  x2 = "<<x1<<endl;   
           
       }
      else 
        {  
           x1= -(b/2*a)+(((sqrt(pow(b,2)-(4*a*c))/2*a)));
           x2= -(b/2*a)-(((sqrt(pow(b,2)-(4*a*c))/2*a)));
           cout<<"Root are complex and differrent."<<endl;
         cout<<"x1 = "<<x1<<endl;
         cout<<"x2 = "<<x2<<endl;   
 
         }     
 
   
 
 system("pause");
 return 0;   
}
