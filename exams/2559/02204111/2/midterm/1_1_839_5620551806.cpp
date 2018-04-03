5620551806 Suppawat Whanseng
#include <iostream>
using namespace std;
int main() 
{
    char R;
    double x=1,y=1,a,b,c,S,A,B,C,J;
    
    cout<<"------- Car lease calculator -----------"<<endl;
    cout<<"Enter car model : ";
    cin>>R;
    if (R==A) {
    R=1385000;
    S=0.0209;
    }
    if (R==B) {
    R=511500;
    S=0.0179;
    }
    if (R==C) {
    R=738000;
    S=0.0199;
    }
    if (R==J) {
    R=694000;
    S=0.0199;
    }
      cout<<"Enter number of years (1-6) : ";
      cin>>x;
      if (x<4)
      S=S-0.1;
      if (y>6) 
      cout<<"Error!, number of year is not in range"<<endl;
      else {
           cout<<"Enter percentage of down payment : ";
           cin>>y;
           }
      a=R-(R*S);
      b=a*S*x;
      c=(a+b)/(12*x);
      cout<<"--------------------------------------"<<endl;
      cout<<"Financing amount : "<<a<<endl;
      cout<<"Amount of interest : "<<b<<endl;
      cout<<"Monthly payment : "<<c<<endl;
    
    
    system ("pause");
    return 0;
}
