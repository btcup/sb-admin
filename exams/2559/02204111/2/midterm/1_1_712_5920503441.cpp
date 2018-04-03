#include <iostream>
using namespace std;//5920503441
int main()
{
    char x;
    int year,payment;
    long double fi,amount,mon;
    cout<<"------- Car lease calculator ------------"<<endl;
    cout<<"Enter car model :";
    cin>>x;
    
    if(x=='A'||x=='B'||x=='C'||x=='J')
    {
                                      cout<<"Enter number of years (1-6):";
                                      cin>>year;
                                      if(year>1&&year<6)
                                      {
                                                        if(year<4)
                                                        {
                                                            cout<<"enter percentage of down paymeat :"  ;
                                                            cin>>payment;
                                                            
                                                            if(x=='A')
                                                            {
                                                                      fi=1385000-((payment/100)*1385000);
                                                                      amount=fi*2.08*year;
                                                                      mon=(fi+amount)/(year*12);
                                                            }
                                                            else if(x=='B')
                                                            {
                                                                      fi=511500-((payment/100)*511500);
                                                                      amount=fi*1.78*year;
                                                                      mon=(fi+amount)/(year*12);
                                                            }
                                                              else if(x=='C')
                                                            {
                                                                      fi=738000-((payment/100)*738000);
                                                                      amount=fi*1.98*year;
                                                                      mon=(fi+amount)/(year*12);
                                                                      }
                                                            else if(x=='B')
                                                            {
                                                                      fi=694000-((payment/100)*694000);
                                                                      amount=fi*1.98*year;
                                                                      mon=(fi+amount)/(year*12);
                                                            }
                                                        }
                                                        else
                                                        {
                                                            cout<<"enter percentage of down payment :" ;  
                                                            cin>>payment;
                                                            if(x=='A')
                                                            {
                                                                      fi=1385000-((payment/100)*1385000);
                                                                      amount=fi*2.09*year;
                                                                      mon=(fi+amount)/(year*12);
                                                                      }
                                                            else if(x=='B')
                                                            {
                                                                      fi=511500-((payment/100)*511500);
                                                                      amount=fi*1.79*year;
                                                                      mon=(fi+amount)/(year*12);
                                                                      }
                                                              else if(x=='C')
                                                            {
                                                                      fi=738000-((payment/100)*738000);
                                                                      amount=fi*1.99*year;
                                                                      mon=(fi+amount)/(year*12);
                                                                      }
                                                            else if(x=='B')
                                                            {
                                                                      fi=694000-((payment/100)*694000);
                                                                      amount=fi*1.99*year;
                                                                      mon=(fi+amount)/(year*12);
                                                                      }
                                                            
                                                        }
     cout<<"-------------------------------"<<endl;
     cout<<"Financing amount :"<<fi<<endl;
     cout<<"Amount of interest :"<<amount<<endl;
     cout<<"Monthly payment:"<<mon<<endl;
     system("pause");
                                                        
                                      }                
                                      else
                                      cout<<"Eror!,number of years is not in range"<<endl;
                                      
    }
     else
     cout<<"Error!!" <<endl;   
     
     system("pause");
     return 0;                             
}
