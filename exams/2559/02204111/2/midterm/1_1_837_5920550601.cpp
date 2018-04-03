#include <iostream> //5920550601 Rattee Jirasittanawat
using namespace std;
int main()
{
    char x;
    int a,b,c,j;
    double y,z;
    a = 1385000;
    b = 511500;
    c = 738000;
    j = 694000;
    
    cout<<"Enter car modle: ";
    cin>>x;
    cout<<"Enter number of year (1-6): ";
    cin>>y;
    cout<<"Enter percentage of down payment: ";
    cin>>z;
    {
   if(a-=a/2)
   cout<<"Financing amount: "<<a<<endl;
   else if(y<4)
   cout<<"Amount of interest: "<<y<<(y*0.1/100);
   else if(x+y/z)
   cout<<"Monthly payment: "<<z;
   else
   cout<<"Error!,number of year is not in range";
}
{
   if(b-=b/2)
   cout<<"Financing amount: "<<b<<endl;
}
if(c-=c/2)
   cout<<"Financing amount: "<<c<<endl;
   
   if(j-=j/2)
   cout<<"Financing amount: "<<j<<endl;

 system ("pause");
 return 0;    
}
