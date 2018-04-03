#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char a;
    int b,c;
    cout<<"Are you member(Y or N):";
    cin>>a;
    cout<<"How old are you?:";
    cin>>b;
    cout<<"Normal pirce :";
    cin>>c;
    if(a=='Y')
    {
              if(b<2)
              cout<<"You have to pay"<<" "<<0<<endl;
              else if(b>2&&b<13)
              cout<<"You have to pay"<<" "<<c-(c*70/100)<<endl;
              else if(b>12)
              cout<<"You have to pay"<<" "<<c-(c*50/100)<<endl;
               
               }
               else{
              if(b<2)
              cout<<"You have to pay"<<" "<<0<<endl;
              else if(b>2&&b<11)
              cout<<"You have to pay"<<" "<<c-(c*70/100)<<endl;
              else if(b>=10)
              cout<<"You have to pay"<<" "<<c<<endl;
}
    system ("pause");
    return 0;
}
    
