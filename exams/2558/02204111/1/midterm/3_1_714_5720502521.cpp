#include <iostream>
using namespace std;
int main()
{
    char a;
    int b,c,d;
    cout<<" Are you member (Y or N) :";
    cin>>a;
    cout<<"How old are you ? :";
    cin>>b;
    cout<<"Normal price : ";
    cin>>c;
    
    if(a=='Y')
    {
              if (b<2)
              d=c*100/100;
              else if(b>=2&&b<=12)
              d=c*70/100;
              else if(b>12)
              d=c*50/100;
              }
      else
      {
          if(b<2)
          d=c*100/100;
          else if(b>=2&&b<=10)
          d=c*50/100;
          else if (b>10)
          d=0;
          }
          
          
          cout<<"You have to pay "<<c-d<<endl;        
              
              
              
              
              system ("pause");
              return 0;
              }

