//5920502533 Yossapon Nebsri
#include<iostream>
using namespace std;
int main()
{
    char n; 
    int d,x,e,y,p;
    float z,a;
    cout<<"------Car lease calculator------"<<endl;
    cout<<"Enter car model: ";
    cin>>n;
    cout<<"Enter number of year (1-6): ";
    cin>>y;
    if( y>6||y<0)
    {
    cout<<"Error!,number of years is not in range";
    }
    cout<<"Enter percentage of down payment: ";
    cin>>p;
     if (n=='A')
    {
       
       e=12*y;
       x=1385000-(1385000/3.030305);
       z=(x*0.0209)*y;
       a=(x+z)/e;
       cout<<"Financing amount: "<<x<<endl;
       cout<<"Amount of interest: "<<z<<endl;
       cout<<"Monthly payment: "<<a<<endl;
       }
    else if (n=='B')
    {
       d=100/p;
       e=12*y;
       x=511500-(511500/d);
       z=(x*0.0179)*y;
       a=(x+z)/e;
       cout<<"Financing amount: "<<x<<endl;
       cout<<"Amount of interest: "<<z<<endl;
       cout<<"Monthly payment: "<<a<<endl;
       }
    else if (n=='C')
    {
       d=100/p;
       e=12*y;
       x=738000-(738000/d);
       z=(x*0.0189)*y;
       a=(x+z)/e;
       cout<<"Financing amount: "<<x<<endl;
       cout<<"Amount of interest: "<<z<<endl;
       cout<<"Monthly payment: "<<a<<endl;
       }
    else if (n=='J')
    {
       d=100/p;
       e=12*y;
       x=694000-(694000/d);
       z=(x*0.0199)*y;
       a=(x+z)/e;
       cout<<"Financing amount: "<<x<<endl;
       cout<<"Amount of interest: "<<z<<endl;
       cout<<"Monthly payment: "<<a<<endl;
       }
       system ("pause");
       return 0;
}       
