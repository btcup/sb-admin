#include<iostream>                                  //5920501065NatchiraDindaeng
using namespace std;
int main()
{
    char model;
    int year,downpay,price;
    float amount,financ,monthlypay,ratepercent;
    cout<<"----- Car lease calculator -----"<<endl;
    cout<<"Enter car model: ";
    cin>>model;
    if(model=='A'||model=='B'||model=='C'||model=='J')
    {
                cout<<"Enter number of years (1-6):";
                cin>>year;
                if(year<1||year>6)
                {
                                  cout<<"Error!, number of year is not in range"<<endl;
                }
                cout<<"Enter percentage of down payment: ";
                cin>>downpay;
                cout<<"---------------------------------------"<<endl;
                switch(model)
                {
                case'A':price=1385000; ratepercent=2.09; break;
                case'B':price=511500; ratepercent=1.79; break;
                case'C':price=738000; ratepercent=1.99; break;
                case'J':price=694000; ratepercent=1.99; break;
                }
                if(year<=6)
                {
                          financ=price-(downpay*price/100);
                          amount=financ*ratepercent*100*year;
                          monthlypay=(financ+amount)/year*12;
                          cout<<"Financing amount: "<<financ<<endl;
                          cout<<"Amount of interest: "<<amount<<endl;
                          cout<<"Monthly payment: "<<monthlypay<<endl;
                          if(year<4)
                {
                         ratepercent-=ratepercent*0.1/100;
                }
                }
                
                
    }
    system ("pause");
    return 0;
}
