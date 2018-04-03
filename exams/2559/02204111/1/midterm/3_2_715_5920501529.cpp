//5920501529 Tawanna Sangmake
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c,d;
    float x1,x2,x3,x4,x5;
    cout<<"Enter coefficients a, b and c: ";
    cin>>a>>b>>c;
    cout<<endl;
    d=(b*b)-(4*a*c);
    if(d>0)
    { x1=((-b)+sqrt(pow(b,2)-(4*a*c)))/(2*a);
      x2=((-b)-sqrt(pow(b,2)-(4*a*c)))/(2*a);
      cout<<"Roots are real and different."<<endl;
      cout<<"x1 = "<<x1<<endl;
      cout<<"x2 = "<<x2<<endl;
    }
    else if(d==0)
    { x3=((-b)+sqrt(pow(b,2)-(4*a*c)))/(2*a);
      cout<<"Roots are real and same."<<endl;
      cout<<"x1 = x2 = "<<x3<<endl;
     
    }
    else if(d<0)
    { x4=(sqrt(-(pow(b,2)-(4*a*c)))/(2*a));
      x5=(sqrt(-(pow(b,2)-(4*a*c)))/(2*a));
      cout<<"Roots are complex and different."<<endl;
      cout<<"x1 = -0.5 + "<<x4<<"i"<<endl;
      cout<<"x2 = -0.5 - "<<x5<<"i"<<endl;
    }
    
    system("pause");
    return 0;
}
