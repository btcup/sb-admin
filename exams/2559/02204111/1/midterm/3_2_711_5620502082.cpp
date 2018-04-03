//5620502082 
#include <iostream>
#include <cmath>
using namespace std;
int main()
 {
          float a,b,c,x,y,d,g;
          cout<<"Enter coefficients a, b and c:";
          cin>>a>>b>>c;
          d=pow(b,2)-(4*a*c);
          cout<<d;
          if(d>0)
          {
               
          x=(-b+sqrt(d))/(2*a);
          y=(-b-sqrt(d))/(2*a);
          cout<<"Root are real and differend."<<endl;
          cout<<"x1="<<x<<endl;
          cout<<"x2="<<y<<endl;
          }
          else if(d==0)
          {
          x=(-b+sqrt(d))/(2*a);
          cout<<"Root are real and same.";
          cout<<"x1=x2="<<x<<endl;
          }
          else 
           {
          g=(sqrt(-d)/(2*a));
          x= (-b)/(2*a);
          
          cout<<"Root are complex and differend."<<endl;
          cout<<"x1="<<x<<"+"<<g<<"i"<<endl;
          cout<<"x2="<<x<<"-"<<g<<"i"<<endl;
          }
          
          
          
          
          
           system ("pause");
 return 0;
}
