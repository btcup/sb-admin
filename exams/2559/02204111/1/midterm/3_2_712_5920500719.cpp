//5920500719 nattapong onsri
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,x1,x2;
    cout<<"Enter coefficients a, b and c:";
    cin>>a>>b>>c;
    x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    cout<<"Roots are real and differend."<<endl;
    cout<<"x1 ="<<x1<<endl;
    cout<<"x2 ="<<x2<<endl;
  
    system("pause");
    return 0;
} 
