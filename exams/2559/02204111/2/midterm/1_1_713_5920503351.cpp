//5920503351Katekanok Meeruang
#include<iostream>
using namespace std;
int main ()
{
    int year,downpayment,a,b,c,j;
    float Amount,Finan,;
    char model;
    cout<<"------- Car lease calculator -----------"<<endl;
    cout<<"Enter car model : "<<model;
    cin>>model;
    cout<<"Enter number of years (1-6) :"<<year;
    cin>>year;
    cout<<"Enter percentage of down payment :"<<downpayment;
    cin>>downpayment;
    cout<<"----------------------------------------"<<endl;
    
    if(model='A',year<=6){
    a=1385000;{
               cout<<"Financing amount : "<<a/(downpayment/100)<<endl;
               Finan=a/(downpayment/100);
               cout<<"Amount of interest : "<<Finan*2.09*year<<endl;
               Amount=Finan*2.09*year;
               cout<<"Monthly payment : "<<(Finan+Amount)/(year*12)<<endl;
               }
               }
     else if(model='B',year<=6){
     b=511500;{
               cout<<"Financing amount : "<<b/(downpayment/100)<<endl;
               Finan=b/(downpayment/100);
               cout<<"Amount of interest : "<<Finan*1.79*year<<endl;
               Amount=Finan*1.79*year;
               cout<<"Monthly payment : "<<(Finan+Amount)/(year*12)<<endl;
               }     
               }         
     else if(model='C',year<=6){
     c=738000;{
               cout<<"Financing amount : "<<c/(downpayment/100)<<endl;
               Finan=c/(downpayment/100);
               cout<<"Amount of interest : "<<Finan*1.99*year<<endl;
               Amount=Finan*1.99*year;
               cout<<"Monthly payment : "<<(Finan+Amount)/(year*12)<<endl;
               }
               }      
    else if(model='J',year<=6){
    j==694000;{
               cout<<"Financing amount : "<<j/(downpayment/100)<<endl;
               Finan=j/(downpayment/100);
               cout<<"Amount of interest : "<<Finan*1.99*year<<endl;
               Amount=Finan*1.99*year;
               cout<<"Monthly payment : "<<(Finan+Amount)/(year*12)<<endl;
               }     
               }   
    else
               cout<<"Error!, number of years is not in range";                       
    
    system("pause");
    return 0;
    }
