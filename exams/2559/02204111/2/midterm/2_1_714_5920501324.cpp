//5920501324 Name : ketsaraphon Supaphol
#include <iostream>
using namespace std;
int main()
{
    const int p=25;
    int year,salary;
    double f,payment,money,y,t;
    char type;
    cout<<"-------Car lease calcutor----------"<<endl;
    cout<<"Enter car model : ";
    cin>>type;
    cout<<"Enter number of years (1-6) : ";
    cin>>year;
    cout<<"Enter your Salary : ";
    cin>>salary;
    cout<<"-----------------------------------"<<endl;
    if(type=='A')
    {
                 money=1385000*0.25;
                 f=1385000-money;
                 t=f*2.09*year;
                 payment=(f+t)/(12*year);
                 y=salary/2;
                 cout<<"Finacing amount : "<<f<<endl;
                 cout<<"Amount of interest :" <<t<<endl;
                 cout<<"Monthly payment : "<<endl;
                 if(payment>y)
                 cout<<"The monthly payment is over than 50% of your salary!"<<endl;
                 else if(payment<=y)
                 cout<<"Good decision, Enjoy your new car"<<endl;
    }
    else if(type=='B')
    {
                 money=511500*0.25;
                 f=511500-money;
                 t=f*1.79*year;
                 payment=(f+t)/(12*year);
                 y=salary/2;
                 cout<<"Finacing amount : "<<f<<endl;
                 cout<<"Amount of interest :" <<t<<endl;
                 cout<<"Monthly payment : "<<payment<<endl;
                 if(payment>y)
                 cout<<"The monthly payment is over than 50% of your salary!"<<endl;
                 else if(payment<=y)
                 cout<<"Good decision, Enjoy your new car"<<endl;
    }
    else if(type=='C')
    {
                 money=738000*0.25;
                 f=738000-money;
                 t=f*1.99*year;
                 payment=(f+t)/(12*year);
                 y=salary/2;
                 cout<<"Finacing amount : "<<f<<endl;
                 cout<<"Amount of interest :" <<t<<endl;
                 cout<<"Monthly payment : "<<payment<<endl;
                 if(payment>y)
                 cout<<"The monthly payment is over than 50% of your salary!"<<endl;
                 else if(payment<=y)
                 cout<<"Good decision, Enjoy your new car"<<endl;
    }
    else if(type=='J')
    {
                 money=694000*0.25;
                 f=694000-money;
                 t=f*1.99*year;
                 payment=(f+t)/(12*year);
                 y=salary/2;
                 cout<<"Finacing amount : "<<f<<endl;
                 cout<<"Amount of interest :" <<t<<endl;
                 cout<<"Monthly payment : "<<payment<<endl;
                 if(payment>y)
                 cout<<"The monthly payment is over than 50% of your salary!"<<endl;
                 else if(payment<=y)
                 cout<<"Good decision, Enjoy your new car"<<endl;
    }
    system("pause");
    return 0;
}
