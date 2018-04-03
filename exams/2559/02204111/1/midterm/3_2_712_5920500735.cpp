//5920500735 Tanakorn Ti-ma 
#include <iostream> 
#include <cmath>
using namespace std;  
int main ()
{   float a,b,c,d,x1,x2,;
    cout<<"Enter coefficients a,b and c: ";
    cin>>a>>b>>c;
    d=pow(b,2)-(4*a)*c;
    if(d>0) 
     {cout<<"x1 = "<<-b+sqrt (pow(b,2)-4*a*c)/2*a<<endl;
      cout<<"x2 = "<<-b-sqrt (pow(b,2)-4*a*c)/2*a<<endl;}
    else if (d==0)
      {cout<<"x1 = x2 = "<<((-b)+(sqrt((pow(b,2)-(4*a)*c)))/2*a)<<endl;}
    else if (d<0)
      {cout<<"x1 = "<<(-b)/2*a<< " + "<<((sqrt((-pow(b,2)-(4*a)*c)))/2*a)<<"i"<<endl;
      cout<<"x2 = "<<(-b)/2*a<< " - "<<((sqrt((-pow(b,2)-(4*a)*c)))/2*a)<<"i"<<endl;}
    system ("pause");
    return 0;
}
