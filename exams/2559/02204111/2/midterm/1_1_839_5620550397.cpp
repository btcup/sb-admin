#include<iostream>
using namespace std;
int main()
{
char a;
int b,c;
double x,y,z;
cout<<"------ Car lease calculator -----------"<<endl;
cout<<"Enter car model :";
cin>>a;
cout<<"Enter number of years (1-6) :";
cin>>b;
if(b>6)
cout<<"Error! number of years is not in rage"<<endl;
else{
          cout<<"Enter percentage of down payment :";
cin>>c;
if(a=='A')
x=1385000-(1385000*c/100);
if(a=='B')
x=511500-(511500*c/100);
if(a=='C')
x=738000-(738000*c/100);
if(a=='J')
x=694000-(694000*c/100);
       if(a=='A'&&b>=4&&b<=6)
     y=x*2.09/100*b;
     else if(a=='A'&&b<4)
     y=x*(2.09-0.1)/100*b;
     else if(a=='B'&&b>=4&&b<=6)
     y=x*1.79/100*b;
     else if(a=='B'&&b<4)
     y=x*(1.79-0.1)/100*b;
     else if(a=='C'&&b>=4&&b<6)
     y=x*1.99/100*b;
     else if(a=='C'&&b<4)
     y=x*(1.99-0.1)/100*b;
     else if(a=='J'&&b>=4&&b<6)
     y=x*1.99/100*b;
     else if(a=='J'&&b<4)
     y=x*(1.99-0.1)/100*b;
cout<<"----------------------------------------"<<endl;
cout<<"Finacing amount :"<<x<<endl;
cout<<"Amount of interest :"<<y<<endl;
z=(x+y)/(b*12);
cout<<"Monthly payment :"<<z<<endl;
     }
system("pause");
return 0;
}
