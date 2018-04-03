//5920501201Suwannaka
#include <iostream>
using namespace std;
int main()
{
    char ch;
   double a,b,c,d,e,price,interest,down;
    cout<<"Car lease calculator"<<endl;
    cout<<"Enter car modle :";
    cin>>ch;
    if(ch=='A')
    {
               price = 1385000;
               interest =2.09/100;
    }
    else if (ch=='B')
    {
         price = 511500;
         interest =1.79/100;
         }
         else if (ch=='C')
         {
              price = 738000;
              interest = 1.99/100;
              }
              else if (ch=='J')
              {
                   price = 694000;
                   interest =1.99/100;
                   }
    cout<<"Enter number of years (1-6) :";
    cin>>a;
    cout<<"Enter your Salary :";
    cin>> b;
    down = (price*25/100);
    c=price-down;
    cout<<"Financing amount:"<<c<<endl;
    d=c*interest*a;
    cout<<"Amount of interest :"<<d<<endl;
    e=(c+d)/(a*12);
    cout<<"Monthly payment:"<<e<<endl;
    
    if(e<=b/100*50)
                    {
                  cout<<"Good decision,Enjoy your new car"<<endl;
                  }
    else 
                  cout<<"The monthly payment is over than 50% of your salary"<<endl;
   
   
   
   
    system("pause");
return 0;
}
    
    
