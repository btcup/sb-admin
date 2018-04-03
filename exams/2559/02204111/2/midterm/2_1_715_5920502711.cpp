#include <iostream>
using namespace std;
int main()
{
    char modle;
    int year,salary,h;
    double interest,payment,y,z,m50,n,x,Financing;
    cout<<"------Car lease calculator------"<<endl;
    cout<<"Enter car model:";
    cin>>modle;
    cout<<"Enter number of year(1-6):";
    cin>>year;
    cout<<"Enter your salary:";
    cin>>salary;
    cout<<"------------------------"<<endl;
    if(modle=='A')
    {
           x=(1385000*25)/100;
           Financing=1385000-x;
           cout<<"Financing amount:"<<Financing<<endl;
           y=2.09/100; 
           interest=Financing*y*year;
           cout<<"Amount of interest:"<<interest<<endl;      
    }
    else if(modle=='B')
    {
           x=(511500*25)/100;
           Financing=511500-x;
           cout<<"Financing amount:"<<Financing<<endl;
           y=1.79/100;
           interest=Financing*y*year;
           cout<<"Amount of interest:"<<interest<<endl;       
    }
    else if(modle=='C')
    {
           x=(738000*25)/100;
           Financing=738000-x;
           cout<<"Financing amount:"<<Financing<<endl; 
           y=1.99/100;
           interest=Financing*y*year;
           cout<<"Amount of interest:"<<interest<<endl;      
    }
    else if(modle=='D')
    {
           x=(694000*25)/100;
           Financing=694000-x;
           cout<<"Financing amount:"<<Financing<<endl; 
           y=1.99/100;
           interest=Financing*y*year;
           cout<<"Amount of interest:"<<interest<<endl;      
    }
    else 
    {
           x=(694000*25)/100;
           Financing=694000-x;
           cout<<"Financing amount:"<<Financing<<endl; 
           y=1.99/100;
           interest=Financing*y*year;
           cout<<"Amount of interest:"<<interest<<endl;      
    }
    h=year*12;
    payment=(Financing+interest)/h;
    cout<<"Monthy payment"<<payment<<endl;
    z=salary-payment;
    m50=salary/2;
    n=m50-z;
    if(n>0)
    {
           cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
    }
    else
    {
       cout<<"Good decision, Enjoy your new car"<<endl; 
    }      
    system ("pause");
    return 0;
}    
    
