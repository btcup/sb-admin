// 5420501597 {716} 1.
#include <iostream>
using namespace std;
int main()
{
char a;
float x,y,m,n,o,p;
int A=1385000,B=511500,C=738000,J=694000;
cout<<"-------car lease calculator-------"<<endl;

cout<<"Enter car model: ";
cin>>a;

cout<<"Enter number of years(1-6): ";
cin>>x;
if (x>6)
cout<<"Error!,number of years is not in range"<<endl;
cout<<"Enter percentage of down payment: ";
cin>>y;

cout<<"---------------------------------------------------"<<endl;
{
if(a==A);
cout<<"Financing amount: "<<m<<endl;
m=A*0.25;
cout<<"Amount of interesr: "<<n<<endl;
n=m*2.09*x;
cout<<"Mothly payment: "<<o<<endl;
o=m+n/y;
}
{
(a==B);
cout<<"Financing amount: "<<m<<endl;
m=A*0.25;
cout<<"Amount of interesr: "<<n<<endl;
n=m*1.79*x;
cout<<"Mothly payment: "<<o<<endl;
o=m+n/y;
}
{
(a==C);
cout<<"Financing amount: "<<m<<endl;
m=A*1.99;
cout<<"Amount of interesr: "<<n<<endl;
n=m*1.99*x;
cout<<"Mothly payment: "<<o<<endl;
o=m+n/y;
}
{
(a==J);
cout<<"Financing amount: "<<m<<endl;
m=A*0.25;
cout<<"Amount of interesr: "<<n<<endl;
n=m*1.99*x;
cout<<"Mothly payment: "<<o<<endl;
o=m+n/y;
}






//cout<<"Error!,number of years is not in range"<<endl;
system ("pause");
return 0;
}
