#include<iostream>
using namespace std;
int main()
{   int b,c,tot;
    char a;
    cout<<" Are you member (Y or N): "<<endl;
    cin>>a;
    cout<<"How old are you: "<<endl;
    cin>>b;
    cout<<"Normal price : "<<endl;
    cin>>c;
    if(a='Y')
            { if(b<2)
              tot= c-(c*100/100);
              else if(b>=2&&b<=12)
              tot=c-(c*70/100);
              else if(b>12)
              tot=c-(c*50/100);
              }
     else  if(a='N')
            { if(b<2)
              tot=c-(c*100/100);
              else if(b>=2&&b<=10)
              tot=c-(c*50/100);
              else if(b>10)
              tot=c-(c*0/100);
              }          
              
     cout<<"You have to pay: "<<tot<<endl;
     system("pause");
     return 0;
}
