#include<iostream>
using namespace std;
int main()
{
    char model;
    int x,y,;
    double F,A,M;
    cout<<"-------Car Lease calculator -------"<<endl;
    cout<<"Enter car model: ";
    cin>>model;
    cout<<"Enter number of years (1-6): ";
    cin>>x;
    if(x>=1&&x<=6)
    {
          cout<<"Enter percentage of down payment: ";
          cin>>y;
          cout<<"-----------------------------------"<<endl;
          if(model=='A')
          {
                if(x<4)
                {
                 F=1385000-(1385000/100)*y;
                 A=F*(2.09-0.1)/100*x;
                 M=(F+A)/(12*x);
                }
                else if(x>=4)
                {
                 F=1385000-(1385000/100)*y;
                 A=F*(2.09)/100*x;
                 M=(F+A)/(12*x);
                }
          }
          else if(model=='B')
          {
                if(x<4)
                {
                 F=511500-(511500/100)*y;
                 A=F*(1.79-0.1)/100*x;
                 M=(F+A)/(12*x);
                }
                else if(x>=4)
                {
                 F=511500-(511500/100)*y;
                 A=F*(1.79)/100*x;
                 M=(F+A)/(12*x);
                }
          }
          else if(model=='C')
          {
                if(x<4)
                {
                 F=738000-(738000/100)*y;
                 A=F*(1.99-0.1)/100*x;
                 M=(F+A)/(12*x);
                }
                else if(x>=4)
                {
                 F=738000-(738000/100)*y;
                 A=F*(1.99)/100*x;
                 M=(F+A)/(12*x);
                }
          }
          else if(model=='J')
          {
                if(x<4)
                {
                 F=694000-(694000/100)*y;
                 A=F*(1.99-0.1)/100*x;
                 M=(F+A)/(12*x);
                }
                else if(x>=4)
                {
                 F=694000-(694000/100)*y;
                 A=F*(1.99)/100*x;
                 M=(F+A)/(12*x);
                }
                }
          cout<<"Financing amount:"<<F<<endl;
          cout<<"Amount of interest:"<<A<<endl;
          cout<<"Monthly payment:"<<M<<endl;
          
        
    }
    else 
    cout<<"Error!,number of years is not in range"<<endl;
     

system("pause");
return 0;
}


