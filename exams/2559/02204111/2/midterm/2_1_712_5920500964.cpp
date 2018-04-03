//5920500964 Affan leebumroong
#include<iostream>
using namespace std;
int main()
{
   char model;
   const float downpayment = 25/100;
   float sarary,amountofinterrest,monthlypayment ;
   int year, downmoney,carprice,financingamount,month;
   cout <<" Enter car model "<<endl;
   cin>>model;
   cout<<" Enter number of year (1-6)"<<endl;
   cin>>year;
   cout<<" Enter you salary "<<endl;
   cin>>sarary;
   if(model=='A'||model=='B'||model=='C'||model=='J')
   {
   if(model=='A')
   {
        month=year/12;         
        carprice = 1385000;         
       financingamount = carprice -(carprice*downpayment);
       amountofinterrest = financingamount* 2.09 *year;
       monthlypayment=(financingamount+amountofinterrest)/month;
       cout<<"financingamount:"<< financingamount<<endl;
       cout<<"amountofinterrest:"<< amountofinterrest<<endl;
       cout<<"monthlypayment:"<< monthlypayment<<endl;
       
   }
     else if(model=='B')
   {
        month=year/12;         
        carprice = 511500;         
       financingamount = carprice -(carprice*downpayment);
       amountofinterrest = financingamount* 1.79 *year;
       monthlypayment=(financingamount+amountofinterrest)/month;
       cout<<"financingamount:"<< financingamount<<endl;
       cout<<"amountofinterrest:"<< amountofinterrest<<endl;
       cout<<"monthlypayment:"<< monthlypayment<<endl;
       
   }
    else if(model=='C')
   {
        month=year/12;         
        carprice = 738000;         
       financingamount = carprice -(carprice*downpayment);
       amountofinterrest = financingamount* 1.99 *year;
       monthlypayment=(financingamount+amountofinterrest)/month;
       cout<<"financingamount:"<< financingamount<<endl;
       cout<<"amountofinterrest:"<< amountofinterrest<<endl;
       cout<<"monthlypayment:"<< monthlypayment<<endl;
       
   }
     else 
   {
        month=year/12;         
        carprice = 694000;         
       financingamount = carprice -(carprice*downpayment);
       amountofinterrest = financingamount* 1.99 *year;
       monthlypayment=(financingamount+amountofinterrest)/month;
       cout<<"financingamount:"<< financingamount<<endl;
       cout<<"amountofinterrest:"<< amountofinterrest<<endl;
       cout<<"monthlypayment:"<< monthlypayment<<endl;
       
   }
   if(monthlypayment>sarary){
                             cout<<"Themonthly payment is over than 50% of your salary !!"<<endl;
   }
   else if (monthlypayment<=sarary){
                             cout<<"Good decision ,Enjoy your new car !!"<<endl;
        }
   
}
else
cout<<"not correct";
   
   
   
   
     
system("pause");
return 0;    
}
