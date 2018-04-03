#include<iostream>
using namespace std;
int main ()
{
    int i,m;
    char y;
    cout<<"Are you bumber (Y or N) : ";
    cin>>y;
    if(y=='Y'||y=='N')
    {
              cout<<"How old are you? :";
              cin>>i;
    }
              if(i<2&&y=='Y')
                     {
                      cout<<"Normal price :";
                      cin>>m;
                      cout<<"You have to pay "<<m-(m*1)<<endl;
                      }
              else if(i>=2&&i<=12&&y=='Y')
                     {
                     cout<<"Normal price :";
                     cin>>m;
                     cout<<"You have to pay "<<m-(m*0.7)<<endl;
                     }
              else if(i>12&&y=='Y')
                     {
                     cout<<"Normal price :";
                     cin>>m;
                     cout<<"You have to pay "<<m-(m*0.5)<<endl;
                     }
              else if(i<2&&y=='N')
                     {
                      cout<<"Normal price :";
                      cin>>m;
                      cout<<"You have to pay "<<m-(m*1)<<endl;
                      }
              else if(i>=2&&i<=10&&y=='N')
                     {
                     cout<<"Normal price :";
                     cin>>m;
                     cout<<"You have to pay "<<m-(m*0.5)<<endl;
                     }
              else if(i>10&&y=='N')
                     {
                     cout<<"Normal price :";
                     cin>>m;
                     cout<<"You have to pay "<<m*1<<endl;
                     }
                     
   
    
        
              system ("pause");
              return 0;
    }
                     
