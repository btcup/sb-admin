//5620503615 MISSWARAPAPAR SUKRONG
#include <iostream>
using namespace std;
int main ()
{
    const float down_payment=0.25;
    char model;
    int year,salary,x;
    float financing;
    double amount,monthly,y,z;
    
    cout<<"------- Car lease calculator -----------"<<endl;
    cout<<"Enter car model:";cin>>model;
    cout<<"Enter number of years (1-6):";cin>>year;
    cout<<"Enter you salary:";cin>>salary;
    cout<<"----------------------------------------"<<endl;
    
         switch (model)
         {
          case 'A' : x=1385000,y=(2.09/100); break;
          case 'B' : x=511500,y=(1.79/100); break;
          case 'C' : x=738000,y=(1.99/100); break;
          case 'J' : x=694000,y=(1.99/100); break;
          
         }
           if (model=='A'||model=='B'||model=='C'||model=='J')
              {
                 financing=x-(down_payment*x);
                 amount=(x-(down_payment*x))*y*year;
                 monthly=(financing+amount)/(12.0*year);
                 //z=0.5*salary
                 z=0.5*salary;
                 cout<<"Financing amount:"<<financing<<endl;
                 cout<<"Amount of interest:"<<amount<<endl;
                 cout<<"Monthly payment:"<<monthly<<endl;
                           if (monthly<z)
                           {
                           cout<<"Good decision,Enjoy your new car"<<endl;
                           }
                           else
                           {
                           cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
                           }
              } 
              system ("pause");
    return 0;
}                             
