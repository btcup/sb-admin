//5920503475 Panida Kranpart
#include<iostream>
using namespace std;
int main()
{
    char model;
    int year,downpayment,Financing,downcar;       
    float Amount,Monthly,a;
    cout<<"Enter car model((A)ccord,(B)rio,(C)ity,(J)azz):";
    cin>>model;
    if(model=='A'||model=='B'||model=='C'||model=='J')
    {
       cout<<"Enter number of years (1-6):";  
       cin>>year;  
       if(year>=1&&year<=6)  
       {
                             cout<<"Enter percentage of down payment:";
                             cin>>downpayment;
                             if(model=='A')
                             {
                                           if(year<4)
                                           {
                                           downcar=(1385000*downpayment)/100;
                                           Financing=1385000-downcar;
                                           Amount=(float)Financing*1.99/100*year;
                                           Monthly=(Financing+(1.99*1385000/100))/(12*year);
                                           cout<<"Financing amount:"<<Financing<<endl;
                                           cout<<"Amount of interest:"<<Amount<<endl;
                                           cout<<"Monthly payment:"<<Monthly<<endl;
                                           }
                                           else
                                           {
                                           downcar=(1385000*downpayment)/100;
                                           Financing=1385000-downcar;
                                           Amount=(float)Financing*2.09/100*year;
                                           Monthly=(Financing+(2.09*1385000/100))/(12*year);
                                           cout<<"Financing amount:"<<Financing<<endl;
                                           cout<<"Amount of interest:"<<Amount<<endl;
                                           cout<<"Monthly payment:"<<Monthly<<endl;
                                           }
                                           
                                           
                             }
                             else if(model=='B')
                             {
                                           if(year<4)
                                           {
                                          
                                           downcar=(511500*downpayment)/100;
                                           Financing=511500-downcar;
                                           Amount=(float)Financing*1.69/100*year;
                                           Monthly=(Financing+(1.69*511500/100))/(12*year);
                                           cout<<"Financing amount:"<<Financing<<endl;
                                           cout<<"Amount of interest:"<<Amount<<endl;
                                           cout<<"Monthly payment:"<<Monthly<<endl;
                                           }
                                           else
                                           {
                                           downcar=(511500*downpayment)/100;
                                           Financing=511500-downcar;
                                           Amount=Financing*(1.79/100)*year;
                                           Monthly=(Financing+(1.79*511500/100))/(12*year);
                                           cout<<"Financing amount:"<<Financing<<endl;
                                           cout<<"Amount of interest:"<<Amount<<endl;
                                           cout<<"Monthly payment:"<<Monthly<<endl;
                                           } 
                             }
                             else if(model=='C')
                             {
                                           
                                           if(year<4)
                                           {
                                           downcar=(738000*downpayment)/100;
                                           Financing=738000-downcar;
                                           Amount=(float)Financing*1.89/100*year;
                                           Monthly=(Financing+(1.89*738000/100))/(12*year);
                                           cout<<"Financing amount:"<<Financing<<endl;
                                           cout<<"Amount of interest:"<<Amount<<endl;
                                           cout<<"Monthly payment:"<<Monthly<<endl;
                                           }
                                           else
                                           {
                                           downcar=(738000*downpayment)/100;
                                           Financing=738000-downcar;
                                            Amount=Financing*(1.99/100)*downpayment;
                                           Monthly=(Financing+(1.99*738000/100))/(12*year);
                                           cout<<"Financing amount:"<<Financing<<endl;
                                           cout<<"Amount of interest:"<<Amount<<endl;
                                           cout<<"Monthly payment:"<<Monthly<<endl;
                                           }
                              }
                             else //model=='J'
                             {
                                           
                                           if(year<4)
                                           {
                                          
                                           downcar=(694000*downpayment)/100;
                                           Financing=694000-downcar;
                                           Amount=(float)Financing*1.89/100*year;
                                           Monthly=(Financing+(1.89*694000/100))/(12*year);
                                           cout<<"Financing amount:"<<Financing<<endl;
                                           cout<<"Amount of interest:"<<Amount<<endl;
                                           cout<<"Monthly payment:"<<Monthly<<endl;
                                           }
                                           else
                                           {
                                            downcar=(694000*downpayment)/100;
                                           Financing=694000-downcar;
                                            Amount=(Financing*(1.99/100))*year;
                                           Monthly=(Financing+(1.99*694000/100))/(12*year);
                                           cout<<"Financing amount:"<<Financing<<endl;
                                           cout<<"Amount of interest:"<<Amount<<endl;
                                           cout<<"Monthly payment:"<<Monthly<<endl;
                              }
                              
                             
                             }
       }                      
       else
       {
           cout<<"Error!,number of years is not in range";
       }      
    
    
    
    
    
    
    }
    else
    {
        cout<<""<<endl;
        
    }

system("pause");
return 0;
}
