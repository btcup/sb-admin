//5920501014 Jarawee Sripodok
#include <iostream>
using namespace std;
int main ()
{
    char model;
    int year,downpayment,downcar,financingamount;
    float amountofinterest,monthlypayment;
    cout<<"------- Car lease calculator -----------"<<endl;
    cout<<"Enter car model: ";
    cin>>model;
    if (model == 'A')
    {
       cout<<"Enter number of years (1-6): ";
       cin>>year;
       if (year > 0)
       {
          if (year <= 6)
          {
             cout<<"Enter percentage of down payment: ";
             cin>>downpayment;
             downcar = (1385000*downpayment)/100;
             cout<<"----------------------------------------"<<endl;
             financingamount = 1385000-downcar;
             cout<<"Financing amount: "<<financingamount<<endl;
             if (year < 4)
             {
             amountofinterest = ((2.09-0.1)/100)*financingamount*year;
             cout<<"Amount of interest: "<<amountofinterest<<endl;
             monthlypayment = (financingamount+amountofinterest)/(year*12);
             cout<<"Monthly payment: "<<monthlypayment<<endl;
             }
             else
             {
             amountofinterest = (2.09/100)*financingamount*year;
             cout<<"Amount of interest: "<<amountofinterest<<endl;
             monthlypayment = (financingamount+amountofinterest)/(year*12);
             cout<<"Monthly payment: "<<monthlypayment<<endl;
             }
          }
          else
          cout<<"Error!,number of years is not in range"<<endl;
       }
       else
       cout<<"Error!,number of years is not in range"<<endl;
    }
    else if (model == 'B')
    {
         cout<<"Enter number of years (1-6): ";
         cin>>year;
         if (year > 0)
         {
          if (year <= 6)
          {
             cout<<"Enter percentage of down payment: ";
             cin>>downpayment;
             downcar = (511500*downpayment)/100;
             cout<<"----------------------------------------"<<endl;
             financingamount = 511500-downcar;
             cout<<"Financing amount: "<<financingamount<<endl;
             if (year < 4)
             {
             amountofinterest = ((1.79-0.1)/100)*financingamount*year;
             cout<<"Amount of interest: "<<amountofinterest<<endl;
             monthlypayment = (financingamount+amountofinterest)/(year*12);
             cout<<"Monthly payment: "<<monthlypayment<<endl;
             }
             else
             {
             amountofinterest = (1.79/100)*financingamount*year;
             cout<<"Amount of interest: "<<amountofinterest<<endl;
             monthlypayment = (financingamount+amountofinterest)/(year*12);
             cout<<"Monthly payment: "<<monthlypayment<<endl;
             }
          }
          else
          cout<<"Error!,number of years is not in range"<<endl;
       }
       else
       cout<<"Error!,number of years is not in range"<<endl;
    }
    else if (model == 'C')
    {
         cout<<"Enter number of years (1-6): ";
         cin>>year;
         if (year > 0)
         {
            if (year <= 6)
            {
             cout<<"Enter percentage of down payment: ";
             cin>>downpayment;
             downcar = (738000*downpayment)/100;
             cout<<"----------------------------------------"<<endl;
             financingamount = 738000-downcar;
             cout<<"Financing amount: "<<financingamount<<endl;
             if (year < 4)
             {
             amountofinterest = ((1.99-0.1)/100)*financingamount*year;
             cout<<"Amount of interest: "<<amountofinterest<<endl;
             monthlypayment = (financingamount+amountofinterest)/(year*12);
             cout<<"Monthly payment: "<<monthlypayment<<endl;
             }
             else
             {
             amountofinterest = (1.99/100)*financingamount*year;
             cout<<"Amount of interest: "<<amountofinterest<<endl;
             monthlypayment = (financingamount+amountofinterest)/(year*12);
             cout<<"Monthly payment: "<<monthlypayment<<endl;
             }
            } 
            else
            cout<<"Error!,number of years is not in range"<<endl;
         }
         else
         cout<<"Error!,number of years is not in range"<<endl;
    }
    else if (model == 'J')
    {
         cout<<"Enter number of years (1-6): ";
         cin>>year;
         if (year > 0)
         {
          if (year <= 6)
          {
             cout<<"Enter percentage of down payment: ";
             cin>>downpayment;
             downcar = (694000*downpayment)/100;
             cout<<"----------------------------------------"<<endl;
             financingamount = 694000-downcar;
             cout<<"Financing amount: "<<financingamount<<endl;
             if (year < 4)
             {
             amountofinterest = ((1.99-0.1)/100)*financingamount*year;
             cout<<"Amount of interest: "<<amountofinterest<<endl;
             monthlypayment = (financingamount+amountofinterest)/(year*12);
             cout<<"Monthly payment: "<<monthlypayment<<endl;
             }
             else
             {
             amountofinterest = (1.99/100)*financingamount*year;
             cout<<"Amount of interest: "<<amountofinterest<<endl;
             monthlypayment = (financingamount+amountofinterest)/(year*12);
             cout<<"Monthly payment: "<<monthlypayment<<endl;
             }
          }
          else
          cout<<"Error!,number of years is not in range"<<endl;
       }
       else
       cout<<"Error!,number of years is not in range"<<endl;
    }
    system ("pause");
    return 0;
}
    
         
                   
            
