#include <iostream>        \\5920552123 Intauch  Danpan
using namespace std;
int main()
{
    char m;
    long accord=1385000,brio=511500,city=738000,jazz=694000;
    int a,n,s;
    float down,financ,amount,pay; 
    cout<<"Enter car model :";  cin>>m;
    cout<<"Enter number of years (1-6) :";  cin>>n;
    cout<<"Enter your salary :";    cin>>s;
    if (m=='A')
       {
       down=accord*25.0/100;
       financ=accord-down;
       amount=financ*2.09*n/100;
       pay=(financ+amount)/(12*n);
       cout<<"Financing amount :"<<financ<<endl;
       cout<<"Amount of interest :"<<amount<<endl;
       cout<<"Mothly payment :"<<pay<<endl;
         
       }
    else if (m=='B')
       {
       down=brio*25.0/100;
       financ=brio-down;
       amount=financ*1.79*n/100;
       pay=(financ+amount)/(12*n);
       cout<<"Financing amount :"<<financ<<endl;
       cout<<"Amount of interest :"<<amount<<endl;
       cout<<"Mothly payment :"<<pay<<endl;
              
       }
    else if (m=='C')
    {
       down=city*25.0/100;
       financ=city-down;
       amount=financ*1.99*n/100;
       pay=(financ+amount)/(12*n);
       cout<<"Financing amount :"<<financ<<endl;
       cout<<"Amount of interest :"<<amount<<endl;
       cout<<"Mothly payment :"<<pay<<endl;
         
       }
    else 
    {
       down=jazz*25.0/100;
       financ=jazz-down;
       amount=financ*1.99*n/100;
       pay=(financ+amount)/(12*n);
       cout<<"Financing amount :"<<financ<<endl;
       cout<<"Amount of interest :"<<amount<<endl;
       cout<<"Mothly payment :"<<pay<<endl;}
       if (s/2<pay)
                     cout<<"The monthy payment isn over than 50% of your salary!! "<<endl; 
       else
        cout<<"Good decision; Enjoy your new cay"<<endl;  
       
    system ("pause");
    return 0;
}
