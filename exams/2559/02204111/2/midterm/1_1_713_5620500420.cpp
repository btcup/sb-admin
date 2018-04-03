//5620500420 Kampon Leewattanathawonchai

#include <iostream>
using namespace std;
int main ()
{
    char model;
    int year,downpayment,month;
    cout<<"Enter car model:";
    cin>>model;
    cout<<"Enter of years (1-6):";
    cin>>year;
    cout<<"Enter percent of down payment:";
    cin>>downpayment;
    month=12*year;
    cout<<"_______________________________________"<<endl;
    if(model=='A'||model=='a'){
       if (year>=1&&year<=6){
       if (downpayment*0.01){
       cout<<"Financing amout:"<<1385000-(downpayment*0.01*1385000)<<endl;
        cout<<"Amount of interest:"<<(1385000-((downpayment*0.01*1385000)))*(0.0209*year)<<endl;
        cout<<"Monthly payment:"<<(1385000-(downpayment*0.01*1385000)+(1385000-((downpayment*0.01*1385000)))*(0.0209*year))/month<<endl;
        }
       }       
       }
     if(model=='B'||model=='b'){
       if (year>=1&&year<=6){
       if (downpayment*0.01){
       cout<<"Financing amout:"<<511500-(downpayment*0.01*511500)<<endl;
        cout<<"Amount of interest:"<<(511500-((downpayment*0.01*511500)))*(0.0179*year)<<endl;
        cout<<"Monthly payment:"<<(511500-(downpayment*0.01*511500)+(511500-((downpayment*0.01*511500)))*(0.0179*year))/month<<endl;
        }
       }       
       }
        if(model=='C'||model=='c'){
       if (year>=1&&year<=6){
       if (downpayment*0.01){
       cout<<"Financing amout:"<<738000-(downpayment*0.01*738000)<<endl;
        cout<<"Amount of interest:"<<(738000-((downpayment*0.01*738000)))*(0.0199*year)<<endl;
        cout<<"Monthly payment:"<<(738000-(downpayment*0.01*738000)+(738000-((downpayment*0.01*738000)))*(0.0199*year))/month<<endl;
        }
       }       
       }
       if(model=='J'||model=='j'){
       if (year>=1&&year<=6){
       if (downpayment*0.01){
       cout<<"Financing amout:"<<694000-(downpayment*0.01*694000)<<endl;
        cout<<"Amount of interest:"<<(694000-((downpayment*0.01*694000)))*(0.0199*year)<<endl;
        cout<<"Monthly payment:"<<(694000-(downpayment*0.01*694000)+(694000-((downpayment*0.01*694000)))*(0.0199*year))/month<<endl;
        }
       }       
       }
    
    
    system ("pause");
    return 0;
}
