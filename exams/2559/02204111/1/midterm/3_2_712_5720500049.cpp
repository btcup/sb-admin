//5720500049
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
float a,b,c,d,e,i;
i=i;
cout<<"Enter coefficients a, b and c: ";
cin>>a>>b>>c;

if(a!=c&&a!=b&&c!=b)
{
cout<<"roots are real and different"<<endl;
cout<<"x1 = "<<(-b+(sqrt(pow(b,2)-4*a*c)))/(2*a)<<endl;
cout<<"x2 = "<<(-b-(sqrt(pow(b,2)-4*a*c)))/(2*a)<<endl;
}
                
else if(a==b||a==c||b==c)   
{
cout<<"roots are real and same"<<endl;
cout<<"x1 = x2 = "<<(-b+(sqrt(pow(b,2)-4*a*c)))/(2*a)<<endl;

}
else if(a==b&&a==c&&b==c)
{
cout<<"roots are complex and different"<<endl;
cout<<"x1 = "<<((((-b)/2*a)+(sqrt(pow(b,2)-4*a*c)))/(2*a))*i<<endl;
cout<<"x2 = "<<((((-b)/2*a)-(sqrt(pow(b,2)-4*a*c)))/(2*a))*i<<endl;
}
system ("pause");
return 0;
}
