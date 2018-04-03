//5920502649 Jitra Swangsubskul
#include <iostream>
using namespace std;
int main ()
{
    char car;
    int year,month;
    float DokA,sumDok,Amount,Finanicing;
    long priceA=0,down,sumPayment,Payment,F;
    float DokB,DokJ;
    long priceB=0,priceJ=0;
    float DokC;
    long priceC=0;
do 
{ 
    cout<<"------- Car lease calculator -------"<<endl;
    cout<<"Enter car model : ";
    cin>>car;
    cout<<"Enter number of year (1-6) : ";
    cin>>year;
              if (year<=0||year>=7)
              {cout<<"Error!,number of year is not in range"<<endl;break;}
    cout<<"Enter percentage of down payment : ";
    cin>>down;
    
              if (car=='A')
              {
                 priceA = 1385000;
                 F = priceA*down/100;
                 Finanicing = priceA-F; 
                 DokA = 2.09;
                
                 if (year<4)
                    {
                    sumDok = (long)DokA*0.1/100;
                    }
                 else 
                      {
                      sumDok = DokA;
                      }
                 Amount = Finanicing*DokA*year;
                 month = year*12;
                
                 cout<<"---------------------------------"<<endl;
                 cout<<"Finanicing amount : "<<Finanicing<<endl;
                 cout<<"Amount of interest : "<<Amount<<endl;
                 cout<<"Monthly payment : "<<(Finanicing+Amount)/month<<endl;
              }
              
              else if (car=='B')
              {
                 priceB = 511500;
                 F = priceB*down/100;
                 Finanicing = priceB-F; 
                 DokB = 1.79;
                
                 if (year<4)
                    {
                    sumDok = (long)DokB*0.1/100;
                    }
                 else 
                      {
                      sumDok = DokB;
                      }
                 Amount = Finanicing*DokB*year;
                 month = year*12;
                 
                
              
                 
    
                  cout<<"---------------------------------"<<endl;
                  cout<<"Finanicing amount : "<<Finanicing<<endl;
                  cout<<"Amount of interest : "<<Amount<<endl;
                  cout<<"Monthly payment : "<<(Finanicing+Amount)/month<<endl;
              }
              
              else if (car=='C')
              {
                 priceC = 738000;
                 F = priceC*down/100;
                 Finanicing = priceC-F; 
                 DokC = 1.99;
                
                 if (year<4)
                    {
                    sumDok = (long)DokC*0.1/100;
                    }
                 else 
                      {
                      sumDok = DokC;
                      }
                 Amount = Finanicing*DokB*year;
                 month = year*12;
                 
                
              
                 
    
                  cout<<"---------------------------------"<<endl;
                  cout<<"Finanicing amount : "<<Finanicing<<endl;
                  cout<<"Amount of interest : "<<Amount<<endl;
                  cout<<"Monthly payment : "<<(Finanicing+Amount)/month<<endl;
              }
              
              else if (car=='J')
              {
                 priceJ = 694000;
                 F = priceJ*down/100;
                 Finanicing = priceJ-F; 
                 DokJ = 1.99;
                
                 if (year<4)
                    {
                    sumDok = (long)DokJ*0.1/100;
                    }
                 else 
                      {
                      sumDok = DokJ;
                      }
                 Amount = Finanicing*DokJ*year;
                 month = year*12;
                 
                
              
                 
    
                  cout<<"---------------------------------"<<endl;
                  cout<<"Finanicing amount : "<<Finanicing<<endl;
                  cout<<"Amount of interest : "<<Amount<<endl;
                  cout<<"Monthly payment : "<<(Finanicing+Amount)/month<<endl;
              }
    
    
    
}
while (0);
    
    
    
    
system ("pause");
return 0;
}
