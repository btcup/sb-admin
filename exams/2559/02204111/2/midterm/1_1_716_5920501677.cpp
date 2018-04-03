//5920501677 Lucksika Suksomdan
#include<iostream>
using namespace std;
int main()
{
    int year,down;
    double finan,amount,pay;
    char car;
    cout<<"------- Car lease calculator -------"<<endl;
    cout<<"Enter car model: ";
    cin>>car;
    cout<<"Enter number of years(1-6): ";
    cin>>year;
    if(year>=1&&year<=6)
    {          
    cout<<"Enter percentage of down payment: ";    
    cin>>down;
    cout<<"----------------------------------------"<<endl;    
    if(car=='A')
    {
    finan = 1385000-((1385000*down)/100);
    
    if(year<4)
    {
    amount = finan*1.99*year/100;
    }
    else
    {
    amount = finan*2.09*year/100;
    }
    pay = (finan+amount)/(year*12);
    }
    else if(car=='B')
    {
    finan = 511500-((511500*down)/100);
    
    if(year<4)
    {
    amount = finan*1.69*year/100;
    }
    else
    {
    amount = finan*1.79*year/100;
    }
    pay = (finan+amount)/(year*12);
    }
    else if(car=='C')
    {
    finan = 738000-((738000*down)/100);
    
    if(year<4)
    {
    amount = finan*1.89*year/100;
    }
    else
    {
    amount = finan*1.99*year/100;
    }
    pay = (finan+amount)/(year*12);
    }
    else if(car=='J')
    {
    finan = 694000-((694000*down)/100);
    if(year<4)
    {
    amount = finan*1.89*year/100;
    }
    else
    {
    amount = finan*1.99*year/100;
    }
    pay = (finan+amount)/(year*12);
    }
    else ;
    cout<<"Financing amount: "<<finan<<endl;
     cout<<"Amount of interest: "<<amount<<endl;
     cout<<"Monthly payment: "<<pay<<endl;
    }
    
    else
    {
    cout<<"Error!, number of years is not in range"<<endl;
    }
 system("pause");
    return 0;   
    }
