#include <iostream>
using namespace std;
int main()
{
    char model;
    int  year,x;
    cout<<"car lease calculator"<<endl;
    cout<<"Enter car model:";
    cin>>model;
    cout<<"Enter number of years (1-6):";
    cin>>year;
    cout<<"Enter percentage of down payment:";
    cin>>x;
    
    if(model=='A')
    cout<<"Financing amount:"<<138500-(138500*(x/100))<<endl;
    {
    if(year<4)
    cout<<"Amount of interest:"<<(138500-(138500*(x/100)))*2.08791*year<<endl;
    cout<<"Mouthly payment:"<<(138500-(138500*(x/100)))+((138500-(138500*(x/100)))*2.08791*year)/(year*12)<<endl;
    else if (year>4)
    cout<<"Amount of interest:"<<(138500-(138500*(x/100)))*2.09*year<<endl;
    cout<<"Mouthly payment:"<<(138500-(138500*(x/100)))+((138500-(138500*(x/100)))*2.09*year)/(year*12)<<endl;
    }
    else if(model=='B')
    cout<<"Financing amount:"<<511500-(511500*(x/100))<<endl;
    {
    if(year < 4)
    cout<<"Amount of interest:"<<(511500-(511500*(x/100)))*1.78821*year<<endl;
    cout<<"Mouthly payment:"<<(511500-(511500*(x/100)))+((511500-(511500*(x/100)))*1.78821*year)/(year*12)<<endl;
    else if (year >= 4)
    cout<<"Amount of interest:"<<(511500-(511500*(x/100)))*2.09*year<<endl;
    cout<<"Mouthly payment:"<<(511500-(511500*(x/100)))+((511500-(511500*(x/100)))*1.79*year)/(year*12)<<endl;
    }
    else if(model=='C')
    cout<<"Financing amount:"<<738000-(738000*(x/100))<<endl;
    {
    if(year < 4)
    cout<<"Amount of interest:"<<(738000-(738000*(x/100)))*1.98801*year<<endl;
    cout<<"Mouthly payment:"<<(738000-(738000*(x/100)))+((738000-(738000*(x/100)))*1.98801*year)/(year*12)<<endl;
    else if (year >= 4)
    cout<<"Amount of interest:"<<(738000-(738000*(x/100)))*1.99*year<<endl;
    cout<<"Mouthly payment:"<<(738000-(738000*(x/100)))+((738000-(738000*(x/100)))*1.99*year)/(year*12)<<endl;
    }
    else if(model=='D')
    cout<<"Financing amount:"<<694000-(694000*(x/100))<<endl;
    {
    if(year < 4)
    cout<<"Amount of interest:"<<(694000-(694000*(x/100)))*1.98801*year<<endl;
    cout<<"Mouthly payment:"<<(694000-(694000*(x/100)))+((694000-(694000*(x/100)))*1.98801*year)/(year*12)<<endl;
    else if (year >= 4)
    cout<<"Amount of interest:"<<(694000-(694000*(x/100)))*1.99*year<<endl;
    cout<<"Mouthly payment:"<<(694000-(694000*(x/100)))+((694000-(694000*(x/100)))*1.99*year)/(year*12)<<endl;
    }
    else if (year>
    
    
 system("pause");
 return 0;   
    
}
    
    
