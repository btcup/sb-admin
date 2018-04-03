//5920503378 Chanthapong yamyim
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int year,salary;
    double finance,interest,payment,down; 
    char model;
 cout<<"------- Car  lease calculator -----------"<<endl;
 cout<<"Enter car model: ";
 cin>>model;
 cout<<"Enter number of years (1-6): ";
 cin>>year;
 cout<<"Enter your salary: ";
 cin>>salary;
 cout<<"----------------------------------------"<<endl;
    if(model=='A')
    {
       finance=(1385000)-(1385000*0.25);
       interest=finance*(2.09/100)*year;
       
    }
    if(model=='B')
    {
       finance=511500-(511500*0.25);
       interest=finance*(1.79/100)*year;
    }
    if(model=='C')
    {
       finance=738000-(738000*0.25);
       interest=finance*(1.99/100)*year;
    }
    if(model=='J')
    {
       finance=694000-(694000*0.25);
       interest=finance*(1.99/100)*year;
    }   
 cout<<"Financing amount: "<<finance<<endl;
 cout<<"Amount of interest: "<<interest<<endl;
 payment=(finance+interest)/(year*12);
 cout<<"Monthly payment: "<<payment<<endl;

 
 
 
 if (payment<=salary/2)
 cout<<"Good decision, Enjoy your new car"<<endl;
 else if (payment>salary/2)
 cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
system ("pause");
return 0;
}

