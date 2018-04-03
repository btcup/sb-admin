#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 const int downpayment=25;
 char model;
 int salary,year;
 int x;
 float z,y;
 cout<<"----- Car lease calculator -----"<<endl  ; 
 cout<<"Enter car model: ";
 cin>>model; 
 cout<<"Enter number of years (1-6): ";
 cin>>year;
 cout<<"Enter your salary :";
 cin>>salary;
 cout<<"--------------------------------"<<endl;

 if(model=='A')
 {
   x=1385000-1385000*downpayment/100;
   cout<<"Financing amount: "<<x<<endl;
   y=x*(2.09/100)*year;
   cout<<"Amount of interest:"<<y<<endl; 
   z=(x+y)/(year*12.0);
   cout<<"Monthly payment: "<<z<<endl;
     
}
 else if (model=='B')
{  x=511500-511500*downpayment/100;
   cout<<"Financing amount: "<<x<<endl;
   y=x*(1.79/100)*year;
   cout<<"Amount of interest:"<<y<<endl; 
   z=(x+y)/(year*12.0);
   cout<<"Monthly payment: "<<z<<endl;
      }
 else if (model=='C')
 {
      x=738000-738000*downpayment/100;
   cout<<"Financing amount: "<<x<<endl;
   y=x*(1.99/100)*year;
   cout<<"Amount of interest:"<<y<<endl; 
   z=(x+y)/(year*12.0);
   cout<<"Monthly payment: "<<z<<endl;}
 else if (model=='J')
  {
    x=694000-694000*downpayment/100;
   cout<<"Financing amount: "<<x<<endl;
   y=x*(1.99/100)*year;
   cout<<"Amount of interest:"<<y<<endl; 
   z=(x+y)/(year*12.0);
   cout<<"Monthly payment: "<<z<<endl;  }
   
   if(salary/2>=z)
   cout<<"Good decision,Enjoy your new car\n";
   else
   cout<<"The monthly payment is over than 50% of your salary!!!\n";
 
system("pause");
return 0;    
}
