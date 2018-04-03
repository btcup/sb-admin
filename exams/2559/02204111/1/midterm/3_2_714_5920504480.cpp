//5920504480 asamaphon fongsieng
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x1,x2,a,b,c,dcmn;
     char i;
    cout<<"Enter coefficients a, b and c:";
    cin>>a>>b>>c;
    dcmn=(b*b)-4ac;
    if(dcmn>0)
        {cout<<"Roots are real and differrent."<<endl;
    x1=((-b)+sqrt(b*b+4*a*c))/(2*a);
    x2=((-b)-sqrt(b*b+4*a*c))/(2*a);
        cout<< "x1 = "<<x1<<endl;
        cout<< "x2 = "<<x2<<endl;}
     
    else if(dcmn == 0)
      { cout<<"Roots are real and same."<<endl;
     x1=((-b)+sqrt(b*b+4*a*c))/(2*a);
       cout<< "x1 = x2 = "<<x1<<endl;}
    else if(dcmn<0)
       {cout<<"Roots are complex and different."<<endl;
     x1= ( (-b)/(2*a) )+(sqrt(-(b*b+4*a*c))/(2*a) )*'i' ;
     x2= ( (-b)/(2*a) )+(sqrt(-(b*b+4*a*c))/(2*a) )*'i';
       cout<< "x1 = "<<x1<<endl;
       cout<< "x2 = "<<x2<<endl;}
       
   
    


    system("pause");
    return 0;

}
