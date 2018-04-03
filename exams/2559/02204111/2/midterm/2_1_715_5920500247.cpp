#include <iostream>
using namespace std;
int main()
{
       char m;
       float y,s,f,a,p;
       cout<<"---------Car lease calculator ---------"<<endl;
       cout<<"Enter car model :";
       cin>>m;
       cout<<"Enter number of year (1-6) :";
       cin>>y;
       cout<<"Enter your salary :";
       cin>>s;
       if (m=='B')
       {
                f=511500-(25.0/100*511500);
                a=f*(1.79/100)*y ;
                p=(f+a)/y;
                cout<<"---------------------------------------------"<<endl;
                cout<<"Financing amount :"<<f<<endl;
                cout<<"Amont of interest :"<<a<<endl;
                cout<<"Monthly payment :"<<p<<endl;
                }
       else if (m=='A')
       {
                f=1385000-(25.0/100*1385000);
                a=f*(2.09/100)*y ;
                p=(f+a)/y;
                cout<<"---------------------------------------------"<<endl;
                cout<<"Financing amount :"<<f<<endl;
                cout<<"Amont of interest :"<<a<<endl;
                cout<<"Monthly payment :"<<p<<endl;
                }
       else if (m=='C')
       {
                f=738000-(25.0/100*738000);
                a=f*(1.99/100)*y ;
                p=(f+a)/y;
                cout<<"---------------------------------------------"<<endl;
                cout<<"Financing amount :"<<f<<endl;
                cout<<"Amont of interest :"<<a<<endl;
                cout<<"Monthly payment :"<<p<<endl;
                }
       else if (m=='J')
       {
                f=694000-(25.0/100*694000);
                a=f*(2.09/100)*y ;
                p=(f+a)/y;
                cout<<"---------------------------------------------"<<endl;
                cout<<"Financing amount :"<<f<<endl;
                cout<<"Amont of interest :"<<a<<endl;
                cout<<"Monthly payment :"<<p<<endl;
                }
       if(p>=50*s/100){
       cout<<"The monthly payment is over than 50% of your salary!!"<<endl;}
       cout<<"Good decision, Enyoy your ner car";    
          
       system("pause");
       return 0;
}
