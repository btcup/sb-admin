#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    char a;
    int b,c,d;
    cin>>a,b,c,d;
    cout<<"Are you number (Y or N) : "<<a<<endl;
    cout<<"How old are you?"<<b<<endl;
    cout<<"Normal price :"<<c<<endl;
    if (a == Y)
    { if (b<2)
    d=c*1;
    cout<<"You have to pay "<<d<<endl;
}
    else if (b>=2&&b<=12)
    {
         d=c*0.7;
         cout<<"You have yo pay "<<d<<endl;}
    else if (b>12 )
    {
         d=c*0.5;
         cout<<"You have yo pay "<<d<<endl;}
   
   
   
   
   
   
   
   
    else ( )
    
    
    
    
    
    
    
    system ("pause");
    return 0;
}
    
