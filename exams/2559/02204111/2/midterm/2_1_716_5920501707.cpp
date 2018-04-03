//5920501707Wilasinee Satpiyatham
#include<iostream>
using namespace std;
int main()
{
   int sal,year,bth;
   float per;
   char m;
   cout<<"------- Car lease calculator-----------"<<endl;
   cout<<"Enter car model : ";
   cin>>m;
   cout<<"The number of years (1-6): ";
   cin>>year;
   cout<<"The your salary: ";
   cin>>sal;
   cout<<"---------------------------------------"<<endl;
   if(m=='A')
   {
    bth =1385000;
    per =2.09;
   }
   else if(m=='B')
    {
    bth =511500;
    per=1.79;
    }
    else if (m=='C')
    {
    bth =738000;
    per= 1.99;
    }
   else 
   {
    bth=694000;
    per = 1.99;
    }
   double fa,mp,ai,dp;
   dp=(25/100)*bth;
   fa= bth-dp;
   ai=fa*per*year;
   mp=(fa+ai)/(year*12);
   cout<<"Financing amount: "<<fa<<endl;
   cout<<"Amount interest: "<<ai<<endl;
   cout<<"Monthly payment: "<<mp<<endl;
   if(mp>sal/2.0)
   cout<<"Good decision, Enjoy your new car"<<endl;
   else
   cout<<"The monthly payment ie over than 50% of your salary!!"<<endl;
    system("pause");
    return 0;
}
