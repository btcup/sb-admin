//5920501651 Panupong Diskaprakai
#include<iostream>
using namespace std;
int main()
{
    const int downpayment=25;
    char model;
    int salary,year,month;
    double x,y,z;
    cout<<"-----Car lease calculator-----"<<endl;
    cout<<"Enter car model:";
    cin>>model;
    cout<<"Enter number of years(1-6):";
    cin>>year;
    cout<<"Enter your salary:";
    cin>>salary;
    month=year*12;
    if(model=='A')
      {
           x=(1385000-1001375);//salary*25)/100;
           cout<<"Financing amount:"<<x<<endl;
           y=x*2.09/100*year;
           cout<<"Amount of interest:"<<y<<endl;
           z=(x+y)/ month;
           cout<<"Monthly payment:"<<z<<endl;
        }
        if(model=='B')
        {
           x=(511500-salary*25)/100;
           cout<<"Financing amount:"<<x<<endl;
           y=x*1.79*year;
           cout<<"Amount of interest:"<<y<<endl;
           z=(x+y)/ month;
           cout<<"Monthly payment:"<<z<<endl;       
        }
        if(model=='C')
        { 
           x=(738000-salary*25)/100;
           cout<<"Financing amount:"<<x<<endl;
           y=x*1.99*year;
           cout<<"Amount of interest:"<<y<<endl;
           z=(x+y)/ month;
           cout<<"Monthly payment:"<<z<<endl;   
        }
        if(model=='J')
        {
           x=(694000-salary*25)/100;
           cout<<"Financing amount:"<<x<<endl;
           y=x*1.99*year;
           cout<<"Amount of interest:"<<y<<endl;
           z=(x+y)/ month;
           cout<<"Monthly payment:"<<z<<endl;
        }   
    if(z>salary/2)
           cout<<"The monthly payment is over the 50% of your salary"<<endl;
     else
           cout<<"Good decision,Enjoy your new car"<<endl;      
    system("pause");
    return 0;
}
