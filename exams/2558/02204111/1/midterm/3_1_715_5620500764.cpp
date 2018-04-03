#include <iostream>
using namespace std;
int main()
{
    int b,c;
    char a;
    
    cout<<"Are you member (Y or N) : ";
    cin>>a;
    if(a=='Y')
        {
              cout<<"How old are you? :";
              cin>>b;
              if(b<2)
              {
                     cout<<"Normal price : ";
                     cin>>c;
                     c=c*0;
                     cout<<"You have to pay "<<c<<endl;
                     }
              else if(b>=2&&b<=12)
              {
                     cout<<"Normal price : ";
                     cin>>c;
                     c=c*30/100;
                     cout<<"You have to pay "<<c<<endl;
                     }
              else if(b>12)
              {
                     cout<<"Normal price : ";
                     cin>>c;
                     c=c/2;
                     cout<<"You have to pay "<<c<<endl;
              }
        }
    else if(a=='N')
         {
              cout<<"How old are you? :";
              cin>>b;
              if(b<2)
              {
                     cout<<"Normal price : ";
                     cin>>c;
                     c=c/0;
                     cout<<"You have to pay "<<c<<endl;
                     }
              else if(b>=2&&b<=10)
              {
                     cout<<"Normal price : ";
                     cin>>c;
                     c=c/2;
                     cout<<"You have to pay "<<c<<endl;
                     }
              else if(b>10)
              {
                     cout<<"Normal price : ";
                     cin>>c;
                     cout<<"You have to pay "<<c<<endl;
              }
        }
    
system("pause");
return 0;    
}
