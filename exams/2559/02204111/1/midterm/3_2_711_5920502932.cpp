//5920502932 Sithichok Sudsan
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double a,b,c,x,x1,x2,x12,x22;
  cout<<"Enter coefficients a,b and c:";
  cin>>a>>b>>c;
  cout<<endl;
  x=pow(b,2)-(4*a*c);  
  if(x>0)
  {
    x1=((-b)+sqrt(pow(b,2)-(4*a*c)))/(2*a);
    x2=((-b)-sqrt(pow(b,2)-(4*a*c)))/(2*a);
    cout<<"Roots are real and different."<<endl;
    cout<<"x1 = "<<x1<<endl;
    cout<<"x2 = "<<x2<<endl;     
  }  
  else if(x==0)
  {
    x1=((-b)+sqrt(pow(b,2)-(4*a*c)))/(2*a);  
    cout<<"Roots are real and same."<<endl;
    cout<<"x1 = x2 = "<<x1<<endl; 
  }
  else if(x<0)
  {
    x1=((-b)/(2*a));//+(sqrt(-(pow(b,2)-(4*a*c))))/(2*a);
    x2=((-b)/(2*a));//-(sqrt(-(pow(b,2)-(4*a*c))))/(2*a);
    x12=(sqrt(-(pow(b,2)-(4*a*c))))/(2*a);
    x22=(sqrt(-(pow(b,2)-(4*a*c))))/(2*a);
    cout<<"Roots are complex and different."<<endl;
    cout<<"x1 = "<<x1<<"+"<<x12<<"i"<<endl;
    cout<<"x2 = "<<x2<<"-"<<x22<<"i"<<endl;     
  }    
  system("pause");
  return 0;    
}

