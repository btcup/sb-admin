// 5920500786 Panjapon Phonkaset
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
        float a,b,c,G,x,y; 
  
 cout<<"Enter coefficients a,b and c: ";
 cin>>a>>b>>c;
 
 if(a>0&&b>0&&c>0)
 { G=(pow(b,2))-(4*a*c);
 if (G>0)
 {x=(-b+(sqrt( pow(b,2)-(4*a*c)) ) )/(2*a);
  y=(-b-(sqrt( pow(b,2)-(4*a*c)) ) )/(2*a);
  cout<<"\nRoos are real and different\n"<<"x1 = "<<x<<" x2 = "<<y<<endl;
 }

if (G==0)
 {x=(-b+(sqrt( pow(b,2)-(4*a*c)) ) )/(2*a);
  
  cout<<"\nRoos are real and sam\n"<<"x1 = x2 = "<<x<<endl;
 }

if (G<0)
 {x=(((-b)/(2*a))+((sqrt( pow(b,2)-(4*a*c)) ) )/(2*a));
  y=(((-b)/(2*a))-((sqrt( pow(b,2)-(4*a*c)) ) )/(2*a));
  cout<<"\nRoos are complex and different\n"<<"x1 = "<<x<<"i"<<" x2 = "<<y<<"i"<<endl;}


}
     system ("pause"); 
    return 0;
    } 
