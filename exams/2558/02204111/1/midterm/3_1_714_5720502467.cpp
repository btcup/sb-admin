#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,x;
    char Y,N;
    cout<<"Are you member (Y or N) : ";
    cin>>a;
    cout<<"How old are you? :";
    cin>>b;
    cout<<"Normal price : ";
    cin>>c;
    if(a=='Y')
    {         if(b<2)
              cout<<"You have to price :"<<c-(c*0);
              else if (b>2&&b<12)
              cout<<"You have to price :"<<c-(c*0.7);
              else if(b>12)
              cout<<"You have to price :"<<c-(c*0.5);
              }
    else if(a=='N')
    {
         if(b<2)
         cout<<"You have to price : "<<c-(c*0);
         else if (b>2&&b<10)
         cout<<"You have to price :"<<c-(c*0.5);
         else if(b>10)
         cout<<"You have to price :"<<c-(c*1);
}
    system ("pause");
    return 0;
}

    

    
