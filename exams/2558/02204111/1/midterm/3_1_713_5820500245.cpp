#include <iostream>
using namespace std;
int main()
{
    char pon;
    int a,b;
    cout<<"Are you member (Y or N):";
    cin>>pon;
    cout<<"How old are you :";
    cin>>a;
    if(a<2)
    {
           a=100;
           }
     if (a==2||a==12)
    {
         a=70;
         }
    if(a>=12)
    {
             a=50;
             }
             if(a==2||a==10)
             {
                            a=50;
                            }
                            if(a>=10)
                            {
                                     a=0;
                                     }
     cout<<"Normal price :";
    cin>>b;
    if(b==2000&&pon=='Y')
    {
               cout<<"You have to pay"<<600<<endl;
               }
                if(b==2000&&pon=='N')
                {
               cout<<"You have to pay"<<1000<<endl;
                    }
               if(b==5000)
               {
                          cout<<"You have to pay"<<5000<<endl;
                          }
               if(b==4000)
               {
                           cout<<"You have to pay"<<1200<<endl;
                          }
                          system ("pause");
                          return 0;
                          }
