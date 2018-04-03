// 5920503815 Pattaraporn Puttaphrom
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c,w,y,z;
    cout<<" Enter coefficients a,b and c: ";
    cin>>a>>b>>c;
    z=(pow(b,2)-4*a*c);
    if(z==0)
    {
            w= (-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
            cout<<"Roots are real and same."<<endl;
            cout<<" x1=x2= "<<w<<""<<endl;
    }    
    else if(z>=1)
    {
         w=(-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
         y=(-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a); 
         cout<<"Roots are real and differnt."<<endl;
         cout<<" x1= "<<w<<""<<endl;
         cout<<" x2= "<<y<<""<<endl;
    }
    else if(z<0)
    {
          w=( -b/(2*a));
           
         y=sqrt(-(pow(b,2)-(4*a*c)))/(2*a);
          
          
          cout<<" Roots are complex and differnt."<<endl;
          cout<<" x1= "<<w<<" + "<<y<<" i"<<endl;
           cout<<" x2= "<<w<<" - "<<y<<" i"<<endl;
    }
         
    
    
    
    
    
    
    
    
    
    
    system ("pause");
    return 0;
}
