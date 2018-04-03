//5920503092 thanachart sakulthana 
#include <iostream>
using namespace std;
int main()
{
    char model;
    float salary,year,finance,amount,monthly;
    const float d=25;
    cout << " Enter car model : ";
    cin >> model;
    if (model=='A')
    {
              cout << " Enter number of years (1-6) : ";
              cin >>year;
              cout << " Enter your salary : ";
              cin >>salary;
              finance = 1385000-(1385000*(d/100));
              amount = (finance*2.09)*year/100;
              monthly = (finance+amount)/(year*12);
              cout << "------------------------------------------" <<endl;
              cout << " Financing amout : " << finance << endl;
              cout << " Amout of interest : " << amount << endl;
              cout << " Monthly payment : " << monthly << endl;
    }
    else if (model=='B')
    {
              cout << " Enter number of years (1-6) : ";
              cin >>year;
              cout << " Enter your salary : ";
              cin >>salary;
              finance = 511500-(511500*(d/100));
              amount = (finance*1.79)*year/100;
              monthly = (finance+amount)/(year*12);
              cout << "------------------------------------------" <<endl;
              cout << " Financing amout : " << finance << endl;
              cout << " Amout of interest : " << amount << endl;
              cout << " Monthly payment : " << monthly << endl;
    }
    else if (model=='C')
    {
              cout << " Enter number of years (1-6) : ";
              cin >>year;
              cout << " Enter your salary : ";
              cin >>salary;
              finance = 738000-(738000*d/100);
              amount = (finance*1.99)*year/100;
              monthly = (finance+amount)/(year*12);
              cout << "------------------------------------------" <<endl;
              cout << " Financing amout : " << finance << endl;
              cout << " Amout of interest : " << amount << endl;
              cout << " Monthly payment : " << monthly << endl;
    }
    else if (model=='J')
    {
              cout << " Enter number of years (1-6) : ";
              cin >>year;
              cout << " Enter your salary : ";
              cin >>salary;
              finance = 694000-(694000*d/100);
              amount = (finance*1.99)*year/100;
              monthly = (finance+amount)/(year*12);
              cout << "------------------------------------------" <<endl;
              cout << " Financing amout : " << finance << endl;
              cout << " Amout of interest : " << amount << endl;
              cout << " Monthly payment : " << monthly << endl;
    }  
    if ( monthly>(salary/2))
    {cout << " The monthly payment is over than 50% of your salary!! "<<endl;}
    else if (monthly <=(salary/2))
    {cout << " Good decision, Enjoy your new car"<<endl;}
    
    system ("pause");
    return 0; 
}
    
    
    
