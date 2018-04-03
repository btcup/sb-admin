//5620502228 Suntarika Hirunwong
#include <iostream>
using namespace std;
int main()
{
    double a,b,c;
    do
    {
           cout<<"Enter electricity cost per unit (bahts): ";
           cin>>a;
    }while(a<=0);    
    do{
                     if(b<c&&b>0||b<=99999){
           cout<<"Enter last unit : ";
           cin>>b;
           cout<<"Enter current unit : ";
           cin>>c;}
                   else if(c-b<0||b<=-1){
           cout<<"Invalid current unit!";}
           
           cout<<"Unit used = "<<(c-b)<<endl;
           cout<<"Electricity charge (bahts) = "<<(c-b)*a<<endl;
   
           
   }while(1);
   
   //cout<<"Electricity charge (bahts) = "<<(c-b)*a<<endl;}
   //do  b<0&&b>c||c<0&&c<b
   // {
    //       cout<<"Enter current unit : ";
    //       cin>>b;     
   //}while(c<0&&c<b);  c<0&&b>99999
   //if(b<-1){cout<<"-- End of Calculation --";}
   
    system("pause");
    return 0;
}
