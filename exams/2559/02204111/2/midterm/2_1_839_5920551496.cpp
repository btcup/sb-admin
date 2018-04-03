#include <iostream>
using namespace std;
int main ()
{
  char model,A,B,C,J;//5920551496 Phusit Bunyarith
  int priceA,priceB,priceC,priceJ;
  int salary;
  int years,month;
  
  double MonthyA,MonthyB,MonthyC,MonthyJ;
  years<=5&&years>0;
  double FinancingA,FinancingB,FinancingC,FinancingJ;
  int interestA,interestB,interestC,interestJ;
  double dokbeerA,dokbeerB,dokbeerC,dokbeerJ;
  dokbeerA = 2.09;
  dokbeerB = 1.79;
  dokbeerC = 1.99;
  dokbeerJ = 1.99;
  double downA,downB,downC,downJ;
  downA = 1385000*0.25;
  downB = 511500*0.25;
  downC = 738000*0.25;
  downJ = 694000*0.25;
  priceA = 1385000;
  priceB = 511500;
  priceC = 738000;
  priceJ = 694000;
  FinancingA = priceA-downA;
  FinancingB = priceB-downB;
  FinancingC = priceC-downC;
  FinancingJ = priceJ-downJ;
  interestA = FinancingA*dokbeerA*years;
  interestB = FinancingB*dokbeerB*years;
  interestC = FinancingC*dokbeerC*years;
  interestJ = FinancingJ*dokbeerJ*years;                                              
  month = years/12;
  MonthyA = FinancingA*dokbeerA/month;
  cout<<"------- Car lease calculator ----------\n";  
  cout<<"Enter car model :\n";
  cin>>model;
  if (model=B)
     {
      cout<<"Enter number of years (1-6) : \n";
      cin>>years;
      cout<<"Enter your salary: \n";
      cin>>salary;
      cout<<"---------------------------\n";
      cout<<"Financing amount : "<<FinancingB<<"\n";
      cout<<"Amout of interest : "<<interestB<<"\n";
             
     }
else if (model=A)
     {
      
      cout<<"Enter your salary: \n";
      cin>>salary;
      cout<<"---------------------------\n";
      cout<<"Financing amount : "<<FinancingA<<"\n";
      cout<<"Amout of interest : "<<interestA<<"\n";
     }
else if (model=C)
     {
      cout<<"Enter your salary: \n";
      cin>>salary;
      cout<<"---------------------------\n";
      cout<<"Financing amount : "<<FinancingC<<"\n";
      cout<<"Amout of interest : "<<interestC<<"\n";        
                  
     }
     else if (model=J)
     {
     cout<<"Enter your salary: \n";
      cin>>salary;
      cout<<"---------------------------\n";
      cout<<"Financing amount : "<<FinancingJ<<"\n";
      cout<<"Amout of interest : "<<interestJ<<"\n";
     }        
    system ("pause");
 return 0;   
}
