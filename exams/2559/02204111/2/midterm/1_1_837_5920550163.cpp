//5920550163 thitiphong thong-oon
#include<iostream>
using namespace std;
int main()
{
char x;
float y,z,v,i,p,q,e;
cout<<"------- car lease calculator -----------"<<endl;
cout<<"Enter car model :";
cin>>x;
cout<<"Enter number of years (1-6) :";
cin>>y;
if(y>=1&&y<=6)
 {
 cout<<"Enter percentage of down payment :"; 	
 cin>>z;
 if(x='A')
 {
 
 v=float(1385000)-((1385000/100.0)*z);
 cout<<"----------------------------------------"<<endl;
 cout<<"financing amount :"<<v<<endl;
 i=v*(2.09/100.0)*y;
 cout<<"Amount of interrest :"<<i<<endl;
 p=(i+v)/(y*12);
 cout<<"Monthly payment :"<<p<<endl;
 }
 else if(x='B')
 {
 q=1.79;
 e=(511500/100);
 cout<<"----------------------------------------"<<endl;
  v=(511500)-(z*e);
 cout<<"financing amount :"<<v<<endl;
 i=v*(q/100.0)*y;
 cout<<"Amount of interrest :"<<i<<endl;
 p=(i+v)/(y*12);
 cout<<"Monthly payment :"<<p<<endl;
 }
 else if(x='C')
 {
 q=1.99;
 e=(738000/100);
 cout<<"----------------------------------------"<<endl;
  v=(738000)-(z*e);
 cout<<"financing amount :"<<v<<endl;
 i=v*(q/100)*y;
 cout<<"Amount of interrest :"<<i<<endl;
 p=(i+v)/(y*12);
 cout<<"Monthly payment :"<<p<<endl;
 }
 else if(x='J')
 {
 q=1.99;
 e=(694000/1000);
 cout<<"----------------------------------------"<<endl;
 v=float(694000)-(z*e);
 cout<<"financing amount :"<<v<<endl;
 i=v*(q/100.0)*y;
 cout<<"Amount of interrest :"<<i<<endl;
 p=(i+v)/(y*12);
 cout<<"Monthly payment :"<<p<<endl;
 }
 }
else
{
	cout<<"Error!,number of years is not range"<<endl;
}


system("pause");
return 0;
}
