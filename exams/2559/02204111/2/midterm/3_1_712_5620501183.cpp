#include <iostream>           //5620501183  wilawun ponprachanuwut
using namespace std;
int main ()
{
    float a,b,c,d,n,m,e,g;
    cout<<"Arrival time : ";
    cin>>a;
    cout<<"Leave time : ";
    cin>>b;
    n=(a-(int(a)))*100;
    m=(b-(int(b)))*100;
    c=b-a;
    a=((int(a))*60);
    b=((int(b))*60);
    e=m-n+60;
    {
    if (e>60)
    {
             g=e-60;
             cout<<int(c)<<"hours and "<<g<<" minutes"<<endl;
             }
             else
             cout<<int(c)<<"hours and "<<e<<" minutes"<<endl;}
    
    if (c>=4&&c<=6)
    {
          d=c*20;
    }         
    if (c>=7&&c<=8)
    {
           d=c*50;
    }      
    if (c>8)
    {
            d=500;
    }
    cout<<"You have to pay "<<d<<" bath"<<endl;
    
    system ("pause");
    return 0;
}
