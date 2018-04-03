// 5620503747 Jakrathorn Chamroen
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char o , t ;
    float l , b , a , vat , aa ;
    cout<<"Enter objective (Utilization , Waste) : ";       cin>>o;
    if(o=='U')
    {
              cout<<"Enter utilization type (Business , Agriculture) : ";
              cin>>t;
              cout<<"Enter land cost (million) : ";
              cin>>l;
              if(l=='B')
              {
              if(l<20)               vat = 0.003;
              else if(l>=20&&l<50)   vat = 0.005;
              else                   vat = 0.007;}
              else if(l=='A')
              {
              if(l<20)               vat = 0.000;
              else if(l>=20&&l<60)   vat = 0.0006;
              else                   vat = 0.0012;}
              cout<<"Enter building cost (million) : ";
              cin>>b;
              cout<<"Building age : ";
              cin>>a;
              if(a>=1&&a<=10)            aa = 1-0.015;
              else if(a>=11&&a<=40)      aa = 1-(0.15+((a-10)*0.018));
              else if(a>=41)             aa = 1-(0.708);
              
              cout<<"Your estate cost is "<<(l+(b*aa))<<" ("<<l<<"+"<<b*aa<<") million bath"<<endl;
              cout<<"The land tax is "<<(l+(b*aa))*vat<<" million bath"<<endl<<endl;
    }
    else if(o=='W')
    {
         cout<<"Land cost : ";
         cin>>l;
         cout<<"Land age : ";
         cin>>a;
         if(a>=4)
         {
                       if(a<=6)      aa = 0.012;
                       else          aa = 0.024;
                       cout<<"Your estate cost is "<<l<<" million bath"<<endl;
                       cout<<"The land tax is "<<l*aa<<" milloin bath"<<endl;
         }
         else
         {
             cout<<"Your estate cost is "<<l<<" million bath"<<endl;
             cout<<"The land tax is exemption"<<endl<<endl;
         }
    }
system("pause");
return 0 ;
}         
             
    
