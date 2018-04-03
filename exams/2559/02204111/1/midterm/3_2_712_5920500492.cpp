#include<iostream> //5920500492 phattharaphon kaewphikul
#include<cmath>
using namespace std;
int main()
{
    char i;
    double a,b,c,z,x1,x2;
    cout<<"Enter coefficients a,b and c: ";
    cin>>a>>b>>c;
    z=(pow(b,2))-4*a*c;
    if(z>0)
    {
               cout<<"Roots are real and different."<<endl;
               cout<<"x1="<<-b+(sqrt(pow(b,2))-(sqrt(4*a*c)))/2*a<<endl;
               cout<<"x2="<<-b-(sqrt(pow(b,2))-(sqrt(4*a*c)))/2*a<<endl;
    }
    else if(z=0)
    {
               cout<<"Roots are real and same."<<endl;
               cout<<"x1=x2="<<-b+(sqrt(pow(b,2))-(sqrt(4*a*c)))/2*a<<endl;
    }
    else
    {
               cout<<"Roots are complex and different.";
               cout<<"x1="<<(-b/2*a)<<"+"<<((sqrt(-(pow(b,2)-4*a*c)))/2*a)<<"i"<<endl;
               cout<<"x2="<<(-b/2*a)<<"-"<<((sqrt(-(pow(b,2)-4*a*c)))/2*a)<<"i"<<endl;
    }                     
system("pause");
return 0;
}    
    
    
