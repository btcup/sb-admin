#include<iostream>               //5920503548 Rungsimun  Kwanpunngam
#include<cmath>
using namespace std;
int main()
{
    char model;
    int numy,sala,mount;
    float finan,amount,month,sala50,monthly;
    const float down=1/4;
    cout<<"------- Car lease calculator ------\n";
    cout<<"Enter car model:";
    cin>>model;
    if(model=='A')
    {
     cout<<"Enter number of year(1-6):";
     cin>>numy;
     cout<<"Enter your salary:";
     cin>>sala;
     finan=1385000-(1358500*down);
     amount=finan*(2.09/100)*numy;
     mount=numy*12;
     monthly=(finan+amount)/mount;
     cout<<"-----------------------------------\n";
     cout<<"Financing amount:"<<finan<<endl;
     cout<<"Amount of interest:"<<amount<<endl;
     cout<<"Monthly pay ment:"<<monthly<<endl;
    }
    else if(model=='B')
    {
     cout<<"Enter number of year(1-6):";
     cin>>numy;
     cout<<"Enter your salary:";
     cin>>sala;
     finan=511500-(511500*down);
     amount=finan*(1.79/100)*numy;
     mount=numy*12;
     monthly=(finan+amount)/mount;
     cout<<"-----------------------------------\n";
     cout<<"Financing amount:"<<finan<<endl;
     cout<<"Amount of interest:"<<amount<<endl;
     cout<<"Monthly pay ment:"<<monthly<<endl;
    }
    else if(model=='C')
    {
     cout<<"Enter number of year(1-6):";
     cin>>numy;
     cout<<"Enter your salary:";
     cin>>sala;
     finan=738000-(738000*down);
     amount=finan*(1.99/100)*numy;
     mount=numy*12;
     monthly=(finan+amount)/mount;
     cout<<"-----------------------------------\n";
     cout<<"Financing amount:"<<finan<<endl;
     cout<<"Amount of interest:"<<amount<<endl;
     cout<<"Monthly pay ment:"<<monthly<<endl;
    }
     else if(model=='J')
     {
     cout<<"Enter number of year(1-6):";
     cin>>numy;
     cout<<"Enter your salary:";
     cin>>sala;
     finan=694000-(694000*down);
     amount=finan*(1.99/100)*numy;
     mount=numy*12;
     monthly=(finan+amount)/mount;
     cout<<"-----------------------------------\n";
     cout<<"Financing amount:"<<finan<<endl;
     cout<<"Amount of interest:"<<amount<<endl;
     cout<<"Monthly pay ment:"<<monthly<<endl;
    }
    sala50=sala/2;
    if(monthly>sala50)
    {
     cout<<"The monthly payment is over than 50% of your salary!!";                 
     }
    else
    cout<<"Good decision, Enjoy your new car\n";
         
    
    system("pause");
    return 0;
}
